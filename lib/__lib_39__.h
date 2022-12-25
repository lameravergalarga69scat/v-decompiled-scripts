void func_0(int iParam0)//Position - 0x3D34
{
	switch (iParam0)
	{
		case 0:
			if (Global_113386.f_24995.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					__LIB_0__::func_151(__LIB_38__::func_984(iParam0), -1);
					Global_113386.f_24995.f_2++;
					MISC::SET_BIT(&Global_113382, 0);
				}
			}
			break;
		case 1:
			if (!BitTest(Global_113382, 1))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					__LIB_0__::func_151(__LIB_38__::func_984(iParam0), -1);
					Global_113386.f_24995.f_3++;
					MISC::SET_BIT(&Global_113382, 1);
				}
			}
			break;
		case 2:
			if (!BitTest(Global_113382, 2))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					__LIB_0__::func_151(__LIB_38__::func_984(iParam0), -1);
					Global_113386.f_24995.f_4++;
					MISC::SET_BIT(&Global_113382, 2);
				}
			}
			break;
	}
}

int func_1(int iParam0)//Position - 0x8ACE
{
	int iVar0;
	int iVar1;
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!__LIB_0__::func_116())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		iVar1 = BitTest(Global_113386.f_24995, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		iVar1 = BitTest(Global_113386.f_24995.f_1, iVar0);
	}
	return iVar1;
}

int func_2(float fParam0, bool bParam1)//Position - 0x594B
{
	struct<27> Var0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	iVar2 = -1;
	fVar3 = fParam0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (__LIB_0__::func_43(__LIB_0__::func_683()))
		{
			iVar5 = __LIB_14__::func_792();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (BitTest(Global_113386.f_18574[iVar1 /*6*/], 2) && !BitTest(Global_113386.f_18574[iVar1 /*6*/], 3))
				{
					__LIB_0__::func_432(iVar1, &Var0);
					fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var0.f_6, true);
					if (fVar4 < fVar3)
					{
						bVar7 = true;
						if (bParam1)
						{
							if (iVar5 != Var0.f_26)
							{
								bVar7 = false;
							}
						}
						if (bVar7)
						{
							iVar2 = iVar1;
							fVar3 = fVar4;
						}
					}
				}
				iVar6++;
			}
		}
	}
	return iVar2;
}

int func_3(int iParam0, int iParam1, int iParam2)//Position - 0x89C6
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = __LIB_0__::func_683();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_4(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x4F36
{
	__LIB_0__::func_376(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21612 = 0;
	Global_21614 = 0;
	Global_21619 = 0;
	Global_22596 = 0;
	Global_22598 = 1;
	Global_22602 = 0;
	Global_22600 = iParam7;
	Global_2883585 = 0;
	return __LIB_0__::func_711(sParam2, iParam3, 0);
}

int func_5(int iParam0, int iParam1)//Position - 0x3FC0
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
		}
		else
		{
			return -1;
		}
		Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam1, 1f, -0.5f, 0f) };
		Var3 = { Var1 - Var0 };
		Var2 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam1, -1f, -0.5f, 0f) };
		Var4 = { Var2 - Var0 };
		if (SYSTEM::VMAG(Var3) < SYSTEM::VMAG(Var4))
		{
			return 2;
		}
		else
		{
			return 1;
		}
	}
	return -1;
}

int func_6()//Position - 0x746E
{
	if (__LIB_0__::func_767() && !__LIB_0__::func_766())
	{
		return 1;
	}
	if (__LIB_17__::func_263() && __LIB_38__::func_997())
	{
		return 1;
	}
	return 0;
}

struct<16> func_7(var uParam0)//Position - 0x944F
{
	struct<16> Var0;
	int iVar1;
	StringCopy(&Var0, "", 64);
	iVar1 = __LIB_0__::func_199(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = __LIB_0__::func_198(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = __LIB_0__::func_615(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = __LIB_0__::func_614(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = __LIB_0__::func_553(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, __LIB_0__::func_214(*uParam0), 64);
	return Var0;
}

int func_8()//Position - 0x9895
{
	if ((Global_113375 == __LIB_38__::func_999() && MISC::GET_RANDOM_EVENT_FLAG()) && Global_113376)
	{
		return 1;
	}
	return 0;
}

void func_9(int iParam0)//Position - 0x756C
{
	if (iParam0 == -1)
	{
		iParam0 = __LIB_38__::func_999();
	}
	if (iParam0 == -1)
	{
		return;
	}
	__LIB_38__::func_985(iParam0);
	MISC::SET_SCRIPT_HIGH_PRIO(false);
	MISC::SET_RANDOM_EVENT_FLAG(true);
	Global_113372 = 0;
	__LIB_38__::func_988();
}

void func_10(int iParam0, var uParam1, var uParam2)//Position - 0x9A3B
{
	bool bVar0;
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		__LIB_0__::func_186((891 + iParam0), 1, -1);
	}
	bVar0 = true;
	if (Global_113386.f_10194[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_113386.f_10194[iParam0 /*12*/].f_6 == 11 || Global_113386.f_10194[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_113386.f_10194[iParam0 /*12*/].f_5 = 1;
		Global_113386.f_10194[iParam0 /*12*/].f_10 = uParam1;
		Global_113386.f_10194[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		__LIB_0__::func_696();
	}
}

int func_11(int iParam0)//Position - 0x4AAE
{
	if (__LIB_38__::func_990())
	{
		Global_113376 = 1;
		Global_113373 = MISC::GET_GAME_TIMER();
		if (__LIB_38__::func_981(Global_113375))
		{
			__LIB_39__::func_0(0);
		}
		HUD::SET_MISSION_NAME(true, "RE_TITLE" /* GXT: Random Event */);
		if (iParam0 && __LIB_38__::func_981(Global_113375))
		{
			HUD::FLASH_MINIMAP_DISPLAY();
		}
		return 1;
	}
	return 0;
}

void func_12(var uParam0, int iParam1)//Position - 0xA372
{
	if (iParam1 > 0)
	{
		uParam0->f_147 = iParam1;
	}
}

bool func_13(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0x76C4
{
	var uVar0;
	struct<3> Var1;
	int iVar2;
	iVar2 = __LIB_37__::func_329(iParam0, iParam1);
	if (!__LIB_0__::func_121(iParam0) || !__LIB_0__::func_121(iParam1))
	{
		if (iVar2 != -1)
		{
			__LIB_13__::func_439(&(Local_49[iVar2 /*4*/]));
		}
		return 0;
	}
	if (!__LIB_14__::func_736(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar2 == -1)
	{
		iVar2 = __LIB_37__::func_328();
		if (iVar2 == -1)
		{
			return 0;
		}
		Local_49[iVar2 /*4*/].f_1 = iParam0;
		Local_49[iVar2 /*4*/].f_2 = iParam1;
	}
	Var1 = { PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = __LIB_37__::func_330(&(Local_49[iVar2 /*4*/]), Var1, iParam1, &(Local_49[iVar2 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (MISC::GET_GAME_TIMER() - Local_49[iVar2 /*4*/].f_3) < iParam4);
}

void func_14(int iParam0, int iParam1, int iParam2)//Position - 0xEB7C
{
	var uVar0;
	struct<16> Var1;
	uVar0 = __LIB_11__::func_762();
	__LIB_13__::func_726(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	__LIB_38__::func_998(iParam0, &uVar0);
	Var1 = { __LIB_39__::func_7(&uVar0) };
}

int func_15()//Position - 0xCB23
{
	if (!__LIB_0__::func_215(5))
	{
		return 1;
	}
	if (__LIB_39__::func_6())
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !__LIB_0__::func_766())
		{
			return 0;
		}
	}
	if (__LIB_39__::func_2(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

void func_16(var uParam0)//Position - 0x25CB
{
	*uParam0 = -99;
}

void func_17(int iParam0, var uParam1)//Position - 0x328C
{
	int iVar0;
	int iVar1;
	if (*uParam1 == -99)
	{
		*uParam1 = MISC::GET_GAME_TIMER();
	}
	if (HUD::DOES_BLIP_EXIST(iParam0))
	{
		iVar0 = (MISC::GET_GAME_TIMER() - *uParam1);
		if (iVar0 < 5000)
		{
			iVar1 = SYSTEM::CEIL((SYSTEM::TO_FLOAT(iVar0) / 1000f));
			if ((iVar1 * 1000 - iVar0) < 500)
			{
				if (HUD::GET_BLIP_ALPHA(iParam0) != 255)
				{
					HUD::SET_BLIP_ALPHA(iParam0, 255);
				}
			}
			else if (HUD::GET_BLIP_ALPHA(iParam0) != 0)
			{
				HUD::SET_BLIP_ALPHA(iParam0, 0);
			}
		}
		else if (*uParam1 != -100)
		{
			*uParam1 = -100;
			if (HUD::GET_BLIP_ALPHA(iParam0) != 255)
			{
				HUD::SET_BLIP_ALPHA(iParam0, 255);
			}
		}
	}
}

void func_18(int iParam0)//Position - 0x9C11
{
	__LIB_39__::func_14(iParam0, 0, __LIB_38__::func_987(iParam0));
}

void func_19(int iParam0)//Position - 0x6484
{
	char cVar0[64];
	if (iParam0 == -1)
	{
		iParam0 = __LIB_38__::func_999();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (__LIB_39__::func_8())
	{
		__LIB_39__::func_18(iParam0);
		HUD::SET_MISSION_NAME(false, 0);
		Global_113377 = MISC::GET_GAME_TIMER();
		__LIB_0__::func_50(30000);
		StringCopy(&cVar0, __LIB_38__::func_986(Global_113375, 1), 64);
		if (__LIB_38__::func_982(Global_113375) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_113374, 64);
		}
		STATS::PLAYSTATS_RANDOM_MISSION_DONE(&cVar0, Global_113372, (MISC::GET_GAME_TIMER() - Global_113373), 0);
	}
	else if (BitTest(Global_113382, 0) && Global_113386.f_24995.f_2 < 3)
	{
		MISC::CLEAR_BIT(&Global_113382, 0);
	}
	__LIB_0__::func_56(&Global_32019);
	Global_113376 = 0;
	__LIB_38__::func_985(-1);
}

int func_20(struct<3> Param0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x4D00
{
	bool bVar0;
	struct<3> Var1;
	int iVar2;
	struct<3> Var3;
	int iVar4;
	if (!Global_151970)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		iParam1 = __LIB_38__::func_999();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!__LIB_0__::func_116())
		{
			return 0;
		}
	}
	Local_44 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !__LIB_0__::func_766())
			{
				return 0;
			}
		}
		if (!Global_113386.f_9085)
		{
			return 0;
		}
		if (__LIB_0__::func_2(0))
		{
			return 0;
		}
		if (__LIB_39__::func_6())
		{
			return 0;
		}
		if (__LIB_3__::func_695())
		{
			return 0;
		}
		if (Global_113375 != -1)
		{
			return 0;
		}
		if (__LIB_0__::func_43(__LIB_0__::func_683()))
		{
			if (__LIB_39__::func_2(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam4)
		{
			if ((Var1.f_2 - Local_44.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!__LIB_39__::func_1(iParam1))
		{
			return 0;
		}
		if (__LIB_0__::func_43(__LIB_0__::func_683()))
		{
			if (__LIB_38__::func_682(__LIB_0__::func_683()) == 4 || __LIB_38__::func_682(__LIB_0__::func_683()) == 5)
			{
				return 0;
			}
		}
		if (__LIB_0__::func_43(__LIB_0__::func_683()))
		{
			if (!__LIB_39__::func_3(iParam1, bParam2, 145))
			{
				return 0;
			}
		}
		if (!__LIB_14__::func_793(Global_113386.f_24995.f_43[iParam1]))
		{
			return 0;
		}
		if ((MISC::GET_GAME_TIMER() - Global_113377) < 150000)
		{
			if (iParam1 != 30)
			{
				return 0;
			}
		}
		if (__LIB_38__::func_991())
		{
			return 0;
		}
		if (MISC::GET_MISSION_FLAG())
		{
			return 0;
		}
		if (MISC::GET_RANDOM_EVENT_FLAG())
		{
			return 0;
		}
		if (!__LIB_0__::func_784(4))
		{
			return 0;
		}
		if (!__LIB_0__::func_215(5))
		{
			return 0;
		}
		if (__LIB_38__::func_989(iParam1, bParam2) && !bParam3)
		{
			return 0;
		}
		if (Global_3 && iParam1 != 10)
		{
			return 0;
		}
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
		{
			if ((INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(377.153f, -717.567f, 10.0536f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(320.9934f, 265.2515f, 82.1221f)) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(-1425.5645f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam1 == 9 && (bParam2 == 2 || bParam2 == 5)) && !__LIB_38__::func_989(0, 0))
		{
			return 0;
		}
		if (Global_32106)
		{
			return 0;
		}
		if (__LIB_39__::func_1(30) && !__LIB_38__::func_989(30, 0))
		{
			if (iParam1 != 30)
			{
				if (SYSTEM::VDIST2(Var1, -61.2745f, -1100.4675f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (__LIB_0__::func_43(__LIB_0__::func_683()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				Var3 = { Global_113386.f_2363.f_539.f_2300[iVar2 /*3*/] };
				iVar4 = Global_113386.f_2363.f_539.f_2296[iVar2];
				if (__LIB_3__::func_423(iVar4))
				{
					if (__LIB_17__::func_398(iVar2))
					{
						if (!__LIB_0__::func_78(Var3, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var3) < (210f * 210f))
							{
								if (__LIB_0__::func_683() != iVar2)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar2++;
			}
		}
	}
	return 1;
}

int func_21()//Position - 0x1086
{
	if (Global_113386.f_24995.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

bool func_22()//Position - 0x10A2
{
	return Global_32197;
}

void func_23()//Position - 0xBC95
{
	Global_32197 = 0;
	Global_32198 = 0;
	Global_32200 = 0;
	Global_32201 = 0;
	Global_32202 = 0;
}

void func_24(int iParam0, int iParam1)//Position - 0x1333
{
	if (iParam0 == -1)
	{
		iParam0 = __LIB_38__::func_999();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= __LIB_38__::func_982(iParam0))
	{
		__LIB_38__::func_996(iParam0, iParam1);
		if (!__LIB_0__::func_67(51))
		{
			__LIB_0__::func_697("RE_REWARD" /* GXT: Some Random Events will reward the player with stat boosts or money. */, 1, 0, 4000, 10000, __LIB_14__::func_792(), 0, 138, 0);
			__LIB_0__::func_592(51);
		}
		if (__LIB_38__::func_981(iParam0))
		{
			Global_113386.f_24995.f_2 = 3;
		}
		if (__LIB_38__::func_995(iParam0, iParam1) != 322)
		{
			__LIB_39__::func_10(__LIB_38__::func_995(iParam0, iParam1), Local_44.f_0, Local_44.f_1);
		}
		Global_113374 = iParam1;
		if (Global_113372 == 0)
		{
			if (((Global_113375 == 1 || Global_113375 == 5) || Global_113375 == 11) || Global_113375 == 25)
			{
				__LIB_38__::func_994(2);
			}
			else if ((Global_113375 == 26 || Global_113375 == 8) || Global_113375 == 17)
			{
				__LIB_38__::func_994(7);
			}
			else
			{
				__LIB_38__::func_994(1);
			}
		}
	}
}

int func_25()//Position - 0x7F86
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_44) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !__LIB_0__::func_766())
		{
			return 0;
		}
	}
	if (__LIB_39__::func_6())
	{
		return 1;
	}
	if (__LIB_39__::func_2(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_26(int iParam0)//Position - 0xCAA
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if ((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 0, 7000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 1, 7000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 2, 7000))
		{
			return 1;
		}
	}
	return 0;
}

void func_27(int iParam0)//Position - 0x884C
{
	AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iParam0);
}

int func_28(int iParam0, int iParam1)//Position - 0x8868
{
	if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), true))
		{
			return 1;
		}
	}
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), true))
	{
		if ((PED::GET_PED_MAX_HEALTH(iParam0) - ENTITY::GET_ENTITY_HEALTH(iParam0)) > iParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_29(char* sParam0, int iParam1)//Position - 0x8817
{
	__LIB_0__::func_756(sParam0);
	__LIB_12__::func_768(iParam1);
}

int func_30(int iParam0, float fParam1, float fParam2)//Position - 0x240F
{
	float fVar0;
	float fVar1;
	float fVar2;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		fVar0 = ENTITY::GET_ENTITY_HEADING(iParam0);
		fVar2 = (fParam1 - fParam2);
		if (fVar2 < 0f)
		{
			fVar2 = (fVar2 + 360f);
		}
		fVar1 = (fParam1 + fParam2);
		if (fVar1 >= 360f)
		{
			fVar1 = (fVar1 - 360f);
		}
		if (fVar1 > fVar2)
		{
			if (fVar0 < fVar1 && fVar0 > fVar2)
			{
				return 1;
			}
		}
		else if (fVar0 < fVar1 || fVar0 > fVar2)
		{
			return 1;
		}
	}
	return 0;
}

int func_31(int iParam0, bool bParam1, int iParam2)//Position - 0x2DE3
{
	iParam2 = iParam2;
	return __LIB_0__::func_666(iParam0, bParam1, 145);
}

void func_32(var uParam0)//Position - 0xD06
{
	*uParam0 = (MISC::GET_GAME_TIMER() - 5000);
}

void func_33(int iParam0)//Position - 0x2299E
{
	if (OBJECT::DOES_PICKUP_EXIST(*iParam0))
	{
		OBJECT::REMOVE_PICKUP(*iParam0);
	}
}

var func_34(int iParam0)//Position - 0x25357
{
	return BitTest(Global_113382, iParam0);
}

int func_35(int iParam0)//Position - 0x28104
{
	switch (iParam0)
	{
		case -1:
			return 0;
			break;
		case 0:
			return 1;
			break;
		case 1:
			return 0;
			break;
		case 2:
			return 0;
			break;
		case 3:
			return 0;
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
			return 1;
			break;
		case 8:
			return 0;
			break;
		case 9:
			return 1;
			break;
	}
	return 0;
}

bool func_36(int iParam0)//Position - 0x21D13
{
	return __LIB_0__::func_1(__LIB_38__::func_984(iParam0));
}

void func_37(int* iParam0)//Position - 0x282A7
{
	__LIB_14__::func_597(iParam0, "NULL", iParam0->f_1);
}

void func_38(var uParam0)//Position - 0x2AB7C
{
	__LIB_14__::func_600(*uParam0, "NULL", uParam0->f_1);
}

int func_39(int iParam0)//Position - 0x24D65
{
	return __LIB_16__::func_324(iParam0);
}

bool func_40(var uParam0)//Position - 0x27EF6
{
	return __LIB_14__::func_596(*uParam0, "NULL", uParam0->f_1);
}

int func_41()//Position - 0x237AA
{
	struct<3> Var0[2];
	struct<3> Var1;
	int iVar2;
	iVar2 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iVar2), &(Var0[0 /*3*/]), &(Var0[1 /*3*/]));
		Var1 = { __LIB_13__::func_790() };
		if ((Var0[1 /*3*/] - Var0[0 /*3*/]) > Var1.f_0)
		{
			return 0;
		}
		if ((Var0[1 /*3*/].f_1 - Var0[0 /*3*/].f_1) > Var1.f_1)
		{
			return 0;
		}
		if ((Var0[1 /*3*/].f_2 - Var0[0 /*3*/].f_2) > Var1.f_2)
		{
			return 0;
		}
	}
	return 1;
}

int func_42(int iParam0, bool bParam1, int iParam2)//Position - 0x224FF
{
	iParam2 = iParam2;
	return __LIB_0__::func_639(iParam0, bParam1, 0);
}

int func_43(int iParam0)//Position - 0x317B
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1, false))
			{
				iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_44(int iParam0, int iParam1)//Position - 0x1B02
{
	if (iParam0 == -1)
	{
		iParam0 = __LIB_38__::func_999();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= __LIB_38__::func_982(iParam0))
	{
		__LIB_38__::func_996(iParam0, iParam1);
		if (!__LIB_0__::func_67(51))
		{
			__LIB_0__::func_697("RE_REWARD" /* GXT: Some Random Events will reward the player with stat boosts or money. */, 1, 0, 4000, 10000, __LIB_14__::func_792(), 0, 138, 0);
			__LIB_0__::func_592(51);
		}
		if (__LIB_38__::func_981(iParam0))
		{
			Global_113386.f_24995.f_2 = 3;
		}
		if (__LIB_38__::func_995(iParam0, iParam1) != 322)
		{
			__LIB_39__::func_10(__LIB_38__::func_995(iParam0, iParam1), Local_43.f_0, Local_43.f_1);
		}
		Global_113374 = iParam1;
		if (Global_113372 == 0)
		{
			if (((Global_113375 == 1 || Global_113375 == 5) || Global_113375 == 11) || Global_113375 == 25)
			{
				__LIB_38__::func_994(2);
			}
			else if ((Global_113375 == 26 || Global_113375 == 8) || Global_113375 == 17)
			{
				__LIB_38__::func_994(7);
			}
			else
			{
				__LIB_38__::func_994(1);
			}
		}
	}
}

int func_45()//Position - 0x6C05
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_43) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !__LIB_0__::func_766())
		{
			return 0;
		}
	}
	if (__LIB_39__::func_6())
	{
		return 1;
	}
	if (__LIB_39__::func_2(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_46(struct<3> Param0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x8965
{
	bool bVar0;
	struct<3> Var1;
	int iVar2;
	struct<3> Var3;
	int iVar4;
	if (!Global_151970)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		iParam1 = __LIB_38__::func_999();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!__LIB_0__::func_116())
		{
			return 0;
		}
	}
	Local_43 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !__LIB_0__::func_766())
			{
				return 0;
			}
		}
		if (!Global_113386.f_9085)
		{
			return 0;
		}
		if (__LIB_0__::func_2(0))
		{
			return 0;
		}
		if (__LIB_39__::func_6())
		{
			return 0;
		}
		if (__LIB_3__::func_695())
		{
			return 0;
		}
		if (Global_113375 != -1)
		{
			return 0;
		}
		if (__LIB_0__::func_43(__LIB_0__::func_683()))
		{
			if (__LIB_39__::func_2(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam4)
		{
			if ((Var1.f_2 - Local_43.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!__LIB_39__::func_1(iParam1))
		{
			return 0;
		}
		if (__LIB_0__::func_43(__LIB_0__::func_683()))
		{
			if (__LIB_38__::func_682(__LIB_0__::func_683()) == 4 || __LIB_38__::func_682(__LIB_0__::func_683()) == 5)
			{
				return 0;
			}
		}
		if (__LIB_0__::func_43(__LIB_0__::func_683()))
		{
			if (!__LIB_39__::func_3(iParam1, bParam2, 145))
			{
				return 0;
			}
		}
		if (!__LIB_14__::func_793(Global_113386.f_24995.f_43[iParam1]))
		{
			return 0;
		}
		if ((MISC::GET_GAME_TIMER() - Global_113377) < 150000)
		{
			if (iParam1 != 30)
			{
				return 0;
			}
		}
		if (__LIB_38__::func_991())
		{
			return 0;
		}
		if (MISC::GET_MISSION_FLAG())
		{
			return 0;
		}
		if (MISC::GET_RANDOM_EVENT_FLAG())
		{
			return 0;
		}
		if (!__LIB_0__::func_784(4))
		{
			return 0;
		}
		if (!__LIB_0__::func_215(5))
		{
			return 0;
		}
		if (__LIB_38__::func_989(iParam1, bParam2) && !bParam3)
		{
			return 0;
		}
		if (Global_3 && iParam1 != 10)
		{
			return 0;
		}
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
		{
			if ((INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(377.153f, -717.567f, 10.0536f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(320.9934f, 265.2515f, 82.1221f)) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(-1425.5645f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam1 == 9 && (bParam2 == 2 || bParam2 == 5)) && !__LIB_38__::func_989(0, 0))
		{
			return 0;
		}
		if (Global_32106)
		{
			return 0;
		}
		if (__LIB_39__::func_1(30) && !__LIB_38__::func_989(30, 0))
		{
			if (iParam1 != 30)
			{
				if (SYSTEM::VDIST2(Var1, -61.2745f, -1100.4675f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (__LIB_0__::func_43(__LIB_0__::func_683()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				Var3 = { Global_113386.f_2363.f_539.f_2300[iVar2 /*3*/] };
				iVar4 = Global_113386.f_2363.f_539.f_2296[iVar2];
				if (__LIB_3__::func_423(iVar4))
				{
					if (__LIB_17__::func_398(iVar2))
					{
						if (!__LIB_0__::func_78(Var3, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var3) < (210f * 210f))
							{
								if (__LIB_0__::func_683() != iVar2)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar2++;
			}
		}
	}
	return 1;
}

int func_47()//Position - 0x2050
{
	if (Global_32198)
	{
		__LIB_38__::func_994(4);
		return 1;
	}
	return 0;
}

void func_48(var uParam0, int iParam1)//Position - 0x43C7
{
	uParam0->f_23 = (uParam0->f_23 || iParam1);
}

int func_49()//Position - 0x5225
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), true))
		{
			if ((VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true))) || VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true)))) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true))))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_50()//Position - 0x5290
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
		{
			if (((((!PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("rhino")))
			{
				if (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) >= 1)
				{
					return 1;
				}
			}
		}
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()), false))
		{
			if ((((!VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())))) && !VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())))) && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())))) && ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())) != joaat("rhino"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_51(char* sParam0)//Position - 0x5955
{
	var uVar0;
	if (__LIB_0__::func_75())
	{
		MemCopy(&uVar0, {__LIB_13__::func_743()}, 4);
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_52(struct<3> Param0)//Position - 0x2CC1
{
	if (__LIB_0__::func_683() == 2)
	{
		if (__LIB_39__::func_22() && !Global_32200)
		{
			if (fLocal_45 == -1f)
			{
				fLocal_45 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Param0);
			}
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Param0) > (fLocal_45 + 200f) || MISC::GET_DISTANCE_BETWEEN_COORDS(-1014.1535f, 4881.411f, 245.00009f, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), false), true) < 400f)
			{
				Global_32200 = 1;
				return 1;
			}
		}
	}
	return 0;
}

void func_53()//Position - 0x4F49
{
	if (__LIB_0__::func_683() == 2)
	{
		if (!Global_32199)
		{
			__LIB_0__::func_151("CULT_BLIP_HELP" /* GXT: Trevor can sometimes deliver Random Event passengers to the Altruist Cult, located at ~BLIP_ALTRUIST~ */, -1);
			Global_32199 = 1;
		}
	}
}

void func_54()//Position - 0x591F
{
	if (!__LIB_39__::func_21())
	{
		if (__LIB_0__::func_683() == 2)
		{
			Global_32197 = 1;
		}
	}
}

int func_55()//Position - 0x2314
{
	if (__LIB_0__::func_683() == 2)
	{
		if (__LIB_39__::func_22())
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(-1014.1535f, 4881.411f, 245.00009f, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), false), true) < 400f)
			{
				if (!Global_32202)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("AC_EN_ROUTE_CULT");
					Global_32202 = 1;
					if (!Global_32201)
					{
						Global_32201 = 1;
						return 1;
					}
				}
			}
			else if (Global_32202)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("AC_LEFT_AREA");
				Global_32202 = 0;
			}
		}
	}
	return 0;
}

int func_56(int iParam0)//Position - 0x7AA7
{
	int iVar0;
	int iVar1;
	iVar0 = (PAD::GET_CONTROL_VALUE(2 /*FRONTEND_CONTROL*/, 195 /*INPUT_FRONTEND_AXIS_X*/) - 128);
	iVar1 = (PAD::GET_CONTROL_VALUE(2 /*FRONTEND_CONTROL*/, 196 /*INPUT_FRONTEND_AXIS_Y*/) - 128);
	if (((iVar0 < iParam0 && iVar0 > -iParam0) && iVar1 < iParam0) && iVar1 > -iParam0)
	{
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_57(int iParam0, bool bParam1)//Position - 0x1412
{
	if (iParam0 == -1)
	{
		iParam0 = __LIB_38__::func_999();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1 <= __LIB_38__::func_982(iParam0))
	{
		__LIB_38__::func_996(iParam0, bParam1);
		if (!__LIB_0__::func_67(51))
		{
			__LIB_0__::func_697("RE_REWARD" /* GXT: Some Random Events will reward the player with stat boosts or money. */, 1, 0, 4000, 10000, __LIB_14__::func_792(), 0, 138, 0);
			__LIB_0__::func_592(51);
		}
		if (__LIB_38__::func_981(iParam0))
		{
			Global_113386.f_24995.f_2 = 3;
		}
		if (__LIB_38__::func_995(iParam0, bParam1) != 322)
		{
			__LIB_39__::func_10(__LIB_38__::func_995(iParam0, bParam1), Local_44.f_0, Local_44.f_1);
		}
		Global_113374 = bParam1;
		if (Global_113372 == 0)
		{
			if (((Global_113375 == 1 || Global_113375 == 5) || Global_113375 == 11) || Global_113375 == 25)
			{
				__LIB_38__::func_994(2);
			}
			else if ((Global_113375 == 26 || Global_113375 == 8) || Global_113375 == 17)
			{
				__LIB_38__::func_994(7);
			}
			else
			{
				__LIB_38__::func_994(1);
			}
		}
	}
}

int func_58(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x93F1
{
	__LIB_0__::func_487(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21612 = 0;
	Global_21614 = 0;
	Global_21619 = 0;
	Global_22596 = 0;
	Global_22598 = 1;
	Global_22602 = 0;
	Global_22600 = iParam7;
	Global_2883585 = 0;
	return __LIB_0__::func_711(sParam2, iParam3, 0);
}

void func_59(bool bParam0)//Position - 0xD8B7
{
	if (bParam0)
	{
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
		PLAYER::SET_MAX_WANTED_LEVEL(0);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), false);
		PED::SET_CREATE_RANDOM_COPS(false);
		MISC::ENABLE_DISPATCH_SERVICE(3, false);
		MISC::ENABLE_DISPATCH_SERVICE(1, false);
		MISC::ENABLE_DISPATCH_SERVICE(8, false);
		MISC::ENABLE_DISPATCH_SERVICE(2, false);
		MISC::ENABLE_DISPATCH_SERVICE(6, false);
		MISC::ENABLE_DISPATCH_SERVICE(4, false);
		MISC::ENABLE_DISPATCH_SERVICE(12, false);
		MISC::ENABLE_DISPATCH_SERVICE(5, false);
		__LIB_12__::func_849(9, 1);
		__LIB_12__::func_849(8, 1);
	}
	else
	{
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), true);
		PED::SET_CREATE_RANDOM_COPS(true);
		MISC::ENABLE_DISPATCH_SERVICE(3, true);
		MISC::ENABLE_DISPATCH_SERVICE(1, true);
		MISC::ENABLE_DISPATCH_SERVICE(8, true);
		MISC::ENABLE_DISPATCH_SERVICE(2, true);
		MISC::ENABLE_DISPATCH_SERVICE(6, true);
		MISC::ENABLE_DISPATCH_SERVICE(4, true);
		MISC::ENABLE_DISPATCH_SERVICE(12, true);
		MISC::ENABLE_DISPATCH_SERVICE(5, true);
		__LIB_12__::func_849(9, 0);
		__LIB_12__::func_849(8, 0);
	}
}

void func_60()//Position - 0xB8C
{
	while (__LIB_0__::func_75())
	{
		SYSTEM::WAIT(0);
	}
	while (!__LIB_0__::func_109())
	{
		SYSTEM::WAIT(0);
	}
	__LIB_39__::func_44(-1, 0);
	__LIB_14__::func_557();
	iLocal_45 = 3;
}

int func_61()//Position - 0x4D51
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_46) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !__LIB_0__::func_766())
		{
			return 0;
		}
	}
	if (__LIB_39__::func_6())
	{
		return 1;
	}
	if (__LIB_39__::func_2(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_62(struct<3> Param0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x6B83
{
	bool bVar0;
	struct<3> Var1;
	int iVar2;
	struct<3> Var3;
	int iVar4;
	if (!Global_151970)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		iParam1 = __LIB_38__::func_999();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!__LIB_0__::func_116())
		{
			return 0;
		}
	}
	Local_46 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !__LIB_0__::func_766())
			{
				return 0;
			}
		}
		if (!Global_113386.f_9085)
		{
			return 0;
		}
		if (__LIB_0__::func_2(0))
		{
			return 0;
		}
		if (__LIB_39__::func_6())
		{
			return 0;
		}
		if (__LIB_3__::func_695())
		{
			return 0;
		}
		if (Global_113375 != -1)
		{
			return 0;
		}
		if (__LIB_0__::func_43(__LIB_0__::func_683()))
		{
			if (__LIB_39__::func_2(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam4)
		{
			if ((Var1.f_2 - Local_46.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!__LIB_39__::func_1(iParam1))
		{
			return 0;
		}
		if (__LIB_0__::func_43(__LIB_0__::func_683()))
		{
			if (__LIB_38__::func_682(__LIB_0__::func_683()) == 4 || __LIB_38__::func_682(__LIB_0__::func_683()) == 5)
			{
				return 0;
			}
		}
		if (__LIB_0__::func_43(__LIB_0__::func_683()))
		{
			if (!__LIB_39__::func_3(iParam1, bParam2, 145))
			{
				return 0;
			}
		}
		if (!__LIB_14__::func_793(Global_113386.f_24995.f_43[iParam1]))
		{
			return 0;
		}
		if ((MISC::GET_GAME_TIMER() - Global_113377) < 150000)
		{
			if (iParam1 != 30)
			{
				return 0;
			}
		}
		if (__LIB_38__::func_991())
		{
			return 0;
		}
		if (MISC::GET_MISSION_FLAG())
		{
			return 0;
		}
		if (MISC::GET_RANDOM_EVENT_FLAG())
		{
			return 0;
		}
		if (!__LIB_0__::func_784(4))
		{
			return 0;
		}
		if (!__LIB_0__::func_215(5))
		{
			return 0;
		}
		if (__LIB_38__::func_989(iParam1, bParam2) && !bParam3)
		{
			return 0;
		}
		if (Global_3 && iParam1 != 10)
		{
			return 0;
		}
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
		{
			if ((INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(377.153f, -717.567f, 10.0536f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(320.9934f, 265.2515f, 82.1221f)) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(-1425.5645f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam1 == 9 && (bParam2 == 2 || bParam2 == 5)) && !__LIB_38__::func_989(0, 0))
		{
			return 0;
		}
		if (Global_32106)
		{
			return 0;
		}
		if (__LIB_39__::func_1(30) && !__LIB_38__::func_989(30, 0))
		{
			if (iParam1 != 30)
			{
				if (SYSTEM::VDIST2(Var1, -61.2745f, -1100.4675f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (__LIB_0__::func_43(__LIB_0__::func_683()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				Var3 = { Global_113386.f_2363.f_539.f_2300[iVar2 /*3*/] };
				iVar4 = Global_113386.f_2363.f_539.f_2296[iVar2];
				if (__LIB_3__::func_423(iVar4))
				{
					if (__LIB_17__::func_398(iVar2))
					{
						if (!__LIB_0__::func_78(Var3, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var3) < (210f * 210f))
							{
								if (__LIB_0__::func_683() != iVar2)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar2++;
			}
		}
	}
	return 1;
}

void func_63(int iParam0, bool bParam1)//Position - 0x36AB
{
	int iVar0;
	char* sVar1;
	MISC::SET_BIT(&(Global_113386.f_1.f_116), iParam0);
	switch (iParam0)
	{
		case 10:
			MISC::SET_BIT(&(Global_113386.f_1.f_119), 14);
			break;
		case 13:
			MISC::SET_BIT(&(Global_113386.f_1.f_119), 16);
			break;
		case 12:
			MISC::SET_BIT(&(Global_113386.f_1.f_119), 15);
			break;
		case 11:
			MISC::SET_BIT(&(Global_113386.f_1.f_119), 17);
			break;
	}
	if (!bParam1)
	{
		iVar0 = 0;
		switch (__LIB_0__::func_617(iParam0))
		{
			case 1:
				iVar0 = 6;
				break;
			case 3:
				iVar0 = 4;
				break;
			case 2:
				iVar0 = 5;
				break;
		}
		sVar1 = __LIB_36__::func_969(iParam0);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("FEED_CREW_U" /* GXT: Heist crew member ~a~ unlocked. */);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(__LIB_36__::func_969(iParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(sVar1, sVar1, false, iVar0, "", 0);
		if (!__LIB_0__::func_67(45))
		{
			__LIB_0__::func_697("AM_H_CREWU" /* GXT: Throughout the game you may meet contacts who can help on heists. This will give you extra crew members to pick from. */, 2, 0, 20000, 10000, __LIB_14__::func_792(), 0, 131, 0);
		}
	}
}

void func_64(int iParam0, int iParam1)//Position - 0x32A7
{
	if (iParam1 > -1)
	{
		Global_112380.f_4[iParam0] = (MISC::GET_GAME_TIMER() + iParam1);
	}
	else
	{
		Global_112380.f_4[iParam0] = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1200000, 2100000));
	}
}

void func_65(int iParam0)//Position - 0x32E4
{
	if (iParam0 != -1)
	{
		Global_112380.f_3 = (MISC::GET_GAME_TIMER() + iParam0);
	}
	else
	{
		Global_112380.f_3 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(21600000, 25200000));
	}
}

int func_66(int iParam0)//Position - 0x36A2
{
	switch (iParam0)
	{
		case 0:
			return 104;
			break;
		case 1:
			return 105;
			break;
		case 2:
			return 106;
			break;
		case 3:
			return 107;
			break;
		case 4:
			return 108;
			break;
		case 5:
			return 109;
			break;
		case 6:
			return 110;
			break;
		case 7:
			return 111;
			break;
		case 8:
			return 112;
			break;
		case 9:
			return 93;
			break;
	}
	return 145;
}

void func_67(int* iParam0, int* iParam1, int* iParam2, int* iParam3)//Position - 0x75C0
{
	int iVar0;
	int iVar1;
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (PED::IS_PED_INJURED(*iParam0))
		{
			if (HUD::DOES_BLIP_EXIST(*iParam1))
			{
				HUD::REMOVE_BLIP(iParam1);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
		}
		else
		{
			iVar0 = 1;
			if (!PED::IS_PED_IN_ANY_VEHICLE(*iParam0, false))
			{
			}
			else if (ENTITY::DOES_ENTITY_EXIST(*iParam2))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam2, false))
				{
					if (PED::IS_PED_IN_VEHICLE(*iParam0, *iParam2, false))
					{
						iVar1 = 1;
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam2))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam2, false))
		{
			if (iVar0 == 1 || iVar1 == 1)
			{
			}
			else
			{
				VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(*iParam2);
				VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(*iParam2);
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(*iParam2, 0f);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam2);
				if (HUD::DOES_BLIP_EXIST(*iParam3))
				{
					HUD::REMOVE_BLIP(iParam3);
				}
			}
		}
		else
		{
			VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(*iParam2);
			VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(*iParam2);
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(*iParam2, 0f);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam2);
			if (HUD::DOES_BLIP_EXIST(*iParam3))
			{
				HUD::REMOVE_BLIP(iParam3);
			}
		}
	}
}

int func_68()//Position - 0x379B
{
	int iVar0;
	iVar0 = __LIB_0__::func_683();
	switch (iVar0)
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
		default:
			switch (__LIB_1__::func_27(-1))
			{
				case 0:
					return 3;
					break;
				case 1:
					return 4;
					break;
				case 2:
					return 5;
					break;
				case 3:
					return 6;
					break;
				case 4:
					return 7;
					break;
				default:
					break;
			}
			break;
	}
	return 3;
}

void func_69(int iParam0, var uParam1)//Position - 0x233
{
	if (((ENTITY::DOES_ENTITY_EXIST(*iParam0) && ENTITY::DOES_ENTITY_EXIST(*uParam1)) && !ENTITY::IS_ENTITY_DEAD(*iParam0, false)) && !ENTITY::IS_ENTITY_DEAD(*uParam1, false))
	{
		if (ENTITY::IS_ENTITY_IN_AIR(*iParam0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					TASK::TASK_PLANE_MISSION(*uParam1, *iParam0, 0, 0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 8, 50f, -1f, 30f, 1.4E-43f, 7E-44f, true);
				}
			}
		}
	}
}

bool func_70(int iParam0, int iParam1)//Position - 0x30AB
{
	int iVar0;
	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1);
	return (iVar0 == 1 || iVar0 == 0);
}

void func_71()//Position - 0x4AE2
{
	int iVar0;
	iVar0 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0.5f, -1f, 0.5f), 0f, 0f, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), 65f, true, 2);
	CAM::SET_CAM_ACTIVE(iVar0, true);
}

Vector3 func_72(struct<3> Param0, struct<3> Param1)//Position - 0x4B9C
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	var uVar9;
	struct<3> Var10;
	struct<3> Var11;
	var uVar12;
	int iVar13;
	iVar5 = 0;
	iVar6 = 1;
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, false);
	}
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iVar0), &Var3, &Var4);
	PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(Param0, 3, &Var2, 1, 3f, 0f);
	if (SYSTEM::VDIST(Param0, -3039.6548f, 602.4346f, 6.5719f) <= 25f)
	{
		Var1 = { -3045.49f, 604.46f, 7.02f };
		iVar5 = 8;
	}
	else if (SYSTEM::VDIST(Param0, 288.06f, -1257.1f, 28.44f) <= 25f)
	{
		Var1 = { 278.97f, -1255.06f, 28.88f };
		iVar5 = 8;
	}
	while (iVar5 < 8)
	{
		switch (iVar5)
		{
			case 0:
				if (SYSTEM::VDIST(Var2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, (Var4.f_1 + IntToFloat(iVar6)), 0f)) < SYSTEM::VDIST(Var2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, -(Var4.f_1 + IntToFloat(iVar6)), 0f)))
				{
					Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, (Var4.f_1 + IntToFloat(iVar6)), 0f) };
				}
				else
				{
					Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, -(Var4.f_1 + IntToFloat(iVar6)), 0f) };
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
					{
						Var10 = { __LIB_1__::func_657(Var1, 0f, Var4) };
						Var11 = { __LIB_1__::func_657(Var1, 0f, Var3) };
						iVar13 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Var10, Var11, 511, iVar0, 7);
						iVar5++;
					}
					else
					{
						iVar5 = 8;
					}
				}
				else
				{
					iVar5 = 8;
				}
				break;
			case 1:
				if (SHAPETEST::GET_SHAPE_TEST_RESULT(iVar13, &iVar7, &uVar9, &uVar8, &uVar12) == 2)
				{
					if (iVar7 != 0)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 2;
						}
						else
						{
							iVar6++;
							iVar5 = 0;
						}
					}
					else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Param0, true) <= 5f || MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Param1, true) <= 5f)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 2;
						}
						else
						{
							iVar6++;
							iVar5 = 0;
						}
					}
					else
					{
						iVar5 = 8;
					}
				}
				break;
			case 2:
				if (SYSTEM::VDIST(Var2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, (Var4.f_1 - IntToFloat(iVar6)), 0f)) < SYSTEM::VDIST(Var2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, -(Var4.f_1 - IntToFloat(iVar6)), 0f)))
				{
					Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, (Var4.f_1 - IntToFloat(iVar6)), 0f) };
				}
				else
				{
					Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, -(Var4.f_1 - IntToFloat(iVar6)), 0f) };
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
					{
						Var10 = { __LIB_1__::func_657(Var1, 0f, Var4) };
						Var11 = { __LIB_1__::func_657(Var1, 0f, Var3) };
						iVar13 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Var10, Var11, 511, iVar0, 7);
						iVar5++;
					}
					else
					{
						iVar5 = 8;
					}
				}
				else
				{
					iVar5 = 8;
				}
				break;
			case 3:
				if (SHAPETEST::GET_SHAPE_TEST_RESULT(iVar13, &iVar7, &uVar9, &uVar8, &uVar12) == 2)
				{
					if (iVar7 != 0)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 4;
						}
						else
						{
							iVar6++;
							iVar5 = 2;
						}
					}
					else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Param0, true) <= 5f || MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Param1, true) <= 5f)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 4;
						}
						else
						{
							iVar6++;
							iVar5 = 2;
						}
					}
					else
					{
						iVar5 = 8;
					}
				}
				break;
			case 4:
				if (SYSTEM::VDIST(Var2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, (Var4.f_0 + IntToFloat(iVar6)), 0f, 0f)) < SYSTEM::VDIST(Var2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, -(Var4.f_0 + IntToFloat(iVar6)), 0f, 0f)))
				{
					Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, (Var4.f_0 + IntToFloat(iVar6)), 0f, 0f) };
				}
				else
				{
					Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, -(Var4.f_0 + IntToFloat(iVar6)), 0f, 0f) };
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
					{
						Var10 = { __LIB_1__::func_657(Var1, 0f, Var4) };
						Var11 = { __LIB_1__::func_657(Var1, 0f, Var3) };
						iVar13 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Var10, Var11, 511, iVar0, 7);
						iVar5++;
					}
					else
					{
						iVar5 = 8;
					}
				}
				else
				{
					iVar5 = 8;
				}
				break;
			case 5:
				if (SHAPETEST::GET_SHAPE_TEST_RESULT(iVar13, &iVar7, &uVar9, &uVar8, &uVar12) == 2)
				{
					if (iVar7 != 0)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 6;
						}
						else
						{
							iVar6++;
							iVar5 = 4;
						}
					}
					else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Param0, true) <= 5f || MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Param1, true) <= 5f)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 6;
						}
						else
						{
							iVar6++;
							iVar5 = 4;
						}
					}
					else
					{
						iVar5 = 8;
					}
				}
				break;
			case 6:
				if (SYSTEM::VDIST(Var2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, (Var4.f_0 - IntToFloat(iVar6)), 0f, 0f)) < SYSTEM::VDIST(Var2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, -(Var4.f_0 - IntToFloat(iVar6)), 0f, 0f)))
				{
					Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, (Var4.f_0 - IntToFloat(iVar6)), 0f, 0f) };
				}
				else
				{
					Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, -(Var4.f_0 - IntToFloat(iVar6)), 0f, 0f) };
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
					{
						Var10 = { __LIB_1__::func_657(Var1, 0f, Var4) };
						Var11 = { __LIB_1__::func_657(Var1, 0f, Var3) };
						iVar13 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Var10, Var11, 511, iVar0, 7);
						iVar5++;
					}
					else
					{
						iVar5 = 8;
					}
				}
				else
				{
					iVar5 = 8;
				}
				break;
			case 7:
				if (SHAPETEST::GET_SHAPE_TEST_RESULT(iVar13, &iVar7, &uVar9, &uVar8, &uVar12) == 2)
				{
					if (iVar7 != 0)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 8;
						}
						else
						{
							iVar6++;
							iVar5 = 6;
						}
					}
					else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Param0, true) <= 5f || MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Param1, true) <= 5f)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 8;
						}
						else
						{
							iVar6++;
							iVar5 = 6;
						}
					}
					else
					{
						iVar5 = 8;
					}
				}
				break;
			case 8:
				break;
		}
		SYSTEM::WAIT(0);
	}
	return Var1;
}

void func_73(int iParam0, var uParam1, var uParam2, char* sParam3, char* sParam4)//Position - 0x51EA
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	struct<3> Var8;
	struct<3> Var9;
	struct<3> Var10;
	var uVar11;
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 1;
	*uParam1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
	uParam2->f_2 = __LIB_16__::func_867(iParam0, PLAYER::PLAYER_PED_ID(), 1);
	fVar3 = __LIB_16__::func_867(iParam0, PLAYER::PLAYER_PED_ID(), 1);
	fVar4 = __LIB_16__::func_867(iParam0, PLAYER::PLAYER_PED_ID(), 1);
	Var10 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
	if (STREAMING::HAS_ANIM_DICT_LOADED(sParam3))
	{
		Var9 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(sParam3, sParam4, *uParam1, *uParam2, 0f, 2) };
	}
	else
	{
		Var9 = { *uParam1 + Vector(0f, 5f, 5f) };
	}
	while (iVar0 < 2)
	{
		switch (iVar0)
		{
			case 0:
				if (iVar1 > 20)
				{
					uParam2->f_2 = __LIB_6__::func_252(ENTITY::GET_ENTITY_COORDS(iParam0, false), *uParam1, 1);
					*uParam1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false), uParam2->f_2, Var10) };
					iVar0 = 2;
				}
				else
				{
					iVar5 = SHAPETEST::START_SHAPE_TEST_CAPSULE(*uParam1, Var9 + Vector(-1f, 0f, 0f), 0.5f, 17, 0, 4);
					iVar0++;
				}
				break;
			case 1:
				if (SHAPETEST::GET_SHAPE_TEST_RESULT(iVar5, &iVar6, &Var8, &uVar7, &uVar11) == 2)
				{
					if (iVar6 != 0)
					{
						if (Var8.f_2 > (uParam1->f_2 + 8.5f))
						{
							iVar0++;
						}
						else
						{
							if (iVar1 <= 3)
							{
								fVar4 = (fVar4 + 7.5f);
							}
							else
							{
								fVar4 = (fVar3 - (7.5f * IntToFloat(iVar2)));
								iVar2++;
							}
							*uParam1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), fVar4, Var10) };
							iVar1++;
							iVar0 = 0;
						}
					}
					else
					{
						if (iVar1 > 0)
						{
							uParam2->f_2 = __LIB_6__::func_252(Var9 + Vector(-0.75f, 0f, 0f), *uParam1, 1);
						}
						iVar0++;
					}
				}
				break;
			case 2:
				break;
		}
		SYSTEM::WAIT(0);
	}
}

int func_74()//Position - 0x5A3C
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (__LIB_0__::func_75())
		{
			return 1;
		}
	}
	return 0;
}

void func_75(int iParam0, var uParam1)//Position - 0x656E
{
	if (HUD::DOES_BLIP_EXIST(iParam0))
	{
		if (MISC::GET_GAME_TIMER() > *uParam1 + 500)
		{
			if (HUD::GET_BLIP_COLOUR(iParam0) == 1)
			{
				HUD::SET_BLIP_AS_FRIENDLY(iParam0, true);
			}
			else
			{
				HUD::SET_BLIP_AS_FRIENDLY(iParam0, false);
				HUD::SET_BLIP_COLOUR(iParam0, 1);
			}
			*uParam1 = MISC::GET_GAME_TIMER();
		}
		if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && __LIB_39__::func_34(0))
		{
			__LIB_39__::func_0(1);
		}
	}
}

int func_76(int iParam0, int iParam1, int iParam2, struct<3> Param3, struct<3> Param4)//Position - 0x3751
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	var uVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	struct<3> Var12;
	int iVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	int iVar17;
	if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var3, &Var4);
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam1), &Var5, &uVar6);
		fVar7 = MISC::ABSF((Var4.f_2 - Var3.f_2));
		fVar8 = MISC::ABSF((Var4.f_0 - Var3.f_0));
		fVar9 = MISC::ABSF((Var4.f_1 - Var3.f_1));
		if (fVar8 > fVar7)
		{
			fVar10 = (fVar8 / 2f);
			fVar11 = (fVar10 - MISC::ABSF(Var3.f_2));
		}
		else
		{
			fVar10 = (fVar9 / 2f);
			fVar11 = (fVar10 - MISC::ABSF(Var3.f_0));
		}
		Var12.f_2 = (Var12.f_2 + (Var5.f_2 - Var3.f_2));
		ENTITY::SET_ENTITY_COORDS(iParam2, Param3, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(iParam2, Param4, 2, true);
		Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam2, Vector((fVar11 * 1.25f), ((fVar9 / 2f) - (fVar10 * 0.75f)), 0f) + Var12) };
		Var2 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam2, Vector((fVar11 * 1.25f), ((-fVar9 / 2f) + (fVar10 * 0.75f)), 0f) + Var12) };
		iVar17 = SHAPETEST::START_SHAPE_TEST_CAPSULE(Var2, Var1, fVar10, 19, PLAYER::PLAYER_PED_ID(), 4);
		if (SHAPETEST::GET_SHAPE_TEST_RESULT(iVar17, &iVar13, &uVar14, &uVar15, &uVar16) != 2)
		{
		}
		if (iVar13 != 0)
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_77(var uParam0, int iParam1)//Position - 0xFCA6
{
	if (iParam1 > 0)
	{
		uParam0->f_33 = iParam1;
	}
}

int func_78(struct<3> Param0, bool bParam1)//Position - 0x9753
{
	return __LIB_0__::func_488(Param0, bParam1);
}

void func_79(var uParam0, bool bParam1, int iParam2, int iParam3)//Position - 0xE257
{
	int iVar0;
	if (!__LIB_39__::func_35(bParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (BitTest((*uParam0)[iVar0 /*2*/], 30))
		{
			if (BitTest((*uParam0)[iVar0 /*2*/], bParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*2*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (bParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_31)
	{
		uParam0->f_31 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!BitTest((*uParam0)[iVar0 /*2*/], 30))
		{
			(uParam0[iVar0 /*2*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*2*/] = iParam3;
			MISC::SET_BIT(uParam0[iVar0 /*2*/], bParam1);
			MISC::SET_BIT(uParam0[iVar0 /*2*/], 30);
			return;
		}
		iVar0++;
	}
}

void func_80(var uParam0)//Position - 0xE44F
{
	int iVar0;
	if (uParam0->f_31)
	{
		if ((MISC::GET_FRAME_COUNT() >= (uParam0->f_32 + uParam0->f_33) || BitTest(Global_100441.f_20, 2)) || BitTest(Global_100441.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (BitTest((*uParam0)[iVar0 /*2*/], 30))
				{
					if (!BitTest((*uParam0)[iVar0 /*2*/], 29))
					{
						__LIB_39__::func_37(uParam0[iVar0 /*2*/]);
						uParam0->f_32 = MISC::GET_FRAME_COUNT();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_81(var uParam0)//Position - 0x10652
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (BitTest((*uParam0)[iVar0 /*2*/], 30))
		{
			__LIB_39__::func_38(uParam0[iVar0 /*2*/]);
		}
		iVar0++;
	}
	uParam0->f_31 = 1;
}

int func_82(var uParam0)//Position - 0xE0C0
{
	int iVar0;
	if (!uParam0->f_31)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (BitTest((*uParam0)[iVar0 /*2*/], 30))
		{
			if (!BitTest((*uParam0)[iVar0 /*2*/], 29))
			{
				return 0;
			}
			if (!__LIB_39__::func_40(uParam0[iVar0 /*2*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_31 = 0;
	return 1;
}

void func_83(bool bParam0)//Position - 0x5FDA
{
	if (bParam0)
	{
		Global_32193 = 1;
	}
	else
	{
		Global_32193 = 0;
	}
}

int func_84(var uParam0)//Position - 0x3FA4
{
	if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *uParam0, false))
	{
		return 0;
	}
	return 1;
}

void func_85(var uParam0, var uParam1)//Position - 0x39A3
{
	int iVar0;
	int iVar1;
	if (((((*uParam0)[*uParam1 /*6*/] != 0 && ENTITY::DOES_ENTITY_EXIST((*uParam0)[*uParam1 /*6*/])) && (uParam0[*uParam1 /*6*/])->f_1 != 0) && ENTITY::DOES_ENTITY_EXIST((uParam0[*uParam1 /*6*/])->f_1)) && (uParam0[*uParam1 /*6*/])->f_4)
	{
		if (__LIB_0__::func_703((uParam0[*uParam1 /*6*/])->f_2, 2))
		{
			(uParam0[*uParam1 /*6*/])->f_5 = ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT((*uParam0)[*uParam1 /*6*/], (uParam0[*uParam1 /*6*/])->f_1);
		}
		else
		{
			(uParam0[*uParam1 /*6*/])->f_5 = ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY((*uParam0)[*uParam1 /*6*/], (uParam0[*uParam1 /*6*/])->f_1, (uParam0[*uParam1 /*6*/])->f_3);
		}
	}
	iVar0++;
	*uParam1++;
	if (*uParam1 >= *uParam0)
	{
		*uParam1 = 0;
	}
	while ((((*uParam0)[*uParam1 /*6*/] == 0 || !ENTITY::DOES_ENTITY_EXIST((*uParam0)[*uParam1 /*6*/])) || ((uParam0[*uParam1 /*6*/])->f_1 == 0 || !ENTITY::DOES_ENTITY_EXIST((uParam0[*uParam1 /*6*/])->f_1))) && iVar0 < *uParam0)
	{
		iVar0++;
		*uParam1++;
		if (*uParam1 >= *uParam0)
		{
			*uParam1 = 0;
		}
	}
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (!(uParam0[iVar1 /*6*/])->f_4)
		{
			(*uParam0)[iVar1 /*6*/] = 0;
			(uParam0[iVar1 /*6*/])->f_1 = 0;
			(uParam0[iVar1 /*6*/])->f_2 = 0;
			(uParam0[iVar1 /*6*/])->f_3 = 0;
			(uParam0[iVar1 /*6*/])->f_5 = 0;
		}
		(uParam0[iVar1 /*6*/])->f_4 = 0;
		iVar1++;
	}
}

float func_86(float fParam0, float fParam1)//Position - 0x56B1
{
	if (fParam0 < fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

void func_87(int iParam0, bool bParam1)//Position - 0x2E5D
{
	if (iParam0 == -1)
	{
		iParam0 = __LIB_38__::func_999();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1 <= __LIB_38__::func_982(iParam0))
	{
		__LIB_38__::func_996(iParam0, bParam1);
		if (!__LIB_0__::func_67(51))
		{
			__LIB_0__::func_697("RE_REWARD" /* GXT: Some Random Events will reward the player with stat boosts or money. */, 1, 0, 4000, 10000, __LIB_14__::func_792(), 0, 138, 0);
			__LIB_0__::func_592(51);
		}
		if (__LIB_38__::func_981(iParam0))
		{
			Global_113386.f_24995.f_2 = 3;
		}
		if (__LIB_38__::func_995(iParam0, bParam1) != 322)
		{
			__LIB_39__::func_10(__LIB_38__::func_995(iParam0, bParam1), Local_43.f_0, Local_43.f_1);
		}
		Global_113374 = bParam1;
		if (Global_113372 == 0)
		{
			if (((Global_113375 == 1 || Global_113375 == 5) || Global_113375 == 11) || Global_113375 == 25)
			{
				__LIB_38__::func_994(2);
			}
			else if ((Global_113375 == 26 || Global_113375 == 8) || Global_113375 == 17)
			{
				__LIB_38__::func_994(7);
			}
			else
			{
				__LIB_38__::func_994(1);
			}
		}
	}
}

void func_88(int iParam0)//Position - 0xC85D
{
	__LIB_13__::func_768(iParam0, 9, 1);
}

int func_89(bool bParam0, int iParam1, int iParam2)//Position - 0x1BF1
{
	if (__LIB_0__::func_185(bParam0) == 3)
	{
		return 0;
	}
	if (__LIB_0__::func_185(bParam0) == 4)
	{
		return 0;
	}
	return __LIB_14__::func_571(__LIB_0__::func_185(bParam0), 0, iParam1, iParam2, 0);
}

float func_90(float fParam0)//Position - 0x571D
{
	if (fParam0 == 1f)
	{
		return 0.999999f;
	}
	if (fParam0 == -1f)
	{
		return -0.999999f;
	}
	return fParam0;
}

int func_91(struct<3> Param0, struct<2> Param1, var uParam2, struct<2> Param3, var uParam4, struct<2> Param5, var uParam6, var uParam7)//Position - 0x54A9
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	fVar0 = Param0.f_0;
	fVar1 = Param1.f_0;
	fVar2 = Param3.f_0;
	fVar3 = Param5.f_0;
	fVar4 = Param0.f_1;
	fVar5 = Param1.f_1;
	fVar6 = Param3.f_1;
	fVar7 = Param5.f_1;
	fVar8 = (((fVar0 - fVar1) * (fVar6 - fVar7)) - ((fVar4 - fVar5) * (fVar2 - fVar3)));
	if (fVar8 == 0f)
	{
		return 0;
	}
	fVar9 = ((fVar0 * fVar5) - (fVar4 * fVar1));
	fVar10 = ((fVar2 * fVar7) - (fVar6 * fVar3));
	fVar11 = (((fVar9 * (fVar2 - fVar3)) - ((fVar0 - fVar1) * fVar10)) / fVar8);
	fVar12 = (((fVar9 * (fVar6 - fVar7)) - ((fVar4 - fVar5) * fVar10)) / fVar8);
	if (((fVar11 < __LIB_39__::func_86(fVar0, fVar1) || fVar11 > __LIB_3__::func_480(fVar0, fVar1)) || fVar11 < __LIB_39__::func_86(fVar2, fVar3)) || fVar11 > __LIB_3__::func_480(fVar2, fVar3))
	{
		return 0;
	}
	if (((fVar12 < __LIB_39__::func_86(fVar4, fVar5) || fVar12 > __LIB_3__::func_480(fVar4, fVar5)) || fVar12 < __LIB_39__::func_86(fVar6, fVar7)) || fVar12 > __LIB_3__::func_480(fVar6, fVar7))
	{
		return 0;
	}
	*uParam7 = fVar11;
	uParam7->f_1 = fVar12;
	uParam7->f_2 = Param0.f_2;
	return 1;
}

int func_92()//Position - 0x6B63
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_45) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !__LIB_0__::func_766())
		{
			return 0;
		}
	}
	if (__LIB_39__::func_6())
	{
		return 1;
	}
	if (__LIB_39__::func_2(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_93(struct<3> Param0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x8965
{
	bool bVar0;
	struct<3> Var1;
	int iVar2;
	struct<3> Var3;
	int iVar4;
	if (!Global_151970)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		iParam1 = __LIB_38__::func_999();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!__LIB_0__::func_116())
		{
			return 0;
		}
	}
	Local_45 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !__LIB_0__::func_766())
			{
				return 0;
			}
		}
		if (!Global_113386.f_9085)
		{
			return 0;
		}
		if (__LIB_0__::func_2(0))
		{
			return 0;
		}
		if (__LIB_39__::func_6())
		{
			return 0;
		}
		if (__LIB_3__::func_695())
		{
			return 0;
		}
		if (Global_113375 != -1)
		{
			return 0;
		}
		if (__LIB_0__::func_43(__LIB_0__::func_683()))
		{
			if (__LIB_39__::func_2(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam4)
		{
			if ((Var1.f_2 - Local_45.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!__LIB_39__::func_1(iParam1))
		{
			return 0;
		}
		if (__LIB_0__::func_43(__LIB_0__::func_683()))
		{
			if (__LIB_38__::func_682(__LIB_0__::func_683()) == 4 || __LIB_38__::func_682(__LIB_0__::func_683()) == 5)
			{
				return 0;
			}
		}
		if (__LIB_0__::func_43(__LIB_0__::func_683()))
		{
			if (!__LIB_39__::func_3(iParam1, bParam2, 145))
			{
				return 0;
			}
		}
		if (!__LIB_14__::func_793(Global_113386.f_24995.f_43[iParam1]))
		{
			return 0;
		}
		if ((MISC::GET_GAME_TIMER() - Global_113377) < 150000)
		{
			if (iParam1 != 30)
			{
				return 0;
			}
		}
		if (__LIB_38__::func_991())
		{
			return 0;
		}
		if (MISC::GET_MISSION_FLAG())
		{
			return 0;
		}
		if (MISC::GET_RANDOM_EVENT_FLAG())
		{
			return 0;
		}
		if (!__LIB_0__::func_784(4))
		{
			return 0;
		}
		if (!__LIB_0__::func_215(5))
		{
			return 0;
		}
		if (__LIB_38__::func_989(iParam1, bParam2) && !bParam3)
		{
			return 0;
		}
		if (Global_3 && iParam1 != 10)
		{
			return 0;
		}
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
		{
			if ((INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(377.153f, -717.567f, 10.0536f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(320.9934f, 265.2515f, 82.1221f)) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(-1425.5645f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam1 == 9 && (bParam2 == 2 || bParam2 == 5)) && !__LIB_38__::func_989(0, 0))
		{
			return 0;
		}
		if (Global_32106)
		{
			return 0;
		}
		if (__LIB_39__::func_1(30) && !__LIB_38__::func_989(30, 0))
		{
			if (iParam1 != 30)
			{
				if (SYSTEM::VDIST2(Var1, -61.2745f, -1100.4675f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (__LIB_0__::func_43(__LIB_0__::func_683()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				Var3 = { Global_113386.f_2363.f_539.f_2300[iVar2 /*3*/] };
				iVar4 = Global_113386.f_2363.f_539.f_2296[iVar2];
				if (__LIB_3__::func_423(iVar4))
				{
					if (__LIB_17__::func_398(iVar2))
					{
						if (!__LIB_0__::func_78(Var3, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var3) < (210f * 210f))
							{
								if (__LIB_0__::func_683() != iVar2)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar2++;
			}
		}
	}
	return 1;
}

void func_94(struct<3> Param0)//Position - 0xBCB3
{
	if (SYSTEM::VDIST(Param0, Param0) > 1f)
	{
	}
}

void func_95(int iParam0)//Position - 0x6B01
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
		__LIB_13__::func_730(iParam0, &Var0);
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
		if (Global_113386.f_9085)
		{
			iVar3 = __LIB_37__::func_357(iParam0);
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
		if (__LIB_37__::func_215())
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

int func_96(int iParam0, int iParam1, int iParam2)//Position - 0x62DA6
{
	if (PAD::IS_CONTROL_PRESSED(iParam0->f_2, iParam0->f_3) || (PAD::IS_DISABLED_CONTROL_PRESSED(iParam0->f_2, iParam0->f_3) && iParam1))
	{
		if (!__LIB_0__::func_864(iParam0))
		{
			__LIB_0__::func_795(iParam0, 0, 0);
		}
		else if (__LIB_0__::func_937(iParam0, iParam2, 0))
		{
			__LIB_0__::func_794(iParam0);
			return 1;
		}
	}
	else
	{
		__LIB_0__::func_794(iParam0);
	}
	return 0;
}

int func_97(var uParam0, int iParam1)//Position - 0x64633
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar0 = iParam1;
	iVar1 = (iVar0 / 32);
	bVar2 = (iVar0 % 32);
	if (!BitTest((*uParam0)[iVar1], bVar2))
	{
		MISC::SET_BIT(uParam0[iVar1], bVar2);
		return 1;
	}
	return 0;
}

void func_98(var uParam0, int iParam1)//Position - 0x66528
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	fVar0 = SYSTEM::TO_FLOAT(iParam1);
	iVar1 = SYSTEM::FLOOR((fVar0 / SYSTEM::POW(10f, 5f)));
	fVar0 = (fVar0 - (IntToFloat(iVar1) * SYSTEM::POW(10f, 5f)));
	(*uParam0)[0] = iVar1;
	iVar2 = SYSTEM::FLOOR((fVar0 / SYSTEM::POW(10f, 4f)));
	fVar0 = (fVar0 - (IntToFloat(iVar2) * SYSTEM::POW(10f, 4f)));
	(*uParam0)[1] = iVar2;
	iVar3 = SYSTEM::FLOOR((fVar0 / SYSTEM::POW(10f, 3f)));
	fVar0 = (fVar0 - (IntToFloat(iVar3) * SYSTEM::POW(10f, 3f)));
	(*uParam0)[2] = iVar3;
	iVar4 = SYSTEM::FLOOR((fVar0 / SYSTEM::POW(10f, 2f)));
	fVar0 = (fVar0 - (IntToFloat(iVar4) * SYSTEM::POW(10f, 2f)));
	(*uParam0)[3] = iVar4;
	iVar5 = SYSTEM::FLOOR((fVar0 / 10f));
	fVar0 = (fVar0 - IntToFloat(iVar5 * 10));
	(*uParam0)[4] = iVar5;
	iVar6 = SYSTEM::FLOOR(fVar0);
	fVar0 = (fVar0 - IntToFloat(iVar6));
	(*uParam0)[5] = iVar6;
}

void func_99(int iParam0)//Position - 0x7E054
{
	Local_641.f_137 = iParam0;
	__LIB_15__::func_813(&(Local_641[0 /*17*/].f_9), 255, 255, 255, 255);
	Local_641[1 /*17*/].f_6 = 1000;
	Local_641[1 /*17*/].f_7 = 10000;
	Local_641[2 /*17*/].f_1 = 1;
	Local_641[2 /*17*/].f_8 = 40;
	__LIB_15__::func_813(&(Local_641[2 /*17*/].f_9), 0, 0, 0, 0);
	__LIB_15__::func_813(&(Local_641[3 /*17*/].f_9), 255, 255, 255, 127);
	__LIB_15__::func_813(&(Local_641[4 /*17*/].f_9), 255, 255, 255, 127);
	__LIB_15__::func_813(&(Local_641[5 /*17*/].f_9), 255, 255, 255, 127);
	__LIB_15__::func_813(&(Local_641[7 /*17*/].f_9), 255, 255, 255, 255);
	switch (Local_641.f_137)
	{
		case 2:
			__LIB_15__::func_813(&(Local_641[6 /*17*/].f_9), 255, 255, 255, 30);
			__LIB_15__::func_813(&(Local_641[1 /*17*/].f_9), 255, 255, 255, 20);
			__LIB_15__::func_813(&(Local_641[2 /*17*/].f_13), 0, 0, 0, 30);
			__LIB_15__::func_813(&(Local_641[4 /*17*/].f_9), 255, 255, 255, 127);
			Local_641[0 /*17*/] = 1;
			Local_641[6 /*17*/] = 1;
			Local_641[1 /*17*/] = 1;
			Local_641[2 /*17*/] = 1;
			Local_641[3 /*17*/] = 1;
			break;
		case 3:
			__LIB_15__::func_813(&(Local_641[6 /*17*/].f_9), 255, 255, 255, 30);
			__LIB_15__::func_813(&(Local_641[1 /*17*/].f_9), 255, 255, 255, 20);
			__LIB_15__::func_813(&(Local_641[2 /*17*/].f_13), 0, 0, 0, 30);
			__LIB_15__::func_813(&(Local_641[4 /*17*/].f_9), 255, 255, 255, 255);
			Local_641[0 /*17*/] = 1;
			Local_641[6 /*17*/] = 1;
			Local_641[1 /*17*/] = 1;
			Local_641[2 /*17*/] = 1;
			Local_641[4 /*17*/] = 1;
			break;
		case 4:
			__LIB_15__::func_813(&(Local_641[6 /*17*/].f_9), 255, 255, 255, 30);
			__LIB_15__::func_813(&(Local_641[1 /*17*/].f_9), 255, 255, 255, 20);
			__LIB_15__::func_813(&(Local_641[2 /*17*/].f_13), 0, 0, 0, 30);
			__LIB_15__::func_813(&(Local_641[5 /*17*/].f_9), 255, 255, 255, 184);
			Local_641[0 /*17*/] = 1;
			Local_641[6 /*17*/] = 1;
			Local_641[1 /*17*/] = 1;
			Local_641[2 /*17*/] = 1;
			Local_641[5 /*17*/] = 1;
			break;
		case 1:
			__LIB_15__::func_813(&(Local_641[6 /*17*/].f_9), 255, 255, 255, 30);
			__LIB_15__::func_813(&(Local_641[1 /*17*/].f_9), 255, 255, 255, 20);
			__LIB_15__::func_813(&(Local_641[2 /*17*/].f_13), 0, 0, 0, 10);
			Local_641[0 /*17*/] = 1;
			Local_641[6 /*17*/] = 1;
			Local_641[1 /*17*/] = 1;
			Local_641[2 /*17*/] = 1;
			Local_641[3 /*17*/] = 1;
			break;
		case 0:
			__LIB_15__::func_813(&(Local_641[6 /*17*/].f_9), 255, 255, 255, 30);
			__LIB_15__::func_813(&(Local_641[1 /*17*/].f_9), 255, 255, 255, 20);
			__LIB_15__::func_813(&(Local_641[2 /*17*/].f_13), 0, 0, 0, 10);
			__LIB_15__::func_813(&(Local_641[5 /*17*/].f_9), 255, 255, 255, 255);
			Local_641[0 /*17*/] = 1;
			Local_641[6 /*17*/] = 1;
			Local_641[1 /*17*/] = 1;
			Local_641[2 /*17*/] = 1;
			Local_641[5 /*17*/] = 1;
			break;
		case 6:
			__LIB_15__::func_813(&(Local_641[1 /*17*/].f_9), 255, 255, 255, 10);
			__LIB_15__::func_813(&(Local_641[2 /*17*/].f_13), 0, 0, 0, 8);
			__LIB_15__::func_813(&(Local_641[7 /*17*/].f_9), 255, 255, 255, 100);
			Local_641[0 /*17*/] = 1;
			Local_641[1 /*17*/] = 1;
			Local_641[2 /*17*/] = 1;
			Local_641[7 /*17*/] = 1;
			break;
		case 7:
			__LIB_15__::func_813(&(Local_641[2 /*17*/].f_13), 0, 0, 0, 8);
			Local_641[2 /*17*/] = 1;
			Local_641[0 /*17*/] = 1;
			__LIB_15__::func_813(&(Local_641[3 /*17*/].f_9), 255, 255, 255, 180);
			Local_641[3 /*17*/] = 1;
			__LIB_15__::func_813(&(Local_641[6 /*17*/].f_9), 255, 255, 255, 30);
			Local_641[6 /*17*/] = 1;
			break;
		case 5:
			__LIB_15__::func_813(&(Local_641[6 /*17*/].f_9), 255, 255, 255, 30);
			__LIB_15__::func_813(&(Local_641[1 /*17*/].f_9), 255, 255, 255, 20);
			__LIB_15__::func_813(&(Local_641[2 /*17*/].f_13), 0, 0, 0, 10);
			Local_641[0 /*17*/] = 1;
			Local_641[6 /*17*/] = 1;
			Local_641[1 /*17*/] = 1;
			Local_641[2 /*17*/] = 1;
			Local_641[3 /*17*/] = 1;
			break;
		case 8:
			Local_641[1 /*17*/] = 0;
			Local_641[2 /*17*/] = 0;
			Local_641[0 /*17*/] = 1;
			__LIB_15__::func_813(&(Local_641[0 /*17*/].f_9), 0, 0, 255, 90);
			Local_641[6 /*17*/] = 1;
			__LIB_15__::func_813(&(Local_641[6 /*17*/].f_9), 255, 0, 0, 15);
			Local_641[7 /*17*/] = 1;
			__LIB_15__::func_813(&(Local_641[7 /*17*/].f_9), 255, 255, 255, 115);
			break;
		case 9:
			Local_641[1 /*17*/] = 0;
			Local_641[2 /*17*/] = 0;
			Local_641[0 /*17*/] = 1;
			__LIB_15__::func_813(&(Local_641[0 /*17*/].f_9), 0, 0, 255, 90);
			Local_641[6 /*17*/] = 1;
			__LIB_15__::func_813(&(Local_641[6 /*17*/].f_9), 255, 0, 0, 15);
			Local_641[7 /*17*/] = 1;
			__LIB_15__::func_813(&(Local_641[7 /*17*/].f_9), 255, 255, 255, 115);
			break;
		case 10:
			Local_641[1 /*17*/] = 0;
			Local_641[2 /*17*/] = 0;
			Local_641[0 /*17*/] = 1;
			__LIB_15__::func_813(&(Local_641[0 /*17*/].f_9), 0, 0, 255, 90);
			Local_641[6 /*17*/] = 1;
			__LIB_15__::func_813(&(Local_641[6 /*17*/].f_9), 255, 0, 0, 15);
			Local_641[7 /*17*/] = 1;
			__LIB_15__::func_813(&(Local_641[7 /*17*/].f_9), 255, 255, 255, 115);
			break;
		case 11:
			__LIB_15__::func_813(&(Local_641[6 /*17*/].f_9), 255, 255, 255, 15);
			__LIB_15__::func_813(&(Local_641[1 /*17*/].f_9), 255, 255, 255, 10);
			__LIB_15__::func_813(&(Local_641[2 /*17*/].f_13), 0, 0, 0, 5);
			Local_641[0 /*17*/] = 1;
			Local_641[6 /*17*/] = 1;
			Local_641[1 /*17*/] = 1;
			Local_641[3 /*17*/] = 1;
			break;
		case 12:
			__LIB_15__::func_813(&(Local_641[1 /*17*/].f_9), 255, 255, 255, 3);
			__LIB_15__::func_813(&(Local_641[2 /*17*/].f_13), 0, 0, 0, 15);
			__LIB_15__::func_813(&(Local_641[0 /*17*/].f_9), 0, 0, 255, 90);
			__LIB_15__::func_813(&(Local_641[6 /*17*/].f_9), 255, 255, 255, 15);
			Local_641[1 /*17*/] = 1;
			Local_641[2 /*17*/] = 0;
			Local_641[0 /*17*/] = 1;
			Local_641[6 /*17*/] = 1;
			break;
	}
}

void func_100(int iParam0)//Position - 0x630F3
{
	struct<2> Var0;
	struct<2> Var1;
	struct<2> Var2;
	struct<4> Var3;
	float fVar4;
	if (!Local_641[iParam0 /*17*/])
	{
		return;
	}
	Var0 = { __LIB_16__::func_765() };
	Var3.f_3 = 255;
	if (Local_641[iParam0 /*17*/].f_3)
	{
		Var0.f_0 = -Var0.f_0;
	}
	Var1 = { __LIB_16__::func_764() };
	if (!Local_641[iParam0 /*17*/].f_2)
	{
		if (Local_641[iParam0 /*17*/].f_4 > 0)
		{
			Var1.f_1 = (Var1.f_1 - ((Var0.f_1 * (IntToFloat(Local_641[iParam0 /*17*/].f_4) % (IntToFloat(Local_641[iParam0 /*17*/].f_6) * 1f))) / (IntToFloat(Local_641[iParam0 /*17*/].f_6) * 1f)));
			Var2 = { Var1 };
			Var2.f_1 = (Var2.f_1 + Var0.f_1);
		}
		else if (Local_641[iParam0 /*17*/].f_7 > 0)
		{
			Local_641[iParam0 /*17*/].f_4 = MISC::GET_RANDOM_INT_IN_RANGE(0, Local_641[iParam0 /*17*/].f_7);
			Local_641[iParam0 /*17*/].f_2 = 1;
		}
	}
	else if (Local_641[iParam0 /*17*/].f_4 > 0)
	{
	}
	else
	{
		Local_641[iParam0 /*17*/].f_4 = Local_641[iParam0 /*17*/].f_6;
		Local_641[iParam0 /*17*/].f_2 = 0;
	}
	if (Local_641[iParam0 /*17*/].f_1)
	{
		fVar4 = (SYSTEM::TO_FLOAT(Local_641[iParam0 /*17*/].f_5) / SYSTEM::TO_FLOAT(Local_641[iParam0 /*17*/].f_8));
		Var3.f_0 = __LIB_15__::func_814(Local_641[iParam0 /*17*/].f_9, Local_641[iParam0 /*17*/].f_13, fVar4);
		Var3.f_1 = __LIB_15__::func_814(Local_641[iParam0 /*17*/].f_9.f_1, Local_641[iParam0 /*17*/].f_13.f_1, fVar4);
		Var3.f_2 = __LIB_15__::func_814(Local_641[iParam0 /*17*/].f_9.f_2, Local_641[iParam0 /*17*/].f_13.f_2, fVar4);
		Var3.f_3 = __LIB_15__::func_814(Local_641[iParam0 /*17*/].f_9.f_3, Local_641[iParam0 /*17*/].f_13.f_3, fVar4);
	}
	else
	{
		Var3 = { Local_641[iParam0 /*17*/].f_9 };
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(__LIB_16__::func_763(iParam0)))
	{
		__LIB_36__::func_767(Var1, Var0, Var3);
	}
	else
	{
		__LIB_36__::func_390(__LIB_16__::func_759(iParam0), __LIB_16__::func_763(iParam0), Var1, Var0, 0f, Var3);
	}
	if (!Local_641[iParam0 /*17*/].f_2 && Local_641[iParam0 /*17*/].f_4 > 0)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(__LIB_16__::func_763(0)))
		{
			__LIB_36__::func_767(Var2, Var0, Var3);
		}
		else
		{
			__LIB_36__::func_390(__LIB_16__::func_759(iParam0), __LIB_16__::func_763(iParam0), Var2, Var0, 0f, Var3);
		}
	}
	Local_641[iParam0 /*17*/].f_5 = (Local_641[iParam0 /*17*/].f_5 - SYSTEM::ROUND((MISC::GET_FRAME_TIME() * 1000f)));
	if (Local_641[iParam0 /*17*/].f_5 < 0)
	{
		Local_641[iParam0 /*17*/].f_5 = (Local_641[iParam0 /*17*/].f_5 + Local_641[iParam0 /*17*/].f_8);
	}
	Local_641[iParam0 /*17*/].f_4 = (Local_641[iParam0 /*17*/].f_4 - SYSTEM::ROUND((MISC::GET_FRAME_TIME() * 1000f)));
	if (Local_641[iParam0 /*17*/].f_4 < 0)
	{
		Local_641[iParam0 /*17*/].f_4 = 0;
	}
}

int func_101(int iParam0, int iParam1)//Position - 0x36AE
{
	struct<2> Var0;
	struct<2> Var1;
	struct<2> Var2;
	struct<2> Var3;
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var0, &Var1);
	MISC::GET_MODEL_DIMENSIONS(iParam1, &Var2, &Var3);
	if (MISC::ABSF((Var1.f_0 - Var0.f_0)) > MISC::ABSF((Var3.f_0 - Var2.f_0)))
	{
		return 0;
	}
	if (MISC::ABSF((Var1.f_1 - Var0.f_1)) > MISC::ABSF((Var3.f_1 - Var2.f_1)))
	{
		return 0;
	}
	return 1;
}

int func_102()//Position - 0x6742B
{
	if (((((STREAMING::HAS_MODEL_LOADED(joaat("freight")) && STREAMING::HAS_MODEL_LOADED(joaat("freightcont1"))) && STREAMING::HAS_MODEL_LOADED(joaat("freightcont2"))) && STREAMING::HAS_MODEL_LOADED(joaat("freightgrain"))) && STREAMING::HAS_MODEL_LOADED(joaat("tankercar"))) && STREAMING::HAS_MODEL_LOADED(joaat("freightcar")))
	{
		return 1;
	}
	return 0;
}

void func_103(float fParam0)//Position - 0x674A8
{
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fParam0);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
}

void func_104()//Position - 0x70068
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("freight"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("freightcont1"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("freightcont2"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("freightgrain"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("tankercar"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("freightcar"));
}

void func_105()//Position - 0x7657F
{
	Global_1649593.f_1169 = 1;
}

Vector3 func_106(int iParam0)//Position - 0x8CA3D
{
	switch (iParam0)
	{
		case 0:
			return 0.7f, 0.7f, -0.85f;
			break;
		case 1:
			return -0.7f, 0.7f, -0.85f;
			break;
		case 2:
			return 0.7f, -0.7f, -0.85f;
			break;
		case 3:
			return -0.7f, -0.7f, -0.85f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_107(int iParam0, struct<7> Param1, var uParam2, bool bParam3, bool bParam4)//Position - 0x9118D
{
	if (__LIB_0__::func_715(iParam0))
	{
		PED::SET_PED_ANGLED_DEFENSIVE_AREA(iParam0, Param1, Param1.f_3, Param1.f_6, bParam3, bParam4);
	}
}

void func_108(char* sParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x93C3D
{
	iParam3 = iParam3;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::END_TEXT_COMMAND_PRINT(iParam2, false);
}

int func_109()//Position - 0x97D26
{
	int iVar0;
	int iVar1;
	int iVar2;
	STATS::STAT_GET_INT(joaat("SP0_KILLS_COP"), &iVar0, -1);
	STATS::STAT_GET_INT(joaat("SP1_KILLS_COP"), &iVar1, -1);
	STATS::STAT_GET_INT(joaat("SP2_KILLS_COP"), &iVar2, -1);
	return ((iVar0 + iVar1) + iVar2);
}

char* func_110(int iParam0)//Position - 0xA1D5E
{
	switch (iParam0)
	{
		case 1:
			return "HC_FN_GUS" /* GXT: Gustavo */;
			break;
		case 2:
			return "HC_FN_KAR" /* GXT: Karl */;
			break;
		case 10:
			return "HC_FN_PAC" /* GXT: Packie */;
			break;
		case 11:
			return "HC_FN_CHE" /* GXT: Chef */;
			break;
		case 3:
			return "HC_FN_HUG" /* GXT: Hugh */;
			break;
		case 4:
			return "HC_FN_NOR" /* GXT: Norm */;
			break;
		case 5:
			return "HC_FN_DAR" /* GXT: Daryl */;
			break;
		case 6:
			return "HC_FN_PAI" /* GXT: Paige */;
			break;
		case 7:
			return "HC_FN_CHR" /* GXT: Christian */;
			break;
		case 12:
			return "HC_FN_RIC" /* GXT: Rickie */;
			break;
		case 8:
			return "HC_FN_EDD" /* GXT: Eddie */;
			break;
		case 13:
			return "HC_FN_TAL" /* GXT: Taliana */;
			break;
		case 9:
			return "HC_FN_KRM" /* GXT: Karim */;
			break;
	}
	return "ERROR!";
}

bool func_111()//Position - 0x71487
{
	return __LIB_14__::func_466() == 1;
}

bool func_112()//Position - 0x71495
{
	return __LIB_14__::func_466() == 0;
}

bool func_113()//Position - 0x714A3
{
	return __LIB_14__::func_466() == 2;
}

int func_114()//Position - 0x876BF
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	__LIB_0__::func_603(&iVar0, &iVar1, &uVar2, &uVar3, 0);
	if ((MISC::ABSI(iVar0) > 75 || MISC::ABSI(iVar1) > 75) || PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/))
	{
		return 1;
	}
	return 0;
}

int func_115(var uParam0, int iParam1, int iParam2, int iParam3, float fParam4, float fParam5, bool bParam6, bool bParam7, char* sParam8, int iParam9)//Position - 0x8985A
{
	return __LIB_16__::func_900(uParam0, iParam1, iParam2, iParam3, fParam4, fParam5, bParam6, bParam7, sParam8, iParam9, 0, 0, 0);
	return 1;
}

int func_116(struct<3> Param0, struct<3> Param1, struct<3> Param2, float fParam3, bool bParam4)//Position - 0xEA7C
{
	int iVar0;
	iVar0 = 0;
	if (!__LIB_0__::func_86(Param0 + Param1))
	{
		if ((((((((((((((((((((((FIRE::IS_EXPLOSION_IN_AREA(5, Param1, Param0) || (FIRE::IS_EXPLOSION_IN_AREA(2, Param1, Param0) && !bParam4)) || (FIRE::IS_EXPLOSION_IN_AREA(20, Param1, Param0) && !bParam4)) || FIRE::IS_EXPLOSION_IN_AREA(4, Param1, Param0)) || (FIRE::IS_EXPLOSION_IN_AREA(28, Param1, Param0) && !bParam4)) || FIRE::IS_EXPLOSION_IN_AREA(32, Param1, Param0)) || FIRE::IS_EXPLOSION_IN_AREA(25, Param1, Param0)) || FIRE::IS_EXPLOSION_IN_AREA(9, Param1, Param0)) || (FIRE::IS_EXPLOSION_IN_AREA(3, Param1, Param0) && !bParam4)) || (FIRE::IS_EXPLOSION_IN_AREA(6, Param1, Param0) && !bParam4)) || FIRE::IS_EXPLOSION_IN_AREA(0, Param1, Param0)) || FIRE::IS_EXPLOSION_IN_AREA(1, Param1, Param0)) || FIRE::IS_EXPLOSION_IN_AREA(23, Param1, Param0)) || FIRE::IS_EXPLOSION_IN_AREA(34, Param1, Param0)) || FIRE::IS_EXPLOSION_IN_AREA(14, Param1, Param0)) || (FIRE::IS_EXPLOSION_IN_AREA(30, Param1, Param0) && !bParam4)) || (FIRE::IS_EXPLOSION_IN_AREA(12, Param1, Param0) && !bParam4)) || FIRE::IS_EXPLOSION_IN_AREA(7, Param1, Param0)) || (FIRE::IS_EXPLOSION_IN_AREA(21, Param1, Param0) && !bParam4)) || (FIRE::IS_EXPLOSION_IN_AREA(18, Param1, Param0) && !bParam4)) || FIRE::IS_EXPLOSION_IN_AREA(15, Param1, Param0)) || FIRE::IS_EXPLOSION_IN_AREA(10, Param1, Param0)) || FIRE::IS_EXPLOSION_IN_AREA(27, Param1, Param0))
		{
			iVar0 = 1;
		}
	}
	else if ((((((((((((((((((((((FIRE::IS_EXPLOSION_IN_SPHERE(5, Param2, fParam3) || (FIRE::IS_EXPLOSION_IN_SPHERE(2, Param2, fParam3) && !bParam4)) || (FIRE::IS_EXPLOSION_IN_SPHERE(20, Param2, fParam3) && !bParam4)) || FIRE::IS_EXPLOSION_IN_SPHERE(4, Param2, fParam3)) || (FIRE::IS_EXPLOSION_IN_SPHERE(28, Param2, fParam3) && !bParam4)) || FIRE::IS_EXPLOSION_IN_SPHERE(32, Param2, fParam3)) || FIRE::IS_EXPLOSION_IN_SPHERE(25, Param2, fParam3)) || FIRE::IS_EXPLOSION_IN_SPHERE(9, Param2, fParam3)) || (FIRE::IS_EXPLOSION_IN_SPHERE(3, Param2, fParam3) && !bParam4)) || (FIRE::IS_EXPLOSION_IN_SPHERE(6, Param2, fParam3) && !bParam4)) || FIRE::IS_EXPLOSION_IN_SPHERE(0, Param2, fParam3)) || FIRE::IS_EXPLOSION_IN_SPHERE(1, Param2, fParam3)) || FIRE::IS_EXPLOSION_IN_SPHERE(23, Param2, fParam3)) || FIRE::IS_EXPLOSION_IN_SPHERE(34, Param2, fParam3)) || FIRE::IS_EXPLOSION_IN_SPHERE(14, Param2, fParam3)) || (FIRE::IS_EXPLOSION_IN_SPHERE(30, Param2, fParam3) && !bParam4)) || (FIRE::IS_EXPLOSION_IN_SPHERE(12, Param2, fParam3) && !bParam4)) || FIRE::IS_EXPLOSION_IN_SPHERE(7, Param2, fParam3)) || (FIRE::IS_EXPLOSION_IN_SPHERE(21, Param2, fParam3) && !bParam4)) || (FIRE::IS_EXPLOSION_IN_SPHERE(18, Param2, fParam3) && !bParam4)) || FIRE::IS_EXPLOSION_IN_SPHERE(15, Param2, fParam3)) || FIRE::IS_EXPLOSION_IN_SPHERE(10, Param2, fParam3)) || FIRE::IS_EXPLOSION_IN_SPHERE(27, Param2, fParam3))
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_117(struct<2> Param0, Vector3 vParam1, int iParam2)//Position - 0x14D1
{
	if (!(CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN()))
	{
		return 0;
	}
	if (Param0.f_1 < 400f)
	{
		if (Param0.f_0 < 1400f)
		{
			if (Param0.f_0 > -1900f)
			{
				if (Param0.f_1 > -3500f)
				{
					*iParam2 = 1;
					return 1;
				}
			}
		}
	}
	if (Param0.f_0 < 1536.35f)
	{
		if (Param0.f_1 > 1016.18f)
		{
			if (Param0.f_1 < 1213.53f)
			{
				if (Param0.f_0 > 1278.08f)
				{
					*iParam2 = 0;
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_118(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3, struct<2> Param4, var uParam5)//Position - 0x17C26
{
	return (((Param4.f_0 - Param2.f_0) * (Param0.f_1 - Param2.f_1)) - ((Param4.f_1 - Param2.f_1) * (Param0.f_0 - Param2.f_0))) >= 0f;
}

void func_119(int iParam0)//Position - 0x1B9B1
{
	if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
	{
		CAM::DO_SCREEN_FADE_IN(iParam0);
	}
}

bool func_120(int iParam0)//Position - 0x1F906
{
	return BitTest(uLocal_78, iParam0);
}

bool func_121(int iParam0, int iParam1)//Position - 0x2086D
{
	int iVar0;
	bool bVar1;
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *iParam1)
	{
		if (!bVar1)
		{
			if (iParam0 == (*iParam1)[iVar0])
			{
				bVar1 = true;
			}
		}
		iVar0++;
	}
	return bVar1;
}

void func_122(var uParam0, int iParam1)//Position - 0x8E4DC
{
	uParam0->f_9 = iParam1;
}

void func_123(int iParam0)//Position - 0x8E860
{
	if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(iParam0);
	}
}

Vector3 func_124(struct<3> Param0, float fParam1)//Position - 0x4859
{
	struct<3> Var0;
	Var0 = { __LIB_0__::func_79(Param0) };
	Var0.f_0 = (Var0.f_0 * fParam1);
	Var0.f_1 = (Var0.f_1 * fParam1);
	Var0.f_2 = (Var0.f_2 * fParam1);
	return Var0;
}

void func_125(var uParam0)//Position - 0x4CD6
{
	if (!uParam0->f_1)
	{
		if (!MISC::IS_STRING_NULL(*uParam0))
		{
			__LIB_0__::func_229(*uParam0, 7500, 1);
			uParam0->f_1 = 1;
		}
	}
}

void func_126(bool bParam0, int iParam1, bool bParam2)//Position - 0x1A069
{
	char* sVar0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (BitTest(Global_2815059.f_4660, 26))
		{
			return;
		}
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(bParam2);
		GRAPHICS::ANIMPOSTFX_STOP("FocusIn");
		AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
		if (bParam0->f_11)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("FocusOut", 0, false);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", true);
			bParam0->f_11 = 0;
		}
	}
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	bParam0->f_1 = 0;
	*bParam0 = 0;
	bParam0->f_2 = -1;
	bParam0->f_8 = 0;
	bParam0->f_5 = 0;
	bParam0->f_6 = 0;
	sVar0 = iParam1;
	if (MISC::IS_STRING_NULL(sVar0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			sVar0 = "CMN_HINT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target. */;
		}
		else
		{
			sVar0 = "FM_IHELP_HNT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus. */;
		}
	}
	if (!MISC::IS_STRING_NULL(bParam0->f_3))
	{
		if (__LIB_0__::func_1(bParam0->f_3))
		{
			HUD::CLEAR_HELP(true);
		}
	}
	if (!MISC::IS_STRING_NULL(sVar0))
	{
		if (__LIB_0__::func_1(sVar0))
		{
			HUD::CLEAR_HELP(true);
		}
	}
}

int func_127(var uParam0, bool bParam1)//Position - 0x1AEC8
{
	bool bVar0;
	bool bVar1;
	if (!uParam0->f_39)
	{
		uParam0->f_7 = 4;
		uParam0->f_39 = 1;
	}
	if ((bParam1 != 0 && bParam1 != 2) && bParam1 != 1)
	{
	}
	else
	{
		bVar0 = uParam0->f_34[bParam1] == 2;
		if (__LIB_0__::func_482(__LIB_15__::func_944()) != bParam1 || bVar0)
		{
			bVar1 = false;
			if ((bVar0 || uParam0->f_24[bParam1] != 0) || ((__LIB_13__::func_765(bParam1) && __LIB_13__::func_764(bParam1)) && !uParam0->f_18[bParam1]))
			{
				if (!uParam0->f_23)
				{
					if (!PED::IS_PED_INJURED((*uParam0)[bParam1]) || bVar0)
					{
						if (uParam0->f_34[bParam1] != 1 && uParam0->f_34[bParam1] != 3)
						{
							bVar1 = true;
						}
					}
				}
				else if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)) && !BitTest(Global_97919.f_47, bParam1))
				{
					bVar1 = true;
				}
			}
			else if (!((BitTest(Global_113386.f_9085.f_2[27 /*3*/], 1) && !Global_3) && !__LIB_0__::func_2(0)))
			{
				if (uParam0->f_23)
				{
					bVar1 = true;
				}
			}
			if (bVar1)
			{
				uParam0->f_7 = bParam1;
				return 1;
			}
		}
	}
	uParam0->f_39 = 0;
	return 0;
}

int func_128(int iParam0, bool bParam1, struct<3> Param2, float fParam3, bool bParam4, int iParam5)//Position - 0x88C94
{
	int iVar0;
	var uVar1;
	struct<97> Var2;
	int iVar3;
	int iVar4;
	bool bVar5;
	char cVar6[16];
	int iVar7;
	if (__LIB_0__::func_374(bParam1))
	{
		Var2.f_11 = 12;
		Var2.f_31 = 49;
		Var2.f_81 = 2;
		__LIB_0__::func_378(bParam1, &Var2, iParam5);
		if (Var2.f_0 == 0)
		{
			return 1;
		}
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (ENTITY::GET_ENTITY_MODEL(*iParam0) != Var2.f_0)
			{
			}
			return 1;
		}
		if ((bParam1 == 0 && !Global_113386.f_2363.f_539.f_4316) && Global_113386.f_9085.f_99.f_58[131])
		{
			Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/] = 0;
		}
		if (Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/] == Var2.f_0)
		{
			STREAMING::REQUEST_MODEL(Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/]);
			if (STREAMING::HAS_MODEL_LOADED(Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/]))
			{
				*iParam0 = VEHICLE::CREATE_VEHICLE(Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/], Param2, fParam3, false, false, false);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 5f);
				VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(*iParam0, false);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, false);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
				ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250, 0);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
				Var2.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_5, Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_7, Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var2.f_2);
				iVar3 = 0;
				while (iVar3 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar3 + 1, !Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_11[iVar3]);
					iVar3++;
				}
				if (Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_24)
				{
					VEHICLE::SET_CONVERTIBLE_ROOF(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_24);
				}
				if (__LIB_0__::func_312(&uVar1, &iVar0))
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, iVar0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_27));
					if (Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_26 >= 0 && Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_26);
					}
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_84, Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_85, Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_86);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_88);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_87);
				VEHICLE::SET_VEHICLE_NEON_COLOUR(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_93, Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_94, Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_95);
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 2, BitTest(Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_92, 28));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 3, BitTest(Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_92, 29));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 0, BitTest(Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_92, 30));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 1, BitTest(Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_92, 31));
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_89 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_89);
				}
				if (Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_90 > -1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
						{
							if (Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_90 == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_90);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_90);
						}
					}
				}
				__LIB_0__::func_670(iParam0, &(Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_31), &(Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_81));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var2.f_96);
				if (bParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						__LIB_0__::func_647(iParam0);
					}
				}
				if (bParam4)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/]);
				}
				__LIB_0__::func_397(*iParam0, bParam1);
				return 1;
			}
		}
		else if (Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/] == Var2.f_0)
		{
			STREAMING::REQUEST_MODEL(Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/]);
			if (STREAMING::HAS_MODEL_LOADED(Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/]))
			{
				*iParam0 = VEHICLE::CREATE_VEHICLE(Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/], Param2, fParam3, false, false, false);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 5f);
				VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(*iParam0, false);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, false);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
				ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250, 0);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
				Var2.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_5, Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_7, Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var2.f_2);
				iVar4 = 0;
				while (iVar4 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar4 + 1, !Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_11[iVar4]);
					iVar4++;
				}
				if (Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_24)
				{
					VEHICLE::SET_CONVERTIBLE_ROOF(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_24);
				}
				if (__LIB_0__::func_312(&uVar1, &iVar0))
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, iVar0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_27));
					if (Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_26 >= 0 && Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_26);
					}
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_84, Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_85, Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_86);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_88);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_87);
				VEHICLE::SET_VEHICLE_NEON_COLOUR(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_93, Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_94, Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_95);
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 2, BitTest(Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_92, 28));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 3, BitTest(Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_92, 29));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 0, BitTest(Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_92, 30));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 1, BitTest(Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_92, 31));
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_89 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_89);
				}
				if (Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_90 > -1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
						{
							if (Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_90 == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_90);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_90);
						}
					}
				}
				__LIB_0__::func_670(iParam0, &(Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_31), &(Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_81));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var2.f_96);
				if (bParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						__LIB_0__::func_647(iParam0);
					}
				}
				if (bParam4)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/]);
				}
				__LIB_0__::func_397(*iParam0, bParam1);
				return 1;
			}
		}
		else
		{
			STREAMING::REQUEST_MODEL(Var2.f_0);
			if (STREAMING::HAS_MODEL_LOADED(Var2.f_0))
			{
				bVar5 = true;
				*iParam0 = VEHICLE::CREATE_VEHICLE(Var2.f_0, Param2, fParam3, true, true, false);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 5f);
				VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(*iParam0, false);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, false);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
				StringCopy(&cVar6, VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0), 16);
				ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250, 0);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
				Var2.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Var2.f_5, Var2.f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Var2.f_7, Var2.f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var2.f_2);
				iVar7 = 0;
				while (iVar7 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar7 + 1, !Var2.f_11[iVar7]);
					iVar7++;
				}
				if (Var2.f_24)
				{
					VEHICLE::SET_CONVERTIBLE_ROOF(*iParam0, Var2.f_24);
				}
				if (__LIB_0__::func_312(&uVar1, &iVar0))
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, iVar0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Var2.f_27));
					if (Var2.f_26 >= 0 && Var2.f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Var2.f_26);
					}
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Var2.f_84, Var2.f_85, Var2.f_86);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Var2.f_88);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Var2.f_87);
				VEHICLE::SET_VEHICLE_NEON_COLOUR(*iParam0, Var2.f_93, Var2.f_94, Var2.f_95);
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 2, BitTest(Var2.f_92, 28));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 3, BitTest(Var2.f_92, 29));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 0, BitTest(Var2.f_92, 30));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 1, BitTest(Var2.f_92, 31));
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Var2.f_89 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Var2.f_89);
				}
				if (Var2.f_90 > -1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
						{
							if (Var2.f_90 == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Var2.f_90);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Var2.f_90);
						}
					}
				}
				__LIB_0__::func_670(iParam0, &(Var2.f_31), &(Var2.f_81));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var2.f_96);
				if (bParam1 == 1)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bagger") && !Global_113386.f_9085.f_99.f_58[118])
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &cVar6);
						bVar5 = false;
					}
				}
				else if (bParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						__LIB_0__::func_647(iParam0);
					}
				}
				else if (((bParam1 == 0 && !Global_113386.f_2363.f_539.f_4316) && Global_113386.f_9085.f_99.f_58[131]) && ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("tailgater"))
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 6, 1, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 14, 7, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 11, 2, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 2, 3, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 7, 5, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 0, 0, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 3, 3, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 13, 1, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 4, 3, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 12, 2, false);
					VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, 22, true);
					VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, 2);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 23, 11, false);
					VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, 2);
					Global_113386.f_2363.f_539.f_4316 = 1;
					__LIB_30__::func_864(bParam1, iParam0, 0, 1);
				}
				if (bParam4)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Var2.f_0);
				}
				if (bVar5)
				{
					__LIB_0__::func_397(*iParam0, bParam1);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_129()//Position - 0x6614
{
	struct<50> Var0;
	if ((PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || !__LIB_0__::func_374(__LIB_14__::func_466())) || !__LIB_0__::func_438())
	{
		return;
	}
	Var0 = 12;
	Var0.f_13 = 12;
	Var0.f_26 = 12;
	Var0.f_39 = 9;
	Var0.f_49 = 9;
	__LIB_37__::func_200(PLAYER::PLAYER_PED_ID(), &Var0, 1, -1);
	__LIB_0__::func_408(1306, Var0[0], -1);
	__LIB_0__::func_408(1307, Var0[1], -1);
	__LIB_0__::func_408(1308, Var0[2], -1);
	__LIB_0__::func_408(1309, Var0[3], -1);
	__LIB_0__::func_408(1310, Var0[4], -1);
	__LIB_0__::func_408(1311, Var0[5], -1);
	__LIB_0__::func_408(1312, Var0[6], -1);
	__LIB_0__::func_408(1313, Var0[7], -1);
	__LIB_0__::func_408(1314, Var0[8], -1);
	__LIB_0__::func_408(1315, Var0[9], -1);
	__LIB_0__::func_408(1316, Var0[10], -1);
	__LIB_0__::func_408(1317, Var0[11], -1);
	__LIB_0__::func_408(1318, Var0.f_13[0], -1);
	__LIB_0__::func_408(1319, Var0.f_13[1], -1);
	__LIB_0__::func_408(1320, Var0.f_13[2], -1);
	__LIB_0__::func_408(1321, Var0.f_13[3], -1);
	__LIB_0__::func_408(1322, Var0.f_13[4], -1);
	__LIB_0__::func_408(1323, Var0.f_13[5], -1);
	__LIB_0__::func_408(1324, Var0.f_13[6], -1);
	__LIB_0__::func_408(1325, Var0.f_13[7], -1);
	__LIB_0__::func_408(1326, Var0.f_13[8], -1);
	__LIB_0__::func_408(1327, Var0.f_13[9], -1);
	__LIB_0__::func_408(1328, Var0.f_13[10], -1);
	__LIB_0__::func_408(1329, Var0.f_13[11], -1);
	__LIB_0__::func_408(1330, Var0.f_26[0], -1);
	__LIB_0__::func_408(1331, Var0.f_26[1], -1);
	__LIB_0__::func_408(1332, Var0.f_26[2], -1);
	__LIB_0__::func_408(1333, Var0.f_26[3], -1);
	__LIB_0__::func_408(1334, Var0.f_26[4], -1);
	__LIB_0__::func_408(1335, Var0.f_26[5], -1);
	__LIB_0__::func_408(1336, Var0.f_26[6], -1);
	__LIB_0__::func_408(1337, Var0.f_26[7], -1);
	__LIB_0__::func_408(1338, Var0.f_26[8], -1);
	__LIB_0__::func_408(1339, Var0.f_26[9], -1);
	__LIB_0__::func_408(1340, Var0.f_26[10], -1);
	__LIB_0__::func_408(1341, Var0.f_26[11], -1);
	__LIB_0__::func_408(1342, Var0.f_39[0], -1);
	__LIB_0__::func_408(1343, Var0.f_39[1], -1);
	__LIB_0__::func_408(1344, Var0.f_39[2], -1);
	__LIB_0__::func_408(1345, Var0.f_39[3], -1);
	__LIB_0__::func_408(1346, Var0.f_39[4], -1);
	__LIB_0__::func_408(1347, Var0.f_39[5], -1);
	__LIB_0__::func_408(1348, Var0.f_39[6], -1);
	__LIB_0__::func_408(1349, Var0.f_39[7], -1);
	__LIB_0__::func_408(1350, Var0.f_39[8], -1);
	__LIB_0__::func_408(1351, Var0.f_49[0], -1);
	__LIB_0__::func_408(1352, Var0.f_49[1], -1);
	__LIB_0__::func_408(1353, Var0.f_49[2], -1);
	__LIB_0__::func_408(1354, Var0.f_49[3], -1);
	__LIB_0__::func_408(1355, Var0.f_49[4], -1);
	__LIB_0__::func_408(1356, Var0.f_49[5], -1);
	__LIB_0__::func_408(1357, Var0.f_49[6], -1);
	__LIB_0__::func_408(1358, Var0.f_49[7], -1);
	__LIB_0__::func_408(1359, Var0.f_49[8], -1);
	__LIB_0__::func_408(1360, __LIB_14__::func_466(), -1);
	STATS::STAT_SET_BOOL(joaat("CLO_STORED_INITIAL"), true, true);
	Global_113386.f_2363.f_539.f_4315 = 1;
}

int func_130(int iParam0, bool bParam1)//Position - 0x69C11
{
	struct<27> Var0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	iVar2 = -1;
	fVar3 = iParam0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		iVar5 = __LIB_16__::func_597();
		iVar6 = 0;
		iVar6 = 0;
		while (iVar6 < 63)
		{
			iVar1 = iVar6;
			if (BitTest(Global_113386.f_18574[iVar1 /*6*/], 2) && !BitTest(Global_113386.f_18574[iVar1 /*6*/], 3))
			{
				__LIB_0__::func_432(iVar1, &Var0);
				fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var0.f_6, true);
				if (fVar4 < fVar3)
				{
					bVar7 = true;
					if (bParam1)
					{
						if (iVar5 != Var0.f_26)
						{
							bVar7 = false;
						}
					}
					if (bVar7)
					{
						iVar2 = iVar1;
						fVar3 = fVar4;
					}
				}
			}
			iVar6++;
		}
	}
	return iVar2;
}

int func_131(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x6C2BC
{
	char* sVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				*uParam1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			}
			else
			{
				*uParam1 = PED::GET_VEHICLE_PED_IS_IN(iParam0, true);
			}
			if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam1, false))
				{
					if (iParam2 == 0 || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(*uParam1, true), ENTITY::GET_ENTITY_COORDS(iParam0, true), true) < 100f)
					{
						if (VEHICLE::IS_VEHICLE_MODEL(*uParam1, joaat("taxi")))
						{
							if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, -1, false) != iParam0 && VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, -1, false) != 0)
							{
								return 0;
							}
						}
						if (__LIB_17__::func_909(*uParam1, __LIB_14__::func_466(), 1))
						{
							sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
							if (!MISC::ARE_STRINGS_EQUAL(sVar0, "save_anywhere"))
							{
								return 0;
							}
							else if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0, true))
							{
								return 0;
							}
						}
						if (iParam3 == 1)
						{
							if (DECORATOR::DECOR_EXIST_ON(*uParam1, "IgnoredByQuickSave"))
							{
								if (DECORATOR::DECOR_GET_BOOL(*uParam1, "IgnoredByQuickSave"))
								{
									return 0;
								}
							}
						}
						else if (VEHICLE::IS_VEHICLE_MODEL(*uParam1, joaat("blimp")))
						{
							return 0;
						}
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_132(int iParam0)//Position - 0x93
{
	if (Global_20245 == 0)
	{
		if (((((((PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 189 /*INPUT_FRONTEND_LEFT*/) || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/)) || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/)) || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/)) || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 205 /*INPUT_FRONTEND_LB*/)) || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 206 /*INPUT_FRONTEND_RB*/)) || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/)) || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
		{
			Global_20245 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
	else if (SYSTEM::TIMERA() > 50)
	{
		Global_20245 = 0;
	}
	if (Global_20245 == 0)
	{
		if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 189 /*INPUT_FRONTEND_LEFT*/))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(11);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 205 /*INPUT_FRONTEND_LB*/))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 206 /*INPUT_FRONTEND_RB*/))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(6);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(16);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(17);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

void func_133()//Position - 0x215
{
	__LIB_0__::func_671(0);
	MISC::SET_GAME_PAUSED(false);
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_18);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_134(var uParam0, int iParam1)//Position - 0x2C89
{
	__LIB_14__::func_576(uParam0, 0, iParam1, "NULL", 0);
}

void func_135(var uParam0, int iParam1)//Position - 0x2DD0
{
	if (iParam1 > 0)
	{
		uParam0->f_273 = iParam1;
	}
}

void func_136(bool bParam0)//Position - 0x2EC3
{
	if (bParam0)
	{
		__LIB_1__::func_330(&Global_112411, 128);
	}
	else
	{
		__LIB_2__::func_712(&Global_112411, 128);
	}
}

void func_137(int iParam0)//Position - 0x4BD6
{
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iParam0);
}

void func_138()//Position - 0x28FE3
{
	PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
	PED::CLEAR_PED_ENV_DIRT(PLAYER::PLAYER_PED_ID());
	PED::CLEAR_PED_BLOOD_DAMAGE(PLAYER::PLAYER_PED_ID());
	PED::RESET_PED_VISIBLE_DAMAGE(PLAYER::PLAYER_PED_ID());
}

void func_139(int* iParam0)//Position - 0x340DB
{
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
	*iParam0 = 0;
}

int func_140()//Position - 0x36634
{
	return GRAPHICS::REQUEST_SCALEFORM_MOVIE("MP_MEDAL_FREEMODE");
}

void func_141()//Position - 0x4B87F
{
	CAM::SHAKE_GAMEPLAY_CAM("JOLT_SHAKE", 0.07f);
}

int func_142(int iParam0, int iParam1)//Position - 0x56D3D
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if ((*iParam0)[iVar0] == iParam1)
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (iVar0 > 0)
		{
			iVar1 = (3 - iVar0);
			(*iParam0)[iVar1] = (*iParam0)[(iVar1 - 1)];
		}
		iVar0++;
	}
	(*iParam0)[0] = iParam1;
	return 0;
}

int func_143()//Position - 0x56DCD
{
	if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 3) != 0)
	{
		return 1;
	}
	return 0;
}

int func_144(int iParam0)//Position - 0x62F00
{
	if (iParam0 < 0)
	{
		return 0;
	}
	return iParam0;
}

void func_145(var uParam0, int iParam1)//Position - 0x74F35
{
	MISC::SET_BIT(&(uParam0->f_28), iParam1);
}

int func_146(struct<36> Param0, var uParam1, var uParam2, var uParam3, struct<4> Param4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10)//Position - 0x1825
{
	if (Param4.f_3 < 0f)
	{
		return -1;
	}
	if (Param4.f_3 >= Param0.f_33)
	{
		return 100;
	}
	if (Param4.f_3 < Param0.f_33 && Param4.f_3 >= Param0.f_34)
	{
		return 80;
	}
	if (Param0.f_35 == -1f || (Param4.f_3 < Param0.f_34 && Param4.f_3 >= Param0.f_35))
	{
		return 70;
	}
	return -1;
}

int func_147(struct<36> Param0, var uParam1, var uParam2, var uParam3, struct<4> Param4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10)//Position - 0x189F
{
	if (Param4.f_3 < 0f)
	{
		return -1;
	}
	if (Param4.f_3 <= Param0.f_33)
	{
		return 100;
	}
	if (Param4.f_3 > Param0.f_33 && Param4.f_3 <= Param0.f_34)
	{
		return 80;
	}
	if (Param0.f_35 == -1f || (Param4.f_3 > Param0.f_34 && Param4.f_3 <= Param0.f_35))
	{
		return 70;
	}
	return -1;
}

int func_148(struct<38> Param0, var uParam1, struct<7> Param2, var uParam3, var uParam4, var uParam5)//Position - 0x1919
{
	return (100 * SYSTEM::ROUND(((Param0.f_37 - Param2.f_6) / Param0.f_37)));
}

int func_149(struct<37> Param0, var uParam1, var uParam2, struct<6> Param3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0x1936
{
	return (Param3.f_5 * 100 / Param0.f_36);
}

int func_150(struct<33> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, float fParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16)//Position - 0x19C3
{
	int iVar0;
	iVar0 = SYSTEM::FLOOR((fParam7 * 1000f));
	if (iVar0 <= 0)
	{
		return 0;
	}
	if (iVar0 <= SYSTEM::FLOOR((Param0.f_30 * 1000f)))
	{
		return 100;
	}
	if (iVar0 <= SYSTEM::FLOOR((Param0.f_31 * 1000f)))
	{
		return 80;
	}
	if (Param0.f_32 == -1f || iVar0 <= SYSTEM::FLOOR((Param0.f_32 * 1000f)))
	{
		return 70;
	}
	return -1;
}

bool func_151(struct<30> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10)//Position - 0x1A45
{
	return unk_0xA921AA820C25702F(Param0.f_29, iParam10);
}

int func_152()//Position - 0x1C31
{
	if (Global_10433.f_1 == 1 || Global_10433.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_153(int iParam0)//Position - 0x1CCC
{
	if (iParam0 == 1)
	{
		if (Global_10433.f_1 > 3)
		{
			if (unk_0xA921AA820C25702F(Global_1686, 14))
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
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_10433.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

int func_154(int iParam0, int iParam1)//Position - 0x2B4B
{
	switch (iParam0)
	{
		case joaat("Player_Zero"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				case 1:
					return 5;
					break;
				case 2:
					return 6;
					break;
				case 3:
					return 181;
					break;
				case 4:
					return 113;
					break;
				case 5:
					return 14;
					break;
				case 6:
					return 99;
					break;
				case 7:
					return 1;
					break;
				case 8:
					return 24;
					break;
				case 9:
					return 20;
					break;
				case 10:
					return 48;
					break;
				case 11:
					return 45;
					break;
			}
			break;
		case joaat("Player_One"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				case 1:
					return 5;
					break;
				case 2:
					return 21;
					break;
				case 3:
					return 318;
					break;
				case 4:
					return 117;
					break;
				case 5:
					return 7;
					break;
				case 6:
					return 134;
					break;
				case 7:
					return 1;
					break;
				case 8:
					return 77;
					break;
				case 9:
					return 12;
					break;
				case 10:
					return 53;
					break;
				case 11:
					return 63;
					break;
			}
			break;
		case joaat("Player_Two"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				case 1:
					return 6;
					break;
				case 2:
					return 9;
					break;
				case 3:
					return 234;
					break;
				case 4:
					return 93;
					break;
				case 5:
					return 7;
					break;
				case 6:
					return 84;
					break;
				case 7:
					return 1;
					break;
				case 8:
					return 18;
					break;
				case 9:
					return 17;
					break;
				case 10:
					return 33;
					break;
				case 11:
					return 1;
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_M_Freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				case 1:
					return 26;
					break;
				case 2:
					return 91;
					break;
				case 3:
					return 16;
					break;
				case 4:
					return 256;
					break;
				case 5:
					return 9;
					break;
				case 6:
					return 256;
					break;
				case 7:
					return 92;
					break;
				case 8:
					return 241;
					break;
				case 9:
					return 46;
					break;
				case 10:
					return 7;
					break;
				case 11:
					return 237;
					break;
			}
			break;
		case joaat("MP_F_Freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				case 1:
					return 26;
					break;
				case 2:
					return 92;
					break;
				case 3:
					return 16;
					break;
				case 4:
					return 256;
					break;
				case 5:
					return 9;
					break;
				case 6:
					return 256;
					break;
				case 7:
					return 55;
					break;
				case 8:
					return 136;
					break;
				case 9:
					return 36;
					break;
				case 10:
					return 6;
					break;
				case 11:
					return 256;
					break;
			}
			break;
	}
	return -99;
}

int func_155(int iParam0)//Position - 0x2EF2
{
	switch (iParam0)
	{
		case joaat("Player_Zero"):
			return 111;
			break;
		case joaat("Player_One"):
			return 173;
			break;
		case joaat("Player_Two"):
			return 138;
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_M_Freemode_01"):
			return 291;
			break;
		case joaat("MP_F_Freemode_01"):
			return 291;
			break;
	}
	return -99;
}

int func_156(int iParam0, int iParam1, int iParam2)//Position - 0x2F53
{
	if (iParam0 == joaat("Player_Zero"))
	{
		if (iParam1 == 6)
		{
			if (iParam2 == 10)
			{
				return 1;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 9 || iParam2 == 7) || iParam2 == 23)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 9 && iParam2 <= 14)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if ((((((((((((((((iParam2 == 12 || iParam2 == 58) || iParam2 == 59) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || iParam2 == 37) || iParam2 == 38) || iParam2 == 39) || iParam2 == 40) || iParam2 == 41) || (iParam2 >= 42 && iParam2 <= 44)) || iParam2 == 54) || iParam2 == 55)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("Player_One"))
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 20)
			{
				return 1;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 3 || iParam2 == 5) || iParam2 == 9)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 5 && iParam2 <= 10)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 81 || iParam2 == 10) || iParam2 == 26) || iParam2 == 27) || iParam2 == 28) || iParam2 == 29) || iParam2 == 30) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || (iParam2 >= 37 && iParam2 <= 39))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("Player_Two"))
	{
		if (iParam1 == 8)
		{
			if (iParam2 == 14 || iParam2 == 7)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (((iParam2 == 8 || (iParam2 >= 9 && iParam2 <= 14)) || iParam2 == 15) || iParam2 == 16)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 72 || iParam2 == 12) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || iParam2 == 37) || iParam2 == 38) || iParam2 == 39) || iParam2 == 40) || iParam2 == 41) || iParam2 == 42) || (iParam2 >= 43 && iParam2 <= 45))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("MP_M_Freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("MP_F_Freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_157(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x6259
{
	(*iParam0)[0] = iParam1;
	(*iParam0)[2] = iParam2;
	(*iParam0)[3] = iParam3;
	(*iParam0)[4] = iParam4;
	(*iParam0)[6] = iParam5;
	(*iParam0)[5] = iParam6;
	(*iParam0)[8] = iParam7;
	(*iParam0)[9] = iParam8;
	(*iParam0)[10] = iParam9;
	(*iParam0)[1] = iParam10;
	(*iParam0)[7] = iParam11;
	(*iParam0)[11] = iParam12;
	(*iParam0)[13] = iParam13;
	(*iParam0)[14] = -99;
}

bool func_158(int iParam0, int iParam1, var uParam2)//Position - 0x7753
{
	*uParam2 = 964;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 965;
					break;
				case 3:
					*uParam2 = 1403;
					break;
				case 4:
					*uParam2 = 981;
					break;
				case 6:
					*uParam2 = 989;
					break;
				case 8:
					*uParam2 = 1404;
					break;
				case 9:
					*uParam2 = 1412;
					break;
				case 10:
					*uParam2 = 1414;
					break;
				case 1:
					*uParam2 = 997;
					break;
				case 7:
					*uParam2 = 1415;
					break;
				case 11:
					*uParam2 = 973;
					break;
				case 14:
					*uParam2 = 1005;
					break;
				case 12:
					*uParam2 = 1016;
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 966;
					break;
				case 4:
					*uParam2 = 982;
					break;
				case 6:
					*uParam2 = 990;
					break;
				case 8:
					*uParam2 = 1405;
					break;
				case 9:
					*uParam2 = 1413;
					break;
				case 7:
					*uParam2 = 1416;
					break;
				case 11:
					*uParam2 = 974;
					break;
				case 14:
					*uParam2 = 1006;
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 967;
					break;
				case 4:
					*uParam2 = 983;
					break;
				case 6:
					*uParam2 = 991;
					break;
				case 8:
					*uParam2 = 1406;
					break;
				case 7:
					*uParam2 = 1417;
					break;
				case 11:
					*uParam2 = 975;
					break;
				case 14:
					*uParam2 = 1007;
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 984;
					break;
				case 6:
					*uParam2 = 992;
					break;
				case 8:
					*uParam2 = 1407;
					break;
				case 11:
					*uParam2 = 976;
					break;
				case 14:
					*uParam2 = 1008;
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 985;
					break;
				case 6:
					*uParam2 = 993;
					break;
				case 8:
					*uParam2 = 1408;
					break;
				case 11:
					*uParam2 = 977;
					break;
				case 14:
					*uParam2 = 1009;
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 986;
					break;
				case 6:
					*uParam2 = 994;
					break;
				case 8:
					*uParam2 = 1409;
					break;
				case 11:
					*uParam2 = 978;
					break;
				case 14:
					*uParam2 = 1010;
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 987;
					break;
				case 6:
					*uParam2 = 995;
					break;
				case 8:
					*uParam2 = 1410;
					break;
				case 11:
					*uParam2 = 979;
					break;
				case 14:
					*uParam2 = 1011;
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 988;
					break;
				case 6:
					*uParam2 = 996;
					break;
				case 8:
					*uParam2 = 1411;
					break;
				case 11:
					*uParam2 = 980;
					break;
				case 14:
					*uParam2 = 1012;
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1013;
					break;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1014;
					break;
			}
			break;
	}
	return *uParam2 != 964;
}

int func_159(int iParam0, int iParam1, int iParam2)//Position - 0x1ADCB
{
	if (iParam0 == joaat("Player_Zero"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 47 && iParam2 <= 54)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 >= 77 && iParam2 <= 84)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("Player_One"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 14 && iParam2 <= 21)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 >= 41 && iParam2 <= 56)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("Player_Two"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 18 && iParam2 <= 29)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 >= 49 && iParam2 <= 64)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_160(int iParam0, int iParam1, int iParam2)//Position - 0x1C438
{
	*iParam2 = -99;
	switch (iParam0)
	{
		case joaat("Player_Zero"):
			if ((((((((((((((((((iParam1 == 16 || iParam1 == 17) || iParam1 == 21) || iParam1 == 22) || iParam1 == 32) || (iParam1 >= 34 && iParam1 <= 39)) || (iParam1 >= 41 && iParam1 <= 45)) || iParam1 == 46) || (iParam1 >= 47 && iParam1 <= 54)) || (iParam1 >= 55 && iParam1 <= 70)) || (iParam1 >= 72 && iParam1 <= 79)) || iParam1 == 80) || (iParam1 >= 81 && iParam1 <= 83)) || (iParam1 >= 84 && iParam1 <= 87)) || iParam1 == 88) || (iParam1 >= 89 && iParam1 <= 91)) || iParam1 == 95) || (iParam1 >= 96 && iParam1 <= 111)) || iParam1 == 112)
			{
				*iParam2 = 6;
				return 1;
			}
			break;
		case joaat("Player_One"):
			if ((((((iParam1 == 12 || (iParam1 >= 14 && iParam1 <= 21)) || iParam1 == 32) || iParam1 == 52) || (iParam1 >= 69 && iParam1 <= 70)) || iParam1 == 71) || (iParam1 >= 72 && iParam1 <= 77))
			{
				*iParam2 = 17;
				return 1;
			}
			break;
		case joaat("Player_Two"):
			if (((((((((((((((iParam1 == 4 || iParam1 == 5) || iParam1 == 6) || iParam1 == 7) || iParam1 == 14) || (iParam1 >= 18 && iParam1 <= 29)) || iParam1 == 31) || iParam1 == 32) || iParam1 == 33) || iParam1 == 34) || (iParam1 >= 35 && iParam1 <= 42)) || (iParam1 >= 43 && iParam1 <= 53)) || (iParam1 >= 54 && iParam1 <= 61)) || (iParam1 >= 71 && iParam1 <= 80)) || (iParam1 >= 81 && iParam1 <= 86)) || (iParam1 >= 90 && iParam1 <= 92))
			{
				*iParam2 = 8;
				return 1;
			}
			break;
	}
	return 0;
}

void func_161(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1CAE3
{
	if (iParam2 == -1)
	{
		PED::CLEAR_PED_PROP(iParam0, iParam1);
	}
	else
	{
		PED::SET_PED_PROP_INDEX(iParam0, iParam1, iParam2, iParam3, NETWORK::NETWORK_IS_GAME_IN_PROGRESS());
	}
}

int func_162(int iParam0, int iParam1)//Position - 0x1CC4E
{
	int iVar0;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (iVar0)
	{
		case joaat("Player_Zero"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				case 1:
					return 57;
					break;
				case 2:
					return 110;
					break;
			}
			break;
		case joaat("Player_One"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				case 1:
					return 81;
					break;
				case 2:
					return 156;
					break;
			}
			break;
		case joaat("Player_Two"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				case 1:
					return 72;
					break;
				case 2:
					return 137;
					break;
			}
			break;
		case joaat("MP_M_Freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				case 1:
					return 155;
					break;
				case 6:
					return 283;
					break;
			}
			break;
		case joaat("MP_F_Freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				case 1:
					return 155;
					break;
				case 6:
					return 283;
					break;
			}
			break;
	}
	return -99;
}

float func_163()//Position - 0x1EE9A
{
	int iVar0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME();
		return (SYSTEM::TO_FLOAT(iVar0) / 1000f);
	}
	return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_164(int* iParam0)//Position - 0x1EECC
{
	return unk_0xA921AA820C25702F(*iParam0, 2);
}

bool func_165(int* iParam0)//Position - 0x1EEDC
{
	return unk_0xA921AA820C25702F(*iParam0, 1);
}

void func_166()//Position - 0x1EF0A
{
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 63 /*INPUT_VEH_MOVE_LEFT_ONLY*/);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 64 /*INPUT_VEH_MOVE_RIGHT_ONLY*/);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 102 /*INPUT_VEH_JUMP*/);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 90 /*INPUT_VEH_FLY_YAW_RIGHT*/);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 91 /*INPUT_VEH_PASSENGER_AIM*/);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 103 /*INPUT_VEH_GRAPPLING_HOOK*/);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 104 /*INPUT_VEH_SHUFFLE*/);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 105 /*INPUT_VEH_DROP_PROJECTILE*/);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 106 /*INPUT_VEH_MOUSE_CONTROL_OVERRIDE*/);
}

int func_167()//Position - 0x1F242
{
	if (Global_11728 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

int func_168(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x1F2DB
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar1 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0) + 1;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, (iVar0 - 1)))
			{
				iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, (iVar0 - 1));
				if (iParam3 && iVar2 == PLAYER::PLAYER_PED_ID())
				{
				}
				else if (bParam2)
				{
					if (!PED::IS_PED_INJURED(iVar2))
					{
						if (PED::IS_PED_A_PLAYER(iVar2))
						{
							return 0;
						}
					}
					else if (iParam1 == 0)
					{
						return 0;
					}
				}
				else if (iParam1 == 0)
				{
					return 0;
				}
				else
				{
					iVar3 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, (iVar0 - 1));
					if (!PED::IS_PED_INJURED(iVar3))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_169(int iParam0)//Position - 0x1F4CE
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0))
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

void func_170(int iParam0)//Position - 0x2041F
{
	iLocal_187 = iParam0;
}

bool func_171()//Position - 0x21BE3
{
	return Global_2883949 >= 12;
}

int func_172()//Position - 0x21BF2
{
	if (Global_2883949 < 12)
	{
		return Global_2883949;
	}
	else
	{
		return (Global_2883949 - 12);
	}
	return -1;
}

int func_173(struct<3> Param0, int iParam1, int iParam2)//Position - 0x229E1
{
	float fVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	fVar0 = 100f;
	iVar1 = 50;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true);
		if (fVar2 > fVar0)
		{
			iVar1 = iParam2;
		}
		else
		{
			fVar3 = ((fVar0 - fVar2) / fVar0);
			iVar1 = (iParam2 - SYSTEM::CEIL((IntToFloat((iParam2 - iParam1)) * fVar3)));
		}
	}
	if (iVar1 < iParam1)
	{
		iVar1 = iParam1;
	}
	return iVar1;
}

int func_174(int iParam0)//Position - 0x22C26
{
	switch (iParam0)
	{
		case 3:
			return 3;
			break;
		case 4:
		case 5:
		case 6:
		case 7:
			return 2;
			break;
		case 11:
			return 1;
			break;
		case 12:
			return 5;
			break;
	}
	return 5;
}

int func_175(int iParam0)//Position - 0x22FA1
{
	struct<3> Var0;
	float fVar1;
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false) && !PED::IS_PED_SITTING_IN_ANY_VEHICLE(iParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
		fVar1 = 0f;
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &fVar1))
		{
			if (Var0.f_2 > (fVar1 + 1.5f))
			{
				return 1;
			}
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_176()//Position - 0x2376B
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_10596[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_11728 = 1;
}

void func_177()//Position - 0x238F7
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_11017[iVar0 /*10*/] = 0;
		StringCopy(&(Global_11017[iVar0 /*10*/].f_1), "", 24);
		Global_11017[iVar0 /*10*/].f_7 = 0;
		Global_11017[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_11017.f_161 = -99;
	Global_11017.f_162 = { 0f, 0f, 0f };
}

int func_178(struct<3> Param0)//Position - 0x23B3E
{
	float fVar0;
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	fVar0 = ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID());
	if (SYSTEM::VDIST2(Param0, __LIB_0__::func_85(PLAYER::PLAYER_ID())) < (150f + (fVar0 * fVar0)))
	{
		return 1;
	}
	return 0;
}

void func_179(var uParam0, int iParam1)//Position - 0x24285
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	HUD::GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &uVar3);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_MESSAGE");
	HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(-1);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
	HUD::ADD_TEXT_COMPONENT_INTEGER(MISC::ABSI(iParam1));
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
	if (PLAYER::IS_PLAYER_ONLINE() && NETWORK::NETWORK_IS_IN_SESSION())
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_180(struct<3> Param0, struct<3> Param1, float fParam2)//Position - 0x25BF7
{
	if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	if (MISC::ABSF((Param0.f_0 - Param1.f_0)) <= fParam2)
	{
		if (MISC::ABSF((Param0.f_1 - Param1.f_1)) <= fParam2)
		{
			if (MISC::ABSF((Param0.f_2 - Param1.f_2)) <= fParam2)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_181(int* iParam0)//Position - 0x27423
{
	int iVar0;
	if (*iParam0 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
		*iParam0 = 0;
	}
	iParam0->f_77 = "";
	iParam0->f_78 = 0;
	iParam0->f_1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iParam0->f_11[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		iParam0->f_2[iVar0] = "";
		iVar0++;
	}
}

int func_182(int iParam0)//Position - 0x279C5
{
	switch (iParam0)
	{
		case 19:
			return 171;
			break;
		case 18:
			return 172;
			break;
		case 28:
			return 173;
			break;
		case 27:
			return 174;
			break;
		case 0:
		case 4:
			return 164;
			break;
		case 1:
		case 5:
			return 163;
			break;
		case 2:
		case 6:
			return 165;
			break;
		case 3:
		case 7:
			return 166;
			break;
		case 38:
			return 175;
			break;
		case 39:
			return 186;
			break;
		case 32:
			return 178;
			break;
		case 33:
			return 179;
			break;
		case 30:
			return 176;
			break;
		case 31:
			return 177;
			break;
		case 34:
			return 180;
			break;
		case 35:
			return 182;
			break;
		case 36:
			return 181;
			break;
		case 37:
			return 183;
			break;
	}
	return -1;
}

void func_183()//Position - 0x28015
{
	AUDIO::PLAY_SOUND_FRONTEND(-1, "QUIT_WHOOSH", "HUD_MINI_GAME_SOUNDSET");
}

void func_184(var uParam0, int iParam1)//Position - 0x28792
{
	*uParam0 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = iParam1;
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("OFFMISSION_WASTED", false);
}

void func_185(var uParam0, struct<3> Param1, int iParam2)//Position - 0x29FF8
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
	iVar0 = uParam0->f_9;
	iVar1 = uParam0->f_10;
	if (iParam2 == joaat("VEHICLE_HIGH_ZOOM_HINT_HELPER"))
	{
		if (iVar0 < 1500)
		{
			iVar0 = 1500;
		}
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
	}
	CAM::SET_GAMEPLAY_COORD_HINT(Param1, -1, iVar0, iVar1, iParam2);
	iVar2 = 2048;
	iVar3 = 3;
	TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), Param1, -1, iVar2, iVar3);
	GRAPHICS::ANIMPOSTFX_PLAY("FocusIn", 0, false);
	AUDIO::START_AUDIO_SCENE("HINT_CAM_SCENE");
	AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusIn", "HintCamSounds");
	uParam0->f_11 = 1;
	uParam0->f_8 = MISC::GET_GAME_TIMER();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_186()//Position - 0x2A0B8
{
	return PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 73 /*INPUT_VEH_DUCK*/);
}

bool func_187()//Position - 0x2A0D4
{
	return PAD::IS_CONTROL_JUST_RELEASED(0 /*PLAYER_CONTROL*/, 73 /*INPUT_VEH_DUCK*/);
}

bool func_188()//Position - 0x2A0E3
{
	return PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 73 /*INPUT_VEH_DUCK*/);
}

int func_189()//Position - 0x2A29E
{
	if ((unk_0x4DC84C86C4DF6500() == 8 || unk_0x4DC84C86C4DF6500() == 9) || unk_0x4DC84C86C4DF6500() == 10)
	{
		return 1;
	}
	return 0;
}

float func_190(int iParam0, struct<3> Param1, bool bParam2)//Position - 0x2BC14
{
	struct<3> Var0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Param1, bParam2);
}

struct<6> func_191()//Position - 0x2C604
{
	struct<6> Var0;
	int iVar1;
	StringCopy(&Var0, "NULL", 24);
	if (Global_11728 == 4)
	{
		iVar1 = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
		iVar1 = (iVar1 + Global_12718);
		if (iVar1 > -1)
		{
			return Global_10596[iVar1 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

int func_192(int iParam0, var uParam1, var uParam2)//Position - 0x2CBAA
{
	int iVar0;
	int iVar1;
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
	{
		return 0;
	}
	if (VEHICLE::GET_NUM_MOD_KITS(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			(*uParam1)[iVar0] = 0;
			if (VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = VEHICLE::GET_VEHICLE_MOD(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_193(int iParam0)//Position - 0x2D0B1
{
	int iVar0;
	int iVar1;
	char cVar2[16];
	if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)) && VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
	{
		VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 25)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (VEHICLE::GET_VEHICLE_MOD(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar2, VEHICLE::GET_MOD_TEXT_LABEL(iParam0, iVar1, VEHICLE::GET_VEHICLE_MOD(iParam0, iVar1)), 16);
				if (MISC::GET_HASH_KEY(&cVar2) != 0 && MISC::GET_HASH_KEY(&cVar2) == MISC::GET_HASH_KEY("MNU_CAGE" /* GXT: Roll Cage and Chassis Upgrade */))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_194(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)//Position - 0x3506E
{
	Global_11725 = iParam0;
	Global_11735 = 0;
	Global_11742 = 0;
	Global_11737 = 0;
	Global_12699 = 0;
	Global_12705 = 0;
	Global_2621441 = 0;
	(*uParam1)[0] = uParam3;
	(*uParam2)[0] = uParam4;
	(*uParam1)[1] = uParam5;
	(*uParam2)[1] = uParam6;
	(*uParam1)[2] = iParam7;
	(*uParam2)[2] = iParam8;
	(*uParam1)[3] = iParam9;
	(*uParam2)[3] = iParam10;
	(*uParam1)[4] = iParam11;
	(*uParam2)[4] = iParam12;
	(*uParam1)[5] = iParam13;
	(*uParam2)[5] = iParam14;
	(*uParam1)[6] = iParam15;
	(*uParam2)[6] = iParam16;
}

float func_195(int iParam0, int iParam1, bool bParam2)//Position - 0x3680F
{
	struct<3> Var0;
	struct<3> Var1;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
	}
	else
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(iParam1, false) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var1, bParam2);
}

void func_196(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x36DA8
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	if (bParam4)
	{
		fVar0 = PAD::GET_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/);
		fVar1 = PAD::GET_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/);
		fVar2 = PAD::GET_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 189 /*INPUT_FRONTEND_LEFT*/);
		fVar3 = PAD::GET_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/);
	}
	else
	{
		fVar0 = PAD::GET_DISABLED_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/);
		fVar1 = PAD::GET_DISABLED_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/);
		fVar2 = PAD::GET_DISABLED_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 189 /*INPUT_FRONTEND_LEFT*/);
		fVar3 = PAD::GET_DISABLED_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/);
	}
	*uParam0 = SYSTEM::ROUND((128f * fVar0));
	*uParam1 = SYSTEM::ROUND((128f * fVar1));
	*uParam2 = SYSTEM::ROUND((128f * fVar2));
	*uParam3 = SYSTEM::ROUND((128f * fVar3));
}

void func_197(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x37111
{
	*uParam0 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/) * 127f));
	*uParam1 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/) * 127f));
	*uParam2 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 189 /*INPUT_FRONTEND_LEFT*/) * 127f));
	*uParam3 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/) * 127f));
			*uParam1 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 189 /*INPUT_FRONTEND_LEFT*/) * 127f));
			*uParam3 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/) * 127f));
		}
	}
}

struct<4> func_198(int iParam0)//Position - 0x3BFF5
{
	struct<4> Var0;
	StringCopy(&Var0, "PS_FLa_", 16);
	StringIntConCat(&Var0, iParam0, 16);
	return Var0;
}

int func_199(int* iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3C011
{
	int iVar0;
	int iVar1;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(iParam1, iParam2 + 1);
	while (iVar1 < (iParam2 - iParam1) + 1)
	{
		if (!unk_0xA921AA820C25702F(*iParam0, iVar0))
		{
			MISC::SET_BIT(iParam0, iVar0);
			*iParam3 = iVar0 + 3;
			return 1;
		}
		iVar0++;
		if (iVar0 > iParam2)
		{
			iVar0 = iParam1;
		}
		iVar1++;
	}
	return 0;
}

int func_200()//Position - 0x48367
{
	switch (Global_2883949)
	{
		case 0:
			return 30;
		case 1:
			return 40;
		case 2:
			return 50;
		case 3:
			return 60;
		case 6:
			return 70;
		case 4:
			return 75;
		case 5:
			return 80;
		case 11:
			return 85;
		case 7:
			return 90;
		case 8:
			return 95;
		case 9:
			return 0;
		case 10:
			return 0;
		default:
	}
	return 0;
}

void func_201(float fParam0, float fParam1, char* sParam2, int iParam3)//Position - 0x4A85C
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1);
}

void func_202(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)//Position - 0x4A930
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_FLOAT(fParam3, iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1);
}

void func_203(float fParam0, float fParam1, char* sParam2)//Position - 0x4AA13
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1);
}

void func_204()//Position - 0x4AF59
{
	AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_MINI_GAME_SOUNDSET");
}

bool func_205(int iParam0, var uParam1)//Position - 0x4AF85
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bVar0 = false;
	iVar1 = PAD::GET_CONTROL_VALUE(2 /*FRONTEND_CONTROL*/, 171 /*INPUT_SPECIAL_ABILITY_PC*/);
	iVar2 = PAD::GET_CONTROL_VALUE(2 /*FRONTEND_CONTROL*/, 172 /*INPUT_CELLPHONE_UP*/);
	if (MISC::ABSI(iVar1) < 28 && MISC::ABSI(iVar2) < 28)
	{
		*uParam1 = 1;
		uParam1->f_1 = 0;
		return 0;
	}
	if (MISC::GET_GAME_TIMER() < uParam1->f_1 + 250)
	{
		*uParam1 = 0;
		return 0;
	}
	else
	{
		*uParam1 = 1;
	}
	if (!*uParam1)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			bVar0 = iVar2 < 100;
			break;
		case 1:
			bVar0 = iVar2 > 156;
			break;
		case 2:
			bVar0 = iVar1 < 100;
			break;
		case 3:
			bVar0 = iVar1 > 156;
			break;
	}
	if (bVar0)
	{
		uParam1->f_1 = MISC::GET_GAME_TIMER();
		*uParam1 = 0;
	}
	return bVar0;
}

void func_206()//Position - 0x4B05E
{
	AUDIO::PLAY_SOUND_FRONTEND(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET");
}

void func_207(var uParam0, bool bParam1)//Position - 0x4B310
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		*uParam0 = NETWORK::GET_NETWORK_TIME();
	}
	else
	{
		*uParam0 = MISC::GET_GAME_TIMER();
	}
	uParam0->f_1 = 1;
}

void func_208(var uParam0, bool bParam1)//Position - 0x4B3D2
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			*uParam0 = MISC::GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
	}
}

void func_209(struct<30> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, float fParam15, bool bParam16)//Position - 0x4C874
{
	switch (Param0.f_29[iParam14])
	{
		case 4:
			if (bParam16)
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
				HUD::ADD_TEXT_COMPONENT_FLOAT(fParam15, 2);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY" /* GXT: – */);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		case 0:
			break;
	}
}

int func_210(int iParam0)//Position - 0x4D2A8
{
	if (iParam0 == 500)
	{
		return joaat("WEAPON_MINIGUN");
	}
	else if (iParam0 == 400)
	{
		return joaat("WEAPON_MG");
	}
	else if (iParam0 == 401)
	{
		return joaat("WEAPON_COMBATMG");
	}
	else if (iParam0 == 402)
	{
		return joaat("WEAPON_ASSAULTMG");
	}
	else if (iParam0 == 300)
	{
		return joaat("WEAPON_ASSAULTRIFLE");
	}
	else if (iParam0 == 301)
	{
		return joaat("WEAPON_CARBINERIFLE");
	}
	else if (iParam0 == 302)
	{
		return joaat("WEAPON_ADVANCEDRIFLE");
	}
	else if (iParam0 == 303)
	{
		return joaat("WEAPON_HEAVYRIFLE");
	}
	else if (iParam0 == 200)
	{
		return joaat("WEAPON_PUMPSHOTGUN");
	}
	else if (iParam0 == 201)
	{
		return joaat("WEAPON_SAWNOFFSHOTGUN");
	}
	else if (iParam0 == 202)
	{
		return joaat("WEAPON_ASSAULTSHOTGUN");
	}
	else if (iParam0 == 203)
	{
		return joaat("WEAPON_BULLPUPSHOTGUN");
	}
	else if (iParam0 == 100)
	{
		return joaat("WEAPON_MICROSMG");
	}
	else if (iParam0 == 101)
	{
		return joaat("WEAPON_SMG");
	}
	else if (iParam0 == 102)
	{
		return joaat("WEAPON_ASSAULTSMG");
	}
	else if (iParam0 == 0)
	{
		return joaat("WEAPON_PISTOL");
	}
	else if (iParam0 == 1)
	{
		return joaat("WEAPON_COMBATPISTOL");
	}
	else if (iParam0 == 2)
	{
		return joaat("WEAPON_APPISTOL");
	}
	else if (iParam0 == 3)
	{
		return joaat("WEAPON_PISTOL50");
	}
	return 0;
}

void func_211(var uParam0)//Position - 0x4D803
{
	struct<13> Var0;
	int iVar1;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 24);
	StringCopy(&(uParam0->f_7), "", 32);
	uParam0->f_15 = { Var0 };
	uParam0->f_28 = { Var0 };
	uParam0->f_41 = 0;
	uParam0->f_42 = 0;
	uParam0->f_43 = 0;
	uParam0->f_44 = 0;
	uParam0->f_45 = 0;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		uParam0->f_46[iVar1] = 0f;
		uParam0->f_79[iVar1] = 0;
		iVar1++;
	}
}

int func_212(int iParam0)//Position - 0x4D8F3
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_1837576.f_81[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_1837576.f_81[iVar0] == 0)
		{
			return iVar0;
		}
		else if (STATS::LEADERBOARDS_GET_CACHE_EXISTS(Global_1837576.f_81[iVar0]))
		{
			iVar3 = STATS::LEADERBOARDS_GET_CACHE_TIME(Global_1837576.f_81[iVar0]);
			if (iVar3 > iVar2)
			{
				iVar1 = iVar0;
				iVar2 = iVar3;
			}
		}
		else
		{
			return iVar0;
		}
		iVar0++;
	}
	return iVar1;
}

void func_213(var uParam0)//Position - 0x4DF00
{
	struct<13> Var0;
	int iVar1;
	int iVar2;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		StringCopy(uParam0[iVar1 /*72*/], "", 24);
		StringCopy(&((uParam0[iVar1 /*72*/])->f_6), "", 32);
		(uParam0[iVar1 /*72*/])->f_14 = { Var0 };
		(uParam0[iVar1 /*72*/])->f_27 = { Var0 };
		(uParam0[iVar1 /*72*/])->f_40 = 0;
		(uParam0[iVar1 /*72*/])->f_41 = 0;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			(uParam0[iVar1 /*72*/])->f_42[iVar2] = 0f;
			(uParam0[iVar1 /*72*/])->f_49[iVar2] = 0;
			iVar2++;
		}
		(uParam0[iVar1 /*72*/])->f_57 = 0;
		(uParam0[iVar1 /*72*/])->f_56 = 0;
		(uParam0[iVar1 /*72*/])->f_58 = 0;
		(uParam0[iVar1 /*72*/])->f_59 = 0;
		StringCopy(&((uParam0[iVar1 /*72*/])->f_60), "", 16);
		iVar1++;
	}
	__LIB_0__::func_794(&(Global_1835390.f_2182));
}

void func_214(var uParam0, struct<2> Param1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68)//Position - 0x4F83B
{
	*uParam0 = Param1.f_0;
	uParam0->f_1 = Param1.f_1;
	uParam0->f_2 = 0;
}

int func_215()//Position - 0x4F98D
{
	if (Global_1835388 && Global_1835389)
	{
		return 1;
	}
	return 0;
}

struct<6> func_216(int iParam0)//Position - 0x5583A
{
	struct<6> Var0;
	switch (iParam0)
	{
		case 38:
			StringCopy(&Var0, "HUD_MG_RANGE0" /* GXT: - Pistol Challenge 1 */, 24);
			break;
		case 39:
			StringCopy(&Var0, "HUD_MG_RANGE1" /* GXT: - Pistol Challenge 2 */, 24);
			break;
		case 40:
			StringCopy(&Var0, "HUD_MG_RANGE2" /* GXT: - Pistol Challenge 3 */, 24);
			break;
		case 41:
			StringCopy(&Var0, "HUD_MG_RANGE3" /* GXT: - Submachine Gun Challenge 1 */, 24);
			break;
		case 42:
			StringCopy(&Var0, "HUD_MG_RANGE4" /* GXT: - Submachine Gun Challenge 2 */, 24);
			break;
		case 43:
			StringCopy(&Var0, "HUD_MG_RANGE5" /* GXT: - Submachine Gun Challenge 3 */, 24);
			break;
		case 44:
			StringCopy(&Var0, "HUD_MG_RANGE6" /* GXT: - Shotgun Challenge 1 */, 24);
			break;
		case 45:
			StringCopy(&Var0, "HUD_MG_RANGE7" /* GXT: - Shotgun Challenge 2 */, 24);
			break;
		case 46:
			StringCopy(&Var0, "HUD_MG_RANGE8" /* GXT: - Shotgun Challenge 3 */, 24);
			break;
		case 47:
			StringCopy(&Var0, "HUD_MG_RANGE9" /* GXT: - Assault Rifle Challenge 1 */, 24);
			break;
		case 48:
			StringCopy(&Var0, "HUD_MG_RANGE10" /* GXT: - Assault Rifle Challenge 2 */, 24);
			break;
		case 49:
			StringCopy(&Var0, "HUD_MG_RANGE11" /* GXT: - Assault Rifle Challenge 3 */, 24);
			break;
		case 50:
			StringCopy(&Var0, "HUD_MG_RANGE12" /* GXT: - Light Machine Gun Challenge 1 */, 24);
			break;
		case 51:
			StringCopy(&Var0, "HUD_MG_RANGE13" /* GXT: - Light Machine Gun Challenge 2 */, 24);
			break;
		case 52:
			StringCopy(&Var0, "HUD_MG_RANGE14" /* GXT: - Light Machine Gun Challenge 3 */, 24);
			break;
		case 53:
			StringCopy(&Var0, "HUD_MG_RANGE15" /* GXT: - Heavy Weapon Challenge 1 */, 24);
			break;
		case 54:
			StringCopy(&Var0, "HUD_MG_RANGE16" /* GXT: - Heavy Weapon Challenge 2 */, 24);
			break;
		case 55:
			StringCopy(&Var0, "HUD_MG_RANGE17" /* GXT: - Heavy Weapon Challenge 3 */, 24);
			break;
	}
	return Var0;
}

int func_217(var uParam0)//Position - 0x55BE3
{
	if ((unk_0xA921AA820C25702F(uParam0->f_42, 1) && Global_1835390.f_2056[0] > 0) && uParam0->f_246.f_1 >= 0)
	{
		return 1;
	}
	return 0;
}

void func_218()//Position - 0x55D27
{
	AUDIO::PLAY_SOUND_FRONTEND(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET");
}

bool func_219(int* iParam0)//Position - 0x5733E
{
	return (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("HUD_321_GO", false));
}

void func_220(int* iParam0)//Position - 0x573B7
{
	*iParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("COUNTDOWN");
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("HUD_321_GO", true);
}

int func_221(int iParam0)//Position - 0x58F1F
{
	switch (iParam0)
	{
		case 817:
		case 850:
		case 824:
		case 827:
		case 815:
		case 826:
		case 777:
		case 825:
		case 828:
		case 849:
		case 928:
		case 202:
		case 811:
		case 193:
		case 975:
		case 976:
			return 1;
			break;
	}
	if (iParam0 >= 998 && iParam0 <= 1197)
	{
		return 1;
	}
	return 0;
}

void func_222()//Position - 0x58FAE
{
	Global_1835013.f_73 = Global_1835013.f_142;
	Global_1835013.f_73.f_1 = Global_1835013.f_142.f_1;
	Global_1835013.f_73.f_2 = Global_1835013.f_142.f_2;
	Global_1835013.f_211 = Global_1835013.f_142;
	Global_1835013.f_211.f_1 = Global_1835013.f_142.f_1;
	Global_1835013.f_211.f_2 = Global_1835013.f_142.f_2;
}

int func_223(int iParam0, int iParam1)//Position - 0x5900E
{
	switch (iParam0)
	{
		case 780:
			if (iParam1 == 4)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_224(int* iParam0, char* sParam1, int iParam2, bool bParam3)//Position - 0x208F3
{
	int iVar0;
	if (*iParam0 == 0)
	{
		*iParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE_INSTANCE("instructional_buttons");
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iParam0->f_11[iVar0] = -1;
		iParam0->f_44[iVar0] = "";
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		iParam0->f_2[iVar0] = "";
		iVar0++;
	}
	iParam0->f_2[0] = sParam1;
	iParam0->f_11[0] = iParam2;
	iParam0->f_1 = 0;
	if (bParam3)
	{
		__LIB_0__::func_989(&(iParam0->f_1), 32);
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		__LIB_0__::func_989(&(iParam0->f_1), 1);
	}
}

int func_225(int iParam0)//Position - 0x22BBE
{
	switch (iParam0)
	{
		case 3:
			return 9;
			break;
		case 4:
		case 5:
		case 6:
		case 7:
			return 18;
			break;
		case 11:
			return 6;
			break;
		case 12:
			return __LIB_1__::func_577();
			break;
	}
	return __LIB_1__::func_577();
}

Vector3 func_226(struct<3> Param0, float fParam1)//Position - 0x288EB
{
	struct<3> Var0;
	int iVar1;
	iVar1 = 0;
	switch (iVar1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			Var0 = { Vector(fParam1, fParam1, fParam1) * __LIB_3__::func_80(45f, 0f, 180f) };
			if (__LIB_38__::func_628(Param0, Var0))
			{
				break;
			}
			Var0 = { Vector(fParam1, fParam1, fParam1) * __LIB_3__::func_80(45f, 0f, 135f) };
			if (__LIB_38__::func_628(Param0, Var0))
			{
				break;
			}
			Var0 = { Vector(fParam1, fParam1, fParam1) * __LIB_3__::func_80(45f, 0f, 225f) };
			if (__LIB_38__::func_628(Param0, Var0))
			{
				break;
			}
			Var0 = { Vector(fParam1, fParam1, fParam1) * __LIB_3__::func_80(-45f, 0f, 0f) };
			if (__LIB_38__::func_628(Param0, Var0))
			{
				break;
			}
			Var0 = { CAM::GET_GAMEPLAY_CAM_COORD() - Param0 };
			break;
	}
	return Var0;
}

void func_227(var uParam0)//Position - 0x295CD
{
	if (__LIB_0__::func_339(PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
		AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
		GRAPHICS::ANIMPOSTFX_STOP("FocusIn");
		if (uParam0->f_11)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("FocusOut", 0, false);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds");
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

char* func_228(int iParam0, bool bParam1)//Position - 0x4CB6E
{
	struct<32> Var0;
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				return "WTU_INVALID";
			}
			else
			{
				return "WT_INVALID" /* GXT: Invalid */;
			}
			break;
		case joaat("WEAPON_UNARMED"):
			if (bParam1)
			{
				return "WTU_UNARMED" /* GXT: UNARMED */;
			}
			else
			{
				return "WT_UNARMED" /* GXT: Unarmed */;
			}
			break;
		case joaat("WEAPON_PISTOL"):
			if (bParam1)
			{
				return "WTU_PIST" /* GXT: PISTOL */;
			}
			else
			{
				return "WT_PIST" /* GXT: Pistol */;
			}
			break;
		case joaat("WEAPON_COMBATPISTOL"):
			if (bParam1)
			{
				return "WTU_PIST_CBT" /* GXT: COMBAT PISTOL */;
			}
			else
			{
				return "WT_PIST_CBT" /* GXT: Combat Pistol */;
			}
			break;
		case joaat("WEAPON_APPISTOL"):
			if (bParam1)
			{
				return "WTU_PIST_AP" /* GXT: AP PISTOL */;
			}
			else
			{
				return "WT_PIST_AP" /* GXT: AP Pistol */;
			}
			break;
		case joaat("WEAPON_SMG"):
			if (bParam1)
			{
				return "WTU_SMG" /* GXT: SMG */;
			}
			else
			{
				return "WT_SMG" /* GXT: SMG */;
			}
			break;
		case joaat("WEAPON_MICROSMG"):
			if (bParam1)
			{
				return "WTU_SMG_MCR" /* GXT: MICRO SMG */;
			}
			else
			{
				return "WT_SMG_MCR" /* GXT: Micro SMG */;
			}
			break;
		case joaat("WEAPON_ASSAULTRIFLE"):
			if (bParam1)
			{
				return "WTU_RIFLE_ASL" /* GXT: ASSAULT RIFLE */;
			}
			else
			{
				return "WT_RIFLE_ASL" /* GXT: Assault Rifle */;
			}
			break;
		case joaat("WEAPON_CARBINERIFLE"):
			if (bParam1)
			{
				return "WTU_RIFLE_CBN" /* GXT: CARBINE RIFLE */;
			}
			else
			{
				return "WT_RIFLE_CBN" /* GXT: Carbine Rifle */;
			}
			break;
		case joaat("WEAPON_ADVANCEDRIFLE"):
			if (bParam1)
			{
				return "WTU_RIFLE_ADV" /* GXT: ADVANCED RIFLE */;
			}
			else
			{
				return "WT_RIFLE_ADV" /* GXT: Advanced Rifle */;
			}
			break;
		case joaat("WEAPON_MG"):
			if (bParam1)
			{
				return "WTU_MG" /* GXT: MG */;
			}
			else
			{
				return "WT_MG" /* GXT: MG */;
			}
			break;
		case joaat("WEAPON_COMBATMG"):
			if (bParam1)
			{
				return "WTU_MG_CBT" /* GXT: COMBAT MG */;
			}
			else
			{
				return "WT_MG_CBT" /* GXT: Combat MG */;
			}
			break;
		case joaat("WEAPON_PUMPSHOTGUN"):
			if (bParam1)
			{
				return "WTU_SG_PMP" /* GXT: PUMP SHOTGUN */;
			}
			else
			{
				return "WT_SG_PMP" /* GXT: Pump Shotgun */;
			}
			break;
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			if (bParam1)
			{
				return "WTU_SG_SOF" /* GXT: SAWED-OFF SHOTGUN */;
			}
			else
			{
				return "WT_SG_SOF" /* GXT: Sawed-Off Shotgun */;
			}
			break;
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			if (bParam1)
			{
				return "WTU_SG_ASL" /* GXT: ASSAULT SHOTGUN */;
			}
			else
			{
				return "WT_SG_ASL" /* GXT: Assault Shotgun */;
			}
			break;
		case joaat("WEAPON_HEAVYSNIPER"):
			if (bParam1)
			{
				return "WTU_SNIP_HVY" /* GXT: HEAVY SNIPER */;
			}
			else
			{
				return "WT_SNIP_HVY" /* GXT: Heavy Sniper */;
			}
			break;
		case joaat("WEAPON_REMOTESNIPER"):
			if (bParam1)
			{
				return "WTU_SNIP_RMT" /* GXT: REMOTE SNIPER */;
			}
			else
			{
				return "WT_SNIP_RMT" /* GXT: Remote Sniper */;
			}
			break;
		case joaat("WEAPON_SNIPERRIFLE"):
			if (bParam1)
			{
				return "WTU_SNIP_RIF" /* GXT: SNIPER RIFLE */;
			}
			else
			{
				return "WT_SNIP_RIF" /* GXT: Sniper Rifle */;
			}
			break;
		case joaat("WEAPON_GRENADELAUNCHER"):
			if (bParam1)
			{
				return "WTU_GL" /* GXT: GRENADE LAUNCHER */;
			}
			else
			{
				return "WT_GL" /* GXT: Grenade Launcher */;
			}
			break;
		case joaat("WEAPON_RPG"):
			if (bParam1)
			{
				return "WTU_RPG" /* GXT: RPG */;
			}
			else
			{
				return "WT_RPG" /* GXT: RPG */;
			}
			break;
		case joaat("WEAPON_MINIGUN"):
			if (bParam1)
			{
				return "WTU_MINIGUN" /* GXT: MINIGUN */;
			}
			else
			{
				return "WT_MINIGUN" /* GXT: Minigun */;
			}
			break;
		case joaat("WEAPON_GRENADE"):
			if (bParam1)
			{
				return "WTU_GNADE" /* GXT: GRENADE */;
			}
			else
			{
				return "WT_GNADE" /* GXT: Grenade */;
			}
			break;
		case joaat("WEAPON_SMOKEGRENADE"):
			if (bParam1)
			{
				return "WTU_GNADE_SMK" /* GXT: TEAR GAS */;
			}
			else
			{
				return "WT_GNADE_SMK" /* GXT: Tear Gas */;
			}
			break;
		case joaat("WEAPON_STICKYBOMB"):
			if (bParam1)
			{
				return "WTU_GNADE_STK" /* GXT: STICKY BOMB */;
			}
			else
			{
				return "WT_GNADE_STK" /* GXT: Sticky Bomb */;
			}
			break;
		case joaat("WEAPON_MOLOTOV"):
			if (bParam1)
			{
				return "WTU_MOLOTOV" /* GXT: MOLOTOV */;
			}
			else
			{
				return "WT_MOLOTOV" /* GXT: Molotov */;
			}
			break;
		case joaat("WEAPON_STUNGUN"):
			if (bParam1)
			{
				return "WTU_STUN" /* GXT: STUN GUN */;
			}
			else
			{
				return "WT_STUN" /* GXT: Stun Gun */;
			}
			break;
		case joaat("WEAPON_PETROLCAN"):
			if (bParam1)
			{
				return "WTU_PETROL" /* GXT: JERRY CAN */;
			}
			else
			{
				return "WT_PETROL" /* GXT: Jerry Can */;
			}
			break;
		case joaat("WEAPON_ELECTRIC_FENCE"):
			if (bParam1)
			{
				return "WTU_ELCFEN";
			}
			else
			{
				return "WT_ELCFEN";
			}
			break;
		case joaat("VEHICLE_WEAPON_TANK"):
			if (bParam1)
			{
				return "WTU_V_TANK" /* GXT: TANK CANNON */;
			}
			else
			{
				return "WT_V_TANK" /* GXT: Tank Cannon */;
			}
			break;
		case joaat("VEHICLE_WEAPON_SPACE_ROCKET"):
			if (bParam1)
			{
				return "WTU_V_SPACERKT" /* GXT: ROCKETS */;
			}
			else
			{
				return "WT_V_SPACERKT" /* GXT: Rockets */;
			}
			break;
		case joaat("VEHICLE_WEAPON_PLAYER_LASER"):
			if (bParam1)
			{
				return "WTU_V_PLRLSR" /* GXT: LASER */;
			}
			else
			{
				return "WT_V_PLRLSR" /* GXT: Laser */;
			}
			break;
		case joaat("OBJECT"):
			if (bParam1)
			{
				return "WTU_OBJECT";
			}
			else
			{
				return "WT_OBJECT" /* GXT: Object */;
			}
			break;
		case joaat("GADGET_PARACHUTE"):
			if (bParam1)
			{
				return "WTU_PARA" /* GXT: PARACHUTE */;
			}
			else
			{
				return "WT_PARA" /* GXT: Parachute */;
			}
			break;
		case joaat("AMMO_RPG"):
			if (bParam1)
			{
				return "WTU_A_RPG" /* GXT: ROCKET */;
			}
			else
			{
				return "WT_A_RPG" /* GXT: Rocket */;
			}
			break;
		case joaat("AMMO_TANK"):
			if (bParam1)
			{
				return "WTU_A_TANK" /* GXT: TANK */;
			}
			else
			{
				return "WT_A_TANK" /* GXT: Tank */;
			}
			break;
		case joaat("AMMO_SPACE_ROCKET"):
			if (bParam1)
			{
				return "WTU_A_SPACERKT" /* GXT: ROCKET */;
			}
			else
			{
				return "WT_A_SPACERKT" /* GXT: Rocket */;
			}
			break;
		case joaat("AMMO_PLAYER_LASER"):
			if (bParam1)
			{
				return "WTU_A_PLRLSR" /* GXT: LASER */;
			}
			else
			{
				return "WT_A_PLRLSR" /* GXT: Laser */;
			}
			break;
		case joaat("AMMO_ENEMY_LASER"):
			if (bParam1)
			{
				return "WTU_A_ENMYLSR" /* GXT: LASER */;
			}
			else
			{
				return "WT_A_ENMYLSR" /* GXT: Laser */;
			}
			break;
		case joaat("WEAPON_KNIFE"):
			if (bParam1)
			{
				return "WTU_KNIFE" /* GXT: KNIFE */;
			}
			else
			{
				return "WT_KNIFE" /* GXT: Knife */;
			}
			break;
		case joaat("WEAPON_NIGHTSTICK"):
			if (bParam1)
			{
				return "WTU_NGTSTK" /* GXT: NIGHTSTICK */;
			}
			else
			{
				return "WT_NGTSTK" /* GXT: Nightstick */;
			}
			break;
		case joaat("WEAPON_HAMMER"):
			if (bParam1)
			{
				return "WTU_HAMMER" /* GXT: HAMMER */;
			}
			else
			{
				return "WT_HAMMER" /* GXT: Hammer */;
			}
			break;
		case joaat("WEAPON_BAT"):
			if (bParam1)
			{
				return "WTU_BAT" /* GXT: BASEBALL BAT */;
			}
			else
			{
				return "WT_BAT" /* GXT: Baseball Bat */;
			}
			break;
		case joaat("WEAPON_CROWBAR"):
			if (bParam1)
			{
				return "WTU_CROWBAR" /* GXT: CROWBAR */;
			}
			else
			{
				return "WT_CROWBAR" /* GXT: Crowbar */;
			}
			break;
		case joaat("WEAPON_GOLFCLUB"):
			if (bParam1)
			{
				return "WTU_GOLFCLUB" /* GXT: GOLF CLUB */;
			}
			else
			{
				return "WT_GOLFCLUB" /* GXT: Golf Club */;
			}
			break;
		case joaat("WEAPON_RAMMED_BY_CAR"):
			if (bParam1)
			{
				return "WTU_PIST" /* GXT: PISTOL */;
			}
			else
			{
				return "WT_PIST" /* GXT: Pistol */;
			}
			break;
		case joaat("WEAPON_RUN_OVER_BY_CAR"):
			if (bParam1)
			{
				return "WTU_PIST" /* GXT: PISTOL */;
			}
			else
			{
				return "WT_PIST" /* GXT: Pistol */;
			}
			break;
		case joaat("WEAPON_ASSAULTSMG"):
			if (bParam1)
			{
				return "WTU_SMG_ASL" /* GXT: ASSAULT SMG */;
			}
			else
			{
				return "WT_SMG_ASL" /* GXT: Assault SMG */;
			}
			break;
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			if (bParam1)
			{
				return "WTU_SG_BLP" /* GXT: BULLPUP SHOTGUN */;
			}
			else
			{
				return "WT_SG_BLP" /* GXT: Bullpup Shotgun */;
			}
			break;
		case joaat("WEAPON_PISTOL50"):
			if (bParam1)
			{
				return "WTU_PIST_50" /* GXT: PISTOL .50 */;
			}
			else
			{
				return "WT_PIST_50" /* GXT: Pistol .50 */;
			}
			break;
		case joaat("WEAPON_BOTTLE"):
			if (bParam1)
			{
				return "WTU_BOTTLE" /* GXT: BOTTLE */;
			}
			else
			{
				return "WT_BOTTLE" /* GXT: Bottle */;
			}
			break;
		case joaat("WEAPON_GUSENBERG"):
			if (bParam1)
			{
				return "WTU_GUSENBERG" /* GXT: GUSENBERG SWEEPER */;
			}
			else
			{
				return "WT_GUSENBERG" /* GXT: Gusenberg Sweeper */;
			}
			break;
		case joaat("WEAPON_SNSPISTOL"):
			if (bParam1)
			{
				return "WTU_SNSPISTOL" /* GXT: SNS PISTOL */;
			}
			else
			{
				return "WT_SNSPISTOL" /* GXT: SNS Pistol */;
			}
			break;
		default:
			if (__LIB_0__::func_289(iParam0, &Var0) != -1)
			{
				if (bParam1)
				{
					return __LIB_1__::func_601(&(Var0.f_31));
				}
				else
				{
					return __LIB_1__::func_601(&(Var0.f_7));
				}
			}
			break;
	}
	return "WT_INVALID" /* GXT: Invalid */;
}

void func_229(bool bParam0, bool bParam1)//Position - 0x590E5
{
	bParam0 = bParam0;
	if (bParam0)
	{
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	}
	if (Global_2883949 == 19)
	{
		__LIB_38__::func_657(0, 0);
	}
	else
	{
		__LIB_38__::func_657(1, 1);
	}
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 74 /*INPUT_VEH_HEADLIGHT*/);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 76 /*INPUT_VEH_HANDBRAKE*/);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 12 /*INPUT_WEAPON_WHEEL_UD*/);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 13 /*INPUT_WEAPON_WHEEL_LR*/);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 14 /*INPUT_WEAPON_WHEEL_NEXT*/);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 15 /*INPUT_WEAPON_WHEEL_PREV*/);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 16 /*INPUT_SELECT_NEXT_WEAPON*/);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 17 /*INPUT_SELECT_PREV_WEAPON*/);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/);
	if (bParam1)
	{
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(19);
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(16);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
}

void func_230(char* sParam0)//Position - 0x499
{
	AUDIO::TRIGGER_MUSIC_EVENT(sParam0);
}

void func_231(var uParam0)//Position - 0x5B1
{
	if (!AUDIO::HAS_SOUND_FINISHED(*uParam0))
	{
		AUDIO::STOP_SOUND(*uParam0);
	}
	AUDIO::RELEASE_SOUND_ID(*uParam0);
	*uParam0 = -1;
}

void func_232()//Position - 0x107F
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Local_134))
	{
		return;
	}
	if (Local_134.f_19 == 0)
	{
		return;
	}
	Local_134.f_19 = (NETWORK::GET_NETWORK_TIME_ACCURATE() - Local_134.f_19);
	STATS::PLAYSTATS_ARCADE_GAME(MISC::GET_HASH_KEY(&Local_134), Local_134.f_16, Local_134.f_17, Local_134.f_18, Local_134.f_19, Local_134.f_20, Local_134.f_21);
}

int func_233()//Position - 0x194D
{
	int iVar0;
	iVar0 = 199;
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		iVar0 = 201;
	}
	if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, iVar0))
	{
		return 1;
	}
	return 0;
}

struct<2> func_234(struct<2> Param0)//Position - 0x9922
{
	return __LIB_5__::func_403((Param0.f_0 * 1920f), (Param0.f_1 * 1080f));
}

int func_235(struct<2> Param0, struct<2> Param1)//Position - 0xA084
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	fVar0 = (Param0.f_0 - (Param1.f_0 / 2f));
	if (fVar0 > (1f - 0.15625f))
	{
		return 1;
	}
	fVar1 = (Param0.f_0 + (Param1.f_0 / 2f));
	if (fVar1 < 0.15625f)
	{
		return 1;
	}
	fVar2 = (Param0.f_1 - (Param1.f_1 / 2f));
	if (fVar2 > (1f - 0.06944444f))
	{
		return 1;
	}
	fVar3 = (Param0.f_1 + (Param1.f_1 / 2f));
	if (fVar3 < (0f + 0.06944444f))
	{
		return 1;
	}
	return 0;
}

float func_236(float fParam0, var uParam1)//Position - 0xB0EB
{
	return __LIB_0__::func_331(((fParam0 - 0.15625f) / 0.658333f), 0f, 1f);
}

void func_237(bool bParam0)//Position - 0x11CB0
{
	if (bParam0)
	{
		StringCopy(&Local_134, "Street Crime: Gang Wars Edition.", 64);
	}
	else
	{
		StringCopy(&Local_134, "Invade and Persuade II.", 64);
	}
	Local_134.f_16 = 0;
	Local_134.f_17 = 0;
	Local_134.f_18 = 0;
	Local_134.f_19 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	Local_134.f_20 = 0;
	Local_134.f_21 = 0;
}

int func_238(struct<2> Param0, struct<2> Param1, struct<2> Param2, struct<2> Param3, var uParam4)//Position - 0x102BF
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	struct<2> Var9;
	fVar0 = (Param1.f_1 - Param0.f_1);
	fVar1 = (Param0.f_0 - Param1.f_0);
	fVar2 = ((fVar0 * Param0.f_0) + (fVar1 * Param0.f_1));
	fVar3 = (Param3.f_1 - Param2.f_1);
	fVar4 = (Param2.f_0 - Param3.f_0);
	fVar5 = ((fVar3 * Param2.f_0) + (fVar4 * Param2.f_1));
	fVar6 = ((fVar0 * fVar4) - (fVar3 * fVar1));
	if (!__LIB_15__::func_817(fVar6, (0f - 0.0001f), (0f + 0.0001f)))
	{
		fVar7 = (((fVar4 * fVar2) - (fVar1 * fVar5)) / fVar6);
		fVar8 = (((fVar0 * fVar5) - (fVar3 * fVar2)) / fVar6);
		Var9 = { __LIB_5__::func_403(fVar7, fVar8) };
		if (((((((__LIB_1__::func_712((Param0.f_0 - 0.001f), (Param1.f_0 - 0.001f)) <= Var9.f_0 && Var9.f_0 <= __LIB_3__::func_480((Param0.f_0 + 0.001f), (Param1.f_0 + 0.001f))) && __LIB_1__::func_712((Param0.f_1 - 0.001f), (Param1.f_1 - 0.001f)) <= Var9.f_1) && Var9.f_1 <= __LIB_3__::func_480((Param0.f_1 + 0.001f), (Param1.f_1 + 0.001f))) && __LIB_1__::func_712((Param2.f_0 - 0.001f), (Param3.f_0 - 0.001f)) <= Var9.f_0) && Var9.f_0 <= __LIB_3__::func_480((Param2.f_0 + 0.001f), (Param3.f_0 + 0.001f))) && __LIB_1__::func_712((Param2.f_1 - 0.001f), (Param3.f_1 - 0.001f)) <= Var9.f_1) && Var9.f_1 <= __LIB_3__::func_480((Param2.f_1 + 0.001f), (Param3.f_1 + 0.001f)))
		{
			*uParam4 = { Var9 };
			return 1;
		}
	}
	*uParam4 = { __LIB_5__::func_403(3.402823E+38f, 3.402823E+38f) };
	return 0;
}

bool func_239()//Position - 0x6F0F1
{
	return Global_2714762.f_687;
}

void func_240(int iParam0)//Position - 0x736AC
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&(Global_2815059.f_4660), 27);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_4660), 27);
	}
}

bool func_241()//Position - 0x74E46
{
	return Global_2715699.f_1.f_2827;
}

bool func_242()//Position - 0x1B0033
{
	return BitTest(Global_2714762, 0);
}

int func_243()//Position - 0x1B0053
{
	if (__LIB_1__::func_16())
	{
		__LIB_2__::func_235();
	}
	if (Global_2715699.f_1.f_2800)
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_TRANSITION_STARTED())
	{
		if (NETWORK::NETWORK_IS_TRANSITION_BUSY())
		{
			return 0;
		}
		else
		{
			NETWORK::NETWORK_LEAVE_TRANSITION();
			Global_2715699.f_1.f_2800 = 1;
			return 1;
		}
	}
	return 1;
}

void func_244()//Position - 0x1B00DB
{
	MISC::CLEAR_BIT(&(Global_2714762.f_2), 16);
}

bool func_245(int iParam0)//Position - 0x1B0103
{
	return BitTest(Global_1853348[iParam0 /*834*/].f_36.f_18, 5);
}

void func_246(var uParam0)//Position - 0x1B0179
{
	struct<4> Var0;
	*uParam0 = { Var0 };
}

int func_247()//Position - 0x1B0B69
{
	return Global_2621446.f_69.f_4;
}

void func_248(int iParam0)//Position - 0x1B0F83
{
	Global_1937518.f_46 = iParam0;
}

void func_249()//Position - 0x1B2D24
{
	Global_1937518.f_42 = 0;
}

void func_250(bool bParam0)//Position - 0x1B36DD
{
	int iVar0;
	if (Global_1931975.f_1705 != -1)
	{
		__LIB_3__::func_122(&(Global_1931975.f_1705));
	}
	if ((__LIB_0__::func_1("HEIST_PRE_VIEW" /* GXT: Press ~INPUT_CONTEXT~ to view the Heist Planning Board. */) || __LIB_0__::func_1("HEIST_PRE_DONE" /* GXT: Press ~INPUT_CONTEXT~ to start Heist Finale. */)) || __LIB_0__::func_1("HEIST_NOTE_2" /* GXT: Grayed out Setup Missions on the Planning Board cannot be started until all previous Setup Missions have been completed. */))
	{
		HUD::CLEAR_HELP(true);
	}
	if (Global_1931975.f_1705 != -1)
	{
		__LIB_3__::func_122(&(Global_1931975.f_1705));
	}
	__LIB_27__::func_483(0);
	if (Global_2666788.f_17 != -1)
	{
		__LIB_3__::func_122(&(Global_2666788.f_17));
	}
	__LIB_25__::func_365(-1);
	Global_16 = 0;
	Global_1931975.f_1705 = -1;
	Global_1931975.f_1663 = 0;
	StringCopy(&(Global_1931975.f_1787), "", 24);
	Global_1931975.f_1708 = -1;
	Global_1931975.f_1706 = 0;
	Global_1931975.f_1711 = 0;
	Global_1931975.f_1751 = 0;
	Global_1931975.f_1754 = 0;
	Global_1931975.f_1761 = 0;
	Global_1931975.f_1763 = 0;
	Global_1931975.f_1777 = 0;
	Global_1931975.f_1785 = 0;
	Global_1931975.f_1714 = 0;
	Global_1931975.f_1715 = 0;
	Global_1931975.f_1716 = 0;
	Global_1931975.f_1702 = 0;
	Global_1931975.f_1704 = 0;
	Global_1931975.f_1710 = -1;
	__LIB_11__::func_684(&(Global_1931975.f_1610), 1, 1);
	__LIB_28__::func_544();
	__LIB_28__::func_543(0);
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (bParam0)
		{
			Global_1931975.f_1720[iVar0] = -1;
		}
		Global_1931975.f_1736[iVar0] = 0;
		Global_1931975.f_1736[iVar0] = 0;
		Global_1931975.f_1728[iVar0] = -1;
		if (Global_1931975.f_1574[iVar0 /*5*/] != 0)
		{
			NETWORK::TEXTURE_DOWNLOAD_RELEASE(Global_1931975.f_1574[iVar0 /*5*/]);
		}
		NETWORK::UGC_RELEASE_CACHED_DESCRIPTION(Global_1931975.f_111[iVar0 /*204*/].f_43);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1931975.f_1744 - 1))
	{
		Global_1931975.f_1744[iVar0] = 0;
		iVar0++;
	}
	if (Global_1931975.f_1705 != -1)
	{
		__LIB_3__::func_122(&(Global_1931975.f_1705));
	}
	__LIB_27__::func_483(0);
	__LIB_27__::func_484(&(Global_1931975.f_1663), 99, 0);
	if (__LIB_18__::func_76() && !Global_1931426)
	{
		__LIB_28__::func_542();
	}
	if (__LIB_28__::func_541())
	{
		__LIB_27__::func_449(0);
	}
	Global_1883784[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*77*/].f_10 = 0;
	__LIB_28__::func_540(&(Global_1931975.f_3));
	__LIB_34__::func_342();
	__LIB_28__::func_538();
	__LIB_28__::func_537(&(Global_1931975.f_1610));
	__LIB_25__::func_146(&(Global_1931975.f_1663));
	__LIB_28__::func_536(&(Global_1931975.f_1670));
	__LIB_28__::func_535();
	__LIB_19__::func_167(&(Global_1931975.f_1696));
	__LIB_28__::func_534();
	__LIB_28__::func_533(0);
	__LIB_28__::func_532();
	__LIB_28__::func_531(0);
	__LIB_28__::func_530(0);
	__LIB_28__::func_529(0);
	__LIB_28__::func_528(0);
	__LIB_28__::func_527(0);
	__LIB_28__::func_526(0);
	__LIB_28__::func_525(0);
	if (__LIB_28__::func_541())
	{
		__LIB_27__::func_449(0);
	}
	if (__LIB_28__::func_524())
	{
		__LIB_28__::func_523(0);
	}
	__LIB_34__::func_341(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_1937518.f_1));
	Global_1883784[PLAYER::PLAYER_ID() /*77*/].f_14 = 0;
	Global_2715699.f_6314 = 0;
}

int func_251()//Position - 0x56E
{
	return joaat("MP_M_Freemode_01");
}

int func_252(bool bParam0)//Position - 0x5A9E
{
	if (!__LIB_0__::func_374(bParam0))
	{
		return 7;
	}
	return Global_113386.f_7688.f_919[bParam0];
}

void func_253()//Position - 0x7202C
{
	Global_2667225.f_665 = 1;
	__LIB_10__::func_253(0);
}

void func_254(int iParam0)//Position - 0x734C0
{
	Global_2725360 = iParam0;
}

bool func_255()//Position - 0x741E9
{
	return Global_1575060;
}

var func_256()//Position - 0x74331
{
	return Global_1575056;
}

void func_257(int iParam0)//Position - 0x74875
{
	Global_1575058 = iParam0;
}

void func_258(int iParam0)//Position - 0x74883
{
	Global_1575031 = iParam0;
}

void func_259()//Position - 0x74891
{
	Global_1574654.f_1 = -1;
	Global_1574654.f_2 = 0;
	Global_1574654.f_4 = 0;
	Global_1574654.f_5 = 0;
}

void func_260(int iParam0)//Position - 0x748B5
{
	Global_1574531 = iParam0;
}

void func_261(int iParam0)//Position - 0x748D1
{
	Global_2725337 = iParam0;
}

void func_262(bool bParam0)//Position - 0x749FA
{
	if (bParam0)
	{
		if (Global_2726701 == 0)
		{
			STREAMING::PREFETCH_SRL("GTAO_INTRO_MALE");
			STREAMING::SET_SRL_LONG_JUMP_MODE(true);
			Global_2726701 = 1;
		}
	}
	else if (Global_2726701 == 1)
	{
		if (STREAMING::IS_SRL_LOADED())
		{
			STREAMING::END_SRL();
		}
		Global_2726701 = 0;
	}
}

void func_263(int iParam0)//Position - 0x74A49
{
	Global_2725909 = iParam0;
}

void func_264(int iParam0)//Position - 0x74A73
{
	Global_2725389 = iParam0;
}

void func_265(int iParam0)//Position - 0x74A9D
{
	Global_2727742 = iParam0;
}

void func_266(int iParam0)//Position - 0x74AD5
{
	Global_1574537 = iParam0;
}

void func_267(int iParam0)//Position - 0x74AE3
{
	Global_2725402 = iParam0;
}

void func_268(int iParam0)//Position - 0x74AF1
{
	Global_1575022 = iParam0;
}

void func_269(int iParam0)//Position - 0x74B6F
{
	Global_1575028 = iParam0;
}

void func_270(int iParam0)//Position - 0x74B8B
{
	Global_1574613 = iParam0;
}

void func_271(int iParam0)//Position - 0x74B99
{
	Global_1575055 = iParam0;
}

void func_272(int iParam0)//Position - 0x74BA7
{
	Global_2727714 = iParam0;
}

void func_273(int iParam0)//Position - 0x74BB5
{
	Global_2727713 = iParam0;
}

void func_274(int iParam0)//Position - 0x74CCB
{
	if (iParam0 && !AUDIO::IS_AUDIO_SCENE_ACTIVE("SWITCH_TO_MP_SCENE"))
	{
		AUDIO::START_AUDIO_SCENE("SWITCH_TO_MP_SCENE");
	}
	else if (iParam0 == 0 && AUDIO::IS_AUDIO_SCENE_ACTIVE("SWITCH_TO_MP_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("SWITCH_TO_MP_SCENE");
	}
}

void func_275(int iParam0)//Position - 0x74D12
{
	Global_2725428 = iParam0;
}

void func_276(int iParam0)//Position - 0x74D20
{
	Global_1575064 = iParam0;
}

void func_277()//Position - 0x74D2E
{
	Global_1574612 = 0;
}

void func_278(int iParam0)//Position - 0x74D84
{
	Global_2725422 = iParam0;
}

void func_279(int iParam0)//Position - 0x74DDF
{
	Global_2725339 = iParam0;
}

void func_280()//Position - 0x74F05
{
	Global_1575043 = 0;
}

void func_281(int iParam0)//Position - 0x75014
{
	Global_2725359 = iParam0;
}

int func_282()//Position - 0x77316
{
	if (Global_1575046)
	{
		return 1;
	}
	return 0;
}

int func_283()//Position - 0x774EE
{
	return Global_2726955;
}

void func_284(int iParam0)//Position - 0x78F31
{
	if (iParam0 && !AUDIO::IS_AUDIO_SCENE_ACTIVE("MP_MENU_SCENE"))
	{
		AUDIO::START_AUDIO_SCENE("MP_MENU_SCENE");
	}
	else if (iParam0 == 0 && AUDIO::IS_AUDIO_SCENE_ACTIVE("MP_MENU_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("MP_MENU_SCENE");
	}
}

void func_285()//Position - 0x790E2
{
	Global_1931899.f_1 = 0;
}

int func_286()//Position - 0x79129
{
	return Global_2727894;
}

void func_287(int iParam0)//Position - 0x79143
{
	Global_2727719 = iParam0;
}

void func_288()//Position - 0x79245
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Global_1575086[iVar0] = 0;
		iVar0++;
	}
}

var func_289()//Position - 0x7938E
{
	return Global_2725413;
}

bool func_290()//Position - 0x79443
{
	return Global_1574529;
}

void func_291(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4)//Position - 0x7AE36
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, true) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam0, 0, 1))
		{
			ENTITY::IS_ENTITY_DEAD(iParam0, false);
			Var0 = { PED::GET_PED_BONE_COORDS(iParam1, 57005, 0f, 0f, 0f) };
			Var1 = { PED::GET_PED_BONE_COORDS(iParam1, 28252, 0f, 0f, 0f) };
			Var2 = { __LIB_0__::func_79(Var0 - Var1) * FtoV((fParam3 / 2f)) };
			Var3 = { 0f, 0f, 0f };
			WEAPON::GET_PED_LAST_WEAPON_IMPACT_COORD(iParam0, &Var3);
			if (!PED::IS_PED_INJURED(iParam0))
			{
				PED::SET_PED_TO_RAGDOLL(iParam0, 0, 2000, 2, false, false, false);
			}
			ENTITY::APPLY_FORCE_TO_ENTITY(iParam0, 3, Var2, Var3, 0, false, false, true, false, true);
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iParam0);
			WEAPON::CLEAR_ENTITY_LAST_WEAPON_DAMAGE(iParam0);
			if (bParam2)
			{
				ENTITY::SET_ENTITY_HEALTH(iParam0, 0, 0);
			}
			else if (iParam4 != 0)
			{
				PED::APPLY_DAMAGE_TO_PED(iParam0, iParam4, false, 0);
			}
		}
	}
}

void func_292(int iParam0)//Position - 0x7B0E1
{
	struct<5> Var0;
	FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_REPLAY_M_BERD_0_0"), &Var0);
	PED::SET_PED_COMPONENT_VARIATION(iParam0, 1, Var0.f_3, Var0.f_4, 0);
	FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_REPLAY_M_JBIB_0_0"), &Var0);
	PED::SET_PED_COMPONENT_VARIATION(iParam0, 11, Var0.f_3, Var0.f_4, 0);
	FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_REPLAY_M_TORSO_0_0"), &Var0);
	PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, Var0.f_3, Var0.f_4, 0);
	PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, 1, 5, 0);
	PED::SET_PED_COMPONENT_VARIATION(iParam0, 6, 0, 10, 0);
	PED::SET_PED_COMPONENT_VARIATION(iParam0, 7, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 15, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iParam0, 9, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, 0);
}

var func_293(int iParam0, bool bParam1)//Position - 0x3A92
{
	return __LIB_1__::func_68(iParam0, bParam1, 0);
}

void func_294()//Position - 0x74D3B
{
	Global_2725364 = 0;
	Global_2725365 = 0;
	Global_2725367 = 0;
	__LIB_0__::func_794(&Global_2725368);
}

void func_295()//Position - 0x7809C
{
	__LIB_37__::func_134(0);
	__LIB_37__::func_649(0, 1);
	Global_1575069 = 0;
	__LIB_18__::func_331(0);
	__LIB_27__::func_502(0);
	NETWORK::NETWORK_SESSION_FORCE_CANCEL_INVITE();
	__LIB_37__::func_481();
	__LIB_5__::func_940(1);
	__LIB_10__::func_309();
	__LIB_37__::func_133(0);
}

int func_296()//Position - 0x780D4
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	if (__LIB_10__::func_437(201))
	{
		MISC::SET_BIT(&Global_1574939, 0);
	}
	if (BitTest(Global_1574939, 0))
	{
		if (__LIB_10__::func_212(201))
		{
			MISC::CLEAR_BIT(&Global_1574939, 0);
			Global_1577854 = 0;
			__LIB_13__::func_744(24, 0, -1);
			return 1;
		}
	}
	sVar0 = "HUD_CONNPROB" /* GXT: alert */;
	sVar1 = "HUD_PERM" /* GXT: Your profile does not have the correct permissions to access Social Club functionality. */;
	sVar2 = "HUD_RETURNSP" /* GXT: Return to Grand Theft Auto V */;
	__LIB_27__::func_971();
	HUD::SET_WARNING_MESSAGE_WITH_HEADER(sVar0, sVar1, 16384, sVar2, false, -1, 0, 0, true, 0);
	return 0;
}

int func_297()//Position - 0x78147
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	if (__LIB_10__::func_437(201))
	{
		MISC::SET_BIT(&Global_1574939, 0);
	}
	if (__LIB_10__::func_437(202))
	{
		MISC::SET_BIT(&Global_1574939, 0);
	}
	if (BitTest(Global_1574939, 0))
	{
		if (__LIB_10__::func_212(201))
		{
			MISC::CLEAR_BIT(&Global_1574939, 0);
			Global_1577854 = 0;
			__LIB_13__::func_744(44, 0, -1);
			STATS::PLAYSTATS_BAN_ALERT(1);
			return 1;
		}
	}
	sVar0 = "HUD_CONNPROB" /* GXT: alert */;
	sVar1 = "HUD_MODINSTAL" /* GXT: You are attempting to access GTA Online servers with an altered version of the game. */;
	sVar2 = "HUD_RETURNSP" /* GXT: Return to Grand Theft Auto V */;
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(0);
	}
	__LIB_27__::func_971();
	HUD::SET_WARNING_MESSAGE_WITH_HEADER(sVar0, sVar1, 16384, sVar2, false, -1, 0, 0, true, 0);
	return 0;
}

int func_298()//Position - 0x781F1
{
	char* sVar0;
	char* sVar1;
	if (__LIB_10__::func_437(201))
	{
		MISC::SET_BIT(&Global_1574939, 0);
	}
	if (PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED() == 0)
	{
		if (BitTest(Global_1574939, 0))
		{
			if (__LIB_10__::func_212(201))
			{
				MISC::CLEAR_BIT(&Global_1574939, 0);
				Global_1577854 = 0;
				__LIB_13__::func_744(25, 0, -1);
				__LIB_13__::func_744(37, 0, -1);
				__LIB_13__::func_744(45, 0, -1);
				return 1;
			}
		}
	}
	if (NETWORK::NETWORK_HAVE_PLATFORM_SUBSCRIPTION() == 1)
	{
		return 1;
	}
	if (DLC::GET_IS_LOADING_SCREEN_ACTIVE())
	{
		if (__LIB_1__::func_584())
		{
			SCRIPT::SHUTDOWN_LOADING_SCREEN();
		}
	}
	sVar0 = "HUD_CONNPROB" /* GXT: alert */;
	sVar1 = "HUD_XBGOLD";
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(0);
	}
	__LIB_27__::func_971();
	if (PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED() == 0)
	{
		HUD::SET_WARNING_MESSAGE_WITH_HEADER(sVar0, sVar1, 16384, 0, false, -1, 0, 0, true, 0);
	}
	else
	{
		GRAPHICS::DRAW_RECT(0f, 0f, 1f, 1f, 0, 0, 0, 255, false);
	}
	return 0;
}

int func_299()//Position - 0x782DC
{
	char* sVar0;
	char* sVar1;
	if (__LIB_10__::func_437(201))
	{
		MISC::SET_BIT(&Global_1574939, 0);
	}
	if (PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED() == 0)
	{
		if (BitTest(Global_1574939, 0))
		{
			if (__LIB_10__::func_212(201))
			{
				MISC::CLEAR_BIT(&Global_1574939, 0);
				Global_1577854 = 0;
				__LIB_13__::func_744(25, 0, -1);
				__LIB_13__::func_744(37, 0, -1);
				__LIB_13__::func_744(45, 0, -1);
				return 1;
			}
		}
	}
	if (NETWORK::NETWORK_HAVE_PLATFORM_SUBSCRIPTION() == 1)
	{
		return 1;
	}
	if (DLC::GET_IS_LOADING_SCREEN_ACTIVE())
	{
		if (__LIB_1__::func_584())
		{
			SCRIPT::SHUTDOWN_LOADING_SCREEN();
		}
	}
	sVar0 = "HUD_CONNPROB" /* GXT: alert */;
	sVar1 = "HUD_PSPLUS" /* GXT: You need PlayStation®Plus membership to access GTA Online. */;
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(0);
	}
	__LIB_27__::func_971();
	if (NETWORK::NETWORK_IS_SHOWING_SYSTEM_UI_OR_RECENTLY_REQUESTED_UPSELL() == 0)
	{
		HUD::SET_WARNING_MESSAGE_WITH_HEADER(sVar0, sVar1, 16384, 0, false, -1, 0, 0, true, 0);
	}
	else
	{
		GRAPHICS::DRAW_RECT(0f, 0f, 1f, 1f, 0, 0, 0, 255, false);
	}
	return 0;
}

int func_300()//Position - 0x783A2
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	if (__LIB_10__::func_437(201))
	{
		MISC::SET_BIT(&Global_1574939, 0);
	}
	if (BitTest(Global_1574939, 0))
	{
		if (__LIB_10__::func_212(201))
		{
			MISC::CLEAR_BIT(&Global_1574939, 0);
			return 1;
		}
	}
	sVar0 = "HUD_CONNPROB" /* GXT: alert */;
	sVar1 = "HUD_CLOUDFAILMSG" /* GXT: Unable to connect to Rockstar game services.  Please check your network connection and see ~HUD_COLOUR_SOCIAL_CLUB~www.rockstargames.com/support~s~ for information about outages and maintenance schedules. */;
	sVar2 = "HUD_SPRETRNFRSH" /* GXT: Please return to Grand Theft Auto V. */;
	if (__LIB_0__::func_236() != 4)
	{
		__LIB_27__::func_971();
	}
	HUD::SET_WARNING_MESSAGE_WITH_HEADER(sVar0, sVar1, 2, sVar2, false, -1, 0, 0, true, 0);
	return 0;
}

struct<8> func_301(var uParam0)//Position - 0x78592
{
	struct<8> Var0;
	struct<8> Var1;
	StringCopy(&Var1, __LIB_37__::func_495(uParam0->f_1), 32);
	switch (LOCALIZATION::GET_CURRENT_LANGUAGE())
	{
		case 5:
			StringCopy(&Var1, __LIB_37__::func_494(uParam0->f_1), 32);
			IntToString(&Var0, uParam0->f_2, 32);
			StringConCat(&Var0, " ", 32);
			StringConCat(&Var0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("POSTDAYCHAR"), 32);
			StringConCat(&Var0, " ", 32);
			StringConCat(&Var0, &Var1, 32);
			StringConCat(&Var0, " ", 32);
			StringConCat(&Var0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("POSTMONTHCHAR"), 32);
			StringConCat(&Var0, " ", 32);
			StringIntConCat(&Var0, *uParam0, 32);
			break;
		case 9:
		case 12:
			IntToString(&Var0, *uParam0, 32);
			StringConCat(&Var0, " ", 32);
			StringConCat(&Var0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("POSTYEARCHAR"), 32);
			StringConCat(&Var0, " ", 32);
			StringConCat(&Var0, &Var1, 32);
			StringConCat(&Var0, " ", 32);
			StringIntConCat(&Var0, uParam0->f_2, 32);
			StringConCat(&Var0, " ", 32);
			StringConCat(&Var0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("POSTDAYCHAR"), 32);
			break;
		case 1:
			StringCopy(&Var1, __LIB_37__::func_494(uParam0->f_1), 32);
			IntToString(&Var0, uParam0->f_2, 32);
			if (uParam0->f_2 == 1)
			{
				StringConCat(&Var0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("POSTDAYCHAR"), 32);
			}
			StringConCat(&Var0, " ", 32);
			StringConCat(&Var0, &Var1, 32);
			StringConCat(&Var0, " ", 32);
			StringIntConCat(&Var0, *uParam0, 32);
			break;
		case 2:
			IntToString(&Var0, uParam0->f_2, 32);
			StringConCat(&Var0, ". ", 32);
			StringConCat(&Var0, &Var1, 32);
			StringConCat(&Var0, " ", 32);
			StringIntConCat(&Var0, *uParam0, 32);
			break;
		case 3:
			StringCopy(&Var1, __LIB_37__::func_494(uParam0->f_1), 32);
			IntToString(&Var0, uParam0->f_2, 32);
			StringConCat(&Var0, " ", 32);
			StringConCat(&Var0, &Var1, 32);
			StringConCat(&Var0, " ", 32);
			StringIntConCat(&Var0, *uParam0, 32);
			break;
		case 10:
			IntToString(&Var0, *uParam0, 32);
			StringConCat(&Var0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("POSTYEARCHAR"), 32);
			StringConCat(&Var0, " ", 32);
			StringConCat(&Var0, &Var1, 32);
			StringConCat(&Var0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("POSTMONTHCHAR"), 32);
			StringConCat(&Var0, " ", 32);
			StringIntConCat(&Var0, uParam0->f_2, 32);
			StringConCat(&Var0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("POSTDAYCHAR"), 32);
			break;
		case 8:
			IntToString(&Var0, *uParam0, 32);
			StringConCat(&Var0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("POSTYEARCHAR"), 32);
			StringConCat(&Var0, " ", 32);
			StringConCat(&Var0, &Var1, 32);
			StringConCat(&Var0, " ", 32);
			StringIntConCat(&Var0, uParam0->f_2, 32);
			StringConCat(&Var0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("POSTDAYCHAR"), 32);
			break;
		case 11:
			StringCopy(&Var1, __LIB_37__::func_494(uParam0->f_1), 32);
			IntToString(&Var0, uParam0->f_2, 32);
			StringConCat(&Var0, " ", 32);
			StringConCat(&Var0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("POSTDAYCHAR"), 32);
			StringConCat(&Var0, " ", 32);
			StringConCat(&Var0, &Var1, 32);
			StringConCat(&Var0, " ", 32);
			StringConCat(&Var0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("POSTMONTHCHAR"), 32);
			StringConCat(&Var0, " ", 32);
			StringIntConCat(&Var0, *uParam0, 32);
			break;
		case 6:
			StringCopy(&Var1, __LIB_37__::func_494(uParam0->f_1), 32);
			IntToString(&Var0, uParam0->f_2, 32);
			StringConCat(&Var0, " ", 32);
			StringConCat(&Var0, &Var1, 32);
			StringConCat(&Var0, " ", 32);
			StringIntConCat(&Var0, *uParam0, 32);
			break;
		case 7:
			StringCopy(&Var1, __LIB_37__::func_494(uParam0->f_1), 32);
			IntToString(&Var0, uParam0->f_2, 32);
			StringConCat(&Var0, " ", 32);
			StringConCat(&Var0, &Var1, 32);
			StringConCat(&Var0, " ", 32);
			StringIntConCat(&Var0, *uParam0, 32);
			StringConCat(&Var0, " ", 32);
			StringConCat(&Var0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("POSTYEARCHAR"), 32);
			break;
		case 4:
			StringCopy(&Var1, __LIB_37__::func_494(uParam0->f_1), 32);
			IntToString(&Var0, uParam0->f_2, 32);
			StringConCat(&Var0, " ", 32);
			StringConCat(&Var0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("POSTDAYCHAR"), 32);
			StringConCat(&Var0, " ", 32);
			StringConCat(&Var0, &Var1, 32);
			StringConCat(&Var0, " ", 32);
			StringConCat(&Var0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("POSTMONTHCHAR"), 32);
			StringConCat(&Var0, " ", 32);
			StringIntConCat(&Var0, *uParam0, 32);
			break;
		case 0:
			Var0 = { Var1 };
			StringConCat(&Var0, " ", 32);
			StringIntConCat(&Var0, uParam0->f_2, 32);
			StringConCat(&Var0, " ", 32);
			StringIntConCat(&Var0, *uParam0, 32);
			break;
		default:
			Var0 = { Var1 };
			StringConCat(&Var0, " ", 32);
			StringIntConCat(&Var0, uParam0->f_2, 32);
			StringConCat(&Var0, " ", 32);
			StringIntConCat(&Var0, *uParam0, 32);
			break;
	}
	return Var0;
}

int func_302()//Position - 0x78A68
{
	char* sVar0;
	char* sVar1;
	if (__LIB_10__::func_437(201))
	{
		MISC::SET_BIT(&Global_1574939, 0);
	}
	if (BitTest(Global_1574939, 0))
	{
		if (__LIB_10__::func_212(201))
		{
			MISC::CLEAR_BIT(&Global_1574939, 0);
			Global_1577854 = 0;
			__LIB_13__::func_744(27, 0, -1);
			return 1;
		}
	}
	sVar0 = "HUD_CONNPROB" /* GXT: alert */;
	sVar1 = "HUD_SYSTUPD" /* GXT: The system requires an update to access Grand Theft Auto Online. */;
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(0);
	}
	__LIB_27__::func_971();
	HUD::SET_WARNING_MESSAGE_WITH_HEADER(sVar0, sVar1, 16384, 0, false, -1, 0, 0, true, 0);
	return 0;
}

int func_303()//Position - 0x78ADF
{
	char* sVar0;
	char* sVar1;
	if (__LIB_10__::func_437(201))
	{
		MISC::SET_BIT(&Global_1574939, 0);
	}
	if (BitTest(Global_1574939, 0))
	{
		if (__LIB_10__::func_212(201))
		{
			MISC::CLEAR_BIT(&Global_1574939, 0);
			Global_1577854 = 0;
			__LIB_13__::func_744(26, 0, -1);
			return 1;
		}
	}
	sVar0 = "HUD_CONNPROB" /* GXT: alert */;
	sVar1 = "HUD_GAMEUPD" /* GXT: The game requires an update to access Grand Theft Auto Online. */;
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(0);
	}
	__LIB_27__::func_971();
	HUD::SET_WARNING_MESSAGE_WITH_HEADER(sVar0, sVar1, 16384, 0, false, -1, 0, 0, true, 0);
	return 0;
}

int func_304()//Position - 0x78B56
{
	char* sVar0;
	char* sVar1;
	if (__LIB_10__::func_437(201))
	{
		MISC::SET_BIT(&Global_1574939, 0);
	}
	if (BitTest(Global_1574939, 0))
	{
		if (__LIB_10__::func_212(201))
		{
			MISC::CLEAR_BIT(&Global_1574939, 0);
			Global_1577854 = 0;
			__LIB_13__::func_744(25, 0, -1);
			return 1;
		}
	}
	sVar0 = "HUD_CONNPROB" /* GXT: alert */;
	sVar1 = "HUD_PROFILECHNG" /* GXT: Please change to a profile with correct permissions. */;
	__LIB_27__::func_971();
	HUD::SET_WARNING_MESSAGE_WITH_HEADER(sVar0, sVar1, 16384, 0, false, -1, 0, 0, true, 0);
	return 0;
}

int func_305()//Position - 0x78BC1
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	if (__LIB_10__::func_437(201))
	{
		MISC::SET_BIT(&Global_1574939, 0);
	}
	if (BitTest(Global_1574939, 0))
	{
		if (__LIB_10__::func_212(201))
		{
			MISC::CLEAR_BIT(&Global_1574939, 0);
			Global_1577854 = 0;
			__LIB_13__::func_744(46, 0, -1);
			return 1;
		}
	}
	sVar0 = "HUD_CONNPROB" /* GXT: alert */;
	sVar1 = "HUD_PERM" /* GXT: Your profile does not have the correct permissions to access Social Club functionality. */;
	sVar2 = "HUD_RETURNSP" /* GXT: Return to Grand Theft Auto V */;
	__LIB_27__::func_971();
	HUD::SET_WARNING_MESSAGE_WITH_HEADER(sVar0, sVar1, 16384, sVar2, false, -1, 0, 0, true, 0);
	return 0;
}

int func_306(bool bParam0, bool bParam1)//Position - 0x78CFD
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	if (Global_1574938 == -2)
	{
		bParam1 = false;
	}
	if (!PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED() || bParam1 == 0)
	{
		if (__LIB_0__::func_937(&Global_1577859, 3000, 0) || bParam1 == 0)
		{
			if (bParam0)
			{
				MISC::SET_GAME_PAUSED(true);
			}
			if (!NETWORK::NETWORK_IS_SIGNED_ONLINE() || bParam1 == 0)
			{
				if (__LIB_10__::func_437(201))
				{
					MISC::SET_BIT(&Global_1574939, 0);
				}
				if (BitTest(Global_1574939, 0))
				{
					if (__LIB_10__::func_212(201))
					{
						MISC::CLEAR_BIT(&Global_1574939, 0);
						Global_1574938 = -1;
						__LIB_1__::func_863(0);
						__LIB_0__::func_794(&Global_1577859);
						Global_1577854 = 0;
						__LIB_13__::func_744(13, 0, -1);
						return 1;
					}
				}
				sVar0 = "HUD_CONNPROB" /* GXT: alert */;
				sVar1 = "HUD_CONNT" /* GXT: Sign in to Social Club to play GTA Online. */;
				if (__LIB_0__::func_52())
				{
					sVar1 = "HUD_CONNTPS4SI" /* GXT: You are signed out of PlayStation™Network, you will be unable to access network features until you sign back in. */;
				}
				if (__LIB_0__::func_52() && NETWORK::NETWORK_IS_CABLE_CONNECTED() == 0)
				{
					sVar1 = "HUD_PLUGPU" /* GXT: Internet connection has been lost, re-establish connection to play GTA Online. */;
				}
				sVar2 = "HUD_RETURNSP" /* GXT: Return to Grand Theft Auto V */;
				__LIB_27__::func_971();
				HUD::SET_WARNING_MESSAGE_WITH_HEADER(sVar0, sVar1, 2, sVar2, false, -1, 0, 0, true, 0);
			}
			else if (bParam1)
			{
				__LIB_10__::func_305();
				__LIB_25__::func_188();
				__LIB_10__::func_304(0);
				__LIB_1__::func_863(0);
				Global_1574938 = -1;
				Global_1577854 = 0;
				__LIB_13__::func_744(13, 0, -1);
				return 2;
			}
		}
		else if (bParam0)
		{
			MISC::SET_GAME_PAUSED(false);
		}
	}
	return 0;
}

void func_307(int iParam0)//Position - 0xC11B
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		__LIB_17__::func_919(iParam0, iVar0);
		iVar0++;
	}
}

void func_308()//Position - 0x734FE
{
	if (!__LIB_25__::func_147())
	{
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	}
	__LIB_0__::func_985();
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(1);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(4);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
	if (!__LIB_25__::func_147())
	{
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(15);
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(11);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(12);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
	HUD::HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(19);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(4);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(5);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
	if (__LIB_37__::func_632())
	{
		__LIB_37__::func_631(1);
	}
	__LIB_1__::func_33(0);
	PAD::STOP_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/);
	HUD::DISABLE_FRONTEND_THIS_FRAME();
	if (__LIB_1__::func_584())
	{
		HUD::DISPLAY_HUD_WHEN_PAUSED_THIS_FRAME();
	}
	HUD::DISPLAY_HUD_WHEN_NOT_IN_STATE_OF_PLAY_THIS_FRAME();
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (STREAMING::GET_PLAYER_SWITCH_TYPE() != 3)
		{
			if (STREAMING::GET_PLAYER_SWITCH_STATE() > 2)
			{
				PLAYER::SET_ALL_NEUTRAL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
			}
		}
	}
	if (HUD::PAUSE_MENU_IS_CONTEXT_ACTIVE(joaat("RETURN_TO_MENU")))
	{
		__LIB_1__::func_10(1);
	}
}

void func_309()//Position - 0x74DED
{
	Global_1575043 = 1;
	__LIB_37__::func_152(0);
}

int func_310()//Position - 0x77345
{
	if (((((__LIB_1__::func_894() == 0 || __LIB_17__::func_55(0) == 0) || __LIB_37__::func_650() == 0) || __LIB_37__::func_650() == 0) || __LIB_0__::func_109() == 0) || __LIB_16__::func_658() == 0)
	{
		if (__LIB_16__::func_658() == 0)
		{
			return 6;
		}
		else if (__LIB_1__::func_894() == 0)
		{
			return 1;
		}
		else if (__LIB_17__::func_55(0))
		{
			return 2;
		}
		else if (__LIB_37__::func_650())
		{
			return 3;
		}
		else if (__LIB_37__::func_650())
		{
			return 4;
		}
		else if (__LIB_0__::func_109())
		{
			return 5;
		}
	}
	return 0;
}

void func_311(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0xC850
{
	int iVar0;
	int iVar1;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = __LIB_13__::func_716(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			__LIB_14__::func_626(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			__LIB_14__::func_625(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
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

var func_312(float fParam0)//Position - 0x4FCF
{
	if (__LIB_37__::func_699())
	{
		if (__LIB_37__::func_698() < Global_262145.f_13167 /* Tunable: GB_BOSS_STAT_BOOST_MAX_RANK */)
		{
			if (*fParam0 + (IntToFloat(__LIB_37__::func_698()) * Global_262145.f_13166 /* Tunable: GB_BOSS_STAT_BOOST_PERCENTAGE */)) <= IntToFloat(Global_262145.f_13176 /* Tunable: GB_BOSS_BOOST_MAX_FINAL_STAT */)
			{
				*fParam0 = (*fParam0 + (IntToFloat(__LIB_37__::func_698()) * Global_262145.f_13166 /* Tunable: GB_BOSS_STAT_BOOST_PERCENTAGE */));
			}
		}
		return *fParam0;
	}
	return *fParam0;
}

void func_313(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x77646
{
	__LIB_37__::func_168(iParam0, iParam1, iParam2);
}

void func_314(var uParam0, int iParam1)//Position - 0xA43
{
	struct<3> Var0;
	__LIB_17__::func_143(uParam0);
	MISC::CLEAR_BIT(&uLocal_43, iParam1);
	switch (iParam1)
	{
		case 0:
			Var0 = { 0f, 0f, (__LIB_0__::func_503(-4.29f) + 180f) };
			__LIB_31__::func_999(uParam0, 82047830, 667.319f, 572.133f, 128.521f, Var0, 6, 0, 0);
			__LIB_31__::func_999(uParam0, 83248680, 666.312f, 571.675f, 128.521f, Var0, 6, 1, 0);
			__LIB_31__::func_999(uParam0, 71526810, 665.235f, 571.183f, 128.521f, Var0, 6, 2, 0);
			__LIB_31__::func_999(uParam0, 49826530, 664.124f, 570.679f, 128.521f, Var0, 6, 0, 0);
			__LIB_31__::func_999(uParam0, 78575440, 663.029f, 570.181f, 128.521f, Var0, 6, 1, 0);
			__LIB_31__::func_999(uParam0, 12133230, 661.937f, 569.685f, 128.521f, Var0, 6, 2, 0);
			__LIB_31__::func_999(uParam0, 89665750, 660.839f, 569.194f, 128.521f, Var0, 6, 0, 0);
			__LIB_31__::func_999(uParam0, 65990810, 659.537f, 569.392f, 128.521f, Var0, 6, 1, 0);
			__LIB_31__::func_999(uParam0, 21233450, 658.187f, 569.572f, 128.523f, Var0, 4, 0, 1f);
			__LIB_17__::func_141(&(uParam0->f_155[0 /*11*/]), 659.867f, 571.539f, 128.531f, Var0, 0, 0.5f, -1.5f);
			__LIB_17__::func_141(&(uParam0->f_155[1 /*11*/]), 660.646f, 567.108f, 128.521f, Var0, 0, 0.5f, -1.5f);
			break;
		case 1:
			Var0 = { 0f, 0f, (__LIB_0__::func_503(-3.98f) + 180f) };
			__LIB_31__::func_999(uParam0, 21091970, 670.312f, 568.023f, 128.521f, Var0, 5, 0, 0.5f);
			__LIB_31__::func_999(uParam0, 97482490, 669.189f, 567.502f, 128.522f, Var0, 6, 1, 0);
			__LIB_31__::func_999(uParam0, 66764240, 668.28f, 566.688f, 128.522f, Var0, 6, 0, 0);
			__LIB_31__::func_999(uParam0, 82832850, 667.384f, 565.885f, 128.522f, Var0, 6, 2, 0);
			__LIB_31__::func_999(uParam0, 33636100, 666.491f, 565.085f, 128.522f, Var0, 6, 0, 0);
			__LIB_31__::func_999(uParam0, 22769640, 665.595f, 564.282f, 128.522f, Var0, 6, 1, 0);
			break;
		case 2:
			Var0 = { 0f, 0f, (__LIB_0__::func_503(-3.78f) + 180f) };
			__LIB_31__::func_999(uParam0, 91480760, 673.7f, 564.799f, 128.521f, Var0, 6, 0, 0);
			__LIB_31__::func_999(uParam0, 64996320, 672.996f, 563.847f, 128.521f, Var0, 6, 1, 0);
			__LIB_31__::func_999(uParam0, 30855220, 672.271f, 562.865f, 128.521f, Var0, 6, 2, 0);
			__LIB_31__::func_999(uParam0, 98921990, 671.557f, 561.897f, 128.521f, Var0, 6, 0, 0);
			__LIB_31__::func_999(uParam0, 73357200, 670.258f, 561.366f, 128.522f, Var0, 6, 1, 0);
			__LIB_17__::func_141(&(uParam0->f_155[0 /*11*/]), 669.564f, 563.469f, 128.521f, Var0, 2, -1.5f, -1.5f);
			__LIB_17__::func_141(&(uParam0->f_155[1 /*11*/]), 672.34f, 559.914f, 128.522f, Var0, 2, -1.5f, -1.5f);
			break;
		case 3:
			Var0 = { 0f, 0f, (__LIB_0__::func_503(-3.38f) + 180f) };
			__LIB_31__::func_999(uParam0, 89689390, 681.517f, 555.801f, 128.522f, Var0, 6, 0, 0);
			__LIB_31__::func_999(uParam0, 71057000, 681.796f, 556.967f, 128.522f, Var0, 6, 1, 0);
			__LIB_31__::func_999(uParam0, 26206390, 682.076f, 558.137f, 128.522f, Var0, 6, 2, 0);
			__LIB_31__::func_999(uParam0, 58207860, 682.36f, 559.342f, 128.522f, Var0, 6, 0, 0);
			__LIB_31__::func_999(uParam0, 43622440, 682.635f, 560.475f, 128.522f, Var0, 6, 1, 0);
			break;
		case 4:
			Var0 = { 0f, 0f, (__LIB_0__::func_503(-3.17f) + 180f) };
			__LIB_31__::func_999(uParam0, 78555440, 687.841f, 559.785f, 128.522f, Var0, 6, 0, 0);
			__LIB_31__::func_999(uParam0, 12324420, 687.807f, 558.602f, 128.522f, Var0, 6, 1, 0);
			__LIB_31__::func_999(uParam0, 4083210, 687.771f, 557.382f, 128.522f, Var0, 6, 2, 0);
			__LIB_31__::func_999(uParam0, 2021980, 688.465f, 556.159f, 128.522f, Var0, 6, 0, 0);
			__LIB_31__::func_999(uParam0, 21091970, 688.431f, 554.961f, 128.521f, Var0, 6, 1, 0);
			__LIB_17__::func_141(&(uParam0->f_155[0 /*11*/]), 685.931f, 556.306f, 128.522f, Var0, 0, 0.5f, -1.5f);
			__LIB_17__::func_141(&(uParam0->f_155[1 /*11*/]), 685.897f, 555.108f, 128.521f, Var0, 1, -1.5f, -1.5f);
			break;
		case 5:
			Var0 = { 0f, 0f, (__LIB_0__::func_503(-2.97f) + 180f) };
			__LIB_31__::func_999(uParam0, 31491440, 692.632f, 559.992f, 128.522f, Var0, 5, 2, -0.5f);
			__LIB_31__::func_999(uParam0, 34393340, 693.189f, 558.886f, 128.522f, Var0, 6, 0, 0);
			__LIB_31__::func_999(uParam0, 94762900, 693.396f, 557.684f, 128.522f, Var0, 6, 1, 0);
			__LIB_31__::func_999(uParam0, 95283980, 693.6f, 556.498f, 128.522f, Var0, 6, 2, 0);
			__LIB_31__::func_999(uParam0, 92416940, 693.803f, 555.317f, 128.522f, Var0, 6, 0, 0);
			__LIB_31__::func_999(uParam0, 53597080, 694.007f, 554.131f, 128.522f, Var0, 6, 1, 0);
			break;
		case 6:
			Var0 = { 0f, 0f, (__LIB_0__::func_503(-2.7f) + 180f) };
			__LIB_31__::func_999(uParam0, 86170110, 697.492f, 561.188f, 128.522f, Var0, 6, 0, 0);
			__LIB_31__::func_999(uParam0, 62247860, 697.964f, 560.188f, 128.522f, Var0, 6, 1, 0);
			__LIB_31__::func_999(uParam0, 43665230, 698.467f, 559.116f, 128.522f, Var0, 6, 2, 0);
			__LIB_31__::func_999(uParam0, 32906070, 698.988f, 558.013f, 128.522f, Var0, 6, 0, 0);
			__LIB_31__::func_999(uParam0, 70836820, 699.502f, 556.925f, 128.522f, Var0, 6, 1, 0);
			__LIB_31__::func_999(uParam0, 67800350, 700.014f, 555.841f, 128.522f, Var0, 6, 2, 0);
			__LIB_31__::func_999(uParam0, 41115560, 701.184f, 555.063f, 128.521f, Var0, 6, 0, 0);
			__LIB_31__::func_999(uParam0, 98430790, 701.005f, 553.758f, 128.522f, Var0, 6, 1, 0);
			__LIB_17__::func_141(&(uParam0->f_155[0 /*11*/]), 698.861f, 554.048f, 128.521f, Var0, 0, 0.5f, -1.5f);
			__LIB_17__::func_141(&(uParam0->f_155[1 /*11*/]), 703.267f, 554.91f, 128.522f, Var0, 0, 0.5f, -1.5f);
			break;
		case 7:
			Var0 = { 0f, 0f, (__LIB_0__::func_503(-3.99f) + 180f) };
			__LIB_31__::func_999(uParam0, 13168530, 652.833f, 570.052f, 128.529f, Var0, 6, 0, 0);
			__LIB_31__::func_999(uParam0, 92127780, 652.006f, 569.319f, 128.528f, Var0, 6, 1, 0);
			__LIB_31__::func_999(uParam0, 51664260, 651.136f, 568.538f, 128.729f, Var0, 6, 2, 0);
			__LIB_31__::func_999(uParam0, 35914010, 650.242f, 567.746f, 128.729f, Var0, 6, 0, 0);
			__LIB_31__::func_999(uParam0, 43076060, 649.661f, 566.94f, 128.929f, Var0, 6, 1, 0);
			__LIB_31__::func_999(uParam0, 21755390, 648.426f, 566.137f, 128.929f, Var0, 6, 2, 0);
			break;
		case 8:
			Var0 = { 0f, 0f, (__LIB_0__::func_503(-3.9f) + 180f) };
			__LIB_31__::func_999(uParam0, 20501110, 656.955f, 565.868f, 128.53f, Var0, 6, 0, 0);
			__LIB_31__::func_999(uParam0, 10114780, 656.193f, 565.067f, 128.53f, Var0, 6, 1, 0);
			__LIB_31__::func_999(uParam0, 12664730, 655.358f, 564.19f, 128.73f, Var0, 6, 2, 0);
			__LIB_31__::func_999(uParam0, 32956570, 654.534f, 563.324f, 128.73f, Var0, 6, 0, 0);
			__LIB_31__::func_999(uParam0, 11862860, 653.696f, 562.443f, 128.93f, Var0, 6, 1, 0);
			__LIB_31__::func_999(uParam0, 87809290, 652.862f, 561.566f, 128.93f, Var0, 6, 2, 0);
			break;
		case 9:
			Var0 = { 0f, 0f, (__LIB_0__::func_503(-3.76f) + 180f) };
			__LIB_31__::func_999(uParam0, 75170110, 662.947f, 560.965f, 128.529f, Var0, 6, 0, 0);
			__LIB_31__::func_999(uParam0, 62246860, 662.306f, 560.065f, 128.529f, Var0, 6, 1, 0);
			__LIB_31__::func_999(uParam0, 83665250, 661.603f, 559.079f, 128.73f, Var0, 6, 2, 0);
			__LIB_31__::func_999(uParam0, 22016170, 660.91f, 558.106f, 128.73f, Var0, 6, 0, 0);
			__LIB_31__::func_999(uParam0, 41846840, 660.204f, 557.116f, 128.929f, Var0, 6, 1, 0);
			__LIB_31__::func_999(uParam0, 10000350, 659.502f, 556.13f, 128.929f, Var0, 6, 2, 0);
			break;
		case 10:
			Var0 = { 0f, 0f, (__LIB_0__::func_503(-3.68f) + 180f) };
			__LIB_31__::func_999(uParam0, 86878180, 667.872f, 557.785f, 128.53f, Var0, 6, 0, 0);
			__LIB_31__::func_999(uParam0, 22242820, 667.31f, 556.833f, 128.53f, Var0, 6, 1, 0);
			__LIB_31__::func_999(uParam0, 93969290, 666.693f, 555.791f, 128.73f, Var0, 6, 2, 0);
			__LIB_31__::func_999(uParam0, 12101010, 666.086f, 554.762f, 128.73f, Var0, 6, 0, 0);
			__LIB_31__::func_999(uParam0, 20232220, 665.467f, 553.715f, 128.93f, Var0, 6, 1, 0);
			__LIB_31__::func_999(uParam0, 57707370, 664.852f, 552.673f, 128.93f, Var0, 6, 2, 0);
			break;
		case 11:
			Var0 = { 0f, 0f, (__LIB_0__::func_503(-3.53f) + 180f) };
			__LIB_31__::func_999(uParam0, 13130110, 674.882f, 554.326f, 128.529f, Var0, 6, 0, 0);
			__LIB_31__::func_999(uParam0, 97845810, 674.46f, 553.305f, 128.529f, Var0, 6, 1, 0);
			__LIB_31__::func_999(uParam0, 12345670, 673.997f, 552.186f, 128.73f, Var0, 6, 2, 0);
			__LIB_31__::func_999(uParam0, 89101110, 673.541f, 551.081f, 128.73f, Var0, 6, 0, 0);
			__LIB_31__::func_999(uParam0, 12131410, 673.076f, 549.958f, 128.929f, Var0, 6, 1, 0);
			__LIB_31__::func_999(uParam0, 51617180, 672.613f, 548.839f, 128.929f, Var0, 6, 2, 0);
			break;
		case 12:
			Var0 = { 0f, 0f, (__LIB_0__::func_503(-3.45f) + 180f) };
			__LIB_31__::func_999(uParam0, 60616260, 680.396f, 552.335f, 128.53f, Var0, 6, 0, 0);
			__LIB_31__::func_999(uParam0, 36465660, 680.063f, 551.281f, 128.53f, Var0, 6, 1, 0);
			__LIB_31__::func_999(uParam0, 67686970, 679.697f, 550.127f, 128.73f, Var0, 6, 2, 0);
			__LIB_31__::func_999(uParam0, 71727370, 679.336f, 548.988f, 128.73f, Var0, 6, 0, 0);
			__LIB_31__::func_999(uParam0, 47576770, 678.969f, 547.829f, 128.93f, Var0, 6, 1, 0);
			__LIB_31__::func_999(uParam0, 78798080, 678.603f, 546.674f, 128.93f, Var0, 6, 2, 0);
			break;
		case 13:
			Var0 = { 0f, 0f, (__LIB_0__::func_503(-3.31f) + 180f) };
			__LIB_31__::func_999(uParam0, 11511610, 688.034f, 550.483f, 128.529f, Var0, 6, 0, 0);
			__LIB_31__::func_999(uParam0, 17118110, 687.853f, 549.393f, 128.529f, Var0, 6, 1, 0);
			__LIB_31__::func_999(uParam0, 91201210, 687.653f, 548.199f, 128.73f, Var0, 6, 2, 0);
			__LIB_31__::func_999(uParam0, 12212310, 687.457f, 547.02f, 128.73f, Var0, 6, 0, 0);
			__LIB_31__::func_999(uParam0, 23124120, 687.257f, 545.821f, 128.929f, Var0, 6, 1, 0);
			__LIB_31__::func_999(uParam0, 51261270, 687.058f, 544.627f, 128.929f, Var0, 6, 2, 0);
			break;
		case 14:
			Var0 = { 0f, 0f, (__LIB_0__::func_503(-3.22f) + 180f) };
			__LIB_31__::func_999(uParam0, 15515610, 693.855f, 549.783f, 128.53f, Var0, 6, 0, 0);
			__LIB_31__::func_999(uParam0, 57158150, 693.767f, 548.682f, 128.53f, Var0, 6, 1, 0);
			__LIB_31__::func_999(uParam0, 91601610, 693.67f, 547.474f, 128.73f, Var0, 6, 2, 0);
			__LIB_31__::func_999(uParam0, 16216310, 693.575f, 546.283f, 128.73f, Var0, 6, 0, 0);
			__LIB_31__::func_999(uParam0, 64165160, 693.478f, 545.071f, 128.93f, Var0, 6, 1, 0);
			__LIB_31__::func_999(uParam0, 61671680, 693.381f, 543.865f, 128.93f, Var0, 6, 2, 0);
			break;
		case 15:
			Var0 = { 0f, 0f, (__LIB_0__::func_503(-3.08f) + 180f) };
			__LIB_31__::func_999(uParam0, 19920020, 701.652f, 549.708f, 128.529f, Var0, 6, 0, 0);
			__LIB_31__::func_999(uParam0, 1202200, 701.721f, 548.605f, 128.529f, Var0, 6, 1, 0);
			__LIB_31__::func_999(uParam0, 32042050, 701.795f, 547.396f, 128.729f, Var0, 6, 2, 0);
			__LIB_31__::func_999(uParam0, 20620720, 701.869f, 546.203f, 128.729f, Var0, 6, 0, 0);
			__LIB_31__::func_999(uParam0, 8209210, 701.944f, 544.99f, 128.929f, Var0, 6, 1, 0);
			__LIB_31__::func_999(uParam0, 2112120, 702.019f, 543.781f, 128.929f, Var0, 6, 2, 0);
			break;
		case 16:
			Var0 = { 0f, 0f, (__LIB_0__::func_503(-2.99f) + 180f) };
			__LIB_31__::func_999(uParam0, 24024120, 707.482f, 550.335f, 128.53f, Var0, 6, 0, 0);
			__LIB_31__::func_999(uParam0, 43244240, 707.644f, 549.242f, 128.53f, Var0, 6, 1, 0);
			__LIB_31__::func_999(uParam0, 42452460, 707.821f, 548.044f, 128.73f, Var0, 6, 2, 0);
			__LIB_31__::func_999(uParam0, 24724820, 707.996f, 546.862f, 128.73f, Var0, 6, 0, 0);
			__LIB_31__::func_999(uParam0, 48249250, 708.174f, 545.659f, 128.929f, Var0, 6, 1, 0);
			__LIB_31__::func_999(uParam0, 2512520, 708.351f, 544.461f, 128.929f, Var0, 6, 2, 0);
			break;
		case 17:
			Var0 = { 0f, 0f, (__LIB_0__::func_503(-3.98f) + 180f) };
			__LIB_31__::func_999(uParam0, 46779100, 646.434f, 564.522f, 128.927f, Var0, 6, 0, 0);
			__LIB_31__::func_999(uParam0, 93643160, 645.612f, 563.784f, 128.927f, Var0, 6, 1, 0);
			__LIB_31__::func_999(uParam0, 34729570, 644.71f, 562.975f, 129.127f, Var0, 6, 2, 0);
			__LIB_31__::func_999(uParam0, 28556490, 643.821f, 562.177f, 129.127f, Var0, 6, 0, 0);
			__LIB_31__::func_999(uParam0, 75335160, 642.916f, 561.365f, 129.327f, Var0, 6, 1, 0);
			__LIB_31__::func_999(uParam0, 84872300, 642.015f, 560.557f, 129.327f, Var0, 6, 2, 0);
			break;
		case 18:
			Var0 = { 0f, 0f, (__LIB_0__::func_503(-3.91f) + 180f) };
			__LIB_31__::func_999(uParam0, 65187100, 651.092f, 559.707f, 128.926f, Var0, 6, 0, 0);
			__LIB_31__::func_999(uParam0, 87514460, 650.325f, 558.912f, 128.926f, Var0, 6, 1, 0);
			__LIB_31__::func_999(uParam0, 46165810, 649.483f, 558.04f, 128.127f, Var0, 6, 2, 0);
			__LIB_31__::func_999(uParam0, 12560720, 648.654f, 557.18f, 129.127f, Var0, 6, 0, 0);
			__LIB_31__::func_999(uParam0, 27854880, 647.809f, 556.306f, 129.326f, Var0, 6, 1, 0);
			__LIB_31__::func_999(uParam0, 97601360, 646.968f, 555.435f, 129.326f, Var0, 6, 2, 0);
			break;
		case 19:
			Var0 = { 0f, 0f, (__LIB_0__::func_503(-3.75f) + 180f) };
			__LIB_31__::func_999(uParam0, 55178130, 657.925f, 554.108f, 128.927f, Var0, 6, 0, 0);
			__LIB_31__::func_999(uParam0, 75148880, 657.29f, 553.204f, 128.927f, Var0, 6, 1, 0);
			__LIB_31__::func_999(uParam0, 88865540, 656.593f, 552.213f, 129.127f, Var0, 6, 2, 0);
			__LIB_31__::func_999(uParam0, 64916770, 655.906f, 551.235f, 129.127f, Var0, 6, 0, 0);
			__LIB_31__::func_999(uParam0, 70536220, 655.207f, 550.241f, 129.327f, Var0, 6, 1, 0);
			__LIB_31__::func_999(uParam0, 17101310, 654.512f, 549.25f, 129.327f, Var0, 6, 2, 0);
			break;
		case 20:
			Var0 = { 0f, 0f, (__LIB_0__::func_503(-3.68f) + 180f) };
			__LIB_31__::func_999(uParam0, 76870120, 663.545f, 550.463f, 128.926f, Var0, 6, 0, 0);
			__LIB_31__::func_999(uParam0, 32147850, 662.977f, 549.515f, 128.926f, Var0, 6, 1, 0);
			__LIB_31__::func_999(uParam0, 97662220, 662.353f, 548.477f, 129.127f, Var0, 6, 2, 0);
			__LIB_31__::func_999(uParam0, 12107070, 661.738f, 547.453f, 129.127f, Var0, 6, 0, 0);
			__LIB_31__::func_999(uParam0, 60841880, 661.111f, 546.411f, 129.326f, Var0, 6, 1, 0);
			__LIB_31__::func_999(uParam0, 27803350, 660.489f, 545.373f, 129.326f, Var0, 6, 2, 0);
			break;
		case 21:
			Var0 = { 0f, 0f, (__LIB_0__::func_503(-3.53f) + 180f) };
			__LIB_31__::func_999(uParam0, 19202120, 671.531f, 546.515f, 128.927f, Var0, 6, 0, 0);
			__LIB_31__::func_999(uParam0, 22232420, 671.116f, 545.491f, 128.927f, Var0, 6, 1, 0);
			__LIB_31__::func_999(uParam0, 52627280, 670.66f, 544.369f, 129.127f, Var0, 6, 2, 0);
			__LIB_31__::func_999(uParam0, 29303130, 670.211f, 543.262f, 129.127f, Var0, 6, 0, 0);
			__LIB_31__::func_999(uParam0, 23334350, 669.753f, 542.135f, 129.327f, Var0, 6, 1, 0);
			__LIB_31__::func_999(uParam0, 36373830, 669.298f, 541.014f, 129.327f, Var0, 6, 2, 0);
			break;
		case 22:
			Var0 = { 0f, 0f, (__LIB_0__::func_503(-3.46f) + 180f) };
			__LIB_31__::func_999(uParam0, 18283840, 677.828f, 544.227f, 128.926f, Var0, 6, 0, 0);
			__LIB_31__::func_999(uParam0, 85858680, 677.487f, 543.176f, 128.926f, Var0, 6, 1, 0);
			__LIB_31__::func_999(uParam0, 78889900, 677.112f, 542.024f, 129.127f, Var0, 6, 2, 0);
			__LIB_31__::func_999(uParam0, 91929390, 676.744f, 540.888f, 129.127f, Var0, 6, 0, 0);
			__LIB_31__::func_999(uParam0, 49596970, 676.368f, 539.731f, 129.326f, Var0, 6, 1, 0);
			__LIB_31__::func_999(uParam0, 98991000, 675.994f, 538.58f, 129.326f, Var0, 6, 2, 0);
			break;
		case 23:
			Var0 = { 0f, 0f, (__LIB_0__::func_503(-3.3f) + 180f) };
			__LIB_31__::func_999(uParam0, 12812910, 686.526f, 542.118f, 128.927f, Var0, 6, 0, 0);
			__LIB_31__::func_999(uParam0, 30131130, 686.352f, 541.027f, 128.927f, Var0, 6, 1, 0);
			__LIB_31__::func_999(uParam0, 21331340, 686.16f, 539.831f, 129.127f, Var0, 6, 1, 0);
			__LIB_31__::func_999(uParam0, 13513610, 685.972f, 538.652f, 129.127f, Var0, 6, 0, 0);
			__LIB_31__::func_999(uParam0, 37138130, 685.779f, 537.451f, 129.327f, Var0, 6, 1, 0);
			__LIB_31__::func_999(uParam0, 91401410, 685.588f, 536.256f, 129.327f, Var0, 6, 2, 0);
			break;
		case 24:
			Var0 = { 0f, 0f, (__LIB_0__::func_503(-3.23f) + 180f) };
			__LIB_31__::func_999(uParam0, 16917010, 693.176f, 541.306f, 128.926f, Var0, 6, 0, 0);
			__LIB_31__::func_999(uParam0, 71172170, 693.08f, 540.205f, 128.926f, Var0, 6, 1, 0);
			__LIB_31__::func_999(uParam0, 31741750, 692.975f, 538.998f, 129.127f, Var0, 6, 2, 0);
			__LIB_31__::func_999(uParam0, 17617810, 692.871f, 537.808f, 129.127f, Var0, 6, 0, 0);
			__LIB_31__::func_999(uParam0, 79180180, 692.765f, 536.597f, 129.326f, Var0, 6, 1, 0);
			__LIB_31__::func_999(uParam0, 21831840, 692.66f, 535.391f, 129.326f, Var0, 6, 2, 0);
			break;
		case 25:
			Var0 = { 0f, 0f, (__LIB_0__::func_503(-3.07f) + 180f) };
			__LIB_31__::func_999(uParam0, 21321420, 702.065f, 541.218f, 128.927f, Var0, 6, 0, 0);
			__LIB_31__::func_999(uParam0, 15216210, 702.14f, 540.116f, 128.927f, Var0, 6, 1, 0);
			__LIB_31__::func_999(uParam0, 72182190, 702.223f, 538.907f, 129.127f, Var0, 6, 2, 0);
			__LIB_31__::func_999(uParam0, 22022120, 702.304f, 537.715f, 129.127f, Var0, 6, 0, 0);
			__LIB_31__::func_999(uParam0, 22223220, 702.387f, 536.502f, 129.327f, Var0, 6, 1, 0);
			__LIB_31__::func_999(uParam0, 42252260, 703.116f, 526.841f, 129.618f, Var0, 6, 2, 0);
			break;
		case 26:
			Var0 = { 0f, 0f, (__LIB_0__::func_503(-3f) + 180f) };
			__LIB_31__::func_999(uParam0, 25325420, 708.727f, 541.922f, 128.926f, Var0, 6, 0, 0);
			__LIB_31__::func_999(uParam0, 55256250, 709.881f, 539.828f, 128.926f, Var0, 6, 1, 0);
			__LIB_31__::func_999(uParam0, 72582590, 709.05f, 539.628f, 129.127f, Var0, 6, 2, 0);
			__LIB_31__::func_999(uParam0, 26026120, 709.217f, 538.445f, 129.127f, Var0, 6, 0, 0);
			__LIB_31__::func_999(uParam0, 62263260, 709.386f, 537.241f, 129.326f, Var0, 6, 1, 0);
			__LIB_31__::func_999(uParam0, 42652650, 709.555f, 536.043f, 129.326f, Var0, 6, 2, 0);
			break;
		default:
			break;
	}
}

void func_315()//Position - 0x29EE
{
	int iVar0;
	if (CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			CUTSCENE::STOP_CUTSCENE_IMMEDIATELY();
		}
		CUTSCENE::REMOVE_CUTSCENE();
	}
	__LIB_0__::func_123(&iLocal_60);
	HUD::RELEASE_NAMED_RENDERTARGET("Big_Disp");
	STREAMING::REMOVE_IPL("LInvader");
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_51);
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_52);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	iVar0 = 0;
	while (iVar0 < Local_42.f_0)
	{
		__LIB_32__::func_1(&(Local_42[iVar0 /*178*/]));
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_44.f_0)
	{
		__LIB_32__::func_0(&(Local_44[iVar0 /*24*/]));
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_46.f_0)
	{
		__LIB_32__::func_0(&(Local_46[iVar0 /*24*/]));
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_40)
	{
		__LIB_17__::func_137(iLocal_40[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		__LIB_17__::func_146(__LIB_17__::func_145(iVar0));
		iVar0++;
	}
	__LIB_14__::func_828(iLocal_63);
	__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
}

void func_316(bool bParam0)//Position - 0x531
{
	int iVar0;
	if (__LIB_0__::func_715(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 689.1f, 586.5f, 130.5f, true, false, false, true);
		MISC::CLEAR_AREA_OF_PEDS(689.1f, 586.5f, 130.5f, 500f, 0);
		WEAPON::REMOVE_ALL_PED_WEAPONS(PLAYER::PLAYER_PED_ID(), true);
	}
	__LIB_14__::func_826(0);
	__LIB_14__::func_815(&iLocal_63, 0);
	STREAMING::NEW_LOAD_SCENE_START_SPHERE(689.1f, 586.5f, 130.5f, 80f, 0);
	while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
	{
		SYSTEM::WAIT(0);
	}
	STREAMING::NEW_LOAD_SCENE_STOP();
	if (bParam0)
	{
		STREAMING::REQUEST_IPL("LInvader");
		while (!STREAMING::IS_IPL_ACTIVE("LInvader"))
		{
			SYSTEM::WAIT(0);
		}
	}
	MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
	iLocal_40[0] = joaat("A_M_Y_Hipster_01");
	iLocal_40[1] = joaat("A_M_Y_Hipster_02");
	iLocal_40[2] = joaat("A_M_Y_Hipster_03");
	iLocal_40[3] = joaat("A_F_Y_Hipster_01");
	iLocal_40[4] = joaat("A_F_Y_Hipster_02");
	iLocal_40[5] = joaat("A_F_Y_Hipster_03");
	iLocal_40[6] = joaat("A_F_Y_Hipster_04");
	iLocal_40[7] = joaat("A_F_Y_BevHills_01");
	iLocal_40[8] = joaat("A_M_M_Business_01");
	iLocal_40[9] = joaat("A_M_M_BevHills_02");
	iLocal_40[10] = joaat("A_M_M_Skater_01");
	iLocal_40[11] = joaat("A_M_Y_BeachVesp_01");
	iLocal_40[12] = joaat("A_M_Y_BevHills_01");
	iLocal_40[13] = joaat("A_F_M_BevHills_01");
	iLocal_40[14] = joaat("A_M_M_KTown_01");
	iLocal_40[15] = joaat("A_M_Y_BusiCas_01");
	iLocal_40[16] = joaat("A_M_Y_Business_02");
	iLocal_40[17] = joaat("A_M_Y_Gay_01");
	iLocal_40[18] = joaat("A_M_Y_KTown_02");
	iLocal_40[19] = joaat("A_M_M_BevHills_02");
	iLocal_40[20] = joaat("A_M_Y_Business_03");
	iLocal_40[21] = joaat("A_M_Y_Gay_02");
	iLocal_40[22] = joaat("A_M_M_Malibu_01");
	iLocal_40[22] = joaat("A_M_Y_Gay_02");
	iLocal_40[23] = joaat("A_M_Y_EastSA_02");
	iLocal_40[24] = joaat("A_M_Y_SouCent_02");
	iLocal_40[25] = joaat("A_M_Y_Vinewood_01");
	iLocal_40[26] = joaat("A_M_Y_Vinewood_02");
	iLocal_40[27] = joaat("A_M_Y_Vinewood_03");
	iLocal_40[28] = joaat("A_M_Y_Vinewood_04");
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		__LIB_14__::func_817(__LIB_17__::func_145(iVar0), 1);
		iVar0++;
	}
	__LIB_14__::func_817("misslester1b_crowdlow@14@", 1);
	__LIB_14__::func_817("misslester1b_crowdlow@24@", 1);
	__LIB_17__::func_144("BREAKING_NEWS", &iLocal_52, 1);
	__LIB_17__::func_144("lifeinvader_presentation", &iLocal_51, 1);
	__LIB_17__::func_136("LEST1", 0, 1, 0);
	iVar0 = 0;
	while (iVar0 <= 26)
	{
		__LIB_39__::func_314(&(Local_42[iVar0 /*178*/]), iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		__LIB_17__::func_140(&(Local_44[iVar0 /*24*/]), iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 23)
	{
		__LIB_17__::func_139(&(Local_46[iVar0 /*24*/]), iVar0);
		iVar0++;
	}
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	HUD::REGISTER_NAMED_RENDERTARGET("Big_Disp", false);
	HUD::LINK_NAMED_RENDERTARGET(joaat("prop_huge_display_01"));
	HUD::LINK_NAMED_RENDERTARGET(joaat("prop_huge_display_02"));
	iLocal_53 = HUD::GET_NAMED_RENDERTARGET_RENDER_ID("Big_Disp");
	iLocal_54 = HUD::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID();
	while (ENTITY::IS_ENTITY_WAITING_FOR_WORLD_COLLISION(PLAYER::PLAYER_PED_ID()))
	{
		SYSTEM::WAIT(0);
	}
	while (!CUTSCENE::HAS_CUTSCENE_LOADED())
	{
		SYSTEM::WAIT(0);
	}
	SYSTEM::WAIT(2000);
	iLocal_59 = 0;
	Local_21.f_0 = 12;
	Local_21.f_1 = 0;
	Local_21.f_2 = 0;
	iVar0 = 0;
	while (iVar0 <= (16 - 1))
	{
		__LIB_31__::func_998(iVar0);
		iVar0++;
	}
	if (bLocal_56)
	{
	}
}

void func_317()//Position - 0x29ED
{
	__LIB_39__::func_315();
	__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_318(var uParam0, int iParam1)//Position - 0xCF63
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		if (iVar0 < (iParam1 - 1))
		{
			(*uParam0)[iVar0] = (*uParam0)[iVar0 + 1];
		}
		else
		{
			(*uParam0)[iVar0] = MISC::GET_GAME_TIMER();
		}
		iVar0++;
	}
}

int func_319(var uParam0, float fParam1)//Position - 0xC030
{
	if (__LIB_1__::func_13(uParam0))
	{
		if (__LIB_2__::func_572(uParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_320(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0xD9AD
{
	int iVar0;
	int iVar1;
	if (bParam3)
	{
		if (!bLocal_45)
		{
			iLocal_46 = ENTITY::GET_ENTITY_HEALTH(iParam0);
			bLocal_45 = true;
		}
		iLocal_47 = ENTITY::GET_ENTITY_HEALTH(iParam0);
		iLocal_48 = (iLocal_46 - iLocal_47);
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, true))
			{
				if (IntToFloat(iLocal_48) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_45)
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), true))
			{
				if (IntToFloat(iLocal_48) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), true))
	{
		return 1;
	}
	if (!bParam3)
	{
		iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (!ENTITY::IS_ENTITY_DEAD(iVar1, false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar1, true))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (PED::IS_PED_BEING_JACKED(iParam0))
			{
				if (PED::GET_PEDS_JACKER(iParam0) == PLAYER::PLAYER_PED_ID())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 10f, 10f, 10f, false, true, 0))
			{
				if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
			}
		}
	}
	if (PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::WAS_PED_KILLED_BY_STEALTH(iParam0))
		{
			return 1;
		}
	}
	if (__LIB_14__::func_536(PLAYER::PLAYER_PED_ID(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (PED::IS_PED_RAGDOLL(iParam0) && __LIB_14__::func_556(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(iParam0, false)))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0))
		{
			return 1;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, PLAYER::PLAYER_PED_ID(), true))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_321(var uParam0, int iParam1)//Position - 0x101BF
{
	__LIB_39__::func_79(uParam0, 0, iParam1, 0);
}

void func_322(var uParam0, bool bParam1)//Position - 0x14628
{
	int iVar0;
	if (!bParam1)
	{
		__LIB_39__::func_81(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		__LIB_16__::func_717(uParam0[iVar0 /*2*/]);
		iVar0++;
	}
	uParam0->f_31 = 0;
	uParam0->f_32 = -1;
	uParam0->f_33 = 1;
}

int func_323(int iParam0)//Position - 0x519F
{
	int iVar0;
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	if (HUD::DOES_BLIP_EXIST(Global_32338[iVar0 /*23*/].f_19))
	{
		if (HUD::IS_BLIP_ON_MINIMAP(Global_32338[iVar0 /*23*/].f_19))
		{
			return 1;
		}
	}
	return 0;
}

int func_324()//Position - 0x41C02
{
	char cVar0[64];
	StringCopy(&cVar0, "MP_STAT_BIKER_CLIENT_VEHICLE_v0", 64);
	return MISC::GET_HASH_KEY(&cVar0);
}

int func_325(int iParam0)//Position - 0x42518
{
	int iVar0;
	iVar0 = 1;
	switch (iParam0)
	{
		case 2:
			if (!Global_262145.f_29956 /* Tunable: -41446819 */ && !Global_262145.f_29957 /* Tunable: -45280244 */)
			{
				iVar0 = 0;
			}
			break;
		case 1:
			if (!Global_262145.f_29958 /* Tunable: 440904823 */)
			{
				iVar0 = 0;
			}
			break;
		case 3:
			if (!Global_262145.f_29959 /* Tunable: 1695142738 */)
			{
				iVar0 = 0;
			}
			break;
		case 25:
			if (!Global_262145.f_29963 /* Tunable: FIXER_ENABLE_RADIO_37_MOTOMAMI */)
			{
				iVar0 = 0;
			}
			break;
	}
	return iVar0;
}

bool func_326()//Position - 0x47055
{
	return BitTest(Global_1966179, 2);
}

int func_327(int iParam0)//Position - 0xBE8B5
{
	if (__LIB_1__::func_693(iParam0, 1, 1))
	{
		if (BitTest(Global_2689235[iParam0 /*453*/].f_416, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_328(int iParam0)//Position - 0xBF2CF
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_142.f_2[iVar0] == iParam0 || Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_142.f_2[iVar0] == (1000 + iParam0))
		{
			Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_142.f_2[iVar0] = 0;
		}
		else
		{
			iVar0++;
		}
	}
}

void func_329(int iParam0, int iParam1)//Position - 0xBF984
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (iParam1 != -1)
	{
		Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_142.f_2[iParam1] = iParam0;
		iVar0 = Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_142.f_1;
		if (iVar0 >= 10)
		{
			iVar1 = (iVar0 - 10);
			iVar2 = __LIB_0__::func_253(__LIB_27__::func_379(iVar1), -1);
			iVar3 = 0;
			while (iVar3 < 40)
			{
				if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_142.f_2[iVar3] == iVar2)
				{
					Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_142.f_2[iVar3] = (1000 + iVar2);
				}
				iVar3++;
			}
		}
	}
}

int func_330(int iParam0)//Position - 0xBFBB3
{
	char cVar0[64];
	StringCopy(&cVar0, "MP_STAT_IE_WH_OWNED_VEHICLE_", 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringConCat(&cVar0, "_v0", 64);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		return -1;
	}
	return MISC::GET_HASH_KEY(&cVar0);
}

int func_331(int iParam0)//Position - 0xC1ADE
{
	switch (iParam0)
	{
		case 0:
			return Global_4535594;
			break;
		case 1:
			return Global_4535593;
			break;
	}
	return 0;
}

int func_332(var uParam0)//Position - 0xC1B0E
{
	if (uParam0->f_66.f_4 == joaat("SERVICE_SPEND_CASH_DROP"))
	{
		return 0;
	}
	return 1;
}

int func_333(var uParam0)//Position - 0xC4D9B
{
	*uParam0 = SYSTEM::SHIFT_LEFT(1, 2);
	return 5410420;
}

int func_334()//Position - 0xC4DB0
{
	return SYSTEM::SHIFT_LEFT(1, 25);
}

int func_335(struct<18> Param0, var uParam1, int iParam2)//Position - 0xC4F17
{
	if (Global_4534105[iParam2 /*85*/].f_66.f_1 != Param0.f_1)
	{
		return 0;
	}
	if (Global_4534105[iParam2 /*85*/].f_66.f_3 != Param0.f_3)
	{
		return 0;
	}
	if (Global_4534105[iParam2 /*85*/].f_66.f_4 != Param0.f_4)
	{
		return 0;
	}
	if (Global_4534105[iParam2 /*85*/].f_66.f_5 != Param0.f_5)
	{
		return 0;
	}
	if (Global_4534105[iParam2 /*85*/].f_66.f_6 != Param0.f_6)
	{
		return 0;
	}
	if (Global_4534105[iParam2 /*85*/].f_66.f_7 != Param0.f_7)
	{
		return 0;
	}
	if (Global_4534105[iParam2 /*85*/].f_66.f_14 != Param0.f_14)
	{
		return 0;
	}
	if (Global_4534105[iParam2 /*85*/].f_66.f_17 != Param0.f_17)
	{
		return 0;
	}
	return 1;
}

void func_336()//Position - 0xB7548
{
	int iVar0;
	iVar0 = PLAYER::PLAYER_ID();
	if (iVar0 != -1)
	{
		Global_1886249[iVar0 /*51*/][0] = __LIB_1__::func_360(1049, -1, 0);
		Global_1886249[iVar0 /*51*/][1] = __LIB_1__::func_360(1050, -1, 0);
		Global_1886249[iVar0 /*51*/][2] = __LIB_1__::func_360(1051, -1, 0);
		Global_1886249[iVar0 /*51*/][3] = __LIB_1__::func_360(1052, -1, 0);
		Global_1886249[iVar0 /*51*/][4] = __LIB_1__::func_360(1053, -1, 0);
		Global_1886249[iVar0 /*51*/][5] = __LIB_1__::func_360(1054, -1, 0);
		Global_1886249[iVar0 /*51*/][6] = __LIB_1__::func_360(1488, -1, 0);
		Global_1886249[iVar0 /*51*/][7] = __LIB_1__::func_360(1489, -1, 0);
		Global_1886249[iVar0 /*51*/][8] = __LIB_1__::func_360(1490, -1, 0);
		Global_1886249[iVar0 /*51*/][9] = __LIB_1__::func_360(1491, -1, 0);
		Global_1886249[iVar0 /*51*/][10] = __LIB_1__::func_360(1949, -1, 0);
		Global_1886249[iVar0 /*51*/][11] = __LIB_1__::func_360(1950, -1, 0);
		Global_1886249[iVar0 /*51*/][12] = __LIB_1__::func_360(1951, -1, 0);
		Global_1886249[iVar0 /*51*/][13] = __LIB_1__::func_360(2425, -1, 0);
		Global_1886249[iVar0 /*51*/][14] = __LIB_1__::func_360(2445, -1, 0);
		Global_1886249[iVar0 /*51*/][15] = __LIB_1__::func_360(2448, -1, 0);
		Global_1886249[iVar0 /*51*/][16] = __LIB_1__::func_360(2451, -1, 0);
		Global_1886249[iVar0 /*51*/][17] = __LIB_1__::func_360(2615, -1, 0);
		Global_1886249[iVar0 /*51*/][18] = __LIB_1__::func_360(2618, -1, 0);
		Global_1886249[iVar0 /*51*/][19] = __LIB_1__::func_360(2621, -1, 0);
		Global_1886249[iVar0 /*51*/][20] = __LIB_1__::func_360(3787, -1, 0);
		Global_1886249[iVar0 /*51*/][21] = __LIB_1__::func_360(3790, -1, 0);
		Global_1886249[iVar0 /*51*/][22] = __LIB_1__::func_360(3865, -1, 0);
		Global_1886249[iVar0 /*51*/][23] = __LIB_1__::func_360(3868, -1, 0);
		Global_1886249[iVar0 /*51*/][24] = __LIB_1__::func_360(3871, -1, 0);
		Global_1886249[iVar0 /*51*/][25] = __LIB_1__::func_360(3874, -1, 0);
		Global_1886249[iVar0 /*51*/][26] = __LIB_1__::func_360(5365, -1, 0);
		Global_1886249[iVar0 /*51*/][27] = __LIB_1__::func_360(5368, -1, 0);
		Global_1886249[iVar0 /*51*/][28] = __LIB_1__::func_360(5470, -1, 0);
		Global_1886249[iVar0 /*51*/][29] = __LIB_1__::func_360(5473, -1, 0);
		Global_1886249[iVar0 /*51*/][30] = __LIB_1__::func_360(6432, -1, 0);
		Global_1886249[iVar0 /*51*/][31] = __LIB_1__::func_360(6435, -1, 0);
		Global_1886249[iVar0 /*51*/][32] = __LIB_1__::func_360(7256, -1, 0);
		Global_1886249[iVar0 /*51*/][33] = __LIB_1__::func_360(7259, -1, 0);
		Global_1886249[iVar0 /*51*/][34] = __LIB_1__::func_360(7262, -1, 0);
		Global_1886249[iVar0 /*51*/][35] = __LIB_1__::func_360(7971, -1, 0);
		Global_1886249[iVar0 /*51*/][36] = __LIB_1__::func_360(7974, -1, 0);
		Global_1886249[iVar0 /*51*/][37] = __LIB_1__::func_360(7977, -1, 0);
		Global_1886249[iVar0 /*51*/][38] = __LIB_1__::func_360(7980, -1, 0);
		Global_1886249[iVar0 /*51*/][39] = __LIB_1__::func_360(8502, -1, 0);
		Global_1886249[iVar0 /*51*/][40] = __LIB_1__::func_360(8505, -1, 0);
		Global_1886249[iVar0 /*51*/][41] = __LIB_1__::func_360(8508, -1, 0);
		Global_1886249[iVar0 /*51*/][42] = __LIB_1__::func_360(8511, -1, 0);
		Global_1886249[iVar0 /*51*/][43] = __LIB_1__::func_360(8907, -1, 0);
		Global_1886249[iVar0 /*51*/][44] = __LIB_1__::func_360(8910, -1, 0);
		Global_1886249[iVar0 /*51*/][45] = __LIB_1__::func_360(8913, -1, 0);
		Global_1886249[iVar0 /*51*/][46] = __LIB_1__::func_360(10288, -1, 0);
		Global_1886249[iVar0 /*51*/][47] = __LIB_1__::func_360(10291, -1, 0);
		Global_1886249[iVar0 /*51*/][48] = __LIB_1__::func_360(10414, -1, 0);
		Global_1886249[iVar0 /*51*/][49] = __LIB_1__::func_360(10417, -1, 0);
	}
}

void func_337()//Position - 0xBF8D3
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (__LIB_1__::func_360(__LIB_27__::func_378(iVar0), -1, 0) != 0)
		{
			iVar1++;
		}
		iVar0++;
	}
	__LIB_27__::func_377(iVar1);
}

int func_338()//Position - 0xBFA5C
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (__LIB_1__::func_360(__LIB_27__::func_378(iVar0), -1, 0) == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_339(var uParam0, int iParam1, var uParam2)//Position - 0xF635F
{
	if ((uParam2 && !ENTITY::IS_ENTITY_DEAD(iParam1, false)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1))
	{
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 5f);
		ENTITY::FREEZE_ENTITY_POSITION(iParam1, false);
	}
	if ((__LIB_0__::func_872(iParam1, 1) && __LIB_0__::func_336(PLAYER::PLAYER_PED_ID(), 0) == -1) && __LIB_6__::func_854(iParam1) == PLAYER::PLAYER_ID())
	{
		__LIB_5__::func_213();
		__LIB_27__::func_639(1);
	}
}

void func_340(var uParam0, int iParam1, var uParam2)//Position - 0x10425C
{
	if (((__LIB_0__::func_872(iParam1, 1) && __LIB_0__::func_336(PLAYER::PLAYER_PED_ID(), 0) == -1) && __LIB_6__::func_854(iParam1) == PLAYER::PLAYER_ID()) || __LIB_3__::func_879(PLAYER::PLAYER_ID()))
	{
		__LIB_5__::func_213();
		__LIB_27__::func_639(1);
	}
	if (ENTITY::GET_ENTITY_MODEL(iParam1) == joaat("avisa") || ENTITY::GET_ENTITY_MODEL(iParam1) == joaat("seasparrow2"))
	{
		Global_2789752 = 1;
	}
}

void func_341(var uParam0, int iParam1, var uParam2)//Position - 0x15122A
{
	if ((__LIB_0__::func_872(iParam1, 1) && __LIB_0__::func_336(PLAYER::PLAYER_PED_ID(), 0) == -1) && __LIB_6__::func_854(iParam1) == PLAYER::PLAYER_ID())
	{
		__LIB_5__::func_213();
		__LIB_27__::func_639(1);
	}
}

void func_342(var uParam0, int iParam1, var uParam2)//Position - 0x16798C
{
	if ((uParam2 && !ENTITY::IS_ENTITY_DEAD(iParam1, false)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1))
	{
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 5f);
		ENTITY::FREEZE_ENTITY_POSITION(iParam1, false);
	}
	if ((__LIB_0__::func_872(iParam1, 1) && __LIB_0__::func_336(PLAYER::PLAYER_PED_ID(), 0) == -1) && __LIB_6__::func_854(iParam1) == PLAYER::PLAYER_ID())
	{
		__LIB_5__::func_213();
		__LIB_27__::func_639(1);
	}
	if ((__LIB_0__::func_870(iParam1, 1) && __LIB_0__::func_336(PLAYER::PLAYER_PED_ID(), 0) == -1) && __LIB_6__::func_856(iParam1, 1, 0) == PLAYER::PLAYER_ID())
	{
		__LIB_4__::func_314(1);
	}
}

void func_343(var uParam0, int iParam1, bool bParam2)//Position - 0x178EB0
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1))
	{
		if (VEHICLE::IS_VEHICLE_MODEL(iParam1, joaat("avenger")))
		{
			VEHICLE::MODIFY_VEHICLE_TOP_SPEED(iParam1, 100f);
			VEHICLE::SET_VEHICLE_ENGINE_ON(iParam1, true, true, false);
			VEHICLE::SET_HELI_BLADES_FULL_SPEED(iParam1);
			ENTITY::FREEZE_ENTITY_POSITION(iParam1, false);
		}
		else if (bParam2)
		{
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 5f);
			ENTITY::FREEZE_ENTITY_POSITION(iParam1, false);
		}
	}
	if ((__LIB_0__::func_872(iParam1, 1) && __LIB_0__::func_336(PLAYER::PLAYER_PED_ID(), 0) == -1) && __LIB_6__::func_854(iParam1) == PLAYER::PLAYER_ID())
	{
		__LIB_5__::func_213();
		__LIB_27__::func_639(1);
	}
}

bool func_344()//Position - 0x1E6FF7
{
	return __LIB_1__::func_360(6109, -1, 0) == 2;
}

bool func_345()//Position - 0x1E700A
{
	return __LIB_1__::func_360(6109, -1, 0) == 1;
}

int func_346()//Position - 0xAD58F
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if ((__LIB_1__::func_319(Global_4718592.f_168757) || __LIB_13__::func_435(Global_4718592.f_168757)) || __LIB_10__::func_232(Global_4718592.f_168757))
		{
			return 0;
		}
		if (__LIB_12__::func_668(Global_4718592.f_116524, Global_4718592.f_168757))
		{
			return 0;
		}
	}
	return 1;
}

void func_347(int iParam0)//Position - 0xB2256
{
	__LIB_1__::func_354(__LIB_13__::func_652(iParam0), 0, -1, 1, 0);
	__LIB_1__::func_354(__LIB_13__::func_207(iParam0), 0, -1, 1, 0);
	__LIB_32__::func_208(iParam0);
	__LIB_19__::func_395(iParam0);
	__LIB_13__::func_698(iParam0, &(Global_2789412[iParam0 /*106*/]));
}

int func_348()//Position - 0xB2F8C
{
	if (((__LIB_9__::func_698(0) && __LIB_9__::func_698(1)) && __LIB_9__::func_698(2)) && __LIB_9__::func_698(3))
	{
		if (!__LIB_9__::func_698(5))
		{
			__LIB_12__::func_591(5, 1);
		}
		return 1;
	}
	if (__LIB_9__::func_698(5))
	{
		__LIB_12__::func_591(5, 0);
	}
	return 0;
}

void func_349()//Position - 0xBEC94
{
	__LIB_1__::func_354(8353, (Global_1966142 + 604800), -1, 1, 0);
	Global_2725353 = 1;
}

void func_350(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0xC07B7
{
	int iVar0;
	iVar0 = __LIB_7__::func_933(iParam1);
	if (__LIB_7__::func_932(iVar0))
	{
		if (__LIB_5__::func_661(iParam0, iParam1))
		{
			__LIB_13__::func_7(iVar0, 0);
			if (bParam3)
			{
				Global_1853348[iParam0 /*834*/].f_267.f_191[iVar0 /*13*/].f_4 = 0;
				__LIB_1__::func_379(__LIB_12__::func_991(iVar0), 0, -1);
			}
			else
			{
				Global_1853348[iParam0 /*834*/].f_267.f_191[iVar0 /*13*/].f_4 = 1;
				__LIB_1__::func_379(__LIB_12__::func_991(iVar0), 1, -1);
			}
			if (bParam2)
			{
				__LIB_1__::func_354(__LIB_12__::func_990(iVar0), 0, -1, 1, 0);
				Global_1853348[iParam0 /*834*/].f_267.f_191[iVar0 /*13*/].f_1 = 0;
				Global_1853348[iParam0 /*834*/].f_267.f_191[iVar0 /*13*/].f_11 = 0;
			}
			if (bParam4)
			{
				__LIB_1__::func_354(__LIB_12__::func_971(iVar0), 0, -1, 1, 0);
				__LIB_12__::func_948(iVar0, 0);
				__LIB_12__::func_989(iVar0, 0);
			}
			Global_1640649[iVar0] = 0;
			__LIB_0__::func_186(__LIB_12__::func_980(iVar0), 0, -1);
			__LIB_0__::func_186(__LIB_12__::func_988(iVar0), 0, -1);
			if (__LIB_1__::func_794(iParam1) == 1)
			{
				Global_1640664 = 1;
				Global_1640676 = 0;
			}
			Global_1853348[iParam0 /*834*/].f_267.f_191[iVar0 /*13*/].f_8 = 0;
			__LIB_0__::func_186(__LIB_12__::func_969(iVar0), 0, -1);
			__LIB_12__::func_987(iVar0);
			if (__LIB_7__::func_553(iParam1))
			{
				if (bParam5)
				{
					Global_1853348[iParam0 /*834*/].f_267.f_270 = 0;
					__LIB_1__::func_354(5445, 0, -1, 1, 0);
				}
			}
			Global_2725352 = 1;
		}
	}
}

void func_351(int iParam0, bool bParam1)//Position - 0xC2AC0
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	struct<10> Var3;
	var uVar4;
	if (iParam0 == -1)
	{
		return;
	}
	NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(__LIB_1__::func_818(iParam0));
	if (Global_4534105[iParam0 /*85*/].f_66.f_10 == 1)
	{
	}
	else if (Global_4534105[iParam0 /*85*/].f_66.f_10 == 4)
	{
		bVar0 = true;
	}
	else if (Global_4534105[iParam0 /*85*/].f_66.f_10 == 2)
	{
		bVar1 = true;
	}
	Var3 = -1;
	Var3.f_1 = -1;
	Var3.f_2 = -1;
	Var3.f_3 = -1;
	Var3.f_4 = -1;
	Var3.f_5 = -1;
	Var3.f_6 = -1;
	Var3.f_7 = -1;
	Var3.f_8 = -1;
	Var3.f_9 = -1;
	__LIB_37__::func_35(&Var3);
	switch (Global_4534105[iParam0 /*85*/].f_66.f_4)
	{
		case joaat("SERVICE_SPEND_MOVE_YACHT"):
			MONEY::NETWORK_SPENT_MOVE_YACHT(Global_4534105[iParam0 /*85*/].f_66.f_1, bVar1, bVar0);
			break;
		case joaat("SERVICE_SPEND_LOSE_WANTED_LEVEL"):
			MONEY::NETWORK_SPENT_BUY_WANTEDLEVEL(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14), bVar1, bVar0, 0);
			break;
		case joaat("SERVICE_SPEND_VEHICLE_INSURANCE_PREMIUM"):
			MONEY::NETWORK_SPENT_PAY_VEHICLE_INSURANCE_PREMIUM(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], &(Global_4534105[iParam0 /*85*/].f_14), bVar1, bVar0);
			break;
		case joaat("SERVICE_SPEND_CINEMA"):
			MONEY::NETWORK_SPENT_CINEMA(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_1, bVar1, bVar0);
			break;
		case joaat("SERVICE_SPEND_STRIP_CLUB"):
			MONEY::NETWORK_SPENT_IN_STRIPCLUB(Global_4534105[iParam0 /*85*/].f_66.f_1, bVar1, Global_4534105[iParam0 /*85*/].f_2, bVar0);
			break;
		case joaat("SERVICE_EARN_JOB_BONUS"):
			MONEY::NETWORK_EARN_FROM_JOB_BONUS(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), &(Global_4534105[iParam0 /*85*/].f_14.f_34));
			break;
		case joaat("SERVICE_SPEND_TELESCOPE"):
			MONEY::NETWORK_SPENT_TELESCOPE(Global_4534105[iParam0 /*85*/].f_66.f_1, bVar1, bVar0);
			break;
		case joaat("SERVICE_SPEND_CALL_PLAYER"):
			MONEY::NETWORK_SPENT_CALL_PLAYER(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14), bVar1, bVar0);
			break;
		case joaat("SERVICE_SPEND_CARWASH"):
			MONEY::NETWORK_SPENT_CARWASH(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], Global_4534105[iParam0 /*85*/].f_1, bVar1, bVar0);
			break;
		case joaat("SERVICE_EARN_CRATE_DROP"):
			MONEY::NETWORK_EARN_FROM_CRATE_DROP(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		case joaat("SERVICE_SPEND_MATCH_ENTRY_FEE"):
			MONEY::NETWORK_PAY_MATCH_ENTRY_FEE(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), bVar1, bVar0);
			break;
		case joaat("SERVICE_SPEND_RACE_VEHICLE_RENTAL"):
			MONEY::NETWORK_PAY_MATCH_ENTRY_FEE(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), bVar1, bVar0);
			break;
		case joaat("SERVICE_SPEND_HEALTHCARE"):
			MONEY::NETWORK_BUY_HEALTHCARE(Global_4534105[iParam0 /*85*/].f_66.f_1, bVar1, bVar0);
			break;
		case joaat("SERVICE_EARN_BETTING"):
			MONEY::NETWORK_EARN_FROM_BETTING(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_34));
			break;
		case joaat("SERVICE_SPEND_CASH_DROP"):
			MONEY::NETWORK_SPENT_CASH_DROP(Global_4534105[iParam0 /*85*/].f_66.f_1, bVar1, bVar0);
			break;
		case joaat("SERVICE_SPEND_ARREST_BAIL"):
			MONEY::NETWORK_SPENT_ARREST_BAIL(Global_4534105[iParam0 /*85*/].f_66.f_1, bVar1, bVar0);
			break;
		case joaat("SERVICE_EARN_DAILY_OBJECTIVES"):
			MONEY::NETWORK_EARN_FROM_DAILY_OBJECTIVES(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_34), -1);
			break;
		case joaat("SERVICE_SPEND_BOUNTY_DM"):
			MONEY::NETWORK_SPENT_BOUNTY(Global_4534105[iParam0 /*85*/].f_66.f_1, bVar1, bVar0);
			break;
		case joaat("SERVICE_SPEND_WAGER"):
			MONEY::NETWORK_SPENT_WAGER(Global_4534105[iParam0 /*85*/].f_6, Global_4534105[iParam0 /*85*/].f_7, Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		case joaat("SERVICE_SPEND_PAY_BOSS"):
			MONEY::NETWORK_SPEND_BOSS(Global_4534105[iParam0 /*85*/].f_6, Global_4534105[iParam0 /*85*/].f_7, Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		case joaat("SERVICE_SPEND_PAY_GOON"):
			MONEY::NETWORK_SPEND_GOON(Global_4534105[iParam0 /*85*/].f_6, Global_4534105[iParam0 /*85*/].f_7, Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		case joaat("SERVICE_SPEND_RENAME_ORGANIZATION"):
			MONEY::NETWORK_SPENT_RENAME_ORGANIZATION(Global_4534105[iParam0 /*85*/].f_66.f_1, bVar1, bVar0);
			break;
		case joaat("SERVICE_EARN_JOBS"):
			MONEY::NETWORK_EARN_FROM_JOB(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26));
			break;
		case joaat("SERVICE_EARN_PREMIUM_JOB"):
			MONEY::NETWORK_EARN_FROM_PREMIUM_JOB(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26));
			break;
		case joaat("SERVICE_SPEND_CAR_IMPOUND"):
			MONEY::NETWORK_BUY_ITEM(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], 14, 1, bVar1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), 0, 0, 0, bVar0);
			break;
		case joaat("SERVICE_SPEND_PASSIVE"):
			MONEY::NETWORK_SPENT_BUY_PASSIVE_MODE(Global_4534105[iParam0 /*85*/].f_66.f_1, bVar1, bVar0, 0);
			break;
		case joaat("SERVICE_EARN_BOUNTY_COLLECTED"):
			MONEY::NETWORK_EARN_FROM_BOUNTY(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14), &(Global_4534105[iParam0 /*85*/].f_14.f_13), 1);
			break;
		case joaat("SERVICE_EARN_GANGATTACK_PICKUP"):
			MONEY::NETWORK_EARN_FROM_GANGATTACK_PICKUP(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		case joaat("SERVICE_EARN_PICKUP"):
		case joaat("SERVICE_EARN_AMBIENT_MUGGING"):
		case joaat("SERVICE_EARN_AMBIENT_PICKUP"):
		case joaat("SERVICE_EARN_DEATHMATCH_BOUNTY"):
			MONEY::NETWORK_EARN_FROM_PICKUP(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		case joaat("SERVICE_EARN_ARMORED_TRUCKS"):
			MONEY::NETWORK_EARN_FROM_ROB_ARMORED_CARS(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		case joaat("SERVICE_EARN_HOLDUPS"):
			MONEY::NETWORK_EARN_FROM_HOLDUPS(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		case joaat("SERVICE_SPEND_MECHANIC_WAGE"):
			MONEY::NETWORK_PAY_EMPLOYEE_WAGE(Global_4534105[iParam0 /*85*/].f_66.f_1, bVar1, bVar0);
			break;
		case joaat("SERVICE_SPEND_UTILITY_BILLS"):
			MONEY::NETWORK_SPEND_APARTMENT_UTILITIES(Global_4534105[iParam0 /*85*/].f_66.f_1, bVar1, bVar0, &Global_4539876);
			break;
		case joaat("SERVICE_SPEND_PA_SERVICE_DANCER"):
			MONEY::NETWORK_SPENT_PA_SERVICE_DANCER(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], bVar1, bVar0);
			break;
		case joaat("SERVICE_SPEND_PA_SERVICE_HELI_PICKUP"):
			MONEY::NETWORK_SPENT_PA_HELI_PICKUP(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], bVar1, bVar0);
			break;
		case joaat("SERVICE_SPEND_BA_VP_BOUNTY"):
			MONEY::NETWORK_SPENT_MC_ABILITY(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], Global_4534105[iParam0 /*85*/].f_1, bVar1, bVar0);
			break;
		case joaat("SERVICE_SPEND_BA_VP_BULLSHARK"):
			MONEY::NETWORK_SPENT_MC_ABILITY(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], Global_4534105[iParam0 /*85*/].f_1, bVar1, bVar0);
			break;
		case joaat("SERVICE_SPEND_BA_SARGE_AMMO"):
			MONEY::NETWORK_SPENT_MC_ABILITY(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], Global_4534105[iParam0 /*85*/].f_1, bVar1, bVar0);
			break;
		case joaat("SERVICE_SPEND_BA_SARGE_MOLOTOV"):
			MONEY::NETWORK_SPENT_MC_ABILITY(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], Global_4534105[iParam0 /*85*/].f_1, bVar1, bVar0);
			break;
		case joaat("SERVICE_SPEND_BA_ENFORCER_ARMOUR"):
			MONEY::NETWORK_SPENT_MC_ABILITY(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], Global_4534105[iParam0 /*85*/].f_1, bVar1, bVar0);
			break;
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
		case joaat("SERVICE_EARN_REFUNDAMMODROP"):
		case joaat("SERVICE_EARN_REFUND_ARENA_SPEC_BOX_ENTRY"):
			MONEY::NETWORK_REFUND_CASH(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_40), &(Global_4534105[iParam0 /*85*/].f_14.f_44), bVar1);
			break;
		case joaat("SERVICE_EARN_ROCKSTAR"):
			MONEY::NETWORK_EARN_FROM_ROCKSTAR(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		case joaat("SERVICE_EARN_AMBIENT_JOB_DESTROY_VEH"):
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4534105[iParam0 /*85*/].f_66.f_1, "AM_DESTROY_VEH", &uVar2);
			break;
		case joaat("SERVICE_EARN_AMBIENT_JOB_DISTRACT_COPS"):
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4534105[iParam0 /*85*/].f_66.f_1, "AM_DISTRACT_COPS", &uVar2);
			break;
		case joaat("SERVICE_EARN_AMBIENT_JOB_PLANE_TAKEDOWN"):
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4534105[iParam0 /*85*/].f_66.f_1, "AM_PLANE_TAKEDOWN", &uVar2);
			break;
		case joaat("SERVICE_SPEND_FAIRGROUND"):
			MONEY::NETWORK_BUY_FAIRGROUND_RIDE(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_1, bVar1, bVar0, 0);
			break;
		case joaat("SERVICE_SPEND_ROBBED_BY_MUGGER"):
			MONEY::NETWORK_SPENT_ROBBED_BY_MUGGER(Global_4534105[iParam0 /*85*/].f_66.f_1, false, false, 0);
			break;
		case joaat("SERVICE_EARN_IMPORT_EXPORT"):
			MONEY::NETWORK_EARN_FROM_IMPORT_EXPORT(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_3);
			break;
		case joaat("SERVICE_EARN_LESTER_TARGET_KILL"):
			MONEY::NETWORK_EARN_FROM_AI_TARGET_KILL(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/]);
			break;
		case joaat("SERVICE_SPEND_REQUEST_JOB"):
			MONEY::NETWORK_SPENT_REQUEST_JOB(Global_4534105[iParam0 /*85*/].f_66.f_1, bVar1, bVar0, Global_4534105[iParam0 /*85*/]);
			break;
		case joaat("SERVICE_SPEND_TAXI"):
			MONEY::NETWORK_SPENT_TAXI(Global_4534105[iParam0 /*85*/].f_66.f_1, bVar1, bVar0, 0);
			break;
		case joaat("SERVICE_EARN_BEND_JOB"):
			MONEY::NETWORK_EARN_FROM_BEND_JOB(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26));
			break;
		case joaat("SERVICE_EARN_CHALLENGE_WIN"):
			MONEY::NETWORK_EARN_FROM_CHALLENGE_WIN(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_34), Global_4534105[iParam0 /*85*/].f_4);
			break;
		case joaat("SERVICE_EARN_NOT_BADSPORT"):
			MONEY::NETWORK_EARN_FROM_NOT_BADSPORT(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		case joaat("SERVICE_SPEND_IMPROMPTU_RACE_FEE"):
			MONEY::NETWORK_PAY_MATCH_ENTRY_FEE(Global_4534105[iParam0 /*85*/].f_66.f_1, "RaceToPoint", false, false);
			break;
		case joaat("SERVICE_SPEND_PROSTITUTES"):
			MONEY::NETWORK_SPENT_PROSTITUTES(Global_4534105[iParam0 /*85*/].f_66.f_1, false, false);
			break;
		case joaat("SERVICE_SPEND_PEGASUS_DELIVERY"):
			MONEY::NETWORK_BUY_ITEM(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], Global_4534105[iParam0 /*85*/].f_5, 1, bVar1, &(Global_4534105[iParam0 /*85*/].f_14.f_40), 0, 0, 0, bVar0);
			break;
		case joaat("SERVICE_INVALID"):
			switch (Global_4534105[iParam0 /*85*/].f_66.f_6)
			{
				case joaat("CATEGORY_WEAPON_AMMO"):
					MONEY::NETWORK_BUY_ITEM(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], Global_4534105[iParam0 /*85*/].f_5, 1, bVar1, &(Global_4534105[iParam0 /*85*/].f_14.f_40), 0, 0, 0, bVar0);
					break;
			}
			break;
		case joaat("SERVICE_SPEND_BETTING"):
			MONEY::NETWORK_SPENT_BETTING(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, &(Global_4534105[iParam0 /*85*/].f_14.f_34), false, false);
			break;
		case joaat("SERVICE_EARN_AMBIENT_JOB_HOT_TARGET_DELIVER"):
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4534105[iParam0 /*85*/].f_66.f_1, "AM_HOT_TARGET_DELIVER", &uVar2);
			break;
		case joaat("SERVICE_EARN_AMBIENT_JOB_HOT_TARGET_KILL"):
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4534105[iParam0 /*85*/].f_66.f_1, "AM_HOT_TARGET_KILL", &uVar2);
			break;
		case joaat("SERVICE_EARN_AMBIENT_JOB_URBAN_WARFARE"):
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4534105[iParam0 /*85*/].f_66.f_1, "AM_KILL_LIST", &uVar2);
			break;
		case joaat("SERVICE_EARN_AMBIENT_JOB_CHECKPOINT_COLLECTION"):
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4534105[iParam0 /*85*/].f_66.f_1, "AM_CP_COLLECTION", &uVar2);
			break;
		case joaat("SERVICE_EARN_AMBIENT_JOB_TIME_TRIAL"):
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4534105[iParam0 /*85*/].f_66.f_1, "AM_TIME_TRIAL", &uVar2);
			break;
		case joaat("SERVICE_EARN_AMBIENT_JOB_CHALLENGES"):
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4534105[iParam0 /*85*/].f_66.f_1, "AM_CHALLENGES", &uVar2);
			break;
		case joaat("SERVICE_EARN_AMBIENT_JOB_HELI_HOT_TARGET"):
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4534105[iParam0 /*85*/].f_66.f_1, "AM_HOT_TARGET_HELI", &uVar2);
			break;
		case joaat("SERVICE_EARN_AMBIENT_JOB_DEAD_DROP"):
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4534105[iParam0 /*85*/].f_66.f_1, "AM_DEAD_DROP", &uVar2);
			break;
		case joaat("SERVICE_EARN_AMBIENT_JOB_PENNED_IN"):
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4534105[iParam0 /*85*/].f_66.f_1, "AM_PENNED_IN", &uVar2);
			break;
		case joaat("SERVICE_EARN_AMBIENT_JOB_PASS_PARCEL"):
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4534105[iParam0 /*85*/].f_66.f_1, "AM_PASS_THE_PARCEL", &uVar2);
			break;
		case joaat("SERVICE_EARN_AMBIENT_JOB_BLAST"):
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4534105[iParam0 /*85*/].f_66.f_1, "AM_CRIMINAL_DAMAGE", &uVar2);
			break;
		case joaat("SERVICE_EARN_AMBIENT_JOB_HOT_PROPERTY"):
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4534105[iParam0 /*85*/].f_66.f_1, "AM_HOT_PROPERTY", &uVar2);
			break;
		case joaat("SERVICE_EARN_AMBIENT_JOB_KING"):
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4534105[iParam0 /*85*/].f_66.f_1, "AM_KING_OF_THE_HILL", &uVar2);
			break;
		case joaat("SERVICE_EARN_AMBIENT_JOB_BEAST"):
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4534105[iParam0 /*85*/].f_66.f_1, "AM_HUNT_THE_BEAST", &uVar2);
			break;
		case joaat("SERVICE_EARN_BOSS"):
			MONEY::NETWORK_EARN_BOSS(Global_4534105[iParam0 /*85*/].f_6, Global_4534105[iParam0 /*85*/].f_7, Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		case joaat("SERVICE_EARN_GOON"):
			MONEY::NETWORK_EARN_GOON(Global_4534105[iParam0 /*85*/].f_6, Global_4534105[iParam0 /*85*/].f_7, Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		case joaat("SERVICE_EARN_BOSS_AGENCY"):
			MONEY::NETWORK_EARN_AGENCY(Global_4534105[iParam0 /*85*/].f_6, Global_4534105[iParam0 /*85*/].f_7, Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_8);
			break;
		case joaat("SERVICE_EARN_FROM_CONTRABAND"):
			MONEY::NETWORK_EARN_FROM_CONTRABAND(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_9);
			break;
		case joaat("SERVICE_EARN_FROM_DESTROYING_CONTRABAND"):
			MONEY::NETWORK_EARN_FROM_DESTROYING_CONTRABAND(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		case joaat("SERVICE_SPEND_ORDER_BODYGUARD_VEHICLE"):
			MONEY::NETWORK_SPENT_ORDER_BODYGUARD_VEHICLE(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], 0, 1);
			break;
		case joaat("SERVICE_SPEND_ORDER_WAREHOUSE_VEHICLE"):
			MONEY::NETWORK_SPENT_ORDER_WAREHOUSE_VEHICLE(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], 0, 1);
			break;
		case joaat("SERVICE_SPEND_JUKEBOX"):
			MONEY::NETWORK_SPENT_JUKEBOX(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], 0, 0);
			break;
		case joaat("SERVICE_SPEND_BUSINESS"):
			MONEY::NETWORK_SPENT_PAY_BUSINESS_SUPPLIES(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], Global_4534105[iParam0 /*85*/].f_1, Global_4534105[iParam0 /*85*/].f_9);
			break;
		case joaat("SERVICE_EARN_FROM_VEHICLE_EXPORT"):
			MONEY::NETWORK_EARN_FROM_VEHICLE_EXPORT(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_6, Global_4534105[iParam0 /*85*/].f_7);
			break;
		case joaat("SERVICE_SPEND_VEHICLE_EXPORT_MODS"):
			MONEY::NETWORK_SPENT_VEHICLE_EXPORT_MODS(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4534105[iParam0 /*85*/].f_6, Global_4534105[iParam0 /*85*/].f_7, Global_4534105[iParam0 /*85*/].f_1, Global_4534105[iParam0 /*85*/], Global_4534105[iParam0 /*85*/].f_10, Global_4534105[iParam0 /*85*/].f_11, Global_4534105[iParam0 /*85*/].f_12);
			break;
		case joaat("SERVICE_SPEND_IMPORT_EXPORT_REPAIR"):
			MONEY::NETWORK_SPENT_IMPORT_EXPORT_REPAIR(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1);
			break;
		case joaat("SERVICE_EARN_SMUGGLER_AGENCY"):
			MONEY::NETWORK_EARN_SMUGGLER_AGENCY(Global_4534105[iParam0 /*85*/].f_6, Global_4534105[iParam0 /*85*/].f_7, Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_8);
			break;
		case joaat("SERVICE_EARN_WAGE_PAYMENT_BONUS"):
			MONEY::NETWORK_EARN_WAGE_PAYMENT_BONUS(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		case joaat("SERVICE_EARN_WAGE_PAYMENT"):
			MONEY::NETWORK_EARN_WAGE_PAYMENT(Global_4534105[iParam0 /*85*/].f_66.f_1, 0);
			break;
		case joaat("SERVICE_EARN_SALVAGE_CHECKPOINT_COLLECTION"):
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4534105[iParam0 /*85*/].f_66.f_1, "GB_SALVAGE", &uVar2);
			break;
		case joaat("SERVICE_EARN_CASHING_OUT"):
			MONEY::NETWORK_EARN_FROM_CASHING_OUT(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		case joaat("SERVICE_EARN_JOB_BONUS_CRIMINAL_MASTERMIND"):
			MONEY::NETWORK_EARN_FROM_CRIMINAL_MASTERMIND(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), &(Global_4534105[iParam0 /*85*/].f_14.f_34));
			break;
		case joaat("SERVICE_EARN_JOB_BONUS_HEIST_AWARD"):
			MONEY::NETWORK_EARN_HEIST_AWARD(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), &(Global_4534105[iParam0 /*85*/].f_14.f_34));
			break;
		case joaat("SERVICE_EARN_JOB_BONUS_FIRST_TIME_BONUS"):
			MONEY::NETWORK_EARN_FIRST_TIME_BONUS(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), &(Global_4534105[iParam0 /*85*/].f_14.f_34));
			break;
		case joaat("SERVICE_SPEND_EMPLOY_ASSASSINS"):
			MONEY::NETWORK_SPENT_EMPLOY_ASSASSINS(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4534105[iParam0 /*85*/]);
			break;
		case joaat("SERVICE_EARN_REFUND_ORBITAL_MANUAL"):
			MONEY::NETWORK_EARN_TARGET_REFUND(Global_4534105[iParam0 /*85*/].f_66.f_1, 0);
			break;
		case joaat("SERVICE_EARN_REFUND_ORBITAL_AUTO"):
			MONEY::NETWORK_EARN_TARGET_REFUND(Global_4534105[iParam0 /*85*/].f_66.f_1, 1);
			break;
		case joaat("SERVICE_EARN_GANGOPS_WAGES"):
			MONEY::NETWORK_EARN_GANGOPS_WAGES(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/]);
			break;
		case joaat("SERVICE_EARN_GANGOPS_WAGES_BONUS"):
			MONEY::NETWORK_EARN_GANGOPS_WAGES_BONUS(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/]);
			break;
		case joaat("SERVICE_EARN_GANGOPS_PREP_PARTICIPATION"):
			MONEY::NETWORK_EARN_GANGOPS_PREP_PARTICIPATION(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		case joaat("SERVICE_EARN_GANGOPS_SETUP"):
		case joaat("SERVICE_EARN_GANGOPS_SETUP_FAIL"):
			MONEY::NETWORK_EARN_GANGOPS_SETUP(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26));
			break;
		case joaat("SERVICE_EARN_GANGOPS_FINALE"):
			MONEY::NETWORK_EARN_GANGOPS_FINALE(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26));
			break;
		case joaat("SERVICE_EARN_GANGOPS_AWARD_MASTERMIND_2"):
			MONEY::NETWORK_EARN_GANGOPS_AWARD(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), 0);
			break;
		case joaat("SERVICE_EARN_GANGOPS_AWARD_MASTERMIND_3"):
			MONEY::NETWORK_EARN_GANGOPS_AWARD(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), 1);
			break;
		case joaat("SERVICE_EARN_GANGOPS_AWARD_MASTERMIND_4"):
			MONEY::NETWORK_EARN_GANGOPS_AWARD(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), 2);
			break;
		case joaat("SERVICE_EARN_GANGOPS_AWARD_LOYALTY_AWARD_2"):
			MONEY::NETWORK_EARN_GANGOPS_AWARD(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), 3);
			break;
		case joaat("SERVICE_EARN_GANGOPS_AWARD_LOYALTY_AWARD_3"):
			MONEY::NETWORK_EARN_GANGOPS_AWARD(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), 4);
			break;
		case joaat("SERVICE_EARN_GANGOPS_AWARD_LOYALTY_AWARD_4"):
			MONEY::NETWORK_EARN_GANGOPS_AWARD(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), 5);
			break;
		case joaat("SERVICE_EARN_GANGOPS_AWARD_FIRST_TIME_XM_BASE"):
			MONEY::NETWORK_EARN_GANGOPS_AWARD(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), 6);
			break;
		case joaat("SERVICE_EARN_GANGOPS_AWARD_FIRST_TIME_XM_SUBMARINE"):
			MONEY::NETWORK_EARN_GANGOPS_AWARD(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), 7);
			break;
		case joaat("SERVICE_EARN_GANGOPS_AWARD_FIRST_TIME_XM_SILO"):
			MONEY::NETWORK_EARN_GANGOPS_AWARD(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), 8);
			break;
		case joaat("SERVICE_EARN_GANGOPS_AWARD_SUPPORTING"):
			MONEY::NETWORK_EARN_GANGOPS_AWARD(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), 9);
			break;
		case joaat("SERVICE_EARN_GANGOPS_AWARD_ORDER"):
			MONEY::NETWORK_EARN_GANGOPS_AWARD(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), 10);
			break;
		case joaat("SERVICE_EARN_GANGOPS_ELITE_XM_BASE"):
			MONEY::NETWORK_EARN_GANGOPS_ELITE(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), 0);
			break;
		case joaat("SERVICE_EARN_GANGOPS_ELITE_XM_SUBMARINE"):
			MONEY::NETWORK_EARN_GANGOPS_ELITE(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), 1);
			break;
		case joaat("SERVICE_EARN_GANGOPS_ELITE_XM_SILO"):
			MONEY::NETWORK_EARN_GANGOPS_ELITE(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), 2);
			break;
		case joaat("SERVICE_EARN_GANGOPS_RIVAL_DELIVERY"):
			break;
		case joaat("SERVICE_SPEND_GANGOPS_REPAIR_COST"):
			break;
		case joaat("SERVICE_EARN_DOOMSDAY_FINALE_BONUS"):
			MONEY::NETWORK_EARN_DOOMSDAY_FINALE_BONUS(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_9);
			break;
		case joaat("SERVICE_SPEND_GANGOPS_SKIP_MISSION"):
			MONEY::NETWORK_SPEND_GANGOPS_SKIP_MISSION(Global_4534105[iParam0 /*85*/].f_9, Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1);
			break;
		case joaat("SERVICE_SPEND_GANGOPS_START_STRAND"):
			MONEY::NETWORK_SPEND_GANGOPS_START_STRAND(Global_4534105[iParam0 /*85*/].f_9, Global_4534105[iParam0 /*85*/].f_66.f_1, false, true);
			break;
		case joaat("SERVICE_EARN_BOUNTY_HUNTER_REWARD"):
			MONEY::NETWORK_EARN_BOUNTY_HUNTER_REWARD(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		case joaat("SERVICE_SPEND_NIGHTCLUB_ENTRY_FEE"):
			if (__LIB_1__::func_693(PLAYER::INT_TO_PLAYERINDEX(Global_4534105[iParam0 /*85*/]), 0, 0))
			{
				MONEY::NETWORK_SPENT_NIGHTCLUB_ENTRY_FEE(PLAYER::INT_TO_PLAYERINDEX(Global_4534105[iParam0 /*85*/]), Global_4534105[iParam0 /*85*/].f_1, Global_4534105[iParam0 /*85*/].f_66.f_1, false, true);
			}
			break;
		case joaat("SERVICE_SPEND_NIGHTCLUB_DJ_REHIRE"):
			MONEY::NETWORK_SPENT_REHIRE_DJ(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], false, true);
			break;
		case joaat("SERVICE_SPEND_NIGHTCLUB_BAR_DRINK"):
			MONEY::NETWORK_SPEND_NIGHTCLUB_BAR_DRINK(Global_4534105[iParam0 /*85*/], Global_4534105[iParam0 /*85*/].f_66.f_1, false, true);
			break;
		case joaat("SERVICE_EARN_FROM_BUSINESS_BATTLE"):
			MONEY::NETWORK_EARN_FROM_BUSINESS_BATTLE(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		case joaat("SERVICE_EARN_FROM_CLUB_MANAGEMENT_PARTICIPATION"):
			MONEY::NETWORK_EARN_FROM_CLUB_MANAGEMENT_PARTICIPATION(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/]);
			break;
		case joaat("SERVICE_EARN_FROM_FMBB_PHONECALL_MISSION"):
			MONEY::NETWORK_EARN_FROM_FMBB_PHONECALL_MISSION(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		case joaat("SERVICE_EARN_FROM_BUSINESS_HUB_SELL"):
			MONEY::NETWORK_EARN_FROM_BUSINESS_HUB_SELL(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_1, Global_4534105[iParam0 /*85*/].f_9);
			break;
		case joaat("SERVICE_EARN_FROM_FMBB_BOSS_WORK"):
			MONEY::NETWORK_EARN_FROM_FMBB_BOSS_WORK(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		case joaat("SERVICE_EARN_FMBB_WAGE_BONUS"):
			MONEY::NETWORK_EARN_FMBB_WAGE_BONUS(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		case joaat("SERVICE_SPEND_ARENA_JOIN_SPECTATOR"):
			MONEY::NETWORK_SPENT_ARENA_JOIN_SPECTATOR(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_66.f_15, false, true);
			break;
		case joaat("SERVICE_EARN_BB_EVENT_BONUS"):
			MONEY::NETWORK_EARN_BB_EVENT_BONUS(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		case joaat("SERVICE_EARN_ARENA_SKILL_LVL_AWARD"):
			MONEY::NETWORK_EARN_ARENA_SKILL_LEVEL_PROGRESSION(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_66.f_15);
			break;
		case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_1"):
		case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_2"):
		case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_3"):
		case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_4"):
			MONEY::NETWORK_EARN_ARENA_CAREER_PROGRESSION(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_66.f_15);
			break;
		case joaat("SERVICE_SPEND_ARENA_SPECTATOR_BOX"):
			MONEY::NETWORK_SPEND_ARENA_SPECTATOR_BOX(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], false, true);
			break;
		case joaat("SERVICE_SPEND_MAKE_IT_RAIN"):
			MONEY::NETWORK_SPEND_MAKE_IT_RAIN(Global_4534105[iParam0 /*85*/].f_66.f_1, false, false);
			break;
		case joaat("SERVICE_EARN_SPIN_THE_WHEEL_CASH"):
			MONEY::NETWORK_EARN_SPIN_THE_WHEEL_CASH(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		case joaat("SERVICE_SPEND_SPIN_THE_WHEEL_PAYMENT"):
			MONEY::NETWORK_SPEND_SPIN_THE_WHEEL_PAYMENT(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, true);
			break;
		case joaat("SERVICE_EARN_ASSASSINATE_TARGET_KILLED"):
			MONEY::NETWORK_EARN_ARENA_WAR_ASSASSINATE_TARGET(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		case joaat("SERVICE_EARN_ARENA_WAR"):
			MONEY::NETWORK_EARN_ARENA_WAR(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], Global_4534105[iParam0 /*85*/].f_66.f_16, Global_4534105[iParam0 /*85*/].f_1);
			break;
		case joaat("SERVICE_EARN_AMBIENT_JOB_RC_TIME_TRIAL"):
			MONEY::NETWORK_EARN_RC_TIME_TRIAL(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		case joaat("SERVICE_EARN_DAILY_OBJECTIVE_EVENT"):
			MONEY::NETWORK_EARN_DAILY_OBJECTIVE_EVENT(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		case joaat("SERVICE_EARN_COLLECTABLES_ACTION_FIGURES"):
			MONEY::NETWORK_EARN_COLLECTABLES_ACTION_FIGURES(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		case joaat("SERVICE_EARN_CASINO_MISSION_REWARD"):
			MONEY::NETWORK_EARN_CASINO_MISSION_REWARD(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		case joaat("SERVICE_EARN_CASINO_STORY_MISSION_REWARD"):
			MONEY::NETWORK_EARN_CASINO_STORY_MISSION_REWARD(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
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
			MONEY::NETWORK_EARN_CASINO_AWARD(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/]);
			break;
		case joaat("SERVICE_SPEND_CASINO_GENERIC"):
			MONEY::NETWORK_SPEND_CASINO_GENERIC(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), Global_4534105[iParam0 /*85*/]);
			break;
		case joaat("SERVICE_SPEND_ARCADE_GAME"):
			MONEY::NETWORK_SPEND_PLAY_ARCADE(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4534105[iParam0 /*85*/], Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		case joaat("SERVICE_SPEND_ARCADE_GENERIC"):
			MONEY::NETWORK_SPEND_ARCADE(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4534105[iParam0 /*85*/], Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		case joaat("SERVICE_SPEND_CASINO_HEIST_SKIP_MISSION"):
			MONEY::NETWORK_SPEND_CASINO_HEIST_SKIP_MISSION(Global_4534105[iParam0 /*85*/].f_9, Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1);
			break;
		case joaat("SERVICE_SPEND_CASINO_HEIST_SETUP_HEIST"):
			MONEY::NETWORK_SPEND_CASINO_HEIST(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, 1, Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 0, 0, 0, 0, 0);
			break;
		case joaat("SERVICE_SPEND_CASINO_HEIST_CASINO_MODEL"):
			MONEY::NETWORK_SPEND_CASINO_HEIST(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, 0, 0, 1, Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 0, 0, 0);
			break;
		case joaat("SERVICE_SPEND_CASINO_HEIST_VAULT_DOOR"):
			MONEY::NETWORK_SPEND_CASINO_HEIST(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, 0, 0, 0, 0, 1, Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 0);
			break;
		case joaat("SERVICE_SPEND_CASINO_HEIST_DOOR_SECURITY"):
			MONEY::NETWORK_SPEND_CASINO_HEIST(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, 0, 0, 0, 0, 0, 0, 1, Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		case joaat("SERVICE_EARN_DEBUG"):
			break;
	}
	switch (Global_4534105[iParam0 /*85*/].f_66.f_4)
	{
		case joaat("SERVICE_EARN_CASINO_HEIST_SETUP_MISSION"):
			MONEY::NETWORK_EARN_CASINO_HEIST(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 0, 1, Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 0);
			break;
		case joaat("SERVICE_EARN_CASINO_HEIST_PREP_MISSION"):
			MONEY::NETWORK_EARN_CASINO_HEIST(Global_4534105[iParam0 /*85*/].f_66.f_1, 1, Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 0, 0, 0);
			break;
		case joaat("SERVICE_EARN_CASINO_HEIST_FINALE"):
			MONEY::NETWORK_EARN_CASINO_HEIST(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 0, 0, 0, 1, Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_SMASH_N_GRAB"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_IN_PLAIN_SIGHT"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_UNDETECTED"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_ALL_ROUNDER"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_ELITE_THIEF"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_PROFESSIONAL"):
			MONEY::NETWORK_EARN_CASINO_HEIST_AWARDS(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 0);
			break;
		case joaat("SERVICE_EARN_CASINO_HEIST_ELITE_STEALTH"):
		case joaat("SERVICE_EARN_CASINO_HEIST_ELITE_SUBTERFUGE"):
		case joaat("SERVICE_EARN_CASINO_HEIST_ELITE_DIRECT"):
			MONEY::NETWORK_EARN_CASINO_HEIST_AWARDS(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 0, Global_4534105[iParam0 /*85*/], Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		case joaat("SERVICE_EARN_COLLECTABLE_ITEM"):
			MONEY::NETWORK_EARN_COLLECTABLE_ITEM(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/]);
			break;
		case joaat("SERVICE_EARN_COLLECTABLE_COMPLETED_COLLECTION"):
			MONEY::NETWORK_EARN_COLLECTABLE_COMPLETED_COLLECTION(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/]);
			break;
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_AIRSTRIKE"):
			Var3.f_0 = Global_4534105[iParam0 /*85*/].f_66.f_1;
			MONEY::NETWORK_SPEND_ISLAND_HEIST(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, &Var3);
			break;
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_HEAVY_WEAPON"):
			Var3.f_1 = Global_4534105[iParam0 /*85*/].f_66.f_1;
			MONEY::NETWORK_SPEND_ISLAND_HEIST(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, &Var3);
			break;
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_SNIPER"):
			Var3.f_2 = Global_4534105[iParam0 /*85*/].f_66.f_1;
			MONEY::NETWORK_SPEND_ISLAND_HEIST(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, &Var3);
			break;
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_AIR_SUPPORT"):
			Var3.f_3 = Global_4534105[iParam0 /*85*/].f_66.f_1;
			MONEY::NETWORK_SPEND_ISLAND_HEIST(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, &Var3);
			break;
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_DRONE"):
			Var3.f_4 = Global_4534105[iParam0 /*85*/].f_66.f_1;
			MONEY::NETWORK_SPEND_ISLAND_HEIST(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, &Var3);
			break;
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_WEAPON_STASH"):
			Var3.f_5 = Global_4534105[iParam0 /*85*/].f_66.f_1;
			MONEY::NETWORK_SPEND_ISLAND_HEIST(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, &Var3);
			break;
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPRESSORS"):
			Var3.f_6 = Global_4534105[iParam0 /*85*/].f_66.f_1;
			MONEY::NETWORK_SPEND_ISLAND_HEIST(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, &Var3);
			break;
		case joaat("SERVICE_SPEND_ISLAND_HEIST_REPLAY"):
			Var3.f_7 = Global_4534105[iParam0 /*85*/].f_66.f_1;
			MONEY::NETWORK_SPEND_ISLAND_HEIST(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, &Var3);
			break;
		case joaat("SERVICE_SPEND_BEACH_PARTY_GENERIC"):
			MONEY::NETWORK_SPEND_BEACH_PARTY(Global_4534105[iParam0 /*85*/]);
			break;
		case joaat("SERVICE_EARN_COLLECTABLES_SIGNAL_JAMMERS"):
		case joaat("SERVICE_EARN_COLLECTABLES_SIGNAL_JAMMERS_COMPLETE"):
			MONEY::NETWORK_EARN_CASINO_COLLECTABLE_COMPLETED_COLLECTION(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
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
			MONEY::NETWORK_EARN_ISLAND_HEIST(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_66.f_15, Global_4534105[iParam0 /*85*/].f_66.f_16, Global_4534105[iParam0 /*85*/], 0, 0);
			break;
		case joaat("SERVICE_EARN_ISLAND_HEIST_PREP"):
			MONEY::NETWORK_EARN_ISLAND_HEIST(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 0, 0, Global_4534105[iParam0 /*85*/].f_66.f_15, Global_4534105[iParam0 /*85*/].f_66.f_16);
			break;
		case joaat("SERVICE_EARN_ISLAND_HEIST_DJ_MISSION"):
			MONEY::NETWORK_EARN_FROM_ISLAND_HEIST_DJ_MISSION(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_66.f_16);
			break;
		case joaat("SERVICE_SPEND_SUBMARINE_UTILITY_FEE"):
			MONEY::NETWORK_SPEND_SUBMARINE(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 0);
			break;
		case joaat("SERVICE_SPEND_SUBMARINE_BOAT"):
			MONEY::NETWORK_SPEND_SUBMARINE(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, 0, Global_4534105[iParam0 /*85*/].f_66.f_1, 0);
			break;
		case joaat("SERVICE_SPEND_SUBMARINE_RELOCATION"):
			MONEY::NETWORK_SPEND_SUBMARINE(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, 0, 0, Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		case joaat("SERVICE_SPEND_CASINO_CLUB_GENERIC"):
			MONEY::NETWORK_SPEND_CASINO_CLUB(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, true, Global_4534105[iParam0 /*85*/], Global_4534105[iParam0 /*85*/].f_10, Global_4534105[iParam0 /*85*/].f_11, Global_4534105[iParam0 /*85*/].f_12, Global_4534105[iParam0 /*85*/].f_6, Global_4534105[iParam0 /*85*/].f_7);
			break;
		case joaat("SERVICE_EARN_TUNER_ROBBERY_PREP"):
			MONEY::NETWORK_EARN_TUNER_ROBBERY(Global_4534105[iParam0 /*85*/].f_66.f_1, -1, -1, Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_66.f_16);
			break;
		case joaat("SERVICE_EARN_TUNER_ROBBERY_FINALE"):
			MONEY::NETWORK_EARN_TUNER_ROBBERY(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_66.f_1, MISC::GET_HASH_KEY(&(Global_4534105[iParam0 /*85*/].f_14.f_26)), -1, -1);
			break;
		case joaat("SERVICE_EARN_TUNER_CAR_CLUB_MEMBERSHIP"):
			MONEY::NETWORK_EARN_CARCLUB_MEMBERSHIP(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		case joaat("SERVICE_EARN_TUNER_DAILY_VEHICLE"):
			MONEY::NETWORK_EARN_DAILY_VEHICLE(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_66.f_16);
			break;
		case joaat("SERVICE_EARN_TUNER_DAILY_VEHICLE_BONUS"):
			MONEY::NETWORK_EARN_DAILY_VEHICLE_BONUS(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		case joaat("SERVICE_EARN_TUNER_AWARD_UNION_DEPOSITORY"):
		case joaat("SERVICE_EARN_TUNER_AWARD_MILITARY_CONVOY"):
		case joaat("SERVICE_EARN_TUNER_AWARD_FLEECA_BANK"):
		case joaat("SERVICE_EARN_TUNER_AWARD_FREIGHT_TRAIN"):
		case joaat("SERVICE_EARN_TUNER_AWARD_BOLINGBROKE_ASS"):
		case joaat("SERVICE_EARN_TUNER_AWARD_IAA_RAID"):
		case joaat("SERVICE_EARN_TUNER_AWARD_METH_JOB"):
		case joaat("SERVICE_EARN_TUNER_AWARD_BUNKER_RAID"):
			MONEY::NETWORK_EARN_TUNER_AWARD(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), &(Global_4534105[iParam0 /*85*/].f_14.f_44));
			break;
		case joaat("SERVICE_SPEND_INTERACTION_MENU_ABILITY"):
			MONEY::NETWORK_SPEND_INTERACTION_MENU_ABILITY(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4534105[iParam0 /*85*/].f_66.f_16);
			break;
		case joaat("SERVICE_EARN_AUTO_SHOP_DELIVERY_AWARD"):
			MONEY::NETWORK_EARN_AUTOSHOP_INCOME(Global_4534105[iParam0 /*85*/].f_66.f_1, 277);
			break;
		case joaat("SERVICE_SPEND_BUSINESS_EXPENSES"):
			MONEY::NETWORK_SPEND_BUSINESS_PROPERTY_FEES(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, &Global_4539859);
			break;
		case joaat("SERVICE_EARN_AGENCY_SECURITY_CONTRACT"):
			MONEY::NETWORK_EARN_AGENCY_CONTRACT(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_66.f_16);
			break;
		case joaat("SERVICE_EARN_AGENCY_PAYPHONE_HIT"):
			MONEY::NETWORK_EARN_AGENCY_PHONE(Global_4534105[iParam0 /*85*/].f_66.f_15, Global_4534105[iParam0 /*85*/], Global_4534105[iParam0 /*85*/].f_66.f_16);
			break;
		case joaat("SERVICE_EARN_AGENCY_STORY_PREP"):
			MONEY::NETWORK_EARN_FIXER_PREP(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_66.f_16);
			break;
		case joaat("SERVICE_EARN_AGENCY_STORY_FINALE"):
			MONEY::NETWORK_EARN_FIXER_FINALE(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_66.f_16);
			break;
		case joaat("SERVICE_EARN_FIXER_AWARD_SEC_CON"):
			MONEY::NETWORK_EARN_AWARD_CONTRACT(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_66.f_16);
			break;
		case joaat("SERVICE_EARN_FIXER_AWARD_PHONE_HIT"):
			MONEY::NETWORK_EARN_AWARD_PHONE(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_66.f_16);
			break;
		case joaat("SERVICE_EARN_FIXER_AWARD_AGENCY_STORY"):
			MONEY::NETWORK_EARN_AWARD_FIXER_MISSION(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_66.f_16);
			break;
		case joaat("SERVICE_EARN_FIXER_AWARD_SHORT_TRIP"):
			MONEY::NETWORK_EARN_AWARD_SHORT_TRIP(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_66.f_16);
			break;
		case joaat("SERVICE_EARN_FIXER_RIVAL_DELIVERY"):
			MONEY::NETWORK_EARN_FIXER_RIVAL_DELIVERY(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_66.f_16);
			break;
		case joaat("SERVICE_SPEND_REQUEST_SUPPLY"):
			MONEY::NETWORK_SPEND_SUPPLY(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4534105[iParam0 /*85*/].f_66.f_15);
			break;
		case joaat("SERVICE_SPEND_REQUEST_SOURCE_MOTORCYCLE"):
			MONEY::NETWORK_SPEND_SOURCE_BIKE(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4534105[iParam0 /*85*/].f_66.f_15);
			break;
		case joaat("SERVICE_SPEND_REQUEST_OUT_OF_SIGHT"):
			MONEY::NETWORK_SPEND_HIDDEN(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4534105[iParam0 /*85*/].f_66.f_15);
			break;
		case joaat("SERVICE_EARN_MUSIC_STUDIO_SHORT_TRIP"):
			MONEY::NETWORK_EARN_FIXER_AGENCY_SHORT_TRIP(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_66.f_16);
			break;
		case joaat("SERVICE_SPEND_FIXER_HQ_CONCIERGE"):
			MONEY::NETWORK_SPEND_AGENCY(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4534105[iParam0 /*85*/].f_66.f_16, Global_4534105[iParam0 /*85*/].f_66.f_15);
			break;
		case joaat("SERVICE_SPEND_REQUEST_COMPANY_SUV"):
			MONEY::NETWORK_SPEND_COMP_SUV(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4534105[iParam0 /*85*/]);
			break;
		case joaat("SERVICE_EARN_NCLUB_TROUBLEMAKER"):
			MONEY::NETWORK_EARN_FROM_CLUB_MANAGEMENT_PARTICIPATION(Global_4534105[iParam0 /*85*/].f_66.f_1, 1989714117);
			break;
		case joaat("SERVICE_SPEND_AGENT_14_VEHICLE_REQUEST"):
			MONEY::NETWORK_SPEND_GUNRUNNING(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4534105[iParam0 /*85*/]);
			break;
		case joaat("SERVICE_EARN_SIGHTSEEING_REWARD"):
			MONEY::NETWORK_EARN_SIGHTSEEING_REWARD(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], Global_4534105[iParam0 /*85*/].f_66.f_15, Global_4534105[iParam0 /*85*/].f_66.f_16);
			break;
		case joaat("SERVICE_SPEND_TONY_LIMO"):
			MONEY::NETWORK_SPEND_VEHICLE_REQUESTED(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4534105[iParam0 /*85*/], Global_4534105[iParam0 /*85*/].f_66.f_15);
			break;
		case joaat("SERVICE_EARN_AMBIENT_JOB_CLUBHOUSE_CONTRACT"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_UNDERWATER_CARGO"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_CRIME_SCENE"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_METAL_DETECTOR"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_SMUGGLER_PLANE"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_SMUGGLER_TRAIL"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_GOLDEN_GUN"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_AMMUNATION_DELIVERY"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_SOURCE_RESEARCH"):
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), &uVar2);
			break;
		case joaat("SERVICE_EARN_YOHAN_SOURCE_GOODS"):
			MONEY::NETWORK_YOHAN_SOURCE_GOODS(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_1, Global_4534105[iParam0 /*85*/].f_9, Global_4534105[iParam0 /*85*/].f_66.f_15);
			break;
	}
	if (__LIB_0__::func_112())
	{
		if (bParam1)
		{
			NETSHOPPING::NET_GAMESERVER_BASKET_APPLY_SERVER_DATA(Global_4534105[iParam0 /*85*/].f_66, &uVar4);
		}
	}
	__LIB_1__::func_34(iParam0);
}

void func_352(var uParam0, int iParam1, var uParam2)//Position - 0xC9B0F
{
	if ((uParam2 && !ENTITY::IS_ENTITY_DEAD(iParam1, false)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1))
	{
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 5f);
		ENTITY::FREEZE_ENTITY_POSITION(iParam1, false);
	}
	if ((__LIB_0__::func_872(iParam1, 1) && __LIB_0__::func_336(PLAYER::PLAYER_PED_ID(), 0) == -1) && __LIB_6__::func_854(iParam1) == PLAYER::PLAYER_ID())
	{
		__LIB_5__::func_213();
		__LIB_27__::func_639(1);
	}
	if ((__LIB_3__::func_601(iParam1, 1) && __LIB_0__::func_336(PLAYER::PLAYER_PED_ID(), 0) == -1) && __LIB_6__::func_927(iParam1) == PLAYER::PLAYER_ID())
	{
		__LIB_3__::func_600(1);
	}
}

int func_353(int iParam0, var uParam1)//Position - 0x17C0EF
{
	char* sVar0;
	bool bVar1;
	sVar0 = "anim@amb@facility@hangerdoors@base@enter_exit@male@";
	bVar1 = true;
	MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3), 0);
	MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3), 1);
	if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_CHRISTMAS2017/XM_FACILITY_ENTRY_EXIT", false, -1))
	{
		MISC::CLEAR_BIT(&(uParam1->f_188), 22);
		bVar1 = false;
	}
	else
	{
		MISC::SET_BIT(&(uParam1->f_188), 22);
	}
	if ((__LIB_0__::func_177() || __LIB_3__::func_719()) || NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (!BitTest(uParam1->f_188, 17))
		{
			__LIB_5__::func_604(iParam0);
			MISC::SET_BIT(&(uParam1->f_188), 17);
		}
		STREAMING::REQUEST_MODEL(__LIB_4__::func_441());
		if (!STREAMING::HAS_MODEL_LOADED(__LIB_4__::func_441()))
		{
			bVar1 = false;
		}
		STREAMING::REQUEST_MODEL(__LIB_4__::func_440());
		if (!STREAMING::HAS_MODEL_LOADED(__LIB_4__::func_440()))
		{
			bVar1 = false;
		}
		STREAMING::REQUEST_ANIM_DICT("anim@amb@facility@hanger_doors");
		if (!STREAMING::HAS_ANIM_DICT_LOADED("anim@amb@facility@hanger_doors"))
		{
			bVar1 = false;
		}
		STREAMING::REQUEST_MODEL(joaat("xm_prop_out_hanger_lift"));
		if (!STREAMING::HAS_MODEL_LOADED(joaat("xm_prop_out_hanger_lift")))
		{
			bVar1 = false;
		}
		sVar0 = "anim@AMB@FACILITY@HANGERDOORS@BASE@ENTER_EXIT@GROUP@LIFT";
		STREAMING::REQUEST_ANIM_DICT(sVar0);
		if (!STREAMING::HAS_ANIM_DICT_LOADED(sVar0))
		{
			bVar1 = false;
		}
		sVar0 = "anim@AMB@FACILITY@HANGERDOORS@BASE@ENTER_EXIT@GROUP@EXTERIOR";
		STREAMING::REQUEST_ANIM_DICT(sVar0);
		if (!STREAMING::HAS_ANIM_DICT_LOADED(sVar0))
		{
			bVar1 = false;
		}
		if (__LIB_1__::func_614() || BitTest(Global_1574942, 4))
		{
			MISC::SET_BIT(&(Global_1946250.f_2), 21);
		}
		else if (Global_2824886)
		{
			if (__LIB_0__::func_893() || __LIB_4__::func_54())
			{
				if (!BitTest(Global_1946250.f_2, 21))
				{
					__LIB_25__::func_745(&(uParam1->f_101), 1, 0);
					STREAMING::SET_FOCUS_POS_AND_VEL(482.435f, 4812.798f, -59.383f, 0f, 0f, 0f);
					STREAMING::NEW_LOAD_SCENE_START_SPHERE(482.435f, 4812.798f, -59.383f, 20f, 1);
				}
			}
		}
	}
	else
	{
		MISC::SET_BIT(&(Global_1946250.f_2), 20);
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			if (__LIB_1__::func_394())
			{
				sVar0 = "anim@amb@facility@hangerdoors@base@enter_exit@female@";
			}
			STREAMING::REQUEST_ANIM_DICT(sVar0);
			if (!STREAMING::HAS_ANIM_DICT_LOADED(sVar0))
			{
				bVar1 = false;
			}
		}
	}
	if (!bVar1)
	{
		return 0;
	}
	return 1;
}

void func_354(var uParam0, var uParam1)//Position - 0x180EED
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	if (!BitTest(uParam0->f_396, 0))
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
		}
		MISC::SET_BIT(&(uParam0->f_396), 0);
	}
	if ((__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && CAM::IS_SCREEN_FADED_IN()) && !__LIB_3__::func_171(PLAYER::PLAYER_ID()))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 427, true);
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 353, true);
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 3f);
	}
	if ((!__LIB_3__::func_171(PLAYER::PLAYER_ID()) && __LIB_4__::func_490()) && (!BitTest(Global_1946250.f_4523, 4) || uParam0->f_399 == 1))
	{
		if (!__LIB_1__::func_296(&(uParam0->f_397)))
		{
			if (__LIB_5__::func_746())
			{
				__LIB_25__::func_752(&(uParam0->f_397), 0, 0);
				uParam0->f_399 = 1;
			}
		}
		if (__LIB_1__::func_296(&(uParam0->f_397)))
		{
			if (__LIB_5__::func_746())
			{
				__LIB_25__::func_745(&(uParam0->f_397), 0, 0);
				if (!Global_2787784)
				{
					MISC::SET_BIT(&(Global_1946250.f_4523), 4);
					uParam0->f_399 = 1;
				}
			}
			else if (__LIB_34__::func_105(&(uParam0->f_397), 10000, 0))
			{
				__LIB_25__::func_757(&(uParam0->f_397));
				MISC::CLEAR_BIT(&(Global_1946250.f_4523), 4);
				uParam0->f_399 = 0;
			}
			else if (!BitTest(Global_1946250.f_4523, 4))
			{
				MISC::CLEAR_BIT(&(Global_1946250.f_4523), 4);
				uParam0->f_399 = 1;
			}
		}
	}
	else if (uParam0->f_399)
	{
		MISC::CLEAR_BIT(&(Global_1946250.f_4523), 4);
		uParam0->f_399 = 0;
		__LIB_25__::func_757(&(uParam0->f_397));
	}
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && ENTITY::GET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), &bVar0, &bVar1, &bVar2, &bVar3, &bVar4, &uVar5, &uVar6, &uVar7))
		{
			if ((((!bVar0 || !bVar1) || !bVar2) || !bVar3) || !bVar4)
			{
				ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), true, true, true, true, true, false, false, false);
				VEHICLE::SET_DISABLE_WEAPON_BLADE_FORCES(true);
			}
		}
	}
}

int func_355(var uParam0, int iParam1)//Position - 0x1B6F6A
{
	if (__LIB_8__::func_867(iParam1))
	{
		MISC::CLEAR_BIT(&Global_1946250, 25);
		MISC::CLEAR_BIT(&Global_1946250, 23);
		MISC::CLEAR_BIT(&Global_1946250, 24);
		__LIB_4__::func_561(1);
		return 1;
	}
	else if (!__LIB_1__::func_296(&(uParam0->f_101)))
	{
		__LIB_25__::func_752(&(uParam0->f_101), 0, 0);
	}
	else if (__LIB_34__::func_105(&(uParam0->f_101), 1500, 0))
	{
		__LIB_25__::func_757(&(uParam0->f_101));
		MISC::CLEAR_BIT(&Global_1946250, 25);
		MISC::CLEAR_BIT(&Global_1946250, 23);
		MISC::CLEAR_BIT(&Global_1946250, 24);
		__LIB_4__::func_561(1);
		return 1;
	}
	else if (Global_1946250.f_3621[0] == 1 && Global_1946250.f_3621[3] == 1)
	{
		__LIB_25__::func_757(&(uParam0->f_101));
		MISC::SET_BIT(&Global_1946250, 24);
		return 1;
	}
	else if ((Global_1946250.f_3621[1] == 1 && Global_1946250.f_3621[3] == 1) || __LIB_4__::func_954(PLAYER::PLAYER_ID()))
	{
		__LIB_25__::func_757(&(uParam0->f_101));
		MISC::SET_BIT(&Global_1946250, 23);
		return 1;
	}
	else if (Global_1946250.f_3621[2] == 1 && Global_1946250.f_3621[3] == 1)
	{
		__LIB_25__::func_757(&(uParam0->f_101));
		MISC::SET_BIT(&Global_1946250, 25);
		return 1;
	}
	return 0;
}

void func_356(var uParam0, var uParam1)//Position - 0x1BDCF1
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	__LIB_3__::func_122(&(uParam0->f_22.f_94));
	__LIB_25__::func_757(&(uParam0->f_22.f_103));
	__LIB_4__::func_646(0);
	if (!__LIB_4__::func_535(PLAYER::PLAYER_ID()))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, false);
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
	if (!BitTest(uParam0->f_396, 0))
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
		}
		MISC::SET_BIT(&(uParam0->f_396), 0);
	}
	if ((!__LIB_3__::func_171(PLAYER::PLAYER_ID()) && __LIB_5__::func_365()) && (!BitTest(Global_1946250.f_4523, 3) || uParam0->f_399 == 1))
	{
		if (!__LIB_1__::func_296(&(uParam0->f_397)))
		{
			if (__LIB_5__::func_659())
			{
				__LIB_25__::func_752(&(uParam0->f_397), 0, 0);
				uParam0->f_399 = 1;
			}
		}
		if (__LIB_1__::func_296(&(uParam0->f_397)))
		{
			if (__LIB_5__::func_659())
			{
				__LIB_25__::func_745(&(uParam0->f_397), 0, 0);
				if (!Global_2787784)
				{
					MISC::SET_BIT(&(Global_1946250.f_4523), 3);
					uParam0->f_399 = 1;
				}
			}
			else if (__LIB_34__::func_105(&(uParam0->f_397), 10000, 0))
			{
				__LIB_25__::func_757(&(uParam0->f_397));
				MISC::CLEAR_BIT(&(Global_1946250.f_4523), 3);
				uParam0->f_399 = 0;
			}
			else if (!BitTest(Global_1946250.f_4523, 3))
			{
				MISC::CLEAR_BIT(&(Global_1946250.f_4523), 3);
				uParam0->f_399 = 1;
			}
		}
	}
	else if (uParam0->f_399)
	{
		MISC::CLEAR_BIT(&(Global_1946250.f_4523), 3);
		uParam0->f_399 = 0;
		__LIB_25__::func_757(&(uParam0->f_397));
	}
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && ENTITY::GET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), &bVar0, &bVar1, &bVar2, &bVar3, &bVar4, &uVar5, &uVar6, &uVar7))
		{
			if ((((!bVar0 || !bVar1) || !bVar2) || !bVar3) || !bVar4)
			{
				ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), true, true, true, true, true, false, false, false);
				VEHICLE::SET_DISABLE_WEAPON_BLADE_FORCES(true);
			}
		}
	}
}

void func_357(int iParam0, bool bParam1)//Position - 0x202CE
{
	if (bParam1)
	{
		if (!__LIB_1__::func_686(iParam0, 10, 0))
		{
			__LIB_2__::func_911(iParam0, 10, 0);
			__LIB_1__::func_714(iParam0);
		}
	}
	else if (__LIB_1__::func_686(iParam0, 10, 0))
	{
		__LIB_2__::func_943(iParam0, 10, 0);
		__LIB_1__::func_714(iParam0);
	}
}

bool func_358(int iParam0, int iParam1, int iParam2, var uParam3)//Position - 0x43BE9
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (*uParam3 != 0 && *uParam3 != 1)
	{
		*uParam3 = 0;
	}
	switch (*uParam3)
	{
		case 0:
			iVar0 = __LIB_13__::func_499(iParam0);
			iVar1 = __LIB_35__::func_405();
			iVar2 = __LIB_28__::func_714(iParam0);
			iVar3 = __LIB_28__::func_713(iParam0);
			if (__LIB_9__::func_510(joaat("NET_SHOP_TTYPE_BASKET"), joaat("CATEGORY_INVENTORY_CONTRABAND_MISSION"), iVar1, joaat("NET_SHOP_ACTION_ADD_CONTRABAND"), 1, 0, 1, 4, iVar0, 3))
			{
				if (__LIB_9__::func_510(joaat("NET_SHOP_TTYPE_BASKET"), joaat("CATEGORY_CONTRABAND_QNTY"), iVar2, joaat("NET_SHOP_ACTION_ADD_CONTRABAND"), iParam1, 0, 0, 4, 0, 3))
				{
					if (iParam2 == 0 || __LIB_9__::func_510(joaat("NET_SHOP_TTYPE_BASKET"), joaat("CATEGORY_CONTRABAND_QNTY"), iVar3, joaat("NET_SHOP_ACTION_ADD_CONTRABAND"), iParam2, 0, 0, 4, 0, 3))
					{
						if (__LIB_9__::func_510(joaat("NET_SHOP_TTYPE_BASKET"), joaat("CATEGORY_CONTRABAND_FLAGS"), joaat("CF_MISSION_PASSED_v1"), joaat("NET_SHOP_ACTION_ADD_CONTRABAND"), 1, 0, iParam1, 4, iVar2, 3))
						{
							*uParam3 = 1;
						}
						else
						{
							*uParam3 = 3;
						}
					}
					else
					{
						*uParam3 = 3;
					}
				}
				else
				{
					*uParam3 = 3;
				}
			}
			else
			{
				*uParam3 = 3;
			}
			if (*uParam3 == 1 && __LIB_6__::func_360())
			{
			}
			else
			{
				*uParam3 = 3;
				__LIB_1__::func_34(__LIB_3__::func_534());
			}
			break;
		case 1:
			if (__LIB_2__::func_835(__LIB_3__::func_534()))
			{
				if (__LIB_2__::func_834(__LIB_3__::func_534()) == 2)
				{
					*uParam3 = 2;
					__LIB_1__::func_34(__LIB_3__::func_534());
				}
				else
				{
					*uParam3 = 3;
					__LIB_1__::func_34(__LIB_3__::func_534());
				}
			}
			break;
	}
	return *uParam3 != 1;
}

void func_359(bool bParam0)//Position - 0x43FFC
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	iVar1 = 11;
	iVar2 = 0;
	iVar3 = 0;
	iVar4 = 0;
	if (Global_1640632 == -1)
	{
		__LIB_28__::func_719();
		Global_1640632 = 0;
	}
	while (iVar3 < iVar1)
	{
		iVar2 = (iVar2 + __LIB_34__::func_388(iVar3));
		iVar3++;
	}
	iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar2 + 1);
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		if (iVar4 < __LIB_34__::func_388(iVar3))
		{
			iVar0 = iVar3;
			iVar3 = (iVar1 - 1);
		}
		iVar4 = (iVar4 - __LIB_34__::func_388(iVar3));
		iVar3++;
	}
	__LIB_28__::func_717(iVar0);
	iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(1, 101);
	iVar6 = SYSTEM::ROUND((Global_262145.f_15616 /* Tunable: EXEC_CONTRABAND_SPECIAL_ITEM_CHANCE */ * 100f));
	if (((((iVar5 <= iVar6 && !__LIB_0__::func_114()) && __LIB_28__::func_716()) && __LIB_28__::func_715(iVar0)) && !__LIB_19__::func_948(__LIB_13__::func_502(iVar0))) && __LIB_20__::func_19() < 6)
	{
		Global_1946111 = 1;
		if ((__LIB_7__::func_570(PLAYER::PLAYER_ID()) && __LIB_5__::func_185(PLAYER::PLAYER_ID()) == 167) && !bParam0)
		{
		}
		else
		{
			__LIB_1__::func_928(54);
		}
	}
	else
	{
		Global_1946111 = 0;
	}
	Global_1945956 = NETWORK::GET_CLOUD_TIME_AS_INT();
	Global_1945957 = iVar0;
}

void func_360(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x44A1C
{
	int iVar0;
	if (iParam3 >= 0 && iParam3 < 6)
	{
		iVar0 = 0;
		while (iVar0 < iParam2)
		{
			Global_1945958[(iParam3 + iVar0)] = iParam1;
			Global_1945965[(iParam3 + iVar0)] = iParam0;
			__LIB_1__::func_379(__LIB_28__::func_722((iParam3 + iVar0)), Global_1945958[(iParam3 + iVar0)], -1);
			__LIB_1__::func_379(__LIB_28__::func_721((iParam3 + iVar0)), Global_1945965[(iParam3 + iVar0)], -1);
			iVar0++;
		}
		__LIB_35__::func_417();
	}
}

bool func_361(int iParam0, int iParam1, var uParam2)//Position - 0xAE704
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (*uParam2 != 0 && *uParam2 != 1)
	{
		*uParam2 = 0;
	}
	switch (*uParam2)
	{
		case 0:
			if (__LIB_3__::func_534() != -1)
			{
				return 0;
			}
			iVar0 = __LIB_12__::func_993(iParam0);
			iVar1 = __LIB_12__::func_992();
			iVar2 = __LIB_20__::func_500(iParam0);
			if (__LIB_9__::func_510(joaat("NET_SHOP_TTYPE_BASKET"), joaat("CATEGORY_INVENTORY_CONTRABAND_MISSION"), iVar1, joaat("NET_SHOP_ACTION_ADD_CONTRABAND"), 1, 0, 1, 4, iVar0, 3))
			{
				if (__LIB_9__::func_510(joaat("NET_SHOP_TTYPE_BASKET"), joaat("CATEGORY_CONTRABAND_QNTY"), iVar2, joaat("NET_SHOP_ACTION_ADD_CONTRABAND"), iParam1, 0, 0, 4, 0, 3))
				{
					if (__LIB_9__::func_510(joaat("NET_SHOP_TTYPE_BASKET"), joaat("CATEGORY_CONTRABAND_FLAGS"), joaat("CF_MISSION_PASSED_BKR_v1"), joaat("NET_SHOP_ACTION_ADD_CONTRABAND"), 1, 0, iParam1, 4, iVar2, 3))
					{
						*uParam2 = 1;
					}
					else
					{
						*uParam2 = 3;
					}
				}
				else
				{
					*uParam2 = 3;
				}
			}
			else
			{
				*uParam2 = 3;
			}
			if (*uParam2 == 1 && __LIB_6__::func_360())
			{
			}
			else
			{
				*uParam2 = 3;
				__LIB_1__::func_34(__LIB_3__::func_534());
			}
			break;
		case 1:
			if (__LIB_2__::func_835(__LIB_3__::func_534()))
			{
				if (__LIB_2__::func_834(__LIB_3__::func_534()) == 2)
				{
					*uParam2 = 2;
					__LIB_1__::func_34(__LIB_3__::func_534());
				}
				else
				{
					*uParam2 = 3;
					__LIB_1__::func_34(__LIB_3__::func_534());
				}
			}
			break;
	}
	return *uParam2 != 1;
}

bool func_362(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, int iParam5)//Position - 0xBFE10
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (*uParam4 != 0 && *uParam4 != 1)
	{
		*uParam4 = 0;
	}
	switch (*uParam4)
	{
		case 0:
			if (__LIB_3__::func_534() != -1)
			{
				return 0;
			}
			iVar2 = __LIB_12__::func_993(iParam0);
			iVar3 = __LIB_12__::func_992();
			iVar4 = __LIB_12__::func_970(iParam0, 0);
			switch (iParam3)
			{
				case 0:
					iVar5 = joaat("CF_ATTACKED");
					break;
				case 1:
					iVar5 = joaat("CF_MISSION_STARTED");
					break;
				case 2:
					iVar5 = joaat("CF_MISSION_FAILED");
					break;
				case 3:
					iVar5 = joaat("CF_MISSION_PASSED_BKR");
					break;
			}
			if (iParam3 == 0 || __LIB_9__::func_510(joaat("NET_SHOP_TTYPE_BASKET"), joaat("CATEGORY_INVENTORY_CONTRABAND_MISSION"), iVar3, joaat("NET_SHOP_ACTION_REMOVE_CONTRABAND"), 1, 0, 1, 4, iVar2, 3))
			{
				if (__LIB_9__::func_510(joaat("NET_SHOP_TTYPE_BASKET"), joaat("CATEGORY_CONTRABAND_QNTY"), iVar4, joaat("NET_SHOP_ACTION_REMOVE_CONTRABAND"), iParam1, 0, 1, 4, 0, 3))
				{
					if (__LIB_9__::func_510(joaat("NET_SHOP_TTYPE_BASKET"), joaat("CATEGORY_CONTRABAND_FLAGS"), iVar5, joaat("NET_SHOP_ACTION_REMOVE_CONTRABAND"), 1, iParam2, 0, 4, iVar4, 3))
					{
						*uParam4 = 1;
					}
					else
					{
						*uParam4 = 3;
					}
				}
				else
				{
					*uParam4 = 3;
				}
			}
			else
			{
				*uParam4 = 3;
			}
			if (*uParam4 == 1 && __LIB_6__::func_360())
			{
			}
			else
			{
				*uParam4 = 3;
				__LIB_1__::func_34(__LIB_3__::func_534());
			}
			break;
		case 1:
			if (__LIB_2__::func_835(__LIB_3__::func_534()))
			{
				if (__LIB_2__::func_834(__LIB_3__::func_534()) == 2)
				{
					if (iParam2 > 0)
					{
						NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(__LIB_1__::func_818(__LIB_3__::func_534()));
						iVar0 = __LIB_7__::func_555(PLAYER::PLAYER_ID(), iParam0);
						iVar1 = __LIB_1__::func_794(iVar0);
						MONEY::NETWORK_EARN_FROM_BUSINESS_PRODUCT(iParam2, MISC::GET_HASH_KEY(__LIB_12__::func_642(iVar0)), iVar1, iParam5);
					}
					*uParam4 = 2;
					__LIB_1__::func_34(__LIB_3__::func_534());
				}
				else
				{
					*uParam4 = 3;
					__LIB_1__::func_34(__LIB_3__::func_534());
				}
			}
			break;
	}
	return *uParam4 != 1;
}

int func_363(int iParam0, var uParam1, var uParam2, int iParam3, bool bParam4)//Position - 0xAFBE0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = __LIB_24__::func_394(iParam0, 0, bParam4, 0);
	iVar1 = __LIB_1__::func_724(&uParam1, 0, 0);
	if (__LIB_13__::func_4(iParam3, bParam4) > 0)
	{
		iVar2 = __LIB_13__::func_4(iParam3, bParam4);
		if (__LIB_7__::func_553(iParam0) && __LIB_7__::func_934(PLAYER::PLAYER_ID(), iParam0) == 2)
		{
			iVar2 = (iVar2 / 2);
		}
		iVar1 = (iVar0 - iVar2);
		iVar3 = (__LIB_20__::func_513(PLAYER::PLAYER_ID(), iParam0, bParam4) - __LIB_1__::func_724(&uParam1, 0, 0));
		__LIB_12__::func_968(iParam3, iVar3, bParam4);
	}
	return iVar1;
}

int func_364(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)//Position - 0x3EF5D
{
	if (iParam0 == 275)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 0;
				*uParam3 = 10;
				*uParam4 = 1;
				return 1;
				break;
			case 2:
				*uParam2 = 111;
				*uParam3 = 0;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 270)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 111;
				*uParam3 = 0;
				*uParam4 = 1;
				return 1;
				break;
			case 2:
				*uParam2 = 111;
				*uParam3 = 0;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 274)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 111;
				*uParam3 = 0;
				*uParam4 = 1;
				return 1;
				break;
			case 2:
				*uParam2 = 64;
				*uParam3 = 68;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 278)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 0;
				*uParam3 = 10;
				*uParam4 = 1;
				return 1;
				break;
			case 2:
				*uParam2 = 0;
				*uParam3 = 10;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 267)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 27;
				*uParam3 = 36;
				*uParam4 = 1;
				return 1;
				break;
			case 2:
				*uParam2 = 111;
				*uParam3 = 0;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 280)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 111;
				*uParam3 = 111;
				*uParam4 = 1;
				return 1;
				break;
			case 2:
				*uParam2 = 111;
				*uParam3 = 111;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 268)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 27;
				*uParam3 = 36;
				*uParam4 = 1;
				return 1;
				break;
			case 2:
				*uParam2 = 111;
				*uParam3 = 0;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 276)
	{
		switch (iParam1)
		{
			case 1:
				__LIB_8__::func_394(__LIB_12__::func_52(iParam0, iParam1), uParam2, uParam3);
				*uParam4 = 1;
				return 1;
				break;
			case 2:
				__LIB_8__::func_394(__LIB_12__::func_52(iParam0, iParam1), uParam2, uParam3);
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 281)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 111;
				*uParam3 = 111;
				*uParam4 = 1;
				return 1;
				break;
			case 2:
				*uParam2 = 111;
				*uParam3 = 111;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 277)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 0;
				*uParam3 = 10;
				*uParam4 = 1;
				return 1;
				break;
			case 2:
				*uParam2 = 111;
				*uParam3 = 0;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 271)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 27;
				*uParam3 = 36;
				*uParam4 = 1;
				return 1;
				break;
			case 2:
				*uParam2 = 0;
				*uParam3 = 10;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 272)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 38;
				*uParam3 = 0;
				*uParam4 = 1;
				return 1;
				break;
			case 2:
				*uParam2 = 88;
				*uParam3 = 88;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 269)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 111;
				*uParam3 = 111;
				*uParam4 = 1;
				return 1;
				break;
			case 2:
				*uParam2 = 111;
				*uParam3 = 111;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 279)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 0;
				*uParam3 = 10;
				*uParam4 = 1;
				return 1;
				break;
			case 2:
				*uParam2 = 64;
				*uParam3 = 68;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	return 0;
}

void func_365()//Position - 0xAE957
{
	int iVar0;
	if (__LIB_5__::func_339(PLAYER::PLAYER_ID()))
	{
		iVar0 = __LIB_4__::func_566(PLAYER::PLAYER_ID());
		if (__LIB_7__::func_931(PLAYER::PLAYER_ID(), iVar0) <= 0 && __LIB_7__::func_934(PLAYER::PLAYER_ID(), iVar0) != 0)
		{
			__LIB_20__::func_512(PLAYER::PLAYER_ID(), iVar0, 0, 1);
			__LIB_30__::func_491(5, 0, 1, 0);
			__LIB_12__::func_966(PLAYER::PLAYER_ID(), iVar0, 5000, 1);
		}
	}
}

void func_366(int* iParam0, bool bParam1)//Position - 0x6E2
{
	if (bParam1)
	{
		__LIB_0__::func_989(&(iParam0->f_1), 16);
	}
	else
	{
		__LIB_0__::func_988(&(iParam0->f_1), 16);
	}
}

int func_367(int* iParam0, int iParam1)//Position - 0x9DD
{
	if (!DATAFILE::DATAFILE_UPDATE_SAVE_TO_CLOUD(iParam0))
	{
		if (*iParam0)
		{
			if (DATAFILE::DATAFILE_GET_FILE_DICT(0) != 0 && iParam1)
			{
				DATAFILE::DATAFILE_DELETE(0);
			}
			return 1;
		}
		else
		{
			if (DATAFILE::DATAFILE_GET_FILE_DICT(0) != 0 && iParam1)
			{
				DATAFILE::DATAFILE_DELETE(0);
			}
			return 1;
		}
	}
	return 0;
}

struct<4> func_368(var uParam0)//Position - 0xAB7
{
	struct<4> Var0;
	int iVar1;
	StringCopy(&Var0, "SUMMARY_", 16);
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1, 24);
	uParam0->f_15 = iVar1;
	StringIntConCat(&Var0, iVar1, 16);
	return Var0;
}

struct<4> func_369(var uParam0)//Position - 0xB95
{
	struct<4> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	StringCopy(&Var0, "RAND_", 16);
	STATS::STAT_GET_INT(joaat("NUM_RNDPEOPLE_COMPLETED"), &iVar2, -1);
	STATS::STAT_GET_INT(joaat("NUM_RNDEVENTS_COMPLETED"), &iVar3, -1);
	iVar4 = (iVar2 + iVar3);
	if (iVar4 > 10)
	{
		StringCopy(&(uParam0->f_13), "Y", 4);
		StringConCat(&Var0, "Y", 16);
	}
	else
	{
		StringCopy(&(uParam0->f_13), "N", 4);
		StringConCat(&Var0, "N", 16);
	}
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1, 13);
	StringIntConCat(&(uParam0->f_13), iVar1, 4);
	StringIntConCat(&Var0, iVar1, 16);
	return Var0;
}

struct<4> func_370(var uParam0)//Position - 0xFEC
{
	struct<4> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	StringCopy(&Var0, "VEHS_", 16);
	STATS::STAT_GET_INT(joaat("SP0_NUMBER_STOLEN_COP_VEHICLE"), &iVar2, 0);
	iVar3 = (iVar3 + iVar2);
	STATS::STAT_GET_INT(joaat("SP0_NUMBER_STOLEN_CARS"), &iVar2, 0);
	iVar3 = (iVar3 + iVar2);
	STATS::STAT_GET_INT(joaat("SP0_NUMBER_STOLEN_BIKES"), &iVar2, 0);
	iVar3 = (iVar3 + iVar2);
	STATS::STAT_GET_INT(joaat("SP0_NUMBER_STOLEN_BOATS"), &iVar2, 0);
	iVar3 = (iVar3 + iVar2);
	STATS::STAT_GET_INT(joaat("SP0_NUMBER_STOLEN_HELIS"), &iVar2, 0);
	iVar3 = (iVar3 + iVar2);
	STATS::STAT_GET_INT(joaat("SP0_NUMBER_STOLEN_QUADBIKES"), &iVar2, 0);
	iVar3 = (iVar3 + iVar2);
	STATS::STAT_GET_INT(joaat("SP0_NUMBER_STOLEN_BICYCLES"), &iVar2, 0);
	iVar3 = (iVar3 + iVar2);
	STATS::STAT_GET_INT(joaat("SP1_NUMBER_STOLEN_COP_VEHICLE"), &iVar2, 1);
	iVar3 = (iVar3 + iVar2);
	STATS::STAT_GET_INT(joaat("SP1_NUMBER_STOLEN_CARS"), &iVar2, 1);
	iVar3 = (iVar3 + iVar2);
	STATS::STAT_GET_INT(joaat("SP1_NUMBER_STOLEN_BIKES"), &iVar2, 1);
	iVar3 = (iVar3 + iVar2);
	STATS::STAT_GET_INT(joaat("SP1_NUMBER_STOLEN_BOATS"), &iVar2, 1);
	iVar3 = (iVar3 + iVar2);
	STATS::STAT_GET_INT(joaat("SP1_NUMBER_STOLEN_HELIS"), &iVar2, 1);
	iVar3 = (iVar3 + iVar2);
	STATS::STAT_GET_INT(joaat("SP1_NUMBER_STOLEN_QUADBIKES"), &iVar2, 1);
	iVar3 = (iVar3 + iVar2);
	STATS::STAT_GET_INT(joaat("SP1_NUMBER_STOLEN_BICYCLES"), &iVar2, 1);
	iVar3 = (iVar3 + iVar2);
	STATS::STAT_GET_INT(joaat("SP2_NUMBER_STOLEN_COP_VEHICLE"), &iVar2, 2);
	iVar3 = (iVar3 + iVar2);
	STATS::STAT_GET_INT(joaat("SP2_NUMBER_STOLEN_CARS"), &iVar2, 2);
	iVar3 = (iVar3 + iVar2);
	STATS::STAT_GET_INT(joaat("SP2_NUMBER_STOLEN_BIKES"), &iVar2, 2);
	iVar3 = (iVar3 + iVar2);
	STATS::STAT_GET_INT(joaat("SP2_NUMBER_STOLEN_BOATS"), &iVar2, 2);
	iVar3 = (iVar3 + iVar2);
	STATS::STAT_GET_INT(joaat("SP2_NUMBER_STOLEN_HELIS"), &iVar2, 2);
	iVar3 = (iVar3 + iVar2);
	STATS::STAT_GET_INT(joaat("SP2_NUMBER_STOLEN_QUADBIKES"), &iVar2, 2);
	iVar3 = (iVar3 + iVar2);
	STATS::STAT_GET_INT(joaat("SP2_NUMBER_STOLEN_BICYCLES"), &iVar2, 2);
	iVar3 = (iVar3 + iVar2);
	if (iVar3 >= 100)
	{
		StringCopy(&(uParam0->f_10), "Y", 4);
		StringConCat(&Var0, "Y", 16);
	}
	else
	{
		StringCopy(&(uParam0->f_10), "N", 4);
		StringConCat(&Var0, "N", 16);
	}
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1, 13);
	StringIntConCat(&(uParam0->f_10), iVar1, 4);
	StringIntConCat(&Var0, iVar1, 16);
	return Var0;
}

struct<4> func_371(var uParam0)//Position - 0x11E9
{
	struct<4> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	StringCopy(&Var0, "PEDS_", 16);
	STATS::STAT_GET_INT(joaat("SP0_KILLS_INNOCENTS"), &iVar2, 0);
	iVar3 = (iVar3 + iVar2);
	STATS::STAT_GET_INT(joaat("SP1_KILLS_INNOCENTS"), &iVar2, 1);
	iVar3 = (iVar3 + iVar2);
	STATS::STAT_GET_INT(joaat("SP2_KILLS_INNOCENTS"), &iVar2, 2);
	iVar3 = (iVar3 + iVar2);
	if (iVar3 >= 100)
	{
		StringCopy(&(uParam0->f_9), "Y", 4);
		StringConCat(&Var0, "Y", 16);
	}
	else
	{
		StringCopy(&(uParam0->f_9), "N", 4);
		StringConCat(&Var0, "N", 16);
	}
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1, 13);
	StringIntConCat(&(uParam0->f_9), iVar1, 4);
	StringIntConCat(&Var0, iVar1, 16);
	return Var0;
}

struct<4> func_372(var uParam0)//Position - 0x127E
{
	struct<4> Var0;
	int iVar1;
	int iVar2;
	StringCopy(&Var0, "STOCK_", 16);
	STATS::STAT_GET_INT(joaat("TIME_SPENT_ON_STOCKMARKET"), &iVar2, 0);
	if (iVar2 >= 120000)
	{
		StringCopy(&(uParam0->f_8), "Y", 4);
		StringConCat(&Var0, "Y", 16);
	}
	else
	{
		StringCopy(&(uParam0->f_8), "N", 4);
		StringConCat(&Var0, "N", 16);
	}
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1, 13);
	StringIntConCat(&(uParam0->f_8), iVar1, 4);
	StringIntConCat(&Var0, iVar1, 16);
	return Var0;
}

int func_373(int iParam0)//Position - 0x134B
{
	if (iParam0 < 9)
	{
		return BitTest(Global_113386.f_18103.f_175[iParam0 /*19*/].f_18, 0);
	}
	return 0;
}

int func_374(int iParam0)//Position - 0x13E8
{
	switch (iParam0)
	{
		case 0:
			return Global_113386.f_10049.f_90[0];
			break;
		case 1:
			return Global_113386.f_10049.f_90[1];
			break;
		case 2:
			return Global_113386.f_10049.f_90[2];
			break;
	}
	return 0;
}

struct<4> func_375(var uParam0)//Position - 0x1440
{
	struct<4> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	StringCopy(&Var0, "STRIP_", 16);
	STATS::STAT_GET_INT(joaat("SP0_LAP_DANCED_BOUGHT"), &iVar2, 0);
	iVar3 = (iVar3 + iVar2);
	STATS::STAT_GET_INT(joaat("SP1_LAP_DANCED_BOUGHT"), &iVar2, 1);
	iVar3 = (iVar3 + iVar2);
	STATS::STAT_GET_INT(joaat("SP2_LAP_DANCED_BOUGHT"), &iVar2, 2);
	iVar3 = (iVar3 + iVar2);
	STATS::STAT_GET_INT(joaat("SP0_MONEY_SPENT_IN_STRIP_CLUBS"), &iVar4, 0);
	iVar5 = (iVar5 + iVar4);
	STATS::STAT_GET_INT(joaat("SP1_MONEY_SPENT_IN_STRIP_CLUBS"), &iVar4, 1);
	iVar5 = (iVar5 + iVar4);
	STATS::STAT_GET_INT(joaat("SP2_MONEY_SPENT_IN_STRIP_CLUBS"), &iVar4, 2);
	iVar5 = (iVar5 + iVar4);
	if (iVar3 >= 3 || iVar5 >= 100)
	{
		StringCopy(&(uParam0->f_5), "Y", 4);
		StringConCat(&Var0, "Y", 16);
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1, 13);
	}
	else
	{
		StringCopy(&(uParam0->f_5), "N", 4);
		StringConCat(&Var0, "N", 16);
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1, 12);
	}
	StringIntConCat(&(uParam0->f_5), iVar1, 4);
	StringIntConCat(&Var0, iVar1, 16);
	return Var0;
}

struct<4> func_376(var uParam0)//Position - 0x1525
{
	struct<4> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	StringCopy(&Var0, "CASH_", 16);
	STATS::STAT_GET_INT(joaat("SP0_MONEY_TOTAL_SPENT"), &iVar2, 0);
	iVar3 = (iVar3 + iVar2);
	STATS::STAT_GET_INT(joaat("SP1_MONEY_TOTAL_SPENT"), &iVar2, 1);
	iVar3 = (iVar3 + iVar2);
	STATS::STAT_GET_INT(joaat("SP2_MONEY_TOTAL_SPENT"), &iVar2, 2);
	iVar3 = (iVar3 + iVar2);
	if (iVar3 >= 1000000)
	{
		StringCopy(&(uParam0->f_3), "SP", 8);
		StringConCat(&Var0, "SP", 16);
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1, 14);
	}
	else
	{
		StringCopy(&(uParam0->f_3), "SA", 8);
		StringConCat(&Var0, "SA", 16);
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1, 13);
	}
	StringIntConCat(&(uParam0->f_3), iVar1, 8);
	StringIntConCat(&Var0, iVar1, 16);
	return Var0;
}

struct<4> func_377(var uParam0)//Position - 0x15C5
{
	struct<4> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	StringCopy(&Var0, "CHAR_", 16);
	iVar2 = 0;
	iVar4 = 0;
	STATS::STAT_GET_INT(joaat("SP0_TOTAL_PLAYING_TIME"), &iVar4, 0);
	STATS::STAT_GET_INT(joaat("SP1_TOTAL_PLAYING_TIME"), &iVar3, 1);
	if (iVar3 > iVar4)
	{
		iVar4 = iVar3;
		iVar2 = 1;
	}
	STATS::STAT_GET_INT(joaat("SP2_TOTAL_PLAYING_TIME"), &iVar3, 2);
	if (iVar3 > iVar4)
	{
		iVar4 = iVar3;
		iVar2 = 2;
	}
	if (iVar2 == 0)
	{
		StringCopy(&(uParam0->f_2), "M", 4);
		StringConCat(&Var0, "M", 16);
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1, 13);
	}
	else if (iVar2 == 1)
	{
		StringCopy(&(uParam0->f_2), "F", 4);
		StringConCat(&Var0, "F", 16);
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1, 13);
	}
	else
	{
		StringCopy(&(uParam0->f_2), "T", 4);
		StringConCat(&Var0, "T", 16);
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1, 12);
	}
	StringIntConCat(&(uParam0->f_2), iVar1, 4);
	StringIntConCat(&Var0, iVar1, 16);
	return Var0;
}

struct<4> func_378(var uParam0)//Position - 0x1693
{
	struct<4> Var0;
	int iVar1;
	StringCopy(&Var0, "STORY_", 16);
	if (__LIB_0__::func_425(135))
	{
		StringCopy(&(uParam0->f_1), "M", 4);
		StringConCat(&Var0, "M", 16);
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1, 11);
	}
	else if (__LIB_0__::func_425(136))
	{
		StringCopy(&(uParam0->f_1), "T", 4);
		StringConCat(&Var0, "T", 16);
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1, 10);
	}
	else
	{
		StringCopy(&(uParam0->f_1), "B", 4);
		StringConCat(&Var0, "B", 16);
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1, 11);
	}
	StringIntConCat(&(uParam0->f_1), iVar1, 4);
	StringIntConCat(&Var0, iVar1, 16);
	return Var0;
}

struct<4> func_379(var uParam0)//Position - 0x171E
{
	struct<4> Var0;
	int iVar1;
	StringCopy(&Var0, "INTRO_", 16);
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1, 21);
	*uParam0 = iVar1;
	StringIntConCat(&Var0, iVar1, 16);
	return Var0;
}

struct<4> func_380(var uParam0)//Position - 0xAE0
{
	struct<4> Var0;
	int iVar1;
	StringCopy(&Var0, "COLLECT_", 16);
	if (((__LIB_0__::func_425(110) || __LIB_0__::func_425(95)) || __LIB_0__::func_425(106)) || __LIB_0__::func_425(107))
	{
		StringCopy(&(uParam0->f_14), "Y", 4);
		StringConCat(&Var0, "Y", 16);
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1, 11);
	}
	else
	{
		StringCopy(&(uParam0->f_14), "N", 4);
		StringConCat(&Var0, "N", 16);
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1, 12);
	}
	StringIntConCat(&(uParam0->f_14), iVar1, 4);
	StringIntConCat(&Var0, iVar1, 16);
	return Var0;
}

struct<4> func_381(var uParam0)//Position - 0xF68
{
	struct<4> Var0;
	int iVar1;
	StringCopy(&Var0, "YOGA_", 16);
	if (__LIB_17__::func_698(300, 1))
	{
		StringCopy(&(uParam0->f_11), "Y", 4);
		StringConCat(&Var0, "Y", 16);
	}
	else
	{
		StringCopy(&(uParam0->f_11), "N", 4);
		StringConCat(&Var0, "N", 16);
	}
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1, 13);
	StringIntConCat(&(uParam0->f_11), iVar1, 4);
	StringIntConCat(&Var0, iVar1, 16);
	return Var0;
}

struct<4> func_382(var uParam0)//Position - 0xC0F
{
	struct<4> Var0;
	int iVar1;
	StringCopy(&Var0, "FIT_", 16);
	if ((((((((__LIB_16__::func_891(1, 1) > 50 && __LIB_16__::func_891(1, 2) > 50) && __LIB_16__::func_891(1, 3) > 50) && __LIB_16__::func_891(0, 1) > 50) && __LIB_16__::func_891(0, 2) > 50) && __LIB_16__::func_891(0, 3) > 50) && __LIB_16__::func_891(2, 1) > 50) && __LIB_16__::func_891(2, 2) > 50) && __LIB_16__::func_891(2, 3) > 50)
	{
		StringCopy(&(uParam0->f_12), "Y", 4);
		StringConCat(&Var0, "Y", 16);
	}
	else
	{
		StringCopy(&(uParam0->f_12), "N", 4);
		StringConCat(&Var0, "N", 16);
	}
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1, 11);
	StringIntConCat(&(uParam0->f_12), iVar1, 4);
	StringIntConCat(&Var0, iVar1, 16);
	return Var0;
}

void func_383(int iParam0)//Position - 0x31AC
{
	MISC::SET_BIT(&(Global_1641031.f_15[iParam0 /*24*/]), 0);
}

void func_384(int iParam0, int iParam1)//Position - 0x31C3
{
	Global_1641031.f_15[iParam0 /*24*/].f_16 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam1);
	Global_1641031.f_15[iParam0 /*24*/].f_17 = 1;
}

bool func_385(int iParam0)//Position - 0x3279
{
	return BitTest(Global_1641031.f_15[iParam0 /*24*/], 1);
}

bool func_386()//Position - 0x3D98
{
	return BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833, 2);
}

bool func_387()//Position - 0x3DDD
{
	return Global_2723612.f_1;
}

void func_388(int iParam0, int iParam1)//Position - 0x5C8E
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	bool bVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	bVar0 = false;
	bVar1 = false;
	StringCopy(&Global_2726816, "", 64);
	SOCIALCLUB::SC_INBOX_MESSAGE_GET_DATA_INT(iParam0, "awardAmount", &iVar2);
	SOCIALCLUB::SC_INBOX_MESSAGE_GET_DATA_STRING(iParam0, "awardType", &uVar3);
	bVar4 = SOCIALCLUB::SC_INBOX_MESSAGE_GET_DATA_BOOL(iParam0, "fullRefresh");
	SOCIALCLUB::SC_INBOX_MESSAGE_GET_DATA_STRING(iParam0, "awardLabel", &Global_2726816);
	SOCIALCLUB::SC_INBOX_MESSAGE_GET_DATA_STRING(iParam0, "items", &uVar5);
	SOCIALCLUB::SC_INBOX_MESSAGE_GET_DATA_INT(iParam0, "userScreen", &iVar6);
	SOCIALCLUB::SC_INBOX_SET_MESSAGE_AS_READ_AT_INDEX(iParam0);
	if (iVar2 != 0)
	{
		if (iVar2 == -99)
		{
			Global_2726798 = -99;
			Global_2726797 = iVar2;
		}
		else if (iVar2 < 0)
		{
			Global_2726798 = -1;
			Global_2726797 = iVar2;
		}
		else if (iVar2 > 0)
		{
			Global_2726798 = 1;
			Global_2726797 = iVar2;
		}
		bVar1 = true;
	}
	if (MISC::ARE_STRINGS_EQUAL(&uVar5, "[]") == 0)
	{
		Global_2726834 = 1;
	}
	if (iVar6 > 0)
	{
		Global_2726835 = iVar6;
	}
	if (iParam1 == 0)
	{
		if (__LIB_0__::func_3() == 0)
		{
			if (bVar4 == 1)
			{
				NETSHOPPING::NET_GAMESERVER_GET_SESSION_STATE_AND_STATUS(&iVar7, &uVar8);
				if (iVar7 == 8)
				{
					NETSHOPPING::NET_GAMESERVER_START_SESSION_RESTART(bVar0, bVar1);
				}
			}
		}
	}
}

int func_389(int iParam0, int iParam1)//Position - 0xC98B
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_97772[iVar1]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_97772[iVar1], false))
		{
			if (Global_97782[iVar1] == iParam0)
			{
				if (iParam1 == 0 || iParam1 == ENTITY::GET_ENTITY_MODEL(Global_97772[iVar1]))
				{
					iVar0++;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_390(char* sParam0, int iParam1, var uParam2)//Position - 0x36AA
{
	var* uVar0;
	var* uVar1;
	int iVar2;
	int iVar3;
	uVar0 = DATAFILE::DATAFILE_GET_FILE_DICT(0);
	uVar1 = DATAFILE::DATADICT_GET_DICT(uVar0, "mission");
	iVar2 = DATAFILE::DATADICT_GET_DICT(uVar1, "gen");
	StringCopy(sParam0, NETWORK::UGC_GET_CONTENT_ID(iParam1), 24);
	StringCopy(&(sParam0->f_6), NETWORK::UGC_GET_CONTENT_USER_ID(iParam1), 64);
	StringCopy(&(sParam0->f_22), NETWORK::UGC_GET_CONTENT_NAME(iParam1), 64);
	sParam0->f_56 = { __LIB_17__::func_939(iVar2) };
	sParam0->f_59 = { __LIB_16__::func_646(iVar2, "cam") };
	sParam0->f_62 = { __LIB_16__::func_645(iVar2) };
	sParam0->f_65 = DATAFILE::DATADICT_GET_INT(iVar2, "type");
	sParam0->f_68 = DATAFILE::DATADICT_GET_INT(iVar2, "subtype");
	sParam0->f_80 = DATAFILE::DATADICT_GET_INT(iVar2, "adverm");
	sParam0->f_79 = DATAFILE::DATADICT_GET_INT(iVar2, "testcomplete");
	sParam0->f_69 = DATAFILE::DATADICT_GET_INT(iVar2, "min");
	sParam0->f_70 = DATAFILE::DATADICT_GET_INT(iVar2, "rank");
	sParam0->f_71 = DATAFILE::DATADICT_GET_INT(iVar2, "num");
	sParam0->f_73 = __LIB_16__::func_644(NETWORK::UGC_GET_CONTENT_RATING(iParam1, 0), NETWORK::UGC_GET_CONTENT_RATING_COUNT(iParam1, 0));
	sParam0->f_74 = 0;
	sParam0->f_75 = DATAFILE::DATADICT_GET_INT(iVar2, "charcon");
	*uParam2 = MISC::GET_HASH_KEY(NETWORK::UGC_GET_ROOT_CONTENT_ID(0));
	if (__LIB_29__::func_55(*uParam2))
	{
		sParam0->f_68 = 8;
	}
	if (__LIB_0__::func_3() != 2)
	{
		if (sParam0->f_71 > Global_262145.f_4605 /* Tunable: MAX_NG_TRANSITION_SESSION_SIZE */)
		{
			sParam0->f_71 = Global_262145.f_4605 /* Tunable: MAX_NG_TRANSITION_SESSION_SIZE */;
		}
		if (sParam0->f_69 > Global_262145.f_4605 /* Tunable: MAX_NG_TRANSITION_SESSION_SIZE */)
		{
			sParam0->f_69 = Global_262145.f_4605 /* Tunable: MAX_NG_TRANSITION_SESSION_SIZE */;
		}
	}
	if (!__LIB_11__::func_730())
	{
		iVar3 = NETWORK::UGC_GET_CONTENT_LANGUAGE(iParam1);
		if (NETWORK::UGC_IS_LANGUAGE_SUPPORTED(iVar3))
		{
			sParam0->f_54 = NETWORK::UGC_GET_CONTENT_DESCRIPTION_HASH(iParam1);
		}
		else
		{
			sParam0->f_54 = -1;
		}
	}
	if (DATAFILE::DATADICT_GET_TYPE(iVar2, "ltm") == 2)
	{
		sParam0->f_78 = DATAFILE::DATADICT_GET_INT(iVar2, "ltm");
	}
	MISC::SET_BIT(&(sParam0->f_76), 13);
	__LIB_2__::func_289();
}

int func_391(int iParam0)//Position - 0x71D0
{
	if (__LIB_1__::func_592(iParam0) == 133)
	{
		return Global_2815059.f_5116;
	}
	return -1;
}

int func_392(int iParam0, bool bParam1)//Position - 0x21A6E
{
	if (__LIB_2__::func_588(iParam0, bParam1, -1))
	{
		if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_30, 3))
		{
			return 1;
		}
	}
	return 0;
}

void func_393(struct<3> Param0, float fParam1, int iParam2, int iParam3)//Position - 0x35941
{
	struct<3> Var0;
	var uVar1;
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
		{
			if (__LIB_0__::func_343(24) != PLAYER::GET_PLAYERS_LAST_VEHICLE())
			{
				if (iParam2 == 1)
				{
					if (__LIB_14__::func_665(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYERS_LAST_VEHICLE(), true), iParam3, &Var0, &uVar1))
					{
						Param0 = { Var0 };
						fParam1 = uVar1;
					}
				}
				__LIB_14__::func_775(PLAYER::GET_PLAYERS_LAST_VEHICLE(), Param0, fParam1, 24, 0);
			}
		}
	}
}

int func_394(int iParam0, int iParam1)//Position - 0x31B55
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	Var1 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
	fVar2 = MISC::ABSF((Var0.f_2 - Var1.f_2));
	if (fVar2 <= 1.5f)
	{
		return 1;
	}
	return 0;
}

bool func_395(int iParam0, char* sParam1)//Position - 0x132FC
{
	return VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam0, sParam1);
}

void func_396(int iParam0, char* sParam1)//Position - 0x1330C
{
	VEHICLE::REQUEST_VEHICLE_RECORDING(iParam0, sParam1);
}

int func_397()//Position - 0x14440
{
	if (iLocal_198 == 0)
	{
		return joaat("A_M_Y_Business_01");
	}
	return iLocal_198;
}

int func_398()//Position - 0x1B12D
{
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("digitalOverlay", false);
	if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("digitalOverlay"))
	{
		return 1;
	}
	return 0;
}

void func_399(int iParam0, int iParam1, float fParam2)//Position - 0x1BC3E
{
	struct<3> Var0;
	struct<3> Var1;
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam1))
		{
			VEHICLE::SET_PLAYBACK_SPEED(iParam1, fParam2);
			Var0 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
			Var1 = { ENTITY::GET_ENTITY_ROTATION(iParam1, 2) };
			CAM::SET_CAM_COORD(iParam0, Var0);
			CAM::SET_CAM_ROT(iParam0, Var1, 2);
		}
	}
}

void func_400(int iParam0, int iParam1, char* sParam2, int iParam3)//Position - 0x1BC8D
{
	struct<3> Var0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		ENTITY::SET_ENTITY_VISIBLE(iParam1, false, false);
		ENTITY::SET_ENTITY_COLLISION(iParam1, false, false);
		ENTITY::SET_ENTITY_INVINCIBLE(iParam1, true);
		ENTITY::SET_ENTITY_PROOFS(iParam1, true, true, true, true, true, false, false, false);
		VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iParam1, iParam3, sParam2, true);
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
		CAM::SET_CAM_COORD(iParam0, Var0);
		CAM::SET_CAM_ROT(iParam0, ENTITY::GET_ENTITY_ROTATION(iParam1, 2), 2);
	}
}

void func_401(int iParam0, char* sParam1)//Position - 0x21701
{
	VEHICLE::REMOVE_VEHICLE_RECORDING(iParam0, sParam1);
}

bool func_402(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x224F4
{
	struct<2> Var0;
	__LIB_17__::func_642(iParam0, &Var0);
	__LIB_13__::func_812(iParam0, &Var0, &(Var0.f_1));
	return __LIB_17__::func_634(uParam1, &Var0, bParam2, bParam3, bParam4, bParam5, bParam6);
}

Vector3 func_403(int iParam0, int iParam1)//Position - 0x1988
{
	switch (iParam0)
	{
		case 0:
			return -1219f, -3495.9f, 12.9448f;
			break;
		case 1:
			if (iParam1 == 1)
			{
				return 606.8925f, -3250.1875f, 5.06951f;
			}
			else
			{
				return 634.5865f, -3232.7903f, -16.5774f;
			}
			break;
		case 2:
			return 1590.5997f, -2810.174f, 3.4494f;
			break;
		case 3:
			if (iParam1 == 1)
			{
				return 327.99f, -2757.61f, 4.99f;
			}
			else
			{
				return 338.4039f, -2762.1057f, 42.6543f;
			}
			break;
		case 4:
			if (iParam1 == 1)
			{
				return 1134.4216f, -2607.0237f, 14.77071f;
			}
			else
			{
				return 1133.6882f, -2605.0728f, 14.9729f;
			}
			break;
		case 5:
			if (iParam1 == 1)
			{
				return 368.93164f, -2118.5327f, 15.40341f;
			}
			else
			{
				return 369.945f, -2116.7556f, 16.1688f;
			}
			break;
		case 6:
			if (iParam1 == 1)
			{
				return 1741.82f, -1623.85f, 111.41f;
			}
			else
			{
				return 1742.0242f, -1618.7767f, 111.8313f;
			}
			break;
		case 7:
			return 287.7294f, -1444.4f, 45.5095f;
			break;
		case 8:
			return 17.5926f, -1213.2073f, 28.3678f;
			break;
		case 9:
			if (iParam1 == 1)
			{
				return -910.01715f, -1147.44f, 1.06785f;
			}
			else
			{
				return -900.3597f, -1165.5511f, 31.8047f;
			}
			break;
		case 10:
			if (iParam1 == 1)
			{
				return 1237.7278f, -1099.1497f, 37.52579f;
			}
			else
			{
				return 1231.9734f, -1102.3076f, 34.4289f;
			}
			break;
		case 11:
			if (iParam1 == 1)
			{
				return 87.69075f, 810.3736f, 210.12582f;
			}
			else
			{
				return 81.2213f, 814.0283f, 213.2917f;
			}
			break;
		case 12:
			if (iParam1 == 1)
			{
				return -1900.9506f, 1389.5819f, 218.1509f;
			}
			else
			{
				return -1907.5149f, 1388.69f, 217.9728f;
			}
			break;
		case 13:
			if (iParam1 == 1)
			{
				return 467.36896f, -730.75525f, 26.36373f;
			}
			else
			{
				return 469.8529f, -730.8f, 26.3985f;
			}
			break;
		case 14:
			return 202.1081f, -569.7198f, 128.18f;
			break;
		case 15:
			if (iParam1 == 1)
			{
				return 163.0531f, -566.3394f, 21.029f;
			}
			else
			{
				return 159.39f, -563.82f, 21f;
			}
			break;
		case 16:
			if (iParam1 == 1)
			{
				return -1183.1521f, -518.5386f, 38.53018f;
			}
			else
			{
				return -1182.5385f, -525.5859f, 39.9114f;
			}
			break;
		case 17:
			return -228.0476f, -236.4184f, 49.1361f;
			break;
		case 18:
			return -407.7026f, -151.7918f, 63.5505f;
			break;
		case 19:
			if (iParam1 == 1)
			{
				return -1169.3975f, -56.76701f, 44.45705f;
			}
			else
			{
				return -1175.4877f, -65.4649f, 44.6563f;
			}
			break;
		case 20:
			if (iParam1 == 1)
			{
				return 1679.0564f, 39.44059f, 160.77364f;
			}
			else
			{
				return 1684.664f, 40.7142f, 153.4074f;
			}
			break;
		case 21:
			if (iParam1 == 1)
			{
				return 1964.25f, 553.68f, 160.72f;
			}
			else
			{
				return 1965.58f, 555.99f, 160.79f;
			}
			break;
		case 22:
			if (iParam1 == 1)
			{
				return 24.21706f, 637.1212f, 206.38968f;
			}
			else
			{
				return 22.4492f, 638.8155f, 189.6085f;
			}
			break;
		case 23:
			return 2901.204f, 796.1192f, 3.3556f;
			break;
		case 24:
			if (iParam1 == 1)
			{
				return -1531.895f, 870.3203f, 180.67746f;
			}
			else
			{
				return -1529.7219f, 871.4257f, 180.6421f;
			}
			break;
		case 25:
			return -404.3191f, 1100.889f, 331.535f;
			break;
		case 26:
			return -2809.3538f, 1449.643f, 99.928f;
			break;
		case 27:
			if (iParam1 == 1)
			{
				return 3144.0452f, 2184.4133f, -5.2961f;
			}
			else
			{
				return 3144.0452f, 2184.4133f, -5.2961f;
			}
			break;
		case 28:
			return 815.7574f, 1850.879f, 120.1796f;
			break;
		case 29:
			return -1944.24f, 1941.07f, 162.8f;
			break;
		case 30:
			if (iParam1 == 1)
			{
				return -1452.23f, 2127.41f, 42.84f;
			}
			else
			{
				return -1436.87f, 2130.22f, 26.78f;
			}
			break;
		case 31:
			return 1367.4128f, 2180.6316f, 96.6914f;
			break;
		case 32:
			if (iParam1 == 1)
			{
				return 170.1652f, 2217.637f, 89.30811f;
			}
			else
			{
				return 172.1426f, 2220.1313f, 89.7842f;
			}
			break;
		case 33:
			return 889.3209f, 2870.0522f, 55.2834f;
			break;
		case 34:
			if (iParam1 == 1)
			{
				return 1980.2f, 2914.79f, 45.48f;
			}
			else
			{
				return 1963.55f, 2922.81f, 57.76f;
			}
			break;
		case 35:
			return -390.384f, 2963.2605f, 18.2713f;
			break;
		case 36:
			return 71.6642f, 3279.3682f, 30.3918f;
			break;
		case 37:
			return 1924.1864f, 3471.2563f, 50.3238f;
			break;
		case 38:
			return -583.1569f, 3580.3752f, 266.2471f;
			break;
		case 39:
			if (iParam1 == 1)
			{
				return 2514.3015f, 3789.5193f, 52.077f;
			}
			else
			{
				return 2516.98f, 3789.35f, 53.79f;
			}
			break;
		case 40:
			if (iParam1 == 1)
			{
				return 1517.6129f, 3803.926f, 30.95605f;
			}
			else
			{
				return 1486.0475f, 3857.2168f, 22.2905f;
			}
			break;
		case 41:
			if (iParam1 == 1)
			{
				return -530.27386f, 4474.3584f, 59.45993f;
			}
			else
			{
				return -528.8246f, 4440.6436f, 31.7384f;
			}
			break;
		case 42:
			if (iParam1 == 1)
			{
				return 3815.055f, 4447.343f, 2.06631f;
			}
			else
			{
				return 3820.8132f, 4441.683f, 1.8007f;
			}
			break;
		case 43:
			if (iParam1 == 1)
			{
				return -1946.95f, 4584.36f, 56.06f;
			}
			else
			{
				return -1943.0546f, 4585.1943f, 46.6362f;
			}
			break;
		case 44:
			return 2437.5452f, 4779.9595f, 33.5101f;
			break;
		case 45:
			return -1441.4948f, 5414.888f, 23.3f;
			break;
		case 46:
			return 2196.2507f, 5599.034f, 52.7129f;
			break;
		case 47:
			if (iParam1 == 1)
			{
				return -503.95f, 5673.55f, 51.24f;
			}
			else
			{
				return -503.2193f, 5665.6104f, 48.8487f;
			}
			break;
		case 48:
			if (iParam1 == 1)
			{
				return -378.41922f, 6080.782f, 30.44296f;
			}
			else
			{
				return -381.291f, 6086.949f, 38.6147f;
			}
			break;
		case 49:
			return 440.9546f, 6459.6416f, 27.7432f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_404(var uParam0, var uParam1, struct<3> Param2)//Position - 0xD9D
{
	int iVar0;
	iVar0 = uParam0->f_10;
	if ((uParam1[iVar0 /*11*/])->f_10)
	{
		if ((uParam1[iVar0 /*11*/])->f_1 != 0)
		{
			if (OBJECT::HAS_PICKUP_BEEN_COLLECTED((uParam1[iVar0 /*11*/])->f_1) || __LIB_0__::func_744((uParam1[iVar0 /*11*/])->f_1))
			{
				__LIB_37__::func_366(uParam0, uParam1, iVar0);
				return 1;
			}
		}
	}
	if (OBJECT::DOES_PICKUP_EXIST((uParam1[iVar0 /*11*/])->f_1))
	{
		if ((SYSTEM::VDIST2(Param2, OBJECT::GET_PICKUP_COORDS((uParam1[iVar0 /*11*/])->f_1)) > (60f * 60f) || __LIB_0__::func_39(13)) || __LIB_0__::func_39(14))
		{
			__LIB_0__::func_733(&((uParam1[iVar0 /*11*/])->f_1));
			(uParam1[iVar0 /*11*/])->f_1 = 0;
			(uParam1[iVar0 /*11*/])->f_10 = 0;
		}
	}
	return 0;
}

int func_405()//Position - 0x72EB
{
	if (Global_1946250.f_4698 != -1)
	{
		return 1;
	}
	return 0;
}

bool func_406()//Position - 0xFF32
{
	int iVar0;
	iVar0 = __LIB_3__::func_485();
	return (iVar0 == 2 || iVar0 == 3);
}

int func_407()//Position - 0x1F80
{
	if (Global_2671449.f_18)
	{
		__LIB_37__::func_551();
		__LIB_37__::func_660();
		return 1;
	}
	if (__LIB_17__::func_932() || __LIB_25__::func_196())
	{
		__LIB_37__::func_551();
		__LIB_37__::func_660();
		return 1;
	}
	if ((((((((((((__LIB_28__::func_558() && Global_2671449 != 5) && Global_2671449 != 6) && Global_2671449 != 7) && !Global_2671449.f_27) && !Global_2671449.f_28) && !Global_2671449.f_29) && !Global_2671449.f_30) && !Global_2671449.f_31) && !Global_2671449.f_32) && !Global_2671449.f_33) && !Global_2671449 == 8) && !Global_2671449 == 9)
	{
		__LIB_6__::func_43(0);
		__LIB_37__::func_551();
		__LIB_37__::func_660();
		return 1;
	}
	if (Global_2671449.f_16 && Global_2671449.f_15)
	{
		return 1;
	}
	else if (!Global_2671449.f_20)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("spawn_activities")) == 0)
		{
			if (__LIB_5__::func_99("spawn_activities", 1424))
			{
				Global_2671449.f_20 = 1;
			}
		}
	}
	else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("spawn_activities")) == 0)
	{
		__LIB_37__::func_551();
		__LIB_37__::func_660();
		return 1;
	}
	if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2671449.f_3)) > 120000)
	{
		__LIB_37__::func_551();
		__LIB_37__::func_660();
		return 1;
	}
	MISC::SET_BIT(&(Global_1940663[1]), 22);
	return 0;
}

int func_408(int iParam0, int iParam1)//Position - 0x2A49
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					return 1;
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 59:
					if ((__LIB_1__::func_307(PLAYER::PLAYER_ID()) != -1 && __LIB_3__::func_592(__LIB_1__::func_307(PLAYER::PLAYER_ID()), 11)) && __LIB_0__::func_509() == 0)
					{
						return !__LIB_4__::func_358(PLAYER::PLAYER_ID());
					}
					return 1;
					break;
				case 60:
				case 61:
				case 62:
				case 63:
				case 64:
				case 65:
				case 66:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_409()//Position - 0x6FC8
{
	if (__LIB_2__::func_867(Global_1310720.f_1441))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(__LIB_0__::func_85(PLAYER::PLAYER_ID()), Global_4196263[Global_1310720.f_1441 /*2012*/].f_146.f_47, true) <= 30f)
		{
			if (__LIB_0__::func_972(PLAYER::PLAYER_ID(), 0, 0))
			{
				if (!Global_2667225.f_2677 && !Global_2667225.f_2679)
				{
					return 0;
				}
			}
			if (__LIB_37__::func_442(&(Global_4196263[Global_1310720.f_1441 /*2012*/]), 1, 0))
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

int func_410()//Position - 0x72B41
{
	if (!Global_1976975)
	{
		if (__LIB_0__::func_938(PLAYER::PLAYER_ID()))
		{
			if (ENTITY::DOES_ENTITY_EXIST(__LIB_2__::func_638()) && VEHICLE::IS_VEHICLE_DRIVEABLE(__LIB_2__::func_638(), false))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(5017.4224f, -5130.4478f, 2.19928f, ENTITY::GET_ENTITY_COORDS(Global_2815059.f_298, true), true) < 1500f)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

char* func_411()//Position - 0x627
{
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && __LIB_1__::func_365(PLAYER::PLAYER_PED_ID()))
	{
		return "anim@scripted@heist@ig25_beach@heeled@";
	}
	return "anim@scripted@heist@ig25_beach@male@";
}

bool func_412()//Position - 0x1095F
{
	if (__LIB_1__::func_455(PLAYER::PLAYER_ID(), 1) && !Global_1973160)
	{
		return 1;
	}
	return (Global_262145.f_29314 || !__LIB_1__::func_35());
}

int func_413()//Position - 0x72E12
{
	if (__LIB_11__::func_705())
	{
		return 1;
	}
	return __LIB_10__::func_459(__LIB_1__::func_463());
}

void func_414(int iParam0)//Position - 0x8007
{
	if (!__LIB_29__::func_208(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (iParam0 != -1)
	{
		__LIB_7__::func_946(iParam0);
	}
	__LIB_13__::func_134(243, -1);
}

Vector3 func_415(int iParam0)//Position - 0x175F
{
	if (iParam0 >= 7 || iParam0 <= -1)
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0:
			return -1939.4829f, 4443.9526f, 37.3474f;
		case 1:
			return -516.9256f, 2008.014f, 204.0998f;
		case 3:
			return -223.6755f, 4224.6436f, 43.7304f;
		case 4:
			return 1606.5785f, 3841.1882f, 33.2931f;
		case 5:
			return 2037.6644f, 2137.3862f, 92.7095f;
		case 2:
			return 2996.776f, 2774.085f, 43.26f;
		default:
	}
	return 0f, 0f, 0f;
}

void func_416(int iParam0)//Position - 0x2BF5
{
	if (iParam0 < 0 || iParam0 >= 16)
	{
		return;
	}
	Global_44024[iParam0 /*5*/] = -1;
	Global_44024[iParam0 /*5*/].f_1 = 0;
	Global_44024[iParam0 /*5*/].f_2 = -1;
	Global_44024[iParam0 /*5*/].f_3 = 0;
	Global_44024[iParam0 /*5*/].f_4 = 0;
}

Vector3 func_417(int iParam0)//Position - 0x50F9
{
	if (iParam0 >= 3 || iParam0 <= -1)
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 1:
			return 2434.4146f, 4284.2495f, 35.5059f;
		case 0:
			return -1230.6222f, -2049.97f, 12.8882f;
		case 2:
			return 1591.686f, 3813.4014f, 33.3371f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_418()//Position - 0x2B60
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		__LIB_17__::func_12(iVar0);
		iVar0++;
	}
}

void func_419()//Position - 0x2C42
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		__LIB_0__::func_758(iVar0);
		iVar0++;
	}
}

void func_420(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x1A74
{
	Global_113386.f_1.f_73[iParam0 /*3*/] = iParam1;
	__LIB_38__::func_29(iParam0, 0, iParam2);
	__LIB_38__::func_29(iParam0, 1, iParam3);
	__LIB_38__::func_29(iParam0, 2, iParam4);
	__LIB_38__::func_29(iParam0, 3, iParam5);
}

Vector3 func_421(struct<3> Param0, bool bParam1)//Position - 0xECF2
{
	struct<3> Var0;
	Var0 = { -5f, -5f, 0f };
	if (bParam1)
	{
		Var0 = { 5f, 5f, 3f };
	}
	Var0 = { Param0 + Var0 };
	return Var0;
}

void func_422(int iParam0)//Position - 0x14DA7
{
	int iVar0;
	int iVar1;
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		MISC::CLEAR_BIT(&(Global_113386.f_20410.f_150[iVar1]), iVar0);
		MISC::CLEAR_BIT(&(Global_113386.f_20410.f_150[iVar1]), iVar0);
	}
}

void func_423()//Position - 0x80AFA
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		Global_95479[iVar0 /*10*/] = { 0f, 0f, 0f };
		Global_95479[iVar0 /*10*/].f_3 = { 0f, 0f, 0f };
		Global_95479[iVar0 /*10*/].f_6 = 0f;
		Global_95479[iVar0 /*10*/].f_7 = 263;
		Global_95479[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
}

var func_424(int iParam0)//Position - 0x8442E
{
	return Global_1998[iParam0 /*29*/].f_1;
}

int func_425()//Position - 0x7477D
{
	int iVar0;
	bool bVar1;
	bVar1 = false;
	while (bVar1 < 32)
	{
		if (BitTest(Global_113386.f_10049.f_96, bVar1))
		{
			if (!__LIB_37__::func_413(bVar1))
			{
				iVar0++;
			}
		}
		if (BitTest(Global_113386.f_10049.f_97, bVar1))
		{
			if (!__LIB_37__::func_413(bVar1 + 32))
			{
				iVar0++;
			}
		}
		if (BitTest(Global_113386.f_10049.f_98, bVar1))
		{
			if (!__LIB_37__::func_413(bVar1 + 64))
			{
				iVar0++;
			}
		}
		bVar1++;
	}
	return iVar0;
}

void func_426(var uParam0, int iParam1)//Position - 0x862FB
{
	__LIB_37__::func_996(uParam0);
	switch (iParam1)
	{
		case 0:
			__LIB_30__::func_368(uParam0[0], 0, 0, 0, 2, 2, 0, 9);
			__LIB_30__::func_368(uParam0[1], 0, 0, 0, 8, 8, 2, 1);
			break;
		case 1:
			__LIB_30__::func_368(uParam0[0], 0, 0, 0, 6, 6, 5, 1);
			break;
	}
}

void func_427(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)//Position - 0x86519
{
	*uParam1 = iParam3;
	uParam1->f_1 = iParam4;
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam1->f_2 = 0;
	uParam1->f_3 = -1;
	uParam1->f_4 = -1;
	__LIB_1__::func_377(&(uParam1->f_5));
	uParam1->f_8 = 1;
	uParam1->f_16 = 7;
	uParam1->f_17 = -1;
	uParam1->f_18 = 0;
	__LIB_37__::func_996(&(uParam1->f_9));
	switch (iParam2)
	{
		case 6:
			__LIB_30__::func_368(&(uParam1->f_9[0]), 0, 0, 0, 1, 0, 0, 4);
			__LIB_30__::func_368(&(uParam1->f_9[1]), 0, 0, 0, 10, 6, 10, 1);
			break;
		case 3:
			__LIB_30__::func_368(&(uParam1->f_9[0]), 0, 0, 0, 1, 0, 0, 18);
			__LIB_30__::func_368(&(uParam1->f_9[1]), 0, 0, 0, 1, 0, 0, 19);
			__LIB_30__::func_368(&(uParam1->f_9[2]), 0, 0, 0, 4, 8, 0, 7);
			__LIB_30__::func_368(&(uParam1->f_9[3]), 0, 0, 0, 4, 8, 0, 8);
			__LIB_30__::func_368(&(uParam1->f_9[4]), 0, 0, 0, 9, 0, 0, 9);
			__LIB_30__::func_368(&(uParam1->f_9[5]), 0, 0, 0, 0, 0, 8, 1);
			__LIB_37__::func_996(&(Global_113386.f_18103.f_388));
			__LIB_30__::func_368(&(Global_113386.f_18103.f_388[0]), 0, 0, 0, 0, 4, 0, 10);
			__LIB_30__::func_368(&(Global_113386.f_18103.f_388[1]), 0, 0, 0, 0, 5, 0, 11);
			__LIB_30__::func_368(&(Global_113386.f_18103.f_388[2]), 0, 0, 0, 0, 4, 0, 12);
			__LIB_30__::func_368(&(Global_113386.f_18103.f_388[3]), 0, 0, 0, 0, 6, 0, 13);
			__LIB_30__::func_368(&(Global_113386.f_18103.f_388[4]), 0, 0, 0, 0, 3, 0, 14);
			break;
		case 1:
			__LIB_30__::func_368(&(uParam1->f_9[0]), 0, 0, 0, 2, 2, 0, 17);
			__LIB_30__::func_368(&(uParam1->f_9[1]), 0, 0, 0, 2, 1, 1, 10);
			__LIB_30__::func_368(&(uParam1->f_9[2]), 0, 0, 0, 8, 8, 4, 1);
			break;
		case 8:
			__LIB_30__::func_368(&(uParam1->f_9[0]), 0, 0, 0, 8, 8, 4, 3);
			__LIB_30__::func_368(&(uParam1->f_9[1]), 0, 0, 0, 8, 8, 3, 4);
			__LIB_30__::func_368(&(uParam1->f_9[2]), 0, 0, 0, 0, 0, 1, 21);
			break;
		case 0:
			__LIB_30__::func_368(&(uParam1->f_9[0]), 0, 0, 0, 2, 2, 0, 15);
			__LIB_30__::func_368(&(uParam1->f_9[1]), 0, 0, 0, 2, 2, 0, 17);
			__LIB_30__::func_368(&(uParam1->f_9[2]), 0, 0, 0, 2, 2, 0, 9);
			__LIB_30__::func_368(&(uParam1->f_9[3]), 0, 0, 0, 8, 8, 4, 1);
			break;
		case 5:
			__LIB_30__::func_368(&(uParam1->f_9[0]), 0, 0, 0, 6, 6, 0, 5);
			__LIB_30__::func_368(&(uParam1->f_9[1]), 0, 0, 0, 8, 8, 0, 6);
			break;
		case 2:
			__LIB_30__::func_368(&(uParam1->f_9[0]), 0, 0, 0, 2, 0, 0, 16);
			__LIB_30__::func_368(&(uParam1->f_9[1]), 0, 0, 0, 2, 1, 1, 10);
			__LIB_30__::func_368(&(uParam1->f_9[2]), 0, 0, 0, 1, 0, 0, 20);
			__LIB_30__::func_368(&(uParam1->f_9[3]), 0, 0, 0, 5, 8, 4, 1);
			break;
		case 7:
			__LIB_30__::func_368(&(uParam1->f_9[0]), 0, 0, 0, 1, 0, 0, 4);
			__LIB_30__::func_368(&(uParam1->f_9[1]), 0, 0, 0, 10, 6, 0, 1);
			break;
		case 4:
			__LIB_30__::func_368(&(uParam1->f_9[0]), 0, 0, 0, 6, 6, 0, 1);
			__LIB_30__::func_368(&(uParam1->f_9[1]), 0, 0, 0, 6, 6, 0, 1);
			break;
	}
}

void func_428(var* uParam0, int iParam1)//Position - 0x869FD
{
	__LIB_37__::func_997(uParam0, iParam1);
}

void func_429()//Position - 0x86CA5
{
	__LIB_38__::func_10();
	__LIB_38__::func_9();
}

void func_430(int iParam0, int iParam1)//Position - 0x73A1A
{
	int iVar0;
	if (iParam0 == 94 || iParam0 == -1)
	{
		return;
	}
	if (iParam1 && !Global_113386.f_9085.f_330[iParam0 /*6*/])
	{
		if (!BitTest(Global_91229[iParam0 /*34*/].f_15, 6))
		{
			iVar0 = __LIB_37__::func_981(iParam0);
			if (iVar0 != 322)
			{
				__LIB_0__::func_716(iVar0, 0, 0);
			}
		}
		__LIB_17__::func_910(iParam0, __LIB_37__::func_376(iParam0), 0);
		if (iParam0 == 53)
		{
			if (NETWORK::NETWORK_IS_SIGNED_IN())
			{
				STATS::SET_PROFILE_SETTING_PROLOGUE_COMPLETE();
			}
		}
		if (iParam0 == 40)
		{
			if (NETWORK::NETWORK_IS_SIGNED_IN())
			{
				STATS::SET_PROFILE_SETTING_SP_CHOP_MISSION_COMPLETE();
			}
		}
	}
	Global_113386.f_9085.f_330[iParam0 /*6*/] = iParam1;
}

void func_431()//Position - 0x308
{
	Global_30[0] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1680.49f, -929.44f, -0.462531f, "vbca_tunnel1");
	Global_30[1] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1562.04f, -876.91f, -0.471913f, "vbca_tunnel2");
	Global_30[2] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1429.65f, -823.211f, -0.432763f, "vbca_tunnel3");
	Global_30[3] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1316.9f, -843.515f, 1.43639f, "vbca_tunnel4");
	Global_30[4] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1249.67f, -896.27f, 0.293292f, "vbca_tunnel5");
	Global_30[5] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-38.9818f, -570.534f, 28.4812f, "v_31_tun_01");
	Global_30[6] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(481.908f, -577.602f, 2.41908f, "v_31_newtunnel1");
	Global_30[7] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1029.02f, -260.955f, 48.2681f, "v_31_newtun5");
	Global_30[8] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1022.25f, -205.648f, 42.8956f, "v_31_newtun4b");
	Global_30[9] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(823.852f, -299.823f, 4.54864f, "v_31_newtun3");
	Global_30[0] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(615.395f, -409.282f, -1.57599f, "v_31_newtun2");
	Global_30[11] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1190.58f, -685.387f, 11.0753f, "sm20_tun4");
	Global_30[12] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1292.36f, -730.629f, 11.0934f, "sm20_tun3");
	Global_30[13] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1411.97f, -759.518f, 15.5455f, "sm20_tun2");
	Global_30[14] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1531.56f, -762.391f, 15.3451f, "sm20_tun1");
	Global_30[15] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(558.653f, -1486.49f, 21.4096f, "sc1_rd_inttunshort");
	Global_30[16] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(569.673f, -1920.17f, 21.1009f, "sc1_rd_inttun3b_end");
	Global_30[17] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(512.412f, -1908.55f, 21.2086f, "sc1_rd_inttun3b");
	Global_30[18] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(434.343f, -1945.27f, 17.3936f, "sc1_rd_inttun3");
	Global_30[19] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(513.914f, -2009.82f, 21.1486f, "sc1_rd_inttun2b_end");
	Global_30[20] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(465.139f, -2025.49f, 19.4406f, "sc1_rd_inttun2b");
	Global_30[21] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(406.938f, -1978.14f, 16.3512f, "sc1_rd_inttun2");
	Global_30[22] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(319.321f, -1896.97f, 22.4086f, "sc1_rd_inttun1");
	Global_30[23] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-573.473f, -580.793f, 25.3082f, "kt1_04_roadtunnel_int");
	Global_30[24] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-675.628f, -606.272f, 25.3078f, "kt1_03_carpark_int");
	Global_30[25] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1314.63f, -904.059f, 53.0877f, "id2_21_a_tun5");
	Global_30[26] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1248.64f, -773.6f, 44.5493f, "id2_21_a_tun4");
	Global_30[27] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1213.45f, -597.799f, 37.7533f, "id2_21_a_tun3");
	Global_30[28] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1083.25f, -502.542f, 34.6573f, "id2_21_a_tun2");
	Global_30[29] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(926.428f, -488.737f, 33.8564f, "id2_21_a_tun1");
	Global_30[30] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(732.663f, -2486.45f, 11.0686f, "id1_11_tunnel8_int");
	Global_30[31] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(749.494f, -2364.79f, 16.2255f, "id1_11_tunnel7_int");
	Global_30[32] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(758.957f, -2260.08f, 23.4637f, "id1_11_tunnel6_int");
	Global_30[33] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(769.889f, -2124.24f, 21.8223f, "id1_11_tunnel5_int");
	Global_30[34] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(789.138f, -1963.58f, 20.6408f, "id1_11_tunnel4_int");
	Global_30[35] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(815.852f, -1832.2f, 22.9671f, "id1_11_tunnel3_int");
	Global_30[36] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(829.752f, -1718.51f, 20.4594f, "id1_11_tunnel2_int");
	Global_30[37] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(829.845f, -1718.51f, 20.1823f, "id1_11_tunnel1_int");
	Global_30[38] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(274.441f, -636.403f, 29.0854f, "dt1_rd1_tun3");
	Global_30[39] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(142.198f, -581.121f, 31.2974f, "dt1_rd1_tun2");
	Global_30[40] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(204.925f, -601.567f, 29.3757f, "dt1_rd1_tun");
	Global_30[41] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(2571.05f, 3907.95f, 41.1896f, "cs4_rwayb_tunnelint");
	Global_30[42] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-493.613f, 4275.55f, 89.1677f, "cs3_03railtunnel_int4");
	Global_30[43] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-476.018f, 4201.55f, 87.9392f, "cs3_03railtunnel_int3");
	Global_30[44] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-457.748f, 4125.51f, 86.1208f, "cs3_03railtunnel_int2");
	Global_30[45] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-442.948f, 4064.86f, 84.1041f, "cs3_03railtunnel_int1");
	Global_30[46] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(2159.62f, 5995.87f, 51.2999f, "cs2_roadsb_tunnel_03");
	Global_30[47] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(2250.3f, 5915.56f, 49.6273f, "cs2_roadsb_tunnel_02");
	Global_30[48] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(2341.18f, 5814.9f, 46.7075f, "cs2_roadsb_tunnel_01");
	Global_30[49] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-537.422f, 4613.09f, 89.7512f, "cs1_14brailway6");
	Global_30[50] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-540.452f, 4719.74f, 89.7576f, "cs1_14brailway5");
	Global_30[51] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-543.783f, 4821.95f, 89.7357f, "cs1_14brailway4");
	Global_30[52] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-546.036f, 4923.02f, 89.8919f, "cs1_14brailway3");
	Global_30[53] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-546.265f, 4999.07f, 90.8104f, "cs1_14brailway2");
	Global_30[54] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-539.261f, 5077.03f, 91.6235f, "cs1_14brailway1");
	Global_30[55] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-183.656f, 4664.52f, 130.5f, "cs1_12_tunnel03_int");
	Global_30[56] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-273.86f, 4752.12f, 138.21f, "cs1_12_tunnel02_int");
	Global_30[57] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-410.302f, 4860.98f, 144.864f, "cs1_12_tunnel01_int");
	Global_30[58] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-2596.83f, 3088.87f, 15.4225f, "ch1_roadsdint_tun2");
	Global_30[59] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-2583.04f, 3268.07f, 13.3157f, "ch1_roadsdint_tun1");
	Global_30[60] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-179.51f, -180.189f, 43.6251f, "bt1_04_carpark");
}

void func_432(var* uParam0, char* sParam1)//Position - 0x25C3
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 41, sParam1);
	MISC::REGISTER_ENUM_TO_SAVE(uParam0, "Model");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1), "iColourID1");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_2), "iColourID2");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_3), "iColour1Group");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_4), "iColour2Group");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_5), "iWindowTint");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_6), "iTyreSmokeR");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_7), "iTyreSmokeG");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_8), "iTyreSmokeB");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_9), "iEngine");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_10), "iBrakes");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_11), "iWheels");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_12), "iWheelType");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_13), "iExhaust");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_14), "iSuspension");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_15), "iArmour");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_16), "iHorn");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_17), "iLights");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_18), "bBulletProofTyres");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_19), "iTurbo");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_20), "iTyreSmoke");
	MISC::REGISTER_TEXT_LABEL_15_TO_SAVE(&(uParam0->f_21), "tlPlateText");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_25), "iPlateBack");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_26), "UID");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_27), "Cost");
	MISC::REGISTER_TEXT_LABEL_15_TO_SAVE(&(uParam0->f_28), "tlPlateText_pending");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_32), "iPlateBack_pending");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_33), "bProcessOrder");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_36), "bOrderPending");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_35), "bOrderReceivedOnBoot");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_34), "bOrderForPlayerVehicle");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_37), "bCheckPlateProfanity");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_40), "bOrderPaidFor");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_38), "bSCProfanityFailed");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_39), "bOrderFailedFunds");
	MISC::STOP_SAVE_STRUCT();
}

int func_433()//Position - 0x23113
{
	if (((LOADINGSCREEN::LOBBY_AUTO_MULTIPLAYER_FREEMODE() || LOADINGSCREEN::LOBBY_AUTO_MULTIPLAYER_MENU()) || NETWORK::GET_IS_LAUNCH_FROM_LIVE_AREA()) || NETWORK::GET_IS_LIVE_AREA_LAUNCH_WITH_CONTENT())
	{
		return 1;
	}
	return 0;
}

void func_434(char* sParam0, int iParam1)//Position - 0x15
{
	SCRIPT::REQUEST_SCRIPT(sParam0);
	while (!SCRIPT::HAS_SCRIPT_LOADED(sParam0))
	{
		SYSTEM::WAIT(0);
		SCRIPT::REQUEST_SCRIPT(sParam0);
	}
	SYSTEM::START_NEW_SCRIPT(sParam0, iParam1);
}

int func_435(struct<3> Param0, var uParam1, int iParam2, int iParam3, float fParam4, float fParam5)//Position - 0x9FE7
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	iVar0 = (*iParam2 / iParam3);
	iVar1 = (*iParam2 % iParam3);
	fVar2 = (IntToFloat(iVar0) * fParam5);
	if (fVar2 > fParam4)
	{
		return 0;
	}
	if (IntToFloat(*iParam2) > ((IntToFloat(iParam3) * fParam4) / fParam5))
	{
		return 0;
	}
	fVar3 = ((360f / IntToFloat(iParam3)) * IntToFloat(iVar1));
	fVar4 = ((SYSTEM::COS(fVar3) * fParam5) * IntToFloat(iVar0 + 1));
	fVar5 = ((SYSTEM::SIN(fVar3) * fParam5) * IntToFloat(iVar0 + 1));
	*uParam1 = { Param0 + Vector(0f, fVar5, fVar4) };
	*iParam2++;
	return 1;
}

int func_436(struct<3> Param0, float fParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0xA070
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var4;
	var uVar5;
	var uVar6;
	int iVar7;
	var uVar8;
	int iVar9;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (iParam2 == 0)
		{
			iParam2 = ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
		}
		iVar0 = PLAYER::PLAYER_PED_ID();
		iVar1 = 126;
		if (!bParam3)
		{
			iVar0 = 0;
			iVar1 = 126;
		}
		iVar2 = -1;
		MISC::GET_MODEL_DIMENSIONS(iParam2, &Var3, &Var4);
		if (bParam4)
		{
			Var3 = { Var3 * Vector(1.25f, 1.25f, 1.25f) };
			Var4 = { Var4 * Vector(1.25f, 1.25f, 1.25f) };
		}
		Var4 = { Var4 - Var3 };
		iVar7 = SHAPETEST::START_SHAPE_TEST_BOX(Param0 - Vector(Var3.f_2, 0f, 0f), Var4, 0f, 0f, fParam1, 2, iVar1, iVar0, 4);
		iVar9 = SHAPETEST::GET_SHAPE_TEST_RESULT(iVar7, &iVar2, &uVar5, &uVar6, &uVar8);
		while (iVar9 == 1)
		{
			SYSTEM::WAIT(0);
			iVar9 = SHAPETEST::GET_SHAPE_TEST_RESULT(iVar7, &iVar2, &uVar5, &uVar6, &uVar8);
		}
		if (iVar9 == 2)
		{
			if (iVar2 != 0)
			{
				return 0;
			}
			return 1;
		}
	}
	return 0;
}

int func_437(int iParam0, struct<3> Param1, struct<3> Param2, float fParam3, int iParam4, int iParam5)//Position - 0x97C69
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	iVar0 = iParam4;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam4 == 263)
	{
		return 0;
	}
	if (((Global_32338[iVar0 /*23*/].f_16 == 6 || Global_32338[iVar0 /*23*/].f_16 == 1) || Global_32338[iVar0 /*23*/].f_16 == 9) || Global_32338[iVar0 /*23*/].f_16 == 7)
	{
		return 0;
	}
	if (SYSTEM::VDIST2(Param1, Param2) < (7.5f * 7.5f))
	{
		*fParam3 = SYSTEM::VDIST2(Param1, Param2);
		return 1;
	}
	fVar1 = -1f;
	if (Global_32338[iVar0 /*23*/].f_16 == 4)
	{
		fVar1 = 10f;
		iVar2 = 0;
		while (iVar2 < 8)
		{
			if (Global_97374[iVar2 /*17*/])
			{
				if (Global_97374[iVar2 /*17*/].f_9 == iParam4)
				{
					fVar1 = Global_94426[Global_97374[iVar2 /*17*/].f_5 /*2*/].f_1;
				}
			}
			iVar2++;
		}
	}
	else if (Global_32338[iVar0 /*23*/].f_16 == 8)
	{
		fVar1 = 20f;
	}
	if (fVar1 > 0f)
	{
		if (SYSTEM::VDIST2(Param1, Param2) < (fVar1 * fVar1))
		{
			*fParam3 = SYSTEM::VDIST2(Param1, Param2);
			return 1;
		}
		if (iParam0 != 89)
		{
			iVar3 = 0;
			while (iVar3 < 10)
			{
				if (BitTest(Global_113386.f_7229[iVar3], 0))
				{
					if (SYSTEM::VDIST2(Global_95479[iVar3 /*10*/], Param2) < (50f * 50f))
					{
						if (SYSTEM::VDIST2(Global_95479[iVar3 /*10*/], Param1) < (30f * 30f))
						{
							*fParam3 = SYSTEM::VDIST2(Global_95479[iVar3 /*10*/], Param1);
							iParam0 = iParam0;
							return 1;
						}
					}
				}
				iVar3++;
			}
		}
	}
	iParam5 = iParam5;
	*fParam3 = 0f;
	return 0;
}

int func_438(int iParam0)//Position - 0x985A7
{
	switch (iParam0)
	{
		case 315:
		case 311:
		case 234:
		case 316:
		case 245:
			if (BitTest(Global_113386.f_18574[35 /*6*/], 3) && !BitTest(Global_113386.f_18574[36 /*6*/], 3))
			{
				return 1;
			}
			break;
	}
	switch (Global_78583)
	{
		case 42:
			if (iParam0 == 118)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_439(int iParam0, int iParam1)//Position - 0x98AB2
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (iParam1 == Global_113386.f_18533.f_4[iParam0 /*6*/][iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_440(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x99022
{
	if ((((((((Global_113386.f_18533[iParam0] == iParam2 && iParam2 != 318) || (Global_113386.f_18533[iParam0] == iParam3 && iParam3 != 318)) || (Global_113386.f_18533[iParam0] == iParam4 && iParam4 != 318)) || (Global_113386.f_18533[iParam0] == iParam5 && iParam5 != 318)) || (Global_113386.f_18533[iParam0] == iParam6 && iParam6 != 318)) || (Global_113386.f_18533[iParam0] == iParam7 && iParam7 != 318)) || (Global_113386.f_18533[iParam0] == iParam8 && iParam8 != 318)) || (Global_113386.f_18533[iParam0] == iParam9 && iParam9 != 318))
	{
		if ((((((((iParam1 == iParam2 && iParam2 != 318) || (iParam1 == iParam3 && iParam3 != 318)) || (iParam1 == iParam4 && iParam4 != 318)) || (iParam1 == iParam5 && iParam5 != 318)) || (iParam1 == iParam6 && iParam6 != 318)) || (iParam1 == iParam7 && iParam7 != 318)) || (iParam1 == iParam8 && iParam8 != 318)) || (iParam1 == iParam9 && iParam9 != 318))
		{
			return 1;
		}
	}
	return 0;
}

int func_441(var uParam0, int iParam1, var uParam2)//Position - 0x99538
{
	if (*uParam0 >= *uParam2)
	{
		return 0;
	}
	(*uParam2)[*uParam0] = iParam1;
	*uParam0++;
	return 1;
}

int func_442(int iParam0, bool bParam1)//Position - 0x997C0
{
	if (BitTest(Global_113386.f_18574[iParam0 /*6*/], bParam1))
	{
		return 1;
	}
	return 0;
}

int func_443(int iParam0, float fParam1, var uParam2, var uParam3, int iParam4)//Position - 0x99B5B
{
	if (*iParam4 >= *uParam2)
	{
		return 0;
	}
	(*uParam2)[*iParam4] = iParam0;
	(*uParam3)[*iParam4] = fParam1;
	*iParam4++;
	return 1;
}

int func_444(int iParam0, int iParam1, int iParam2)//Position - 0x99B8B
{
	if (iParam0 != 145)
	{
	}
	if (iParam1 != 318)
	{
	}
	if (iParam2 != 0)
	{
	}
	return 1;
}

bool func_445(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x9AA4B
{
	*uParam0 = 318;
	*uParam1 = -1f;
	uParam2->f_2 = uParam2->f_2;
	uParam3->f_111 = uParam3->f_111;
	uParam4 = uParam4;
	return *uParam0 != 318;
}

void func_446(int iParam0)//Position - 0xEFE
{
	if (__LIB_38__::func_60(iParam0))
	{
		Global_97364 = iParam0;
		Global_97368 = 1;
		return;
	}
}

int func_447(struct<3> Param0, bool bParam1, int iParam2)//Position - 0x9C94
{
	float fVar0;
	if (bParam1)
	{
		if (iParam2 < 2)
		{
			return 1;
		}
		if (((((((((SYSTEM::VDIST2(Param0, -1601.68f, -1013.9f, 12.02f) < 2809f || SYSTEM::VDIST2(Param0, -1645.58f, -1065.69f, 17.53f) < 2809f) || SYSTEM::VDIST2(Param0, -1688.35f, -1118.13f, 12.15f) < 2809f) || SYSTEM::VDIST2(Param0, -1751.62f, -1133.6f, 12.09f) < 2809f) || SYSTEM::VDIST2(Param0, -150.3f, 969.48f, 234.61f) < 400f) || SYSTEM::VDIST2(Param0, -160.5f, 1006.18f, 233.11f) < 400f) || SYSTEM::VDIST2(Param0, -215.49f, 887.98f, 207.17f) < 400f) || SYSTEM::VDIST2(Param0, -186.37f, 830.33f, 202.51f) < 400f) || SYSTEM::VDIST2(Param0, -114.1f, 784.55f, 201.24f) < 400f) || SYSTEM::VDIST2(Param0, -140.14f, 910.92f, 237.18f) < 400f)
		{
			return 1;
		}
	}
	if (((((((((((((__LIB_0__::func_490(Param0, 24.2857f, -663.82f, 31.6286f, 1f, 0) || __LIB_0__::func_490(Param0, -73.2402f, -682.619f, 32.6686f, 1f, 0)) || __LIB_0__::func_490(Param0, 20.6539f, -673.9974f, 31.3274f, 1f, 0)) || __LIB_0__::func_490(Param0, 17.0277f, -679.2629f, 31.3381f, 1f, 0)) || __LIB_0__::func_490(Param0, 13.0123f, -681.9813f, 31.3381f, 1f, 0)) || __LIB_0__::func_490(Param0, 9.33f, -683.0215f, 31.3381f, 1f, 0)) || __LIB_0__::func_490(Param0, -3.0009f, -684.3066f, 31.3381f, 1f, 0)) || __LIB_0__::func_490(Param0, -15.2584f, -685.263f, 31.3381f, 1f, 0)) || __LIB_0__::func_490(Param0, -27.7868f, -686.3926f, 31.3381f, 1f, 0)) || __LIB_0__::func_490(Param0, -40.3021f, -687.285f, 31.3381f, 1f, 0)) || __LIB_0__::func_490(Param0, -44.0514f, -687.7671f, 31.3381f, 1f, 0)) || __LIB_0__::func_490(Param0, -49.712f, -688.2113f, 31.3381f, 1f, 0)) || __LIB_0__::func_490(Param0, -57.6906f, -686.7383f, 31.3381f, 1f, 0)) || __LIB_0__::func_490(Param0, 1643.25f, 20.25f, 169.531f, 1f, 0))
	{
		return 1;
	}
	MISC::GET_GROUND_Z_FOR_3D_COORD(Param0 + Vector(10f, 0f, 0f), &fVar0, false, false);
	if (Param0.f_2 < (fVar0 - 0.1f))
	{
		return 1;
	}
	return 0;
}

int func_448(int iParam0, bool bParam1)//Position - 0x97973
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	switch (iParam0)
	{
		case 87:
		case 88:
		case 80:
		case 164:
		case 152:
		case 184:
		case 185:
		case 241:
		case 247:
		case 286:
			iVar0 = MISC::GET_PREV_WEATHER_TYPE_HASH_NAME();
			iVar1 = MISC::GET_NEXT_WEATHER_TYPE_HASH_NAME();
			iVar3 = 0;
			iVar4 = 0;
			if (!bParam1)
			{
				if ((iVar0 == joaat("rain") || iVar0 == joaat("THUNDER")) || iVar0 == joaat("snow"))
				{
					iVar3 = 1;
				}
			}
			if ((iVar1 == joaat("rain") || iVar1 == joaat("THUNDER")) || iVar1 == joaat("snow"))
			{
				iVar3 = 1;
			}
			if (iVar3 || iVar4)
			{
				return 1;
			}
			iVar2 = __LIB_17__::func_699();
			if (iVar2 < 9 || iVar2 >= 14)
			{
				return 1;
			}
			break;
		case 192:
		case 193:
		case 202:
			iVar2 = __LIB_17__::func_699();
			if (iVar2 < 9 || iVar2 >= 21)
			{
				return 1;
			}
			break;
		case 81:
			iVar2 = __LIB_17__::func_699();
			if (!__LIB_36__::func_507(iVar2))
			{
				return 1;
			}
			break;
		case 296:
			if (Global_39990[145] != 1)
			{
				return 1;
			}
			break;
		case 89:
		case 90:
		case 112:
		case 113:
		case 123:
			if (Global_113386.f_9085.f_99.f_58[128])
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_449(int iParam0)//Position - 0x9861C
{
	int iVar0;
	iVar0 = -1;
	switch (iParam0)
	{
		case 77:
		case 78:
		case 79:
		case 86:
		case 87:
		case 122:
		case 89:
			iVar0 = 17;
			if (__LIB_11__::func_283(iVar0))
			{
				return 1;
			}
			iVar0 = 19;
			if (__LIB_11__::func_283(iVar0))
			{
				return 1;
			}
			iVar0 = 62;
			if (__LIB_11__::func_283(iVar0))
			{
				return 1;
			}
			break;
		case 83:
		case 82:
		case 85:
		case 124:
			iVar0 = 22;
			if (__LIB_11__::func_283(iVar0))
			{
				return 1;
			}
			break;
		case 173:
		case 171:
		case 161:
		case 163:
		case 169:
		case 168:
		case 167:
		case 152:
		case 170:
		case 151:
		case 156:
		case 172:
		case 155:
			iVar0 = 49;
			if (__LIB_11__::func_283(iVar0))
			{
				return 1;
			}
			break;
		case 212:
		case 211:
		case 218:
		case 219:
		case 220:
		case 225:
			iVar0 = 41;
			if (__LIB_11__::func_283(iVar0))
			{
				return 1;
			}
			break;
		case 291:
		case 296:
		case 297:
		case 298:
		case 299:
		case 300:
		case 301:
		case 302:
		case 303:
		case 292:
		case 293:
		case 294:
		case 295:
			iVar0 = iLocal_42;
			if (__LIB_11__::func_283(iVar0))
			{
				return 1;
			}
			iVar0 = iLocal_40;
			if (__LIB_11__::func_283(iVar0))
			{
				return 1;
			}
			iVar0 = 71;
			if (__LIB_11__::func_283(iVar0))
			{
				return 1;
			}
			break;
		case 270:
			iVar0 = 71;
			if (!__LIB_0__::func_178(iVar0))
			{
				return 1;
			}
			break;
		case 267:
			iVar0 = 77;
			if (__LIB_0__::func_178(iVar0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_450(int iParam0, var uParam1, var uParam2)//Position - 0x9880E
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	*uParam1 = 0;
	uParam1->f_2 = iParam0;
	uParam1->f_3 = Global_97919.f_45;
	if (__LIB_37__::func_865(*uParam1, uParam2))
	{
		if (uParam2->f_111 != 145 && uParam2->f_111 != 144)
		{
			iVar0 = 0;
			switch (uParam2->f_111)
			{
				case 19:
					iVar0 = 8;
					break;
				case 14:
					iVar0 = 16;
					break;
				case 17:
					iVar0 = 32;
					break;
				default:
					return 0;
					break;
			}
			iVar3 = 0;
			while (iVar3 < Global_91193)
			{
				if (Global_91193[iVar3 /*5*/] != -1)
				{
					uVar1 = Global_78588.f_109[Global_91193[iVar3 /*5*/] /*4*/];
					iVar2 = uVar1;
					if (__LIB_0__::func_703(Global_91229[iVar2 /*34*/].f_12, iVar0))
					{
						return 1;
					}
				}
				iVar3++;
			}
		}
	}
	return 0;
}

int func_451(int iParam0)//Position - 0x991D1
{
	bool bVar0;
	if (__LIB_17__::func_679(iParam0, &bVar0))
	{
		if (iParam0 == 197)
		{
			if (!BitTest(Global_113386.f_18533.f_23, bVar0))
			{
				if (__LIB_0__::func_178(9))
				{
					MISC::SET_BIT(&(Global_113386.f_18533.f_23), bVar0);
				}
			}
		}
		if (BitTest(Global_113386.f_18533.f_23, bVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_452(int iParam0, int iParam1)//Position - 0x99572
{
	int iVar0;
	iVar0 = WEAPON::GET_WEAPONTYPE_SLOT(iParam1);
	if (Global_113386.f_2363.f_539.f_298[iParam0 /*477*/][__LIB_38__::func_701(iVar0) /*5*/] == iParam1)
	{
		if (Global_113386.f_2363.f_539.f_298[iParam0 /*477*/][__LIB_38__::func_701(iVar0) /*5*/].f_1 > 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_453()//Position - 0x1003
{
	__LIB_0__::func_15(&(Global_113386.f_25084));
	__LIB_14__::func_790(&(Global_113386.f_25084.f_6));
	Global_113386.f_25084.f_96 = -1;
	Global_113386.f_25084.f_97 = -1;
}

int func_454(int iParam0, var uParam1, int iParam2)//Position - 0x18729
{
	if (Global_99845[iParam0 /*98*/] == 0)
	{
		__LIB_0__::func_378(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (Global_99845[iParam0 /*98*/] == joaat("blimp"))
	{
		__LIB_0__::func_378(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (__LIB_17__::func_898(iParam0))
	{
		__LIB_0__::func_378(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (VEHICLE::IS_THIS_MODEL_A_BOAT(Global_99845[iParam0 /*98*/]))
	{
		__LIB_0__::func_378(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (VEHICLE::IS_THIS_MODEL_A_PLANE(Global_99845[iParam0 /*98*/]))
	{
		__LIB_0__::func_378(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (VEHICLE::IS_THIS_MODEL_A_HELI(Global_99845[iParam0 /*98*/]))
	{
		__LIB_0__::func_378(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (VEHICLE::IS_THIS_MODEL_A_TRAIN(Global_99845[iParam0 /*98*/]))
	{
		__LIB_0__::func_378(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (iParam2 == 1)
	{
		if (!VEHICLE::IS_THIS_MODEL_A_CAR(Global_99845[iParam0 /*98*/]))
		{
			__LIB_0__::func_378(iParam0, uParam1, iParam2);
			uParam1->f_91 = iParam2;
			return 1;
		}
	}
	else if (iParam2 == 2)
	{
		if (!VEHICLE::IS_THIS_MODEL_A_BIKE(Global_99845[iParam0 /*98*/]))
		{
			__LIB_0__::func_378(iParam0, uParam1, iParam2);
			uParam1->f_91 = iParam2;
			return 1;
		}
	}
	if (!__LIB_0__::func_371(Global_99845[iParam0 /*98*/], 0))
	{
		__LIB_0__::func_378(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (iParam2 != 0)
	{
		__LIB_0__::func_378(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		if (Global_99845[iParam0 /*98*/] != *uParam1)
		{
			*uParam1 = { Global_99845[iParam0 /*98*/] };
			uParam1->f_91 = 0;
			return 0;
		}
	}
	else
	{
		__LIB_0__::func_378(iParam0, uParam1, 1);
		uParam1->f_91 = 1;
		if (Global_99845[iParam0 /*98*/] == *uParam1)
		{
			__LIB_0__::func_378(iParam0, uParam1, 1);
			uParam1->f_91 = 1;
			return 1;
		}
		__LIB_0__::func_378(iParam0, uParam1, 2);
		uParam1->f_91 = 2;
		if (Global_99845[iParam0 /*98*/] == *uParam1)
		{
			__LIB_0__::func_378(iParam0, uParam1, 2);
			uParam1->f_91 = 2;
			return 1;
		}
		*uParam1 = { Global_99845[iParam0 /*98*/] };
		uParam1->f_91 = 0;
		return 0;
	}
	__LIB_0__::func_378(iParam0, uParam1, iParam2);
	uParam1->f_91 = iParam2;
	return 1;
}

int func_455(var uParam0)//Position - 0xDB87
{
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	PLAYER::UPDATE_WANTED_POSITION_THIS_FRAME(PLAYER::PLAYER_ID());
	switch (uParam0->f_2)
	{
		case 5:
		case 6:
		case 7:
			__LIB_38__::func_225(PLAYER::PLAYER_PED_ID());
			return 1;
			break;
		case 275:
		case 276:
		case 277:
			PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 2, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			return 1;
			break;
		default:
			PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			return 0;
			break;
	}
	return 0;
}

void func_456(int iParam0)//Position - 0x20BD2
{
	int iVar0;
	iVar0 = __LIB_13__::func_716(iParam0);
	if (__LIB_0__::func_374(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		Global_113386.f_2363.f_539.f_2296[iVar0] = __LIB_34__::func_681();
	}
}

void func_457(int iParam0)//Position - 0x857C3
{
	bool bVar0;
	bVar0 = __LIB_13__::func_716(iParam0);
	if (__LIB_0__::func_374(bVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		__LIB_17__::func_688(iParam0, bVar0);
		__LIB_37__::func_866(iParam0, bVar0);
	}
}

int func_458(int iParam0, var uParam1, var uParam2, bool bParam3)//Position - 0x97F2F
{
	if (bParam3)
	{
		return 0;
	}
	*uParam1 = 0;
	uParam1->f_2 = iParam0;
	uParam1->f_3 = Global_97919.f_45;
	if (__LIB_37__::func_865(*uParam1, uParam2))
	{
		if (iParam0 == 132)
		{
			uParam2->f_111 = 36;
		}
		if (uParam2->f_111 != 145)
		{
			if (__LIB_17__::func_366(uParam2->f_111))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_459(int iParam0)//Position - 0x988E6
{
	switch (iParam0)
	{
		case 218:
		case 219:
		case 220:
		case 225:
			if (__LIB_38__::func_707(1, 19))
			{
				return 1;
			}
			if (__LIB_38__::func_707(2, 19))
			{
				return 1;
			}
			break;
		case 86:
		case 101:
		case 102:
		case 171:
		case 173:
			if (__LIB_38__::func_707(0, 14))
			{
				return 1;
			}
			if (__LIB_38__::func_707(1, 14))
			{
				return 1;
			}
			if (__LIB_38__::func_707(2, 14))
			{
				return 1;
			}
			break;
		case 77:
		case 78:
		case 79:
		case 94:
		case 98:
		case 122:
		case 151:
			if (__LIB_38__::func_707(0, 17))
			{
				return 1;
			}
			if (__LIB_11__::func_283(19))
			{
				return 1;
			}
			break;
		case 291:
		case 296:
		case 297:
		case 298:
		case 299:
		case 300:
		case 301:
		case 302:
		case 303:
		case 292:
		case 295:
		case 293:
		case 294:
			if (__LIB_11__::func_283(74) || __LIB_11__::func_283(75))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_460(struct<7> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, int iParam84)//Position - 0x9381
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	struct<3> Var6;
	struct<3> Var7;
	var uVar8;
	var uVar9;
	int iVar10;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_97374[iVar0 /*17*/])
		{
			iVar3 = Global_97374[iVar0 /*17*/].f_9;
			iVar2 = 263;
			if (iVar3 >= iVar2)
			{
				return 0;
			}
			if (BitTest(Global_32338[iVar3 /*23*/].f_11, 19))
			{
				Var1 = { __LIB_15__::func_964(iVar3, __LIB_14__::func_466()) };
			}
			else
			{
				Var1 = { __LIB_15__::func_964(iVar3, 0) };
			}
			if (SYSTEM::VDIST2(Param0, Var1) < 3f)
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar10 = -1;
	MISC::GET_MODEL_DIMENSIONS(Param0.f_12.f_66, &Var6, &Var7);
	if (!ENTITY::IS_ENTITY_DEAD(iParam84, false))
	{
		iVar4 = SHAPETEST::START_SHAPE_TEST_BOX(Param0, Var7 - Var6, 0f, 0f, Param0.f_6, 2, 90, iParam84, 4);
	}
	while (SHAPETEST::GET_SHAPE_TEST_RESULT(iVar4, &iVar10, &uVar8, &uVar9, &uVar5) == 1)
	{
		SYSTEM::WAIT(0);
	}
	if (iVar10 == 0)
	{
		return 1;
	}
	if (iVar10 == 1)
	{
		return 0;
	}
	return 0;
}

int func_461(var uParam0, bool bParam1)//Position - 0x94CC
{
	int iVar0;
	if (!__LIB_0__::func_465(uParam0->f_66))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_78043))
	{
		return 0;
	}
	switch (bParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		case 1:
			iVar0 = 1;
			break;
		case 2:
			iVar0 = 2;
			break;
		default:
			return 0;
			break;
	}
	if (!__LIB_0__::func_542(0, bParam1))
	{
		Global_113386.f_32749.f_5592[iVar0] = 0;
	}
	else if (!__LIB_0__::func_542(1, bParam1))
	{
		Global_113386.f_32749.f_5592[iVar0] = 1;
	}
	__LIB_38__::func_968(bParam1, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(uParam0->f_66));
	__LIB_0__::func_313(uParam0, &(Global_113386.f_32749.f_5038[iVar0 /*157*/][Global_113386.f_32749.f_5592[iVar0] /*78*/]));
	Global_113386.f_32749.f_5592[iVar0]++;
	if (Global_113386.f_32749.f_5592[iVar0] >= __LIB_0__::func_404(&(Global_113386.f_32749.f_5038[iVar0 /*157*/])))
	{
		Global_113386.f_32749.f_5592[iVar0] = 0;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_99845[iVar0 /*98*/] == uParam0->f_66 && MISC::ARE_STRINGS_EQUAL(&(Global_99845[iVar0 /*98*/].f_27), &(uParam0->f_1)))
		{
			Global_99845[iVar0 /*98*/] = 0;
		}
		iVar0++;
	}
	return 1;
}

int func_462(int iParam0, int iParam1, bool bParam2)//Position - 0x978D3
{
	int iVar0;
	if (bParam2)
	{
		return 0;
	}
	iVar0 = Global_113386.f_2363.f_539.f_2296[iParam0];
	if (!__LIB_3__::func_423(iVar0))
	{
		return 0;
	}
	switch (iParam1)
	{
		case 77:
		case 78:
		case 89:
		case 90:
		case 83:
		case 82:
		case 84:
		case 163:
		case 175:
		case 176:
		case 292:
		case 295:
		case 293:
		case 294:
			if (!__LIB_38__::func_231(iVar0, 6))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_463(struct<3> Param0, float fParam1, struct<13> Param2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, int iParam80)//Position - 0x90C5
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	struct<3> Var6;
	struct<3> Var7;
	var uVar8;
	var uVar9;
	int iVar10;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_97374[iVar0 /*17*/])
		{
			iVar3 = Global_97374[iVar0 /*17*/].f_9;
			iVar2 = 263;
			if (iVar3 >= iVar2)
			{
				return 0;
			}
			if (BitTest(Global_32338[iVar3 /*23*/].f_11, 19))
			{
				Var1 = { __LIB_15__::func_964(iVar3, __LIB_14__::func_466()) };
			}
			else
			{
				Var1 = { __LIB_15__::func_964(iVar3, 0) };
			}
			if (SYSTEM::VDIST2(Param0, Var1) < 9f)
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar10 = -1;
	MISC::GET_MODEL_DIMENSIONS(Param2.f_12.f_66, &Var6, &Var7);
	iVar4 = SHAPETEST::START_SHAPE_TEST_BOX(Param0, Var7 - Var6, 0f, 0f, fParam1, 2, 90, iParam80, 4);
	while (SHAPETEST::GET_SHAPE_TEST_RESULT(iVar4, &iVar10, &uVar8, &uVar9, &uVar5) == 1)
	{
		SYSTEM::WAIT(0);
	}
	if (iVar10 == 0)
	{
		return 1;
	}
	if (iVar10 == 1)
	{
		return 0;
	}
	return 0;
}

void func_464(int iParam0)//Position - 0x19D49
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
		__LIB_38__::func_227(iParam0, &Var0);
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
		if (Global_113386.f_9085)
		{
			iVar3 = __LIB_14__::func_633(iParam0);
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
		if (__LIB_14__::func_632())
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

int func_465(var uParam0)//Position - 0x20C0C
{
	int iVar0;
	float fVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	char* sVar8;
	char* sVar9;
	iVar0 = uParam0->f_2;
	uParam0->f_96.f_4 = uParam0->f_62.f_9;
	switch (iVar0)
	{
		case 234:
			if (Global_3)
			{
				if (__LIB_38__::func_696(uParam0, &fVar1))
				{
					return __LIB_38__::func_230(19, 0, "EXTRASUNNY", "Cirrus", &(uParam0->f_96), fVar1, 0, 1, 5f);
				}
			}
			break;
		case 192:
			if (Global_3)
			{
				if (__LIB_38__::func_696(uParam0, &fVar1))
				{
					return __LIB_38__::func_230(9, 0, "Overcast", "RAIN", &(uParam0->f_96), fVar1, 0, 1, 5f);
				}
			}
			break;
		case 75:
			if (Global_3)
			{
				if (__LIB_38__::func_696(uParam0, &fVar1))
				{
					return __LIB_38__::func_230(19, 45, "SMOG", "Wispy", &(uParam0->f_96), fVar1, 0, 1, 5f);
				}
			}
			break;
		case 95:
			if (Global_3)
			{
				if (__LIB_38__::func_696(uParam0, &fVar1))
				{
					return __LIB_38__::func_230(22, 0, "SMOG", "", &(uParam0->f_96), fVar1, 0, 1, 5f);
				}
			}
			break;
		case 280:
			if (Global_3)
			{
				if (__LIB_38__::func_696(uParam0, &fVar1))
				{
					return __LIB_38__::func_230(18, 0, "SMOG", "", &(uParam0->f_96), fVar1, 0, 1, 5f);
				}
			}
			break;
		case 76:
			if (Global_3)
			{
				if (__LIB_38__::func_696(uParam0, &fVar1))
				{
					return __LIB_38__::func_230(22, 0, "SMOG", "", &(uParam0->f_96), fVar1, 0, 1, 5f);
				}
			}
			break;
		case 174:
			if (__LIB_38__::func_696(uParam0, &fVar1))
			{
				__LIB_13__::func_812(20, &uVar3, &iVar2);
				return __LIB_38__::func_230(iVar2, 0, "", "", &(uParam0->f_96), fVar1, 0, 1, 5f);
			}
			break;
		case 231:
			if (__LIB_38__::func_696(uParam0, &fVar1))
			{
				__LIB_13__::func_812(15, &uVar5, &iVar4);
				return __LIB_38__::func_230(iVar4, 0, "", "", &(uParam0->f_96), fVar1, 0, 1, 5f);
			}
			break;
	}
	if (__LIB_3__::func_423(Global_1574629))
	{
		iVar6 = __LIB_0__::func_199(Global_1574629);
		iVar7 = __LIB_0__::func_198(Global_1574629);
		sVar8 = "";
		sVar9 = "";
		if (!__LIB_17__::func_682())
		{
			sVar8 = "SMOG";
		}
		if (__LIB_38__::func_695(&fVar1, 5f))
		{
			return __LIB_38__::func_230(iVar6, iVar7, sVar8, sVar9, &(uParam0->f_96), fVar1, 0, 1, 5f);
		}
	}
	else if (!__LIB_17__::func_682())
	{
	}
	return 0;
}

int func_466(var uParam0, int iParam1)//Position - 0x8518D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	struct<3> Var11;
	struct<3> Var12;
	float fVar13;
	struct<3> Var14;
	iVar0 = __LIB_0__::func_484(uParam0->f_61);
	if (PED::IS_PED_INJURED(uParam0->f_17[uParam0->f_61]))
	{
		if ((uParam0->f_2 == 5 || uParam0->f_2 == 6) || uParam0->f_2 == 7)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_17[uParam0->f_61]))
			{
			}
			else
			{
				iVar1 = Global_113386.f_2363.f_539.f_2296[uParam0->f_61];
				if (!CAM::IS_SPHERE_VISIBLE(uParam0->f_4, 3f))
				{
				}
				else if (__LIB_3__::func_423(iVar1))
				{
					__LIB_37__::func_869(iVar1, &iVar2, &iVar3, &iVar4, &uVar5, &uVar6, &uVar7);
					fVar8 = -1f;
					if (__LIB_38__::func_231(iVar1, 3))
					{
						fVar8 = 1f;
					}
					else
					{
						fVar8 = (SYSTEM::TO_FLOAT(((iVar2 + iVar3 * 60) + iVar4 * 60 * 60)) / 3600f);
						if (fVar8 < 0f)
						{
							fVar8 = 0f;
						}
						if (fVar8 > 1f)
						{
							fVar8 = 1f;
						}
					}
					fVar9 = (((100f - 10f) * fVar8) + 10f);
					iVar10 = 0;
					while (iVar10 < 5)
					{
						GRAPHICS::DRAW_DEBUG_SPHERE(uParam0->f_4, fVar9, 255, 0, 0, 64);
						Var11 = { __LIB_14__::func_834(uParam0->f_4, fVar9, 0f) };
						Var12 = { Var11 };
						if (PATHFIND::GET_SAFE_COORD_FOR_PED(Var11, false, &Var12, 16))
						{
							if (!CAM::IS_SPHERE_VISIBLE(Var12, 3f))
							{
								fVar13 = 0f;
								if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var12, &fVar13, false, false))
								{
									GRAPHICS::DRAW_DEBUG_SPHERE(Var12, 0.5f, 255, 0, 255, 255);
									Var12.f_2 = fVar13;
									Var14 = { uParam0->f_4 - Var12 };
									uParam0->f_4 = { Var12 };
									uParam0->f_7 = MISC::GET_HEADING_FROM_VECTOR_2D(Var14.f_0, Var14.f_1);
									iVar10 = 99;
								}
							}
							else
							{
								GRAPHICS::DRAW_DEBUG_SPHERE(Var12, 0.5f, 255, 0, 255, 255);
							}
						}
						else
						{
							GRAPHICS::DRAW_DEBUG_SPHERE(Var11, 0.5f, 0, 255, 255, 255);
						}
						iVar10++;
					}
				}
			}
		}
		if (iParam1 == 1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), uParam0->f_4, false, false, false, true);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
			}
		}
		return 1;
	}
	__LIB_36__::func_995(uParam0->f_17[uParam0->f_61], &(Global_99845[iVar0 /*98*/]), &(Global_100148[iVar0 /*3*/]), &(Global_100158[iVar0]), &(Global_100140[iVar0]), &(Global_4541522[iVar0]));
	return 0;
}

void func_467()//Position - 0xCC
{
	iLocal_54 = 0;
}

bool func_468()//Position - 0xD31
{
	return Global_1648034.f_112;
}

void func_469(bool bParam0, int iParam1)//Position - 0xEA2
{
	int iVar0;
	int iVar1;
	if (iParam1 == -1)
	{
		iParam1 = __LIB_0__::func_5();
	}
	Global_1659608 = 0;
	if (MISC::ARE_PROFILE_SETTINGS_VALID() == 0)
	{
		return;
	}
	switch (bParam0)
	{
		case 0:
			STATS::SET_FREEMODE_PROLOGUE_DONE(0, iParam1);
			iVar1 = __LIB_1__::func_14(iParam1);
			iVar0 = MISC::GET_PROFILE_SETTING(iVar1);
			break;
		default:
			iVar1 = __LIB_1__::func_14(iParam1);
			iVar0 = MISC::GET_PROFILE_SETTING(iVar1);
			if (!BitTest(iVar0, bParam0))
			{
				MISC::SET_BIT(&iVar0, bParam0);
				STATS::SET_FREEMODE_PROLOGUE_DONE(iVar0, iParam1);
			}
			break;
	}
	switch (bParam0)
	{
		case 0:
			__LIB_0__::func_513(120, 0, iParam1, 1);
			__LIB_0__::func_513(124, 0, iParam1, 1);
			__LIB_0__::func_513(115, 0, iParam1, 1);
			__LIB_0__::func_513(119, 0, iParam1, 1);
			__LIB_0__::func_513(121, 0, iParam1, 1);
			__LIB_0__::func_513(122, 0, iParam1, 1);
			__LIB_0__::func_513(125, 0, iParam1, 1);
			__LIB_0__::func_413(1304, 0, iParam1, 1, 0);
			__LIB_0__::func_413(7236, 0, iParam1, 1, 0);
			break;
	}
}

int func_470(int iParam0, int iParam1, int iParam2)//Position - 0x14DC
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (__LIB_0__::func_39(14))
		{
			return 100;
		}
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				case 1:
					return 47;
					break;
				case 3:
					return 22;
					break;
				case 2:
					return 21;
					break;
				case 4:
					return 54;
					break;
				case 5:
					return 31;
					break;
				case 6:
					return 79;
					break;
				case 7:
					return 81;
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				case 1:
					return 51;
					break;
				case 3:
					return 46;
					break;
				case 2:
					return 49;
					break;
				case 4:
					return 71;
					break;
				case 5:
					return 19;
					break;
				case 6:
					return 24;
					break;
				case 7:
					return 21;
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				case 1:
					return 23;
					break;
				case 3:
					return 28;
					break;
				case 2:
					return 79;
					break;
				case 4:
					return 31;
					break;
				case 5:
					return 82;
					break;
				case 6:
					return 69;
					break;
				case 7:
					return 49;
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 1:
					return __LIB_0__::func_369(1225, iParam2, 0);
					break;
				case 3:
					return __LIB_0__::func_369(1231, iParam2, 0);
					break;
				case 2:
					return __LIB_0__::func_369(1227, iParam2, 0);
					break;
				case 4:
					return __LIB_0__::func_369(1230, iParam2, 0);
					break;
				case 5:
					return __LIB_0__::func_369(1229, iParam2, 0);
					break;
				case 6:
					return __LIB_0__::func_369(1226, iParam2, 0);
					break;
				case 7:
					return __LIB_0__::func_369(1228, iParam2, 0);
					break;
			}
			break;
	}
	return 0;
}

int func_471(int iParam0)//Position - 0x17AA
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
			return 3;
			break;
		case 5:
		case 6:
		case 7:
		case 8:
			return 4;
			break;
		case 9:
		case 10:
		case 11:
		case 12:
			return 1;
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			return 2;
			break;
	}
	return 0;
}

int func_472(int iParam0)//Position - 0x218D
{
	switch (iParam0)
	{
		case joaat("WEAPON_STICKYBOMB"):
		case joaat("WEAPON_STUNGUN"):
		case joaat("WEAPON_GRENADELAUNCHER"):
		case joaat("WEAPON_HEAVYSNIPER"):
		case joaat("WEAPON_CARBINERIFLE"):
		case joaat("WEAPON_SPECIALCARBINE"):
		case joaat("WEAPON_SMG"):
		case joaat("WEAPON_ASSAULTSHOTGUN"):
		case joaat("WEAPON_APPISTOL"):
			return 0;
			break;
		case joaat("WEAPON_SMOKEGRENADE"):
		case joaat("WEAPON_REMOTESNIPER"):
		case joaat("WEAPON_RPG"):
		case joaat("WEAPON_MG"):
		case joaat("WEAPON_ADVANCEDRIFLE"):
		case joaat("WEAPON_MICROSMG"):
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
		case joaat("WEAPON_PISTOL"):
			return 1;
			break;
		case joaat("WEAPON_GRENADE"):
		case joaat("WEAPON_MINIGUN"):
		case joaat("WEAPON_SNIPERRIFLE"):
		case joaat("WEAPON_COMBATMG"):
		case joaat("WEAPON_ASSAULTRIFLE"):
		case joaat("WEAPON_PUMPSHOTGUN"):
		case joaat("WEAPON_COMBATPISTOL"):
			return 2;
			break;
		default:
			return 3;
			break;
	}
	return 3;
}

int func_473(int iParam0, int iParam1)//Position - 0x4E40
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		switch (iParam0)
		{
			case 0:
				if (Global_113386.f_20564[iVar0] == iParam1)
				{
					if (Global_113386.f_20564.f_22[iVar0] > 0)
					{
						return Global_113386.f_20564.f_22[iVar0];
					}
				}
				break;
			case 1:
				if (Global_113386.f_20564.f_33[iVar0] == iParam1)
				{
					if (Global_113386.f_20564.f_55[iVar0] > 0)
					{
						return Global_113386.f_20564.f_55[iVar0];
					}
				}
				break;
			case 2:
				if (Global_113386.f_20564.f_66[iVar0] == iParam1)
				{
					if (Global_113386.f_20564.f_88[iVar0] > 0)
					{
						return Global_113386.f_20564.f_88[iVar0];
					}
				}
				break;
		}
		iVar0++;
	}
	return 0;
}

void func_474(int iParam0)//Position - 0x43F1
{
	switch (iParam0)
	{
		case 0:
			__LIB_39__::func_318(&Global_96909, 1);
			break;
		case 1:
			__LIB_39__::func_318(&Global_96911, 3);
			break;
		case 2:
			__LIB_39__::func_318(&Global_96915, 1);
			break;
		case 3:
			__LIB_39__::func_318(&Global_96917, 1);
			break;
		case 4:
			__LIB_39__::func_318(&Global_96919, 1);
			break;
		case 5:
			__LIB_39__::func_318(&Global_96921, 1);
			break;
		case 6:
			__LIB_39__::func_318(&Global_96923, 1);
			break;
		case 7:
			__LIB_39__::func_318(&Global_96925, 2);
			break;
		case 8:
			__LIB_39__::func_318(&Global_96928, 1);
			break;
		case 9:
			__LIB_39__::func_318(&Global_96930, 1);
			break;
	}
}

float func_475(int iParam0)//Position - 0x497
{
	int iVar0;
	float fVar1;
	iVar0 = iParam0;
	fVar1 = (Global_55453[iParam0 /*36*/].f_9 * __LIB_31__::func_939(iVar0));
	return (SYSTEM::TO_FLOAT(SYSTEM::FLOOR((fVar1 * 100f))) / 100f);
}

void func_476(int iParam0)//Position - 0x19DF
{
	MISC::CLEAR_BIT(&uLocal_160, iParam0);
}

void func_477(int iParam0)//Position - 0x19F0
{
	MISC::SET_BIT(&uLocal_160, iParam0);
}

void func_478(int iParam0, int iParam1, int iParam2)//Position - 0x5967
{
	if (PED::IS_PED_COMPONENT_VARIATION_VALID(iParam0, 6, iParam1, iParam2))
	{
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 6, iParam1, iParam2, 0);
	}
}

void func_479(int iParam0, int iParam1, int iParam2)//Position - 0x598C
{
	if (PED::IS_PED_COMPONENT_VARIATION_VALID(iParam0, 11, iParam1, iParam2))
	{
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 11, iParam1, iParam2, 0);
	}
}

void func_480(int iParam0, int iParam1, int iParam2)//Position - 0x59B3
{
	if (PED::IS_PED_COMPONENT_VARIATION_VALID(iParam0, 8, iParam1, iParam2))
	{
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, iParam1, iParam2, 0);
	}
}

void func_481(int iParam0, int iParam1, int iParam2)//Position - 0x5A7E
{
	if (PED::IS_PED_COMPONENT_VARIATION_VALID(iParam0, 4, iParam1, iParam2))
	{
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, iParam1, iParam2, 0);
	}
}

void func_482(int iParam0, int iParam1, int iParam2)//Position - 0x5AA3
{
	if (PED::IS_PED_COMPONENT_VARIATION_VALID(iParam0, 3, iParam1, iParam2))
	{
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, iParam1, iParam2, 0);
	}
}

void func_483(int iParam0, int iParam1, int iParam2)//Position - 0x5AC8
{
	if (PED::IS_PED_COMPONENT_VARIATION_VALID(iParam0, 2, iParam1, iParam2))
	{
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 2, iParam1, iParam2, 0);
	}
}

void func_484(int iParam0, int iParam1, int iParam2)//Position - 0x5AED
{
	if (PED::IS_PED_COMPONENT_VARIATION_VALID(iParam0, 0, iParam1, iParam2))
	{
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 0, iParam1, iParam2, 0);
	}
}

void func_485(int iParam0)//Position - 0x62C0
{
	if (CAM::DOES_CAM_EXIST(iParam0))
	{
		CAM::DESTROY_CAM(iParam0, false);
	}
}

int func_486(int iParam0)//Position - 0x6D981
{
	switch (iParam0)
	{
		case 0:
			return SYSTEM::FLOOR((0.95f * 7500f));
			break;
		case 1:
			return SYSTEM::FLOOR((0.95f * 7500f));
			break;
		case 2:
			return SYSTEM::FLOOR((0.95f * 7500f));
			break;
		case 3:
			return SYSTEM::FLOOR((0.95f * 7500f));
			break;
		case 4:
			return SYSTEM::FLOOR((0.95f * 7500f));
			break;
		case 5:
			return SYSTEM::FLOOR((0.95f * 7500f));
			break;
		case 6:
			return SYSTEM::FLOOR((0.95f * 7500f));
			break;
		case 7:
			return SYSTEM::FLOOR((0.95f * 7500f));
			break;
	}
	return 0;
}

int func_487(int iParam0, bool bParam1)//Position - 0x6E2F3
{
	if (iParam0 == 0)
	{
		if (bParam1)
		{
			return joaat("CSB_Stripper_01");
		}
		else
		{
			return joaat("S_F_Y_Stripper_01");
		}
	}
	else if (iParam0 == 1)
	{
		if (bParam1)
		{
			return joaat("CSB_Stripper_02");
		}
		else
		{
			return joaat("S_F_Y_Stripper_02");
		}
	}
	return 0;
}

int func_488()//Position - 0x6E366
{
	if (__LIB_0__::func_75() || Global_21605 != 0)
	{
		return 0;
	}
	return 1;
}

char* func_489(int iParam0)//Position - 0x6F9B5
{
	if (iParam0 == 0)
	{
		return "base";
	}
	if (iParam0 == 1)
	{
		return "idle_a";
	}
	if (iParam0 == 2)
	{
		return "idle_b";
	}
	return "idle_c";
}

char* func_490(int iParam0)//Position - 0x6F9F4
{
	if (iParam0 == 0)
	{
		return "mini@strip_club@idles@bouncer@base";
	}
	if (iParam0 == 1)
	{
		return "mini@strip_club@idles@bouncer@idle_a";
	}
	if (iParam0 == 2)
	{
		return "mini@strip_club@idles@bouncer@idle_b";
	}
	return "mini@strip_club@idles@bouncer@idle_c";
}

bool func_491(int iParam0)//Position - 0x70AF5
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, false), 128.7f, -1298.22f, 29.31f) < 9f;
}

void func_492(int iParam0)//Position - 0x74123
{
	iLocal_167 = iParam0;
}

int func_493()//Position - 0x762F3
{
	return iLocal_103;
}

bool func_494(int iParam0)//Position - 0x772DA
{
	return BitTest(uLocal_160, iParam0);
}

int func_495()//Position - 0x79668
{
	return joaat("WEAPON_PISTOL");
}

void func_496(bool bParam0)//Position - 0x7AC17
{
	if (bParam0)
	{
		Global_112408 = 0;
	}
	else
	{
		Global_112408 = 1;
	}
}

bool func_497()//Position - 0x7B082
{
	return __LIB_0__::func_703(Global_112411, 128);
}

int func_498()//Position - 0x7F8B9
{
	if (__LIB_13__::func_94())
	{
		if ((!ENTITY::DOES_ENTITY_EXIST(__LIB_15__::func_805()) && !__LIB_37__::func_282()) && !__LIB_0__::func_217())
		{
			return 1;
		}
	}
	return 0;
}

bool func_499()//Position - 0x73789
{
	return __LIB_0__::func_703(Global_112411, 16);
}

bool func_500()//Position - 0x7A08B
{
	return __LIB_0__::func_703(Global_112411, 4);
}

bool func_501()//Position - 0x7F897
{
	return __LIB_0__::func_426(4);
}

void func_502(bool bParam0)//Position - 0x1AB7
{
	if (bParam0)
	{
		__LIB_1__::func_330(&Global_112411, 4);
	}
	else
	{
		__LIB_2__::func_712(&Global_112411, 4);
	}
}

void func_503(int iParam0)//Position - 0x7B64E
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
		__LIB_0__::func_726(iParam0, &Var0);
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
		if (Global_113386.f_9085)
		{
			iVar3 = __LIB_37__::func_357(iParam0);
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
		if (__LIB_37__::func_215())
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

int func_504(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x23C4
{
	__LIB_0__::func_376(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21612 = 0;
	Global_21614 = 0;
	Global_21619 = 0;
	Global_22596 = 0;
	Global_22598 = 0;
	Global_22602 = 0;
	Global_2883585 = 0;
	return __LIB_37__::func_361(sParam2, iParam3, 0);
}

void func_505(int iParam0)//Position - 0x58B2F
{
	int iVar0;
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	STATS::STAT_SET_INT(iParam0, iVar0 + 1, true);
}

void func_506(int iParam0)//Position - 0x58B4D
{
	iLocal_77 = (iLocal_77 + iParam0);
	iLocal_79 = 1;
}

struct<6> func_507(int iParam0)//Position - 0x5A4D5
{
	struct<6> Var0;
	if (iParam0 == 2)
	{
		StringCopy(&Var0, "BLIP_170" /* GXT: Trevor */, 24);
	}
	else if (iParam0 == 0)
	{
		StringCopy(&Var0, "BLIP_MICHAEL" /* GXT: Michael */, 24);
	}
	else if (iParam0 == 1)
	{
		StringCopy(&Var0, "BLIP_FRANKLIN" /* GXT: Franklin */, 24);
	}
	else if (iParam0 == 19)
	{
		StringCopy(&Var0, "BLIP_172" /* GXT: Lamar */, 24);
	}
	else if (iParam0 == 14)
	{
		StringCopy(&Var0, "BLIP_33" /* GXT: Jimmy */, 24);
	}
	return Var0;
}

struct<4> func_508(int iParam0)//Position - 0x5A565
{
	struct<4> Var0;
	StringCopy(&Var0, "SCLUB_NM_", 16);
	StringIntConCat(&Var0, iParam0, 16);
	return Var0;
}

char* func_509(int iParam0, bool bParam1)//Position - 0x5A852
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				return "one_player";
			}
			else
			{
				return "one_bartender";
			}
			break;
		case 1:
			if (bParam1)
			{
				return "two_player";
			}
			else
			{
				return "two_bartender";
			}
			break;
		case 2:
			if (bParam1)
			{
				return "three_player";
			}
			else
			{
				return "three_bartender";
			}
			break;
		case 3:
			if (bParam1)
			{
				return "four_player";
			}
			else
			{
				return "four_bartender";
			}
			break;
		case 4:
			return "idle_a_bartender";
			break;
		default:
			break;
	}
	return "";
}

int func_510(char* sParam0, int iParam1)//Position - 0x5A955
{
	if (__LIB_5__::func_831(sParam0, iParam1))
	{
		return 1;
	}
	return 0;
}

int func_511(char* sParam0)//Position - 0x5A96D
{
	if (__LIB_0__::func_1(sParam0))
	{
		return 1;
	}
	if (__LIB_13__::func_101(sParam0))
	{
		return 1;
	}
	return 0;
}

bool func_512()//Position - 0x5AB12
{
	return (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("maintransition")) > 0 || Global_23011.f_11);
}

Vector3 func_513()//Position - 0x5B5D3
{
	switch (iLocal_82)
	{
		case 0:
			return 127.16f, -1283.59f, 29.27f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_514()//Position - 0x5BBF8
{
	return __LIB_4__::func_850(PLAYER::PLAYER_PED_ID());
}

int func_515()//Position - 0x57113
{
	if (__LIB_16__::func_613())
	{
		return 1;
	}
	return 0;
}

void func_516(char* sParam0, int iParam1)//Position - 0x59D0C
{
	if (__LIB_5__::func_831(sParam0, iParam1))
	{
		HUD::CLEAR_HELP(true);
	}
}

void func_517(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x5A494
{
	if (__LIB_13__::func_101(sParam0))
	{
		__LIB_13__::func_311(sParam0, 0);
	}
	if (__LIB_3__::func_56(sParam0, &sParam1))
	{
		HUD::CLEAR_HELP(true);
	}
}

int func_518()//Position - 0x5AF1A
{
	if (__LIB_0__::func_217() || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		return 1;
	}
	return 0;
}

char* func_519(int iParam0)//Position - 0x5B426
{
	if (!__LIB_7__::func_685(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32))
	{
		switch (iParam0)
		{
			case 0:
				return "mini@strip_club@drink@one";
				break;
			case 1:
				return "mini@strip_club@drink@two";
				break;
			case 2:
				return "mini@strip_club@drink@three";
				break;
			case 3:
				return "mini@strip_club@drink@four";
				break;
			case 4:
				return "mini@strip_club@drink@idle_a";
				break;
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return "anim@mini@yacht@bar@drink@one";
				break;
			case 1:
				return "anim@mini@yacht@bar@drink@two";
				break;
			case 2:
				return "anim@mini@yacht@bar@drink@three";
				break;
			case 3:
				return "anim@mini@yacht@bar@drink@four";
				break;
			case 4:
				return "anim@mini@yacht@bar@drink@idle_a";
				break;
			default:
				break;
			}
	}
	return "";
}

void func_520(char* sParam0)//Position - 0x59D3D
{
	if (__LIB_13__::func_101(sParam0))
	{
		__LIB_13__::func_311(sParam0, 1);
	}
	if (__LIB_0__::func_1(sParam0))
	{
		HUD::CLEAR_HELP(true);
	}
}

int func_521()//Position - 0x5BC2A
{
	if (__LIB_0__::func_683() == 2)
	{
		return 1;
	}
	return 0;
}

int func_522(int iParam0)//Position - 0x58B5F
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!Global_78319)
	{
		return 0;
	}
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(45))
	{
		return 0;
	}
	if (!__LIB_0__::func_438())
	{
		return 0;
	}
	iVar2 = __LIB_0__::func_369(757, -1, 0);
	MISC::SET_BIT(&iVar2, iParam0);
	__LIB_0__::func_413(757, iVar2, -1, 1, 0);
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (__LIB_1__::func_205(iVar2, iVar0, 1))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 == 9)
	{
		__LIB_0__::func_746(45, 1);
	}
	return 1;
}

Vector3 func_523()//Position - 0x4ADC
{
	return 127.96f, -1298.51f, 29.42f;
}

void func_524(int iParam0)//Position - 0x54A0
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_106[iVar0]) && (iParam0 == iVar0 || iParam0 < 0))
		{
			OBJECT::DELETE_OBJECT(&(iLocal_106[iVar0]));
		}
		iVar0++;
	}
}

bool func_525(var uParam0)//Position - 0x5AAE
{
	return BitTest(*uParam0, 6);
}

void func_526()//Position - 0x607D
{
	if (HUD::DOES_BLIP_EXIST(uLocal_110[0]))
	{
		HUD::REMOVE_BLIP(&(uLocal_110[0]));
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_110[1]))
	{
		HUD::REMOVE_BLIP(&(uLocal_110[1]));
	}
}

int func_527(int iParam0)//Position - 0x6123
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		case 1:
			return 1;
			break;
	}
	return -1;
}

void func_528()//Position - 0x7007
{
	PED::SET_PED_CAN_RAGDOLL(PLAYER::PLAYER_PED_ID(), true);
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
		}
	}
}

char* func_529(int iParam0, bool bParam1)//Position - 0x704C
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				return "enter_female";
			}
			else
			{
				return "enter";
			}
			break;
		case 1:
			if (bParam1)
			{
				return "exit_female";
			}
			else
			{
				return "exit";
			}
			break;
		case 3:
			return "toss_full";
			break;
		case 2:
			if (bParam1)
			{
				return "toss_female";
			}
			else
			{
				return "toss";
			}
			break;
		case 5:
			if (bParam1)
			{
				return "base_female";
			}
			else
			{
				return "base";
			}
			break;
		default:
			break;
	}
	return "";
}

char* func_530(int iParam0)//Position - 0x70EE
{
	switch (iParam0)
	{
		case 0:
			return "mini@strip_club@leaning@enter";
			break;
		case 1:
			return "mini@strip_club@leaning@exit";
			break;
		case 2:
		case 3:
			return "mini@strip_club@leaning@toss";
			break;
		case 4:
			return "mini@strip_club@leaning@toss_many";
			break;
		case 5:
			return "mini@strip_club@leaning@base";
			break;
		default:
			break;
	}
	return "";
}

struct<4> func_531(int iParam0)//Position - 0x8690
{
	struct<4> Var0;
	StringCopy(&Var0, "SCLUB_METER_", 16);
	StringIntConCat(&Var0, iParam0, 16);
	return Var0;
}

char* func_532(bool bParam0)//Position - 0x90E0
{
	if (bParam0)
	{
		return "mini@strip_club@lap_dance_2g@ld_2g_decline";
	}
	return "mini@strip_club@lap_dance@ld_girl_a_decline";
}

char* func_533(bool bParam0)//Position - 0x90FB
{
	if (bParam0)
	{
		return "mini@strip_club@lap_dance_2g@ld_2g_accept";
	}
	return "mini@strip_club@lap_dance@ld_girl_a_accept";
}

char* func_534(bool bParam0)//Position - 0x9116
{
	if (bParam0)
	{
		return "mini@strip_club@lap_dance_2g@ld_2g_wait";
	}
	return "mini@strip_club@lap_dance@ld_girl_a_wait";
}

char* func_535(bool bParam0)//Position - 0x9131
{
	if (bParam0)
	{
		return "mini@strip_club@lap_dance_2g@ld_2g_reach";
	}
	return "mini@strip_club@lap_dance@ld_reach";
}

int func_536(int iParam0, bool bParam1, bool bParam2)//Position - 0x91D6
{
	if (bParam2)
	{
		return joaat("MP_F_StripperLite");
	}
	switch (iParam0)
	{
		case 0:
			return __LIB_39__::func_487(0, bParam1);
			break;
		case 1:
			return __LIB_39__::func_487(1, bParam1);
			break;
		case 2:
			return __LIB_39__::func_487(0, bParam1);
			break;
		case 3:
			return __LIB_39__::func_487(1, bParam1);
			break;
		case 4:
			return __LIB_39__::func_487(0, bParam1);
			break;
		case 5:
			return __LIB_39__::func_487(1, bParam1);
			break;
		case 6:
			return __LIB_39__::func_487(0, bParam1);
			break;
		case 7:
			return __LIB_39__::func_487(1, bParam1);
			break;
	}
	return __LIB_39__::func_487(0, bParam1);
}

Vector3 func_537(bool bParam0)//Position - 0x990F
{
	if (bParam0)
	{
		return 116.9946f, -1300.2452f, 28.019f;
	}
	return 114.529f, -1297.4677f, 28.2688f;
}

Vector3 func_538(int iParam0)//Position - 0x9F52
{
	if (iParam0 == 0)
	{
		return 114.1263f, -1296.7617f, 28.2689f;
	}
	else if (iParam0 == 1)
	{
		return 121.3242f, -1292.9474f, 28.2791f;
	}
	else if (iParam0 == 2)
	{
		return 119.43f, -1289.14f, 27.26f;
	}
	else if (iParam0 == 3)
	{
		return 110.6793f, -1298.3816f, 28.2688f;
	}
	return 0f, 0f, 0f;
}

char* func_539(bool bParam0, bool bParam1)//Position - 0xA027
{
	if (bParam0)
	{
		return "mini@strip_club@lap_dance_2g@ld_2g_exit";
	}
	if (bParam1)
	{
		return "mini@strip_club@lap_dance@ld_girl_a_decline_alt";
	}
	return "mini@strip_club@lap_dance@ld_girl_a_exit";
}

char* func_540(int iParam0, bool bParam1)//Position - 0xA051
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				return "mini@strip_club@lap_dance_2g@ld_2g_p1";
			}
			else
			{
				return "mini@strip_club@lap_dance@ld_girl_a_song_a_p1";
			}
			break;
		case 1:
			if (bParam1)
			{
				return "mini@strip_club@lap_dance_2g@ld_2g_p2";
			}
			else
			{
				return "mini@strip_club@lap_dance@ld_girl_a_song_a_p2";
			}
			break;
		case 2:
			if (bParam1)
			{
				return "mini@strip_club@lap_dance_2g@ld_2g_p3";
			}
			else
			{
				return "mini@strip_club@lap_dance@ld_girl_a_song_a_p3";
			}
			break;
	}
	return "";
}

char* func_541(int iParam0, bool bParam1)//Position - 0xA269
{
	if (bParam1)
	{
		return "ld_2g_sit_idle";
	}
	if (iParam0 == 1)
	{
		return "ld_girl_a_song_a_p2_no_touch_m";
	}
	if (iParam0 == 2)
	{
		return "ld_girl_a_song_a_p3_no_touch_m";
	}
	return "ld_sit_idle";
}

char* func_542(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0xA38B
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				if (bParam2)
				{
					return "ld_2g_approach_m";
				}
				else
				{
					return "ld_girl_a_approach_m";
				}
			}
			else if (bParam2)
			{
				if (bParam3)
				{
					return "ld_2g_approach_s1";
				}
				else
				{
					return "ld_2g_approach_s2";
				}
			}
			else
			{
				return "ld_girl_a_approach_f";
			}
			break;
		case 1:
			if (bParam1)
			{
				if (bParam2)
				{
					return "ld_2g_intro_m";
				}
				else
				{
					return "ld_girl_a_intro_m";
				}
			}
			else if (bParam2)
			{
				if (bParam3)
				{
					return "ld_2g_intro_s1";
				}
				else
				{
					return "ld_2g_intro_s2";
				}
			}
			else
			{
				return "ld_girl_a_intro_f";
			}
			break;
		case 3:
			if (bParam2)
			{
				return "ld_2g_sit_reach_enter";
			}
			else
			{
				return "ld_sit_reach_enter";
			}
			break;
		case 4:
			if (bParam2)
			{
				return "ld_2g_sit_reach_exit";
			}
			else
			{
				return "ld_sit_reach_exit";
			}
			break;
		case 6:
			if (bParam1)
			{
				if (bParam2)
				{
					return "ld_2g_wait_m";
				}
				else
				{
					return "ld_girl_a_wait_m";
				}
			}
			else if (bParam2)
			{
				if (bParam3)
				{
					return "ld_2g_wait_s1";
				}
				else
				{
					return "ld_2g_wait_s2";
				}
			}
			else
			{
				return "ld_girl_a_wait_f";
			}
			break;
		case 7:
			if (bParam1)
			{
				if (bParam2)
				{
					return "ld_2g_accept_m";
				}
				else
				{
					return "ld_girl_a_accept_m";
				}
			}
			else if (bParam2)
			{
				if (bParam3)
				{
					return "ld_2g_accept_s1";
				}
				else
				{
					return "ld_2g_accept_s2";
				}
			}
			else
			{
				return "ld_girl_a_accept_f";
			}
			break;
		case 8:
			if (bParam1)
			{
				if (bParam2)
				{
					return "ld_2g_decline_m";
				}
				else
				{
					return "ld_girl_a_decline_m";
				}
			}
			else if (bParam2)
			{
				if (bParam4)
				{
					if (bParam3)
					{
						return "ld_2g_decline_h_s1";
					}
					else
					{
						return "ld_2g_decline_h_s2";
					}
				}
				else if (bParam3)
				{
					return "ld_2g_decline_s1";
				}
				else
				{
					return "ld_2g_decline_s2";
				}
			}
			else if (bParam4)
			{
				return "ld_girl_a_decline_h_f";
			}
			else
			{
				return "ld_girl_a_decline_f";
			}
			break;
		default:
			break;
	}
	return "";
}

char* func_543(int iParam0, bool bParam1)//Position - 0xA960
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				return "ld_2g_approach_cam";
			}
			else
			{
				return "ld_girl_a_approach_cam";
			}
			break;
		case 1:
			if (bParam1)
			{
				return "ld_2g_intro_cam";
			}
			else
			{
				return "ld_girl_a_intro_cam";
			}
			break;
		case 6:
			if (bParam1)
			{
				return "ld_2g_wait_cam";
			}
			else
			{
				return "ld_girl_a_wait_cam";
			}
			break;
		case 7:
			if (bParam1)
			{
				return "ld_2g_accept_cam";
			}
			else
			{
				return "ld_girl_a_accept_cam";
			}
			break;
		case 8:
			if (bParam1)
			{
				return "ld_2g_decline_cam";
			}
			else
			{
				return "ld_girl_a_decline_cam";
			}
			break;
	}
	return "";
}

int func_544(int iParam0)//Position - 0xB133
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		case 2:
			return 2;
			break;
		case 1:
			return 1;
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			return 3;
			break;
	}
	return 4;
}

int func_545(int iParam0)//Position - 0xB6BA
{
	switch (iParam0)
	{
		case 0:
			return SYSTEM::FLOOR((0.7f * 7500f));
			break;
		case 1:
			return SYSTEM::FLOOR((0.7f * 7500f));
			break;
		case 2:
			return SYSTEM::FLOOR((0.7f * 7500f));
			break;
		case 3:
			return SYSTEM::FLOOR((0.7f * 7500f));
			break;
		case 4:
			return SYSTEM::FLOOR((0.7f * 7500f));
			break;
		case 5:
			return SYSTEM::FLOOR((0.7f * 7500f));
			break;
		case 6:
			return SYSTEM::FLOOR((0.7f * 7500f));
			break;
		case 7:
			return SYSTEM::FLOOR((0.7f * 7500f));
			break;
	}
	return 0;
}

char* func_546(int iParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x75EFD
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				if (bParam2)
				{
					return "ld_2g_approach_s2_face";
				}
				else
				{
					return "ld_2g_approach_s1_face";
				}
			}
			else
			{
				return "ld_girl_a_approach_f_face";
			}
			break;
		case 1:
			if (bParam1)
			{
				if (bParam2)
				{
					return "ld_2g_intro_s2_face";
				}
				else
				{
					return "ld_2g_intro_s1_face";
				}
			}
			else
			{
				return "ld_girl_a_intro_f_face";
			}
			break;
		case 5:
			if (bParam1)
			{
				if (bParam2)
				{
					return "ld_2g_exit_s2_face";
				}
				else
				{
					return "ld_2g_exit_s1_face";
				}
			}
			else
			{
				return "ld_girl_a_exit_f_face";
			}
			break;
		case 6:
			if (bParam1)
			{
				if (bParam2)
				{
					return "ld_2g_wait_s2_face";
				}
				else
				{
					return "ld_2g_wait_s1_face";
				}
			}
			else
			{
				return "ld_girl_a_wait_f_face";
			}
			break;
		case 7:
			if (bParam1)
			{
				if (bParam2)
				{
					return "ld_2g_accept_s2_face";
				}
				else
				{
					return "ld_2g_accept_s1_face";
				}
			}
			else
			{
				return "ld_girl_a_accept_f_face";
			}
			break;
		case 8:
			if (bParam1)
			{
				if (bParam2)
				{
					if (bParam3)
					{
						return "ld_2g_decline_h_s2_face";
					}
					else
					{
						return "ld_2g_decline_s2_face";
					}
				}
				else if (bParam3)
				{
					return "ld_2g_decline_h_s1_face";
				}
				else
				{
					return "ld_2g_decline_s1_face";
				}
			}
			else if (bParam3)
			{
				return "ld_girl_a_decline_h_f_face";
			}
			else
			{
				return "ld_girl_a_decline_f_face";
			}
			break;
		default:
			break;
	}
	return "";
}

void func_547()//Position - 0x76314
{
	iLocal_151 = MISC::GET_GAME_TIMER() + 3000;
}

void func_548()//Position - 0x798E2
{
	iLocal_76++;
	iLocal_79 = 1;
}

char* func_549(bool bParam0, bool bParam1)//Position - 0x7A7F4
{
	if (bParam0)
	{
		return "ld_2g_exit_cam";
	}
	if (bParam1)
	{
		return "ld_girl_a_decline_alt_cam";
	}
	return "ld_girl_a_exit_cam";
}

char* func_550(bool bParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x7A821
{
	if (bParam0)
	{
		if (bParam1)
		{
			return "ld_2g_exit_m";
		}
		else if (bParam3)
		{
			return "ld_girl_a_decline_alt_m";
		}
		else
		{
			return "ld_girl_a_exit_m";
		}
	}
	if (bParam1)
	{
		if (bParam2)
		{
			return "ld_2g_exit_s1";
		}
		else
		{
			return "ld_2g_exit_s2";
		}
	}
	if (bParam3)
	{
		return "ld_girl_a_decline_alt_f";
	}
	return "ld_girl_a_exit_f";
}

int func_551(int iParam0)//Position - 0x7A9F2
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 4:
		case 5:
			return 1;
			break;
		case 2:
		case 3:
		case 6:
		case 7:
			return 0;
			break;
		case 8:
		case 9:
			return 1;
			break;
	}
	return 0;
}

void func_552()//Position - 0x7B340
{
	if (CAM::DOES_CAM_EXIST(Local_122.f_0))
	{
		CAM::DETACH_CAM(Local_122.f_0);
		Local_122.f_1 = { Local_204 + Vector(0.066f, 0.0107f, -0.1052f) };
		Local_122.f_4 = 15f;
		Local_122.f_4.f_2 = __LIB_0__::func_932(CAM::GET_CAM_COORD(Local_122.f_0), ENTITY::GET_ENTITY_COORDS(Local_89[iLocal_136 /*11*/], true));
	}
}

Vector3 func_553()//Position - 0x7B9A5
{
	return 116.2204f, -1297.7778f, 28.0192f;
}

char* func_554(int iParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x7BA70
{
	switch (iParam0)
	{
		case 0:
			if (bParam2)
			{
				if (bParam1)
				{
					return "ld_2g_p1_m";
				}
				else if (bParam3)
				{
					return "ld_2g_p1_s1";
				}
				else
				{
					return "ld_2g_p1_s2";
				}
			}
			else if (bParam1)
			{
				return "ld_girl_a_song_a_p1_m";
			}
			else
			{
				return "ld_girl_a_song_a_p1_f";
			}
			break;
		case 1:
			if (bParam2)
			{
				if (bParam1)
				{
					return "ld_2g_p2_m";
				}
				else if (bParam3)
				{
					return "ld_2g_p2_s1";
				}
				else
				{
					return "ld_2g_p2_s2";
				}
			}
			else if (bParam1)
			{
				return "ld_girl_a_song_a_p2_m";
			}
			else
			{
				return "ld_girl_a_song_a_p2_f";
			}
			break;
		case 2:
			if (bParam2)
			{
				if (bParam1)
				{
					return "ld_2g_p3_m";
				}
				else if (bParam3)
				{
					return "ld_2g_p3_s1";
				}
				else
				{
					return "ld_2g_p3_s2";
				}
			}
			else if (bParam1)
			{
				return "ld_girl_a_song_a_p3_m";
			}
			else
			{
				return "ld_girl_a_song_a_p3_f";
			}
			break;
		default:
			break;
	}
	return "";
}

int func_555()//Position - 0x7BB94
{
	if (NETWORK::NETWORK_PLAYER_HAS_HEADSET(PLAYER::PLAYER_ID()))
	{
		if (NETWORK::NETWORK_IS_PLAYER_TALKING(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	return 0;
}

void func_556(int iParam0, int iParam1)//Position - 0x7BCD6
{
	int iVar0;
	iVar0 = 1500;
	PED::SET_IK_TARGET(PLAYER::PLAYER_PED_ID(), 1, Local_89[iParam0 /*11*/], iParam1, 0f, 0f, 0f, 0, iVar0, iVar0);
}

char* func_557(bool bParam0)//Position - 0x7BDC1
{
	if (bParam0)
	{
		return "mini@strip_club@lap_dance_2g@ld_2g_intro";
	}
	return "mini@strip_club@lap_dance@ld_girl_a_intro";
}

char* func_558(bool bParam0)//Position - 0x7BDDE
{
	if (bParam0)
	{
		return "mini@strip_club@lap_dance_2g@ld_2g_approach";
	}
	return "mini@strip_club@lap_dance@ld_girl_a_approach";
}

void func_559()//Position - 0x7BEC2
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (iVar0 < 0)
		{
			Global_96906[iVar0] = Global_96906[iVar0 + 1];
		}
		else
		{
			Global_96906[iVar0] = MISC::GET_GAME_TIMER();
		}
		iVar0++;
	}
}

char* func_560(int iParam0, bool bParam1, bool bParam2)//Position - 0x7C0AF
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				if (bParam2)
				{
					return "ld_2g_p1_s2_face";
				}
				else
				{
					return "ld_2g_p1_s1_face";
				}
			}
			else
			{
				return "ld_girl_a_song_a_p1_f_face";
			}
			break;
		case 1:
			if (bParam1)
			{
				if (bParam2)
				{
					return "ld_2g_p2_s2_face";
				}
				else
				{
					return "ld_2g_p2_s1_face";
				}
			}
			else
			{
				return "ld_girl_a_song_a_p2_f_face";
			}
			break;
		case 2:
			if (bParam1)
			{
				if (bParam2)
				{
					return "ld_2g_p3_s2_face";
				}
				else
				{
					return "ld_2g_p3_s1_face";
				}
			}
			else
			{
				return "ld_girl_a_song_a_p3_f_face";
			}
			break;
	}
	return "";
}

void func_561(int iParam0, struct<3> Param1, struct<3> Param2, var uParam3, int iParam4, int iParam5, int iParam6, float fParam7, int iParam8, int iParam9, float fParam10, bool bParam11)//Position - 0x7C6F6
{
	iParam0->f_1 = { Param1 };
	iParam0->f_4 = { Param2 };
	iParam0->f_7 = uParam3;
	iParam0->f_20 = iParam4;
	iParam0->f_21 = iParam5;
	iParam0->f_22 = iParam6;
	iParam0->f_8 = { 0f, 0f, 0f };
	iParam0->f_11 = { 0f, 0f, 0f };
	iParam0->f_14 = { 0f, 0f, 0f };
	iParam0->f_17 = uParam3;
	iParam0->f_18 = uParam3;
	iParam0->f_23 = iParam8;
	iParam0->f_19 = fParam7;
	*iParam0 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
	CAM::SET_CAM_ACTIVE(*iParam0, true);
	CAM::SET_CAM_PARAMS(*iParam0, iParam0->f_1, iParam0->f_4, iParam0->f_7, 0, 1, 1, 2);
	if (!bParam11)
	{
		CAM::SHAKE_CAM(*iParam0, "HAND_SHAKE", 0.19f);
	}
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	if (fParam10 > 0f)
	{
		CAM::SET_CAM_NEAR_CLIP(*iParam0, fParam10);
	}
	if (iParam0->f_23)
	{
		HUD::LOCK_MINIMAP_ANGLE(iParam9);
	}
	iParam0->f_24 = 0;
	iParam0->f_25 = 0;
	iParam0->f_29 = 0f;
	iParam0->f_30 = 0f;
	iParam0->f_26 = 0;
	iParam0->f_28 = 0;
	iParam0->f_27 = 0;
}

Vector3 func_562(int iParam0, int iParam1, bool bParam2)//Position - 0x7C889
{
	if (iParam0 == 3)
	{
		switch (iParam1)
		{
			case 0:
				if (bParam2)
				{
					return 0.04f, 1.58f, 1.419f;
				}
				else
				{
					return -1f, 1.18f, -0.28f;
				}
				break;
			case 1:
				if (bParam2)
				{
					return 0.04f, 1.58f, 1.419f;
				}
				else
				{
					return -1f, 1.18f, -0.28f;
				}
				break;
			case 2:
				if (bParam2)
				{
					return 0.04f, 1.58f, 1.419f;
				}
				else
				{
					return -1f, 1.18f, -0.28f;
				}
				break;
			case 3:
				if (bParam2)
				{
					return 0.04f, 1.58f, 1.419f;
				}
				else
				{
					return -1f, 1.18f, -0.28f;
				}
				break;
			case 4:
				if (bParam2)
				{
					return 0.04f, 1.58f, 1.419f;
				}
				else
				{
					return -1f, 1.18f, -0.28f;
				}
				break;
			case 5:
				if (bParam2)
				{
					return 0.04f, 1.58f, 1.419f;
				}
				else
				{
					return -1f, 1.18f, -0.28f;
				}
				break;
			case 6:
				if (bParam2)
				{
					return 0.04f, 1.58f, 1.419f;
				}
				else
				{
					return -1f, 1.18f, -0.28f;
				}
				break;
		}
	}
	else if (iParam0 == 2)
	{
		switch (iParam1)
		{
			case 0:
				if (bParam2)
				{
					return 1.1f, 1.82f, 0.82f;
				}
				else
				{
					return 0.72f, 1.36f, 0.56f;
				}
				break;
			case 1:
				if (bParam2)
				{
					return 1.1f, 1.82f, 0.82f;
				}
				else
				{
					return 0.72f, 1.36f, 0.56f;
				}
				break;
			case 2:
				if (bParam2)
				{
					return 1.1f, 1.82f, 0.82f;
				}
				else
				{
					return 0.72f, 1.36f, 0.56f;
				}
				break;
			case 3:
				if (bParam2)
				{
					return 1.1f, 1.82f, 0.82f;
				}
				else
				{
					return 0.72f, 1.36f, 0.56f;
				}
				break;
			case 4:
				if (bParam2)
				{
					return 1.1f, 1.82f, 0.82f;
				}
				else
				{
					return 0.72f, 1.36f, 0.56f;
				}
				break;
			case 5:
				if (bParam2)
				{
					return 1.1f, 1.82f, 0.82f;
				}
				else
				{
					return 0.72f, 1.36f, 0.56f;
				}
				break;
			case 6:
				if (bParam2)
				{
					return 1.1f, 1.82f, 0.82f;
				}
				else
				{
					return 0.72f, 1.36f, 0.56f;
				}
				break;
		}
	}
	else if (iParam0 == 1)
	{
		switch (iParam1)
		{
			case 0:
				if (bParam2)
				{
					return -0.943f, -0.91f, 0.688f;
				}
				else
				{
					return -0.79f, -0.85f, 0.597f;
				}
				break;
			case 1:
				if (bParam2)
				{
					return -0.943f, -0.91f, 0.688f;
				}
				else
				{
					return -0.79f, -0.85f, 0.597f;
				}
				break;
			case 2:
				if (bParam2)
				{
					return -0.943f, -0.91f, 0.688f;
				}
				else
				{
					return -0.79f, -0.85f, 0.597f;
				}
				break;
			case 3:
				if (bParam2)
				{
					return -0.943f, -0.91f, 0.688f;
				}
				else
				{
					return -0.79f, -0.85f, 0.597f;
				}
				break;
			case 4:
				if (bParam2)
				{
					return -0.943f, -0.91f, 0.688f;
				}
				else
				{
					return -0.79f, -0.85f, 0.597f;
				}
				break;
			case 5:
				if (bParam2)
				{
					return -0.943f, -0.91f, 0.688f;
				}
				else
				{
					return -0.79f, -0.85f, 0.597f;
				}
				break;
			case 6:
				if (bParam2)
				{
					return -0.943f, -0.91f, 0.688f;
				}
				else
				{
					return -0.79f, -0.85f, 0.597f;
				}
				break;
			}
	}
	return 0f, 0f, 0f;
}

float func_563(int iParam0)//Position - 0x7CCFE
{
	switch (iParam0)
	{
		case 0:
			return (20.8127f + 180f);
			break;
		case 1:
			return 20.8127f;
			break;
		case 2:
			return 20.8127f;
			break;
		case 3:
			return (20.8127f + 180f);
			break;
		case 4:
			return (20.8127f + 180f);
			break;
		case 5:
			return 20.8127f;
			break;
		case 6:
			return 20.8127f;
			break;
	}
	return (20.8127f + 180f);
}

Vector3 func_564(int iParam0)//Position - 0x7CDA1
{
	switch (iParam0)
	{
		case 0:
			return 114.29f, -1299.73f, 28.72f;
			break;
		case 1:
			return 116.9f, -1303.81f, 28.72f;
			break;
		case 2:
			return 114.83f, -1304.97f, 28.72f;
			break;
		case 3:
			return 112.42f, -1300.88f, 28.72f;
			break;
		case 4:
			return 110.67f, -1301.9f, 28.72f;
			break;
		case 5:
			return 113.08f, -1306.12f, 28.72f;
			break;
		case 6:
			return 119.14f, -1302.68f, 28.72f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_565(int iParam0, int iParam1, int iParam2)//Position - 0x7D171
{
	uLocal_91[iParam2] = Local_89[iParam0 /*11*/].f_1;
	uLocal_187[iParam2] = iParam1;
}

char* func_566(int iParam0)//Position - 0x7D413
{
	switch (iParam0)
	{
		case 1:
		case 0:
			return "base";
			break;
		case 3:
			return "side_enter";
			break;
		case 4:
			return "side_exit";
			break;
		case 2:
			return "stop";
			break;
		case 5:
			return "go_away";
			break;
	}
	return "";
}

char* func_567()//Position - 0x7D480
{
	return "mini@strip_club@idles@bouncer@go_away";
}

float func_568()//Position - 0x7D50C
{
	return 130.0314f;
}

Vector3 func_569()//Position - 0x7D54C
{
	return 118.4887f, -1300.0215f, 28.0194f;
}

void func_570()//Position - 0x7DC4C
{
	MISC::CLEAR_AREA_OF_OBJECTS(116.62639f, -1294.9115f, 28.270168f, 1.5f, 0);
	MISC::CLEAR_AREA_OF_VEHICLES(116.62639f, -1294.9115f, 28.270168f, 1.5f, false, false, false, false, false, false, 0);
}

bool func_571()//Position - 0x7E642
{
	return PED::IS_ANY_PED_SHOOTING_IN_AREA(137.6174f, -1271.6357f, 28.1323f, 96.3833f, -1322.4016f, 28.2919f, false, false);
}

int func_572()//Position - 0x7E66E
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
		if (Var0.f_2 > 31f)
		{
			return 0;
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 118.21f, -1300.93f, 28.02f, 113.97f, -1293.97f, 28.27f, 1.5f, false, false, 0))
		{
			return 1;
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 118.8f, -1299.83f, 28.02f, 110.83f, -1304.35f, 28.02f, 6f, false, false, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_573(int iParam0)//Position - 0x7E93C
{
	return __LIB_0__::func_703(uLocal_100, iParam0);
}

void func_574()//Position - 0x7EBA8
{
	iLocal_141++;
}

void func_575()//Position - 0x7EBFB
{
	MISC::CLEAR_AREA_OF_PEDS(116.484f, -1302.986f, 29f, 2f, 0);
}

Vector3 func_576()//Position - 0x7EDAD
{
	return 117.27327f, -1294.7175f, 28.27479f;
}

int func_577()//Position - 0x7EDC4
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
		if (Var0.f_2 < 28.4f)
		{
			return 0;
		}
		return SYSTEM::VDIST2(Var0, 117.155f, -1294.798f, 29.269f) < (0.84f * 0.84f);
	}
	return 0;
}

char* func_578()//Position - 0x7F566
{
	return "mini@strip_club@pole_dance@stage_exit";
}

char* func_579()//Position - 0x7F573
{
	return "mini@strip_club@pole_dance@stage_enter";
}

char* func_580()//Position - 0x7F580
{
	return "mini@strip_club@pole_dance@pole_exit";
}

char* func_581()//Position - 0x7F58D
{
	return "mini@strip_club@pole_dance@pole_enter";
}

char* func_582(int iParam0)//Position - 0x7F59A
{
	switch (iParam0)
	{
		case 0:
			return "mini@strip_club@pole_dance@Pole_C_2_PrvD_A";
			break;
		case 1:
			return "mini@strip_club@pole_dance@Pole_C_2_PrvD_B";
			break;
		case 2:
			return "mini@strip_club@pole_dance@Pole_C_2_PrvD_C";
			break;
	}
	return "";
}

char* func_583(int iParam0)//Position - 0x7F5E0
{
	switch (iParam0)
	{
		case 0:
			return "mini@strip_club@pole_dance@pole_c_2_stage";
			break;
		case 1:
			return "mini@strip_club@pole_dance@pole_b_2_stage";
			break;
		case 2:
			return "mini@strip_club@pole_dance@pole_a_2_stage";
			break;
	}
	return "";
}

char* func_584(int iParam0)//Position - 0x7F626
{
	switch (iParam0)
	{
		case 0:
			return "mini@strip_club@pole_dance@stage_2_pole_c";
			break;
		case 1:
			return "mini@strip_club@pole_dance@stage_2_pole_b";
			break;
		case 2:
			return "mini@strip_club@pole_dance@stage_2_pole_a";
			break;
	}
	return "";
}

char* func_585(int iParam0)//Position - 0x7F66C
{
	switch (iParam0)
	{
		case 1:
			return "mini@strip_club@pole_dance@pole_dance1";
			break;
		case 2:
			return "mini@strip_club@pole_dance@pole_dance2";
			break;
		case 3:
			return "mini@strip_club@pole_dance@pole_dance3";
			break;
	}
	return "";
}

char* func_586()//Position - 0x7F6CA
{
	return "mini@strip_club@idles@stripper";
}

char* func_587()//Position - 0x7FE93
{
	return "mini@strip_club@idles@bouncer@side_exit";
}

char* func_588()//Position - 0x7FEA0
{
	return "mini@strip_club@idles@bouncer@side_enter";
}

char* func_589()//Position - 0x7FEAD
{
	return "mini@strip_club@idles@bouncer@stop";
}

int func_590(int iParam0)//Position - 0x7FEBA
{
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, __LIB_39__::func_490(0), __LIB_39__::func_489(0), 3))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, __LIB_39__::func_490(1), __LIB_39__::func_489(1), 3))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, __LIB_39__::func_490(2), __LIB_39__::func_489(2), 3))
	{
		return 2;
	}
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, __LIB_39__::func_490(3), __LIB_39__::func_489(3), 3))
	{
		return 3;
	}
	return -1;
}

float func_591(int iParam0)//Position - 0x7FF23
{
	switch (iParam0)
	{
		case 0:
			return 35.2391f;
			break;
		case 2:
			return 116.99f;
			break;
		case 3:
			return 129.69f;
			break;
	}
	return 0f;
}

int func_592()//Position - 0x802AB
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
		if (Var0.f_2 > 31f)
		{
			return 0;
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 113.24f, -1297.15f, 28.27f, 107.37f, -1300.99f, 27.77f, 4.13f, false, false, 0))
		{
			return 1;
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 103.71f, -1299.99f, 27.77f, 100.05f, -1293.64f, 28.27f, 2.87f, false, false, 0))
		{
			return 1;
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 104.89f, -1299.19f, 27.77f, 109.28f, -1306.68f, 27.77f, 5.76f, false, false, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_593()//Position - 0x8043C
{
	iLocal_140 = __LIB_0__::func_138(iLocal_140 + 1 < 30, iLocal_140 + 1, 0);
}

Vector3 func_594(int iParam0)//Position - 0x80586
{
	switch (iParam0)
	{
		case 0:
			return 118.51906f, -1281.4622f, 27.72217f;
			break;
		case 1:
			return 119.51733f, -1283.4725f, 27.72217f;
			break;
		case 2:
			return 121.30746f, -1283.9093f, 27.72217f;
			break;
		case 3:
			return 122.12188f, -1285.2399f, 27.72217f;
			break;
		case 4:
			return 122.81584f, -1286.487f, 27.72217f;
			break;
		case 5:
			return 123.58376f, -1287.4509f, 27.72217f;
			break;
		case 6:
			return 123.82587f, -1288.7689f, 27.72217f;
			break;
		case 7:
			return 112.90668f, -1293.3568f, 27.72217f;
			break;
		case 8:
			return 110.34463f, -1294.934f, 27.72217f;
			break;
		case 9:
			return 109.23676f, -1295.4808f, 27.72217f;
			break;
		case 10:
			return 106.67527f, -1297.0493f, 27.72217f;
			break;
		case 11:
			return 107.08104f, -1282.8727f, 27.72217f;
			break;
		case 12:
			return 104.80939f, -1284.1366f, 27.72217f;
			break;
		case 13:
			return 103.31277f, -1285.018f, 27.72217f;
			break;
		case 14:
			return 101.16519f, -1286.2114f, 27.72217f;
			break;
		case 15:
			return 113.74977f, -1283.025f, 27.72217f;
			break;
		case 16:
			return 115.05013f, -1284.7708f, 27.72217f;
			break;
		case 17:
			return 116.00701f, -1286.5315f, 27.72217f;
			break;
		case 18:
			return 116.70783f, -1288.5795f, 27.72217f;
			break;
		case 19:
			return 103.5546f, -1287.3937f, 28.26099f;
			break;
		case 20:
			return 104.90012f, -1288.0212f, 27.72693f;
			break;
		case 21:
			return 106.85392f, -1286.8373f, 27.72693f;
			break;
		case 22:
			return 108.48473f, -1285.9154f, 27.72693f;
			break;
		case 23:
			return 110.53699f, -1284.5789f, 28.26099f;
			break;
		case 24:
			return 111.46305f, -1283.9565f, 28.26592f;
			break;
		case 25:
			return 113.83677f, -1290.3102f, 28.26099f;
			break;
		case 26:
			return 111.35435f, -1291.0565f, 27.78339f;
			break;
		case 27:
			return 110.08369f, -1291.5956f, 27.72693f;
			break;
		case 28:
			return 108.99257f, -1292.2212f, 27.72693f;
			break;
		case 29:
			return 108.35011f, -1293.6873f, 28.26099f;
			break;
	}
	return 0f, 0f, 0f;
}

char* func_595(int iParam0)//Position - 0x80B49
{
	switch (iParam0)
	{
		case 1:
			return "idle_01";
			break;
		case 2:
			return "idle_02";
			break;
		case 3:
			return "idle_03";
			break;
		case 4:
			return "idle_04";
			break;
		case 5:
			return "idle_05";
			break;
		default:
			break;
	}
	return "";
}

char* func_596(int iParam0)//Position - 0x80BCE
{
	switch (iParam0)
	{
		case 1:
			return "mini@strip_club@idles@dj@idle_01";
			break;
		case 2:
			return "mini@strip_club@idles@dj@idle_02";
			break;
		case 3:
			return "mini@strip_club@idles@dj@idle_03";
			break;
		case 4:
			return "mini@strip_club@idles@dj@idle_04";
			break;
		case 5:
			return "mini@strip_club@idles@dj@idle_05";
			break;
		default:
			break;
	}
	return "";
}

char* func_597()//Position - 0x80F95
{
	return "stripclub_drinking";
}

char* func_598(int iParam0, bool bParam1)//Position - 0x81559
{
	switch (iParam0)
	{
		case 0:
			return "Juliet";
			break;
		case 1:
			if (bParam1)
			{
				return "NIKKI_MP";
			}
			else
			{
				return "Nikki";
			}
			break;
		case 2:
			if (bParam1)
			{
				return "CHASTITY_MP";
			}
			else
			{
				return "Chastity";
			}
			break;
		case 3:
			return "Cheetah" /* GXT: Cheetah */;
			break;
		case 4:
			return "Sapphire";
			break;
		case 5:
			return "Infernus" /* GXT: Infernus */;
			break;
		case 6:
			if (bParam1)
			{
				return "FUFU_MP";
			}
			else
			{
				return "Fufu";
			}
			break;
		case 7:
			return "Peach";
			break;
		case 8:
			return "TaxiLiz";
			break;
		case 9:
			return "REHH2Hiker";
			break;
	}
	return "Invalid name";
}

int func_599(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, float fParam5, int iParam6, bool bParam7)//Position - 0x82C5C
{
	if (bParam7)
	{
		TASK::TASK_PLAY_ANIM(iParam0, sParam3, sParam4, 4f, -4f, -1, iParam6, 0f, false, 25, false);
		return 1;
	}
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, sParam1, sParam2, 3))
	{
		if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iParam0, sParam1, sParam2) >= fParam5)
		{
			TASK::TASK_PLAY_ANIM(iParam0, sParam3, sParam4, 4f, -4f, -1, iParam6, 0f, false, 25, false);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

char* func_600()//Position - 0x82EAD
{
	return "mini@strip_club@private_dance@exit";
}

char* func_601(int iParam0)//Position - 0x82EBA
{
	switch (iParam0)
	{
		case 1:
			return "mini@strip_club@private_dance@part1";
			break;
		case 2:
			return "mini@strip_club@private_dance@part2";
			break;
		case 3:
			return "mini@strip_club@private_dance@part3";
			break;
	}
	return "";
}

char* func_602()//Position - 0x82F00
{
	return "mini@strip_club@private_dance@idle";
}

char* func_603(int iParam0)//Position - 0x82F0D
{
	switch (iParam0)
	{
		case 0:
			return "Pole_C_2_PrvD_A";
			break;
		case 1:
			return "Pole_C_2_PrvD_B";
			break;
		case 2:
			return "Pole_C_2_PrvD_C";
			break;
	}
	return "";
}

char* func_604(int iParam0)//Position - 0x8304E
{
	switch (iParam0)
	{
		case 1:
			return "pd_dance_01";
			break;
		case 2:
			return "pd_dance_02";
			break;
		case 3:
			return "pd_dance_03";
			break;
	}
	return "";
}

Vector3 func_605(int iParam0)//Position - 0x83094
{
	if (iParam0 == 0)
	{
		return 0.26f, 0.12f, -0.89f;
	}
	else if (iParam0 == 1)
	{
		return -8.16f, -7.11f, -0.092f;
	}
	else if (iParam0 == 2)
	{
		return -10.1f, -3.75f, -0.092f;
	}
	return 0f, 0f, 0f;
}

Vector3 func_606(int iParam0)//Position - 0x8311F
{
	if (iParam0 == 0)
	{
		return -0.119f, 0.407f, -0.89f;
	}
	else if (iParam0 == 1)
	{
		return -8.54f, -6.83f, -0.092f;
	}
	else if (iParam0 == 2)
	{
		return -10.48f, -3.47f, -0.092f;
	}
	return 0f, 0f, 0f;
}

bool func_607(var uParam0)//Position - 0x831A1
{
	return BitTest(*uParam0, 7);
}

char* func_608(int iParam0)//Position - 0x83472
{
	switch (iParam0)
	{
		case 0:
			return "stage_enter";
			break;
		case 1:
			return "stage_exit";
			break;
		case 2:
			return "stage_2_pole_a";
			break;
		case 3:
			return "stage_2_pole_b";
			break;
		case 4:
			return "stage_2_pole_c";
			break;
		case 5:
			return "pole_a_2_stage";
			break;
		case 6:
			return "pole_b_2_stage";
			break;
		case 7:
			return "pole_c_2_stage";
			break;
		case 8:
			return "pd_enter";
			break;
		case 9:
			return "pd_exit";
			break;
		case 10:
			return "priv_dance_idle";
			break;
		case 11:
			return "priv_dance_p1";
			break;
		case 12:
			return "priv_dance_p2";
			break;
		case 13:
			return "priv_dance_p3";
			break;
		case 14:
			return "priv_dance_exit";
			break;
	}
	return "";
}

char* func_609(int iParam0)//Position - 0x83584
{
	iParam0 = __LIB_0__::func_138(iParam0 <= 0, MISC::GET_RANDOM_INT_IN_RANGE(2, 7), iParam0);
	iParam0 = __LIB_0__::func_138(iParam0 == 5, 2, iParam0);
	switch (iParam0)
	{
		case 1:
			return "stripper_idle_01";
			break;
		case 2:
			return "stripper_idle_02";
			break;
		case 3:
			return "stripper_idle_03";
			break;
		case 4:
			return "stripper_idle_04";
			break;
		case 5:
			return "stripper_idle_05";
			break;
		case 6:
			return "stripper_idle_06";
			break;
	}
	return "";
}

float func_610(int iParam0)//Position - 0x838FD
{
	switch (iParam0)
	{
		case 0:
			return (22.03f + 180f);
			break;
		case 1:
			return 22.03f;
			break;
		case 2:
			return 22.03f;
			break;
		case 3:
			return (22.03f + 180f);
			break;
		case 4:
			return (22.03f + 180f);
			break;
		case 5:
			return 22.03f;
			break;
		case 6:
			return 22.03f;
			break;
	}
	return 0f;
}

Vector3 func_611()//Position - 0x83A41
{
	return 120.25f, -1293.07f, 28.27f;
}

float func_612(int iParam0, struct<3> Param1)//Position - 0x842ED
{
	float fVar0;
	int iVar1;
	switch (iParam0)
	{
		case 0:
			fVar0 = 212.9749f;
			break;
		case 1:
			fVar0 = 191.0365f;
			break;
		case 2:
			fVar0 = 103.831f;
			break;
		case 3:
			fVar0 = 104.9055f;
			break;
		case 4:
			fVar0 = 105.2947f;
			break;
		case 5:
			fVar0 = 41.7561f;
			break;
		case 6:
			fVar0 = 310.2245f;
			break;
	}
	PED::SET_SCENARIO_PEDS_TO_BE_RETURNED_BY_NEXT_COMMAND(true);
	if (PED::GET_CLOSEST_PED(Param1, 3f, true, false, &iVar1, false, true, 26))
	{
		if (!PED::IS_PED_INJURED(iVar1))
		{
			return __LIB_0__::func_932(Param1, ENTITY::GET_ENTITY_COORDS(iVar1, true));
		}
	}
	return fVar0;
}

bool func_613()//Position - 0x84786
{
	return MISC::GET_GAME_TIMER() < iLocal_164;
}

void func_614(int iParam0)//Position - 0x848CF
{
	if (STREAMING::HAS_ANIM_DICT_LOADED("facials@gen_female@variations@happy"))
	{
		if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "facials@gen_female@variations@happy", "mood_happy_1", 3))
		{
			TASK::TASK_PLAY_ANIM(iParam0, "facials@gen_female@variations@happy", "mood_happy_1", 8f, -8f, -1, 33, 0f, false, false, false);
		}
	}
}

void func_615(int iParam0)//Position - 0x85911
{
	int iVar0;
	struct<3> Var1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_106[iVar0]) && (iParam0 == -1 || iParam0 == iVar0))
		{
			Var1 = { 0f, 0f, -1f };
			ENTITY::SET_ENTITY_VELOCITY(iLocal_106[iVar0], Var1);
		}
		iVar0++;
	}
}

char* func_616(bool bParam0, int iParam1)//Position - 0x85961
{
	if (bParam0)
	{
		return "toss_many_player";
	}
	switch (iParam1)
	{
		case 1:
			return "toss_many_note_01";
			break;
		case 2:
			return "toss_many_note_02";
			break;
		case 3:
			return "toss_many_note_03";
			break;
		case 4:
			return "toss_many_note_04";
			break;
		case 5:
			return "toss_many_note_05";
			break;
		case 6:
			return "toss_many_note_06";
			break;
	}
	return "";
}

float func_617(struct<3> Param0, struct<3> Param1)//Position - 0x85B34
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	fVar1 = (Param1.f_2 - Param0.f_2);
	fVar2 = (Param1.f_1 - Param0.f_1);
	fVar3 = (Param1.f_2 - Param0.f_2);
	fVar4 = SYSTEM::SQRT(((fVar1 * fVar1) + (fVar2 * fVar2)));
	if (fVar4 != 0f)
	{
		fVar0 = MISC::ATAN2(fVar3, fVar4);
	}
	else if (fVar3 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	return fVar0;
}

int func_618()//Position - 0x85F07
{
	return joaat("prop_anim_cash_note_b");
}

int func_619(int iParam0)//Position - 0x85F84
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
		if (Var0.f_2 > 31f)
		{
			return 0;
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, 111.19f, -1287.89f, 27.46f, 113.58f, -1286.54f, 27.46f, 4.36f, false, false, 0))
		{
			return 1;
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, 103.12f, -1292.54f, 28.26f, 113.58f, -1286.54f, 27.46f, 2.3f, false, false, 0))
		{
			return 1;
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, 101.72f, -1293.39f, 28.26f, 104.4f, -1291.79f, 28.26f, 7.49f, false, false, 0))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_620(struct<3> Param0, struct<3> Param1, struct<3> Param2)//Position - 0x86425
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	float fVar4;
	Var0 = { Param0 - Param1 };
	Var1 = { Param2 - Param1 };
	fVar2 = ((Var1.f_0 * Var1.f_0) + (Var1.f_1 * Var1.f_1));
	fVar3 = ((Var0.f_0 * Var1.f_0) + (Var0.f_1 * Var1.f_1));
	fVar4 = (fVar3 / fVar2);
	if (fVar4 < 0f)
	{
		fVar4 = 0f;
	}
	else if (fVar4 > 1f)
	{
		fVar4 = 1f;
	}
	return Param1 + Var1 * Vector(fVar4, fVar4, fVar4);
}

void func_621()//Position - 0x86546
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_39__::func_487(0, 0));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_39__::func_487(1, 0));
}

int func_622(int iParam0)//Position - 0x86562
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return joaat("S_M_M_Bouncer_01");
			break;
		case 2:
		case 4:
			return joaat("S_F_Y_Bartender_01");
			break;
		case 3:
			return joaat("A_M_Y_Hipster_01");
			break;
	}
	return joaat("S_M_M_Bouncer_01");
}

void func_623(int iParam0, struct<3> Param1, struct<3> Param2, float fParam3, int iParam4)//Position - 0x8687F
{
	Local_90[iParam0 /*8*/] = { Param1 };
	Local_90[iParam0 /*8*/].f_3 = { Param2 };
	Local_90[iParam0 /*8*/].f_6 = fParam3;
	Local_90[iParam0 /*8*/].f_7 = iParam4;
}

void func_624()//Position - 0x86ACD
{
	iLocal_200[0] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(116.03237f, -1288.5013f, 27.26096f, 0.66f, 1.2f, 0.5f, 0f, false, 7);
	iLocal_200[1] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(113.30757f, -1283.595f, 27.26592f, 0.5f, 0.5f, 0.5f, 0f, false, 7);
	iLocal_200[2] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(107.46f, -1292.28f, 28.795f, 10f, 0.2f, 2f, 0.55f, false, 7);
	iLocal_200[3] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(105.58f, -1289.37f, 28.795f, 10f, 0.2f, 2f, 0.55f, false, 7);
}

int func_625()//Position - 0x86B81
{
	return joaat("p_whiskey_bottle_s");
}

Vector3 func_626(int iParam0)//Position - 0x86EB1
{
	switch (iParam0)
	{
		case 0:
			return 114.64f, -1290.34f, 29.68f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_627()//Position - 0x875FB
{
	Global_96908 = MISC::GET_GAME_TIMER();
}

int func_628(int iParam0, int iParam1)//Position - 0x8765E
{
	if (iParam1 != 0)
	{
		return NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0);
	}
	return 1;
}

Vector3 func_629()//Position - 0x877DA
{
	return 128.15f, -1282.8f, 29.45f;
}

Vector3 func_630()//Position - 0x877F1
{
	return 128.36f, -1283.11f, 29.29f;
}

bool func_631()//Position - 0x87808
{
	return (ENTITY::DOES_ENTITY_EXIST(iLocal_107) && ENTITY::DOES_ENTITY_EXIST(iLocal_108));
}

void func_632()//Position - 0x879DC
{
	PED::SET_PED_COMPONENT_VARIATION(iLocal_101[4], 0, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_101[4], 2, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_101[4], 3, 0, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_101[4], 4, 0, 1, 0);
}

void func_633()//Position - 0x87A36
{
	PED::SET_PED_COMPONENT_VARIATION(iLocal_101[1], 0, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_101[1], 3, 1, 0, 0);
}

void func_634()//Position - 0x87A58
{
	PED::SET_PED_COMPONENT_VARIATION(iLocal_101[2], 0, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_101[2], 2, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_101[2], 3, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_101[2], 4, 0, 0, 0);
}

void func_635()//Position - 0x87B3E
{
	MISC::CLEAR_AREA_OF_PEDS(114.09f, -1302.54f, 28.02f, 5.75f, 0);
}

bool func_636()//Position - 0x87BC4
{
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 132.7121f, -1304.899f, 28.195f) < (25f * 25f);
}

bool func_637()//Position - 0x87DA2
{
	return ((((__LIB_39__::func_511("SCLUB_DRNK_TREV" /* GXT: Press ~INPUT_CONTEXT~ to get a drink. */) || __LIB_39__::func_511("SCLUB_DRNK_HELP" /* GXT: Press ~INPUT_CONTEXT~ to buy a drink for $10. */)) || __LIB_39__::func_510("SCLUB_DRNK_HELP_TUNE" /* GXT: Press ~INPUT_CONTEXT~ to buy a drink for $~1~. */, iLocal_81)) || __LIB_39__::func_511("SCLUB_NO_DRINK" /* GXT: Not enough cash for a drink. */)) || __LIB_39__::func_511("SCLUB_NO_DRINK_MP" /* GXT: Not enough cash for a drink. */));
}

Vector3 func_638()//Position - 0x87DF1
{
	return 116f, -1304.66f, 35f;
}

Vector3 func_639()//Position - 0x87E08
{
	return 111.1f, -1295.46f, 25f;
}

bool func_640()//Position - 0x8829E
{
	return __LIB_0__::func_703(uLocal_159, 2);
}

bool func_641()//Position - 0x88487
{
	return __LIB_0__::func_703(uLocal_159, 16384);
}

void func_642(bool bParam0)//Position - 0x887F2
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833), 21);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833), 21);
	}
}

int func_643(int iParam0)//Position - 0x890FB
{
	if (iLocal_109 != 0)
	{
		if (INTERIOR::IS_INTERIOR_READY(iLocal_109))
		{
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0) == iLocal_109)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_644()//Position - 0x89163
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_89.f_0)
	{
		if (!PED::IS_PED_INJURED(Local_89[iVar0 /*11*/]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Local_89[iVar0 /*11*/].f_10 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_89[iVar0 /*11*/], true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
		}
		iVar0++;
	}
}

int func_645()//Position - 0x891BA
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(128.6535f, -1298.3918f, 28.2327f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 100f)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 125.58423f, -1306.2335f, 28.232737f, 136.7617f, -1299.7859f, 34.232735f, 10f, false, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_646()//Position - 0x89229
{
	return __LIB_0__::func_703(uLocal_159, 4);
}

void func_647()//Position - 0x89653
{
	if (iLocal_143 != 0 && MISC::GET_GAME_TIMER() > iLocal_143)
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		iLocal_143 = 0;
	}
}

Vector3 func_648()//Position - 0x89886
{
	return 113.98f, -1297.43f, 29.42f;
}

Vector3 func_649()//Position - 0x89922
{
	return 96.092f, -1284.8536f, 29.4319f;
}

int func_650()//Position - 0x89D06
{
	return iLocal_77;
}

int func_651()//Position - 0x89D10
{
	return iLocal_78;
}

int func_652()//Position - 0x89D1A
{
	return iLocal_76;
}

void func_653()//Position - 0x5556
{
	if (__LIB_7__::func_691())
	{
		GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
		AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
	}
}

bool func_654()//Position - 0x6228
{
	return __LIB_0__::func_703(Global_112411, 8);
}

bool func_655()//Position - 0x86B6
{
	return __LIB_0__::func_703(uLocal_159, 4096);
}

bool func_656()//Position - 0x89BC
{
	return __LIB_0__::func_703(uLocal_159, 1024);
}

void func_657(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x8E9C
{
	int iVar0;
	if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		return;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (iVar0 == __LIB_39__::func_487(0, 0) || iVar0 == __LIB_39__::func_487(0, 1))
	{
		if (bParam1)
		{
			__LIB_39__::func_482(iParam0, 2, 0);
			__LIB_39__::func_480(iParam0, 1, 0);
		}
	}
	else if (iVar0 == __LIB_39__::func_487(1, 0) || iVar0 == __LIB_39__::func_487(1, 1))
	{
		if (bParam1)
		{
			__LIB_39__::func_482(iParam0, 0, iParam2);
			__LIB_39__::func_478(iParam0, iParam3, 0);
			__LIB_39__::func_480(iParam0, 1, 0);
		}
	}
	else if (iVar0 == joaat("MP_F_StripperLite"))
	{
		if (bParam1)
		{
			__LIB_39__::func_480(iParam0, 1, 0);
		}
	}
}

void func_658(int iParam0)//Position - 0x9712
{
	__LIB_27__::func_450(0);
	if (!CAM::DOES_CAM_EXIST(*iParam0))
	{
		*iParam0 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
	}
	if (!CAM::DOES_CAM_EXIST(iLocal_117))
	{
		iLocal_117 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
	}
	if (!CAM::DOES_CAM_EXIST(iLocal_118))
	{
		iLocal_118 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
	}
	CAM::SET_CAM_COORD(iLocal_117, 121f, -1291.7f, 29.8f);
	CAM::SET_CAM_ROT(iLocal_117, 8.1f, 0f, 129.1f, 2);
	CAM::SET_CAM_FOV(iLocal_117, 30f);
	CAM::SET_CAM_COORD(iLocal_118, 121f, -1291.7f, 29.8f);
	CAM::SET_CAM_ROT(iLocal_118, -3.7f, 0f, 141f, 2);
	CAM::SET_CAM_FOV(iLocal_118, 30f);
	CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_118, iLocal_117, 5500, 1, 1);
	HUD::DISPLAY_HUD(false);
	HUD::DISPLAY_RADAR(false);
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
}

bool func_659()//Position - 0xB9AD
{
	return __LIB_0__::func_703(uLocal_159, 32768);
}

bool func_660()//Position - 0x7DE6D
{
	return __LIB_0__::func_703(uLocal_159, 256);
}

void func_661(int iParam0)//Position - 0x7E94C
{
	__LIB_0__::func_989(&uLocal_100, iParam0);
}

void func_662()//Position - 0x7EE96
{
	if (!__LIB_0__::func_703(uLocal_158, 1048576))
	{
		__LIB_1__::func_330(&uLocal_158, 1048576);
		PED::ADD_RELATIONSHIP_GROUP("stripClubRelGroup", &iLocal_105);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_105, iLocal_105);
	}
}

bool func_663()//Position - 0x84774
{
	return __LIB_0__::func_703(uLocal_159, 8192);
}

bool func_664()//Position - 0x84796
{
	return __LIB_0__::func_703(uLocal_159, 8);
}

bool func_665()//Position - 0x856EA
{
	return __LIB_0__::func_703(uLocal_159, 65536);
}

bool func_666()//Position - 0x85C60
{
	return __LIB_0__::func_703(uLocal_159, 2048);
}

bool func_667()//Position - 0x867DB
{
	return __LIB_0__::func_703(uLocal_159, 16);
}

bool func_668()//Position - 0x87B87
{
	return (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 118f, -1287.68f, 27.26f) < (16f * 16f) && __LIB_3__::func_137(PLAYER::PLAYER_PED_ID()));
}

bool func_669()//Position - 0x8805A
{
	return __LIB_0__::func_703(uLocal_159, 64);
}

bool func_670()//Position - 0x88259
{
	return __LIB_0__::func_703(uLocal_159, 32);
}

void func_671(bool bParam0)//Position - 0x882AE
{
	if (bParam0)
	{
		__LIB_1__::func_330(&uLocal_159, 2);
	}
	else
	{
		__LIB_2__::func_712(&uLocal_159, 2);
	}
}

void func_672(bool bParam0)//Position - 0x88463
{
	if (bParam0)
	{
		__LIB_1__::func_330(&uLocal_159, 16384);
	}
	else
	{
		__LIB_2__::func_712(&uLocal_159, 16384);
	}
}

void func_673(bool bParam0)//Position - 0x884B3
{
	if (bParam0)
	{
		__LIB_1__::func_330(&uLocal_159, 4);
	}
	else
	{
		__LIB_2__::func_712(&uLocal_159, 4);
	}
}

void func_674()//Position - 0x89421
{
	__LIB_39__::func_520("SCLUB_DRNK_TREV" /* GXT: Press ~INPUT_CONTEXT~ to get a drink. */);
	__LIB_39__::func_520("SCLUB_DRNK_HELP" /* GXT: Press ~INPUT_CONTEXT~ to buy a drink for $10. */);
	__LIB_39__::func_520("SCLUB_NO_DRINK" /* GXT: Not enough cash for a drink. */);
	__LIB_39__::func_520("SCLUB_NO_DRINK_MP" /* GXT: Not enough cash for a drink. */);
	__LIB_39__::func_516("SCLUB_DRNK_HELP_TUNE" /* GXT: Press ~INPUT_CONTEXT~ to buy a drink for $~1~. */, iLocal_81);
}

void func_675(bool bParam0)//Position - 0x89950
{
	if (bParam0)
	{
		__LIB_1__::func_330(&Global_112411, 16);
	}
	else
	{
		__LIB_2__::func_712(&Global_112411, 16);
	}
}

int func_676()//Position - 0x89E78
{
	if ((NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::NETWORK_IS_SIGNED_IN()) && __LIB_1__::func_894())
	{
		return 1;
	}
	return 0;
}

void func_677(bool bParam0)//Position - 0x544B
{
	if (bParam0)
	{
		__LIB_1__::func_330(&Global_112411, 256);
	}
	else
	{
		__LIB_2__::func_712(&Global_112411, 256);
	}
}

void func_678(bool bParam0)//Position - 0xB987
{
	if (bParam0)
	{
		__LIB_1__::func_330(&uLocal_159, 32768);
	}
	else
	{
		__LIB_2__::func_712(&uLocal_159, 32768);
	}
}

void func_679(bool bParam0)//Position - 0x7BE7C
{
	if (bParam0)
	{
		__LIB_1__::func_330(&uLocal_159, 1024);
	}
	else
	{
		__LIB_2__::func_712(&uLocal_159, 1024);
	}
}

void func_680(bool bParam0)//Position - 0x7BEA0
{
	if (bParam0)
	{
		__LIB_1__::func_330(&uLocal_159, 128);
	}
	else
	{
		__LIB_2__::func_712(&uLocal_159, 128);
	}
}

void func_681(bool bParam0)//Position - 0x7C26D
{
	if (bParam0)
	{
		__LIB_1__::func_330(&uLocal_159, 4096);
	}
	else
	{
		__LIB_2__::func_712(&uLocal_159, 4096);
	}
}

bool func_682()//Position - 0x7E4DF
{
	return (((((((__LIB_0__::func_983() || __LIB_1__::func_736()) || __LIB_2__::func_715()) || __LIB_1__::func_192() == 16) || __LIB_1__::func_192() == 2) || __LIB_3__::func_126(PLAYER::PLAYER_ID())) || __LIB_10__::func_582()) || __LIB_0__::func_927(PLAYER::PLAYER_ID()));
}

void func_683(int iParam0)//Position - 0x8102D
{
	TASK::TASK_PLAY_ANIM(iParam0, __LIB_39__::func_519(4), __LIB_39__::func_509(4, 0), 1000f, -2f, -1, 1, 0f, false, false, false);
}

void func_684(bool bParam0)//Position - 0x831AE
{
	if (bParam0)
	{
		__LIB_1__::func_330(&uLocal_159, 65536);
	}
	else
	{
		__LIB_2__::func_712(&uLocal_159, 65536);
	}
}

void func_685(bool bParam0)//Position - 0x85C3C
{
	if (bParam0)
	{
		__LIB_1__::func_330(&uLocal_159, 512);
	}
	else
	{
		__LIB_2__::func_712(&uLocal_159, 512);
	}
}

void func_686()//Position - 0x85CB6
{
	__LIB_39__::func_520("SCLUB_LEAVE_M" /* GXT: Hold ~INPUT_CONTEXT~ to ask Michael to leave the club.~n~Press ~INPUT_CONTEXT~ to lean in for a better view. */);
	__LIB_39__::func_520("SCLUB_LEAVE_F" /* GXT: Hold ~INPUT_CONTEXT~ to ask Franklin to leave the club.~n~Press ~INPUT_CONTEXT~ to lean in for a better view. */);
	__LIB_39__::func_520("SCLUB_LEAVE_T" /* GXT: Hold ~INPUT_CONTEXT~ to ask Trevor to leave the club.~n~Press ~INPUT_CONTEXT~ to lean in for a better view. */);
	__LIB_39__::func_520("SCLUB_LEAVE_L" /* GXT: Hold ~INPUT_CONTEXT~ to ask Lamar to leave the club.~n~Press ~INPUT_CONTEXT~ to lean in for a better view. */);
	__LIB_39__::func_520("SCLUB_LEAVE_J" /* GXT: Hold ~INPUT_CONTEXT~ to ask Jimmy to leave the club.~n~Press ~INPUT_CONTEXT~ to lean in for a better view. */);
	__LIB_39__::func_517("SCLUB_LEAVHELP" /* GXT: Approach ~a~ to ask him to leave. */, __LIB_39__::func_507(2));
	__LIB_39__::func_517("SCLUB_LEAVHELP" /* GXT: Approach ~a~ to ask him to leave. */, __LIB_39__::func_507(0));
	__LIB_39__::func_517("SCLUB_LEAVHELP" /* GXT: Approach ~a~ to ask him to leave. */, __LIB_39__::func_507(1));
	__LIB_39__::func_517("SCLUB_LEAVHELP" /* GXT: Approach ~a~ to ask him to leave. */, __LIB_39__::func_507(19));
	__LIB_39__::func_517("SCLUB_LEAVHELP" /* GXT: Approach ~a~ to ask him to leave. */, __LIB_39__::func_507(14));
}

void func_687(bool bParam0)//Position - 0x862AF
{
	if (bParam0)
	{
		__LIB_1__::func_330(&uLocal_159, 8192);
	}
	else
	{
		__LIB_2__::func_712(&uLocal_159, 8192);
	}
}

bool func_688()//Position - 0x864A9
{
	return (__LIB_39__::func_498() && iLocal_190 == -1);
}

void func_689(bool bParam0)//Position - 0x86522
{
	if (bParam0)
	{
		__LIB_1__::func_330(&uLocal_159, 256);
	}
	else
	{
		__LIB_2__::func_712(&uLocal_159, 256);
	}
}

void func_690(bool bParam0)//Position - 0x86795
{
	if (bParam0)
	{
		__LIB_1__::func_330(&uLocal_159, 16);
	}
	else
	{
		__LIB_2__::func_712(&uLocal_159, 16);
	}
}

void func_691(var uParam0)//Position - 0x86A50
{
	__LIB_39__::func_134(uParam0, __LIB_39__::func_487(0, 0));
	__LIB_39__::func_134(uParam0, __LIB_39__::func_487(1, 0));
}

void func_692(bool bParam0)//Position - 0x87C04
{
	if (bParam0)
	{
		__LIB_1__::func_330(&uLocal_159, 8);
	}
	else
	{
		__LIB_2__::func_712(&uLocal_159, 8);
	}
}

void func_693(bool bParam0)//Position - 0x88038
{
	if (bParam0)
	{
		__LIB_1__::func_330(&uLocal_159, 64);
	}
	else
	{
		__LIB_2__::func_712(&uLocal_159, 64);
	}
}

void func_694(bool bParam0)//Position - 0x88237
{
	if (bParam0)
	{
		__LIB_1__::func_330(&uLocal_159, 32);
	}
	else
	{
		__LIB_2__::func_712(&uLocal_159, 32);
	}
}

int func_695(int iParam0)//Position - 0xA7DC
{
	if (__LIB_4__::func_962(PLAYER::PLAYER_PED_ID()) && __LIB_39__::func_514() > 3)
	{
		CAM::SHAKE_SCRIPT_GLOBAL("DRUNK_SHAKE", 1f);
		CAM::SHAKE_CAM(iParam0, "DRUNK_SHAKE", 1f);
		return 1;
	}
	else
	{
		if (CAM::IS_SCRIPT_GLOBAL_SHAKING())
		{
			CAM::STOP_SCRIPT_GLOBAL_SHAKING(false);
		}
		if (CAM::IS_CAM_SHAKING(iParam0))
		{
			CAM::STOP_CAM_SHAKING(iParam0, false);
		}
	}
	return 0;
}

void func_696(char* sParam0)//Position - 0x79D01
{
	struct<6> Var0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 10)
	{
		MemCopy(&Var0, {__LIB_39__::func_508(iVar1)}, 6);
		__LIB_39__::func_517(sParam0, Var0);
		iVar1++;
	}
}

void func_697(int iParam0)//Position - 0x76069
{
	if (iParam0 != 0)
	{
		if (!__LIB_0__::func_703(uLocal_159, 1073741824))
		{
			__LIB_2__::func_820(0, 31, 5);
			__LIB_1__::func_330(&uLocal_159, 1073741824);
		}
	}
}

int func_698(int iParam0)//Position - 0x292F
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(iParam0))
		{
			case joaat("LAYOUT_LOW"):
			case joaat("LAYOUT_LOW_ENTITYXF"):
			case joaat("LAYOUT_LOW_CHEETAH"):
			case joaat("LAYOUT_LOW_INFERNUS"):
			case joaat("LAYOUT_LOW_RESTRICTED"):
			case joaat("LAYOUT_LOW_SENTINEL2"):
			case joaat("LAYOUT_LOW_FURORE"):
			case joaat("LAYOUT_LOW_OSIRIS"):
			case joaat("LAYOUT_LOW_FELTZER3"):
			case joaat("LAYOUT_LOW_LOWRIDER"):
			case joaat("LAYOUT_LOW_LOWRIDER_FACTION"):
			case joaat("LAYOUT_LOW_VERLIERER"):
			case joaat("LAYOUT_LOW_LOWRIDER2"):
			case joaat("LAYOUT_LOW_LOWRIDER2_FACTION3"):
			case joaat("LAYOUT_LOW_LE7B"):
			case joaat("LAYOUT_LOW_RUINER2"):
			case joaat("LAYOUT_LOW_INFERNUS2"):
			case joaat("LAYOUT_LOW_SC1"):
			case joaat("LAYOUT_LOW_MICHELLI"):
			case joaat("LAYOUT_LOW_TEZERACT"):
			case joaat("LAYOUT_LOW_DOMINATOR3"):
			case joaat("LAYOUT_LOW_TAIPAN"):
			case joaat("LAYOUT_LOW_ITALIGTO"):
			case joaat("LAYOUT_LOW_RESTRICTED_SCHLAGEN"):
			case joaat("LAYOUT_LOW_RESTRICTED_GAUNTLET3"):
			case joaat("LAYOUT_LOW_PEYOTE2"):
			case joaat("LAYOUT_LOW_NEO"):
			case joaat("LAYOUT_LOW_PEYOTE3"):
			case joaat("LAYOUT_LOW_CALICO"):
			case joaat("LAYOUT_LOW_RESTRICTED_DOMINATOR8"):
			case joaat("LAYOUT_LOW_RESTRICTED_EUROS"):
			case joaat("LAYOUT_LOW_RESTRICTED_RT3000"):
			case joaat("LAYOUT_LOW_ZR350"):
			case joaat("LAYOUT_LOW_IGNUS"):
			case joaat("LAYOUT_LOW_ZENO"):
			case joaat("LAYOUT_LOW_RESTRICTED_POSTLUDE"):
			case joaat("LAYOUT_LOW_RESTRICTED_TENF2"):
			case joaat("LAYOUT_LOW_CORSITA"):
				return 1;
				break;
			}
	}
	return 0;
}

char* func_699()//Position - 0x2B01
{
	return "mini@prostitutes@sexnorm_veh_first_person";
}

char* func_700()//Position - 0x2B19
{
	return "mini@prostitutes@sexlow_veh_first_person";
}

char* func_701()//Position - 0x2B25
{
	return "mini@prostitutes@sexlow_veh";
}

int func_702(int iParam0)//Position - 0x38D1
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		case 1:
			return 8;
			break;
		case 2:
			return 9;
			break;
	}
	return -1;
}

int func_703(int iParam0)//Position - 0x390B
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		case 1:
			return 1;
			break;
		case 4:
			return 2;
			break;
		case 5:
			return 3;
			break;
		case 8:
			return 4;
			break;
		case 9:
			return 5;
			break;
	}
	return -1;
}

int func_704(int iParam0)//Position - 0x7421
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
		{
			iVar0 = 0;
			while (iVar0 < 49)
			{
				iVar1 = iVar0;
				if (((((iVar1 != 17 && iVar1 != 18) && iVar1 != 19) && iVar1 != 20) && iVar1 != 21) && iVar1 != 22)
				{
					if (VEHICLE::GET_VEHICLE_MOD(iParam0, iVar1) != -1)
					{
						StringCopy(&cVar3, VEHICLE::GET_MOD_TEXT_LABEL(iParam0, iVar1, VEHICLE::GET_VEHICLE_MOD(iParam0, iVar1)), 16);
						iVar2 = MISC::GET_HASH_KEY(&cVar3);
						if (iVar2 != 0)
						{
							if (iVar2 == MISC::GET_HASH_KEY("SABRE_CAG" /* GXT: Stunt Cage */))
							{
								return 0;
							}
						}
					}
				}
				iVar0++;
			}
		}
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case joaat("peyote2"):
				if ((!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 2) && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 3)) && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 4))
				{
					return 0;
				}
				break;
			case joaat("peyote3"):
				if (((!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 2) && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 3)) && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 4)) && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 1))
				{
					return 0;
				}
				break;
			case joaat("coquette4"):
				if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 1))
				{
					return 0;
				}
				break;
			case joaat("zorrusso"):
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 10) == -1)
				{
					return 0;
				}
				break;
			case joaat("manana2"):
				if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 1))
				{
					return 0;
				}
				break;
			case joaat("rt3000"):
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 10) == -1 || VEHICLE::GET_VEHICLE_MOD(iParam0, 10) == 3)
				{
					return 0;
				}
				break;
		}
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(iParam0))
		{
			case joaat("LAYOUT_LOW"):
			case joaat("LAYOUT_LOW_CHEETAH"):
			case joaat("LAYOUT_LOW_INFERNUS"):
			case joaat("LAYOUT_LOW_RESTRICTED"):
			case joaat("LAYOUT_LOW_SENTINEL2"):
			case joaat("LAYOUT_STANDARD"):
			case joaat("LAYOUT_STD_EXITFIXUP"):
			case joaat("LAYOUT_STD_HABANERO"):
			case joaat("LAYOUT_STD_STRETCH"):
			case joaat("LAYOUT_STD_HIGHWINDOW"):
			case joaat("LAYOUT_RANGER"):
			case joaat("LAYOUT_RANGER_SWAT"):
			case joaat("LAYOUT_4X4"):
			case joaat("LAYOUT_BISON"):
			case joaat("LAYOUT_VAN_BODHI"):
			case joaat("LAYOUT_STD_LOWROOF"):
			case joaat("LAYOUT_STD_STRATUM"):
			case joaat("LAYOUT_VAN_ROOSEVELT"):
			case joaat("LAYOUT_STD_HUNTLEY"):
			case joaat("LAYOUT_STD_WARRENER"):
			case joaat("LAYOUT_LOW_BLADE"):
			case joaat("LAYOUT_LOW_FURORE"):
			case joaat("LAYOUT_STD_KURUMA"):
			case joaat("LAYOUT_STD_BLISTA2"):
			case joaat("LAYOUT_STD_CHINO"):
			case joaat("LAYOUT_LOW_OSIRIS"):
			case joaat("LAYOUT_LOW_FELTZER3"):
			case joaat("LAYOUT_LOW_LOWRIDER"):
			case joaat("LAYOUT_LOW_LOWRIDER_FACTION"):
			case joaat("LAYOUT_STD_LOWRIDER"):
			case joaat("LAYOUT_STD_LOWRIDER_CHINO"):
			case joaat("LAYOUT_STD_LOWRIDER_SIDEDOOR"):
			case joaat("LAYOUT_LOW_VERLIERER"):
			case joaat("LAYOUT_STD_BALLER4"):
			case joaat("LAYOUT_LOW_LOWRIDER2"):
			case joaat("LAYOUT_LOW_LOWRIDER2_FACTION3"):
			case joaat("LAYOUT_STD_LOWRIDER2"):
			case joaat("LAYOUT_STD_LOWRIDER2_SIDEDOOR"):
			case joaat("LAYOUT_STD_LOWRIDER2_SLAMVAN"):
			case joaat("LAYOUT_STD_WINDSOR2"):
			case joaat("LAYOUT_STD_XLS"):
			case joaat("LAYOUT_LOW_LE7B"):
			case joaat("LAYOUT_STD_OMNIS"):
			case joaat("LAYOUT_LOW_RUINER2"):
			case joaat("LAYOUT_LOW_INFERNUS2"):
			case joaat("LAYOUT_LOW_TORERO"):
			case joaat("LAYOUT_LOW_SC1"):
			case joaat("LAYOUT_STD_NEON"):
			case joaat("LAYOUT_LOW_MICHELLI"):
			case joaat("LAYOUT_LOW_TEZERACT"):
			case joaat("LAYOUT_LOW_DOMINATOR3"):
			case joaat("LAYOUT_LOW_TAIPAN"):
			case joaat("LAYOUT_LOW_ITALIGTO"):
			case joaat("LAYOUT_LOW_RESTRICTED_SCHLAGEN"):
			case joaat("LAYOUT_RANGER_TOROS"):
			case joaat("LAYOUT_STD_DEVIANT"):
			case joaat("LAYOUT_STD_DRAFTER"):
			case joaat("LAYOUT_STD_DYNASTY"):
			case joaat("LAYOUT_STD_PARAGON"):
			case joaat("LAYOUT_STD_ZION3"):
			case joaat("LAYOUT_LOW_RESTRICTED_GAUNTLET3"):
			case joaat("LAYOUT_LOW_PEYOTE2"):
			case joaat("LAYOUT_LOW_NEO"):
			case joaat("LAYOUT_RANGER_NOVAK"):
			case joaat("LAYOUT_RANGER_EVERON"):
			case joaat("LAYOUT_LOW_PEYOTE3"):
			case joaat("LAYOUT_RANGER_SEMINOLE2"):
			case joaat("LAYOUT_LOW_CALICO"):
			case joaat("LAYOUT_STD_CYPHER"):
			case joaat("LAYOUT_LOW_RESTRICTED_DOMINATOR8"):
			case joaat("LAYOUT_LOW_RESTRICTED_EUROS"):
			case joaat("LAYOUT_LOW_RESTRICTED_RT3000"):
			case joaat("LAYOUT_STANDARD_SULTAN3"):
			case joaat("LAYOUT_STD_WARRENER2"):
			case joaat("LAYOUT_LOW_ZR350"):
			case joaat("LAYOUT_LOW_IGNUS"):
			case joaat("LAYOUT_STANDARD_BUFFALO4"):
			case joaat("LAYOUT_STD_ASTRON"):
			case joaat("LAYOUT_STD_CINQUEMILA"):
			case joaat("LAYOUT_STD_DEITY"):
			case joaat("LAYOUT_STD_GRANGER2"):
			case joaat("LAYOUT_STD_I-WAGEN"):
			case joaat("LAYOUT_LOW_ZENO"):
			case joaat("LAYOUT_STD_S95"):
			case joaat("LAYOUT_LOW_RESTRICTED_POSTLUDE"):
			case joaat("LAYOUT_LOW_RESTRICTED_TENF2"):
			case joaat("LAYOUT_LOW_CORSITA"):
			case joaat("LAYOUT_STD_RHINEHART"):
			case joaat("LAYOUT_STANDARD_SENTINEL4"):
			case joaat("LAYOUT_LOW_TORERO2"):
			case joaat("LAYOUT_STD_GREENWOOD"):
				return 1;
				break;
		}
		if (VEHICLE::GET_VEHICLE_LAYOUT_HASH(iParam0) == joaat("LAYOUT_STD_RIPLEY") && ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("slamvan"))
		{
			return 1;
		}
		if ((VEHICLE::GET_VEHICLE_LAYOUT_HASH(iParam0) == joaat("LAYOUT_STD_ISSI3") && ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("weevil")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("brioso2"))
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_LAYOUT_HASH(iParam0) == joaat("LAYOUT_STD_ISSI3") && ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("brioso3"))
		{
			return 1;
		}
	}
	return 0;
}

char* func_705(int iParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x22D5
{
	char* sVar0;
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = __LIB_38__::func_569(18);
					}
					else
					{
						sVar0 = __LIB_38__::func_569(23);
					}
				}
				else if (bParam1)
				{
					sVar0 = __LIB_38__::func_569(8);
				}
				else
				{
					sVar0 = __LIB_38__::func_569(13);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = __LIB_38__::func_568(18);
				}
				else
				{
					sVar0 = __LIB_38__::func_568(23);
				}
			}
			else if (bParam1)
			{
				sVar0 = __LIB_38__::func_568(8);
			}
			else
			{
				sVar0 = __LIB_38__::func_568(13);
			}
			break;
		case 1:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = __LIB_38__::func_569(19);
					}
					else
					{
						sVar0 = __LIB_38__::func_569(24);
					}
				}
				else if (bParam1)
				{
					sVar0 = __LIB_38__::func_569(9);
				}
				else
				{
					sVar0 = __LIB_38__::func_569(14);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = __LIB_38__::func_568(19);
				}
				else
				{
					sVar0 = __LIB_38__::func_568(24);
				}
			}
			else if (bParam1)
			{
				sVar0 = __LIB_38__::func_568(9);
			}
			else
			{
				sVar0 = __LIB_38__::func_568(14);
			}
			break;
		case 2:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = __LIB_38__::func_569(20);
					}
					else
					{
						sVar0 = __LIB_38__::func_569(25);
					}
				}
				else if (bParam1)
				{
					sVar0 = __LIB_38__::func_569(10);
				}
				else
				{
					sVar0 = __LIB_38__::func_569(15);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = __LIB_38__::func_568(20);
				}
				else
				{
					sVar0 = __LIB_38__::func_568(25);
				}
			}
			else if (bParam1)
			{
				sVar0 = __LIB_38__::func_568(10);
			}
			else
			{
				sVar0 = __LIB_38__::func_568(15);
			}
			break;
		case 3:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = __LIB_38__::func_569(21);
					}
					else
					{
						sVar0 = __LIB_38__::func_569(26);
					}
				}
				else if (bParam1)
				{
					sVar0 = __LIB_38__::func_569(11);
				}
				else
				{
					sVar0 = __LIB_38__::func_569(16);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = __LIB_38__::func_568(21);
				}
				else
				{
					sVar0 = __LIB_38__::func_568(26);
				}
			}
			else if (bParam1)
			{
				sVar0 = __LIB_38__::func_568(11);
			}
			else
			{
				sVar0 = __LIB_38__::func_568(16);
			}
			break;
		case 4:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = __LIB_38__::func_569(22);
					}
					else
					{
						sVar0 = __LIB_38__::func_569(27);
					}
				}
				else if (bParam1)
				{
					sVar0 = __LIB_38__::func_569(12);
				}
				else
				{
					sVar0 = __LIB_38__::func_569(17);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = __LIB_38__::func_568(22);
				}
				else
				{
					sVar0 = __LIB_38__::func_568(27);
				}
			}
			else if (bParam1)
			{
				sVar0 = __LIB_38__::func_568(12);
			}
			else
			{
				sVar0 = __LIB_38__::func_568(17);
			}
			break;
		case 5:
			if (bParam3)
			{
				if (bParam1)
				{
					sVar0 = __LIB_38__::func_569(3);
				}
				else
				{
					sVar0 = __LIB_38__::func_569(2);
				}
			}
			else if (bParam1)
			{
				sVar0 = __LIB_38__::func_568(3);
			}
			else
			{
				sVar0 = __LIB_38__::func_568(2);
			}
			break;
		case 6:
			break;
	}
	return sVar0;
}

int func_706()//Position - 0x4EA6
{
	var uVar0;
	__LIB_17__::func_875(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	__LIB_17__::func_874(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	__LIB_17__::func_873(&uVar0, CLOCK::GET_CLOCK_HOURS());
	__LIB_3__::func_425(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	__LIB_0__::func_141(&uVar0, CLOCK::GET_CLOCK_MONTH());
	__LIB_0__::func_140(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

int func_707(int iParam0, bool bParam1)//Position - 0x786D
{
	if ((((VEHICLE::IS_THIS_MODEL_A_BOAT(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0)) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam0)) || VEHICLE::IS_THIS_MODEL_A_TRAIN(iParam0)) || VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0))
	{
		return 0;
	}
	if (__LIB_12__::func_390(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (((((((iParam0 == joaat("police") || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("police4")) || iParam0 == joaat("fbi")) || iParam0 == joaat("fbi2")) || iParam0 == joaat("caddy")) || iParam0 == joaat("caddy2"))
		{
			return 0;
		}
	}
	if ((((((((((((((((((iParam0 == joaat("issi2") || iParam0 == joaat("hotknife")) || iParam0 == joaat("jb700")) || iParam0 == joaat("jester")) || iParam0 == joaat("jester2")) || iParam0 == joaat("stromberg")) || iParam0 == joaat("barrage")) || iParam0 == joaat("kamacho")) || iParam0 == joaat("gb200")) || iParam0 == joaat("fagaloa")) || iParam0 == joaat("tezeract")) || iParam0 == joaat("swinger")) || iParam0 == joaat("imperator")) || iParam0 == joaat("locust")) || iParam0 == joaat("schlagen")) || iParam0 == joaat("outlaw")) || iParam0 == joaat("comet7")) || iParam0 == joaat("youga4")) || iParam0 == joaat("sm722"))
	{
		return 0;
	}
	return 1;
}

void func_708(int iParam0, int iParam1, bool bParam2)//Position - 0xA08A
{
	bool bVar0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(iParam0);
		bVar0 = false;
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_F_StripperLite"))
		{
			bVar0 = true;
		}
		switch (iParam1)
		{
			case 0:
				if (bVar0)
				{
					__LIB_39__::func_484(iParam0, 1, 0);
					__LIB_39__::func_483(iParam0, 1, 0);
					__LIB_39__::func_482(iParam0, 1, 0);
					__LIB_39__::func_481(iParam0, 1, 0);
					__LIB_39__::func_657(iParam0, 1, -1, -1);
				}
				else
				{
					__LIB_39__::func_484(iParam0, 1, 1);
					__LIB_39__::func_483(iParam0, 2, 0);
					__LIB_39__::func_482(iParam0, 0, 0);
					__LIB_39__::func_481(iParam0, 0, 0);
					__LIB_39__::func_480(iParam0, 1, 0);
					__LIB_39__::func_479(iParam0, 0, 0);
					__LIB_39__::func_657(iParam0, bParam2, -1, -1);
				}
				break;
			case 1:
				if (bVar0)
				{
					__LIB_39__::func_484(iParam0, 0, 0);
					__LIB_39__::func_483(iParam0, 0, 0);
					__LIB_39__::func_482(iParam0, 0, 0);
					__LIB_39__::func_481(iParam0, 0, 0);
					__LIB_39__::func_480(iParam0, 0, 0);
					__LIB_39__::func_657(iParam0, bParam2, -1, -1);
				}
				else
				{
					__LIB_39__::func_484(iParam0, 0, 0);
					__LIB_39__::func_483(iParam0, 0, 0);
					__LIB_39__::func_482(iParam0, 0, 0);
					__LIB_39__::func_481(iParam0, 0, 0);
					__LIB_39__::func_478(iParam0, 4, 0);
					__LIB_39__::func_480(iParam0, 0, 0);
					__LIB_39__::func_657(iParam0, bParam2, 0, 4);
				}
				break;
			case 2:
				if (bVar0)
				{
					__LIB_39__::func_484(iParam0, 1, 0);
					__LIB_39__::func_483(iParam0, 1, 1);
					__LIB_39__::func_482(iParam0, 1, 0);
					__LIB_39__::func_481(iParam0, 1, 0);
					__LIB_39__::func_657(iParam0, 1, -1, -1);
				}
				else
				{
					__LIB_39__::func_484(iParam0, 0, 1);
					__LIB_39__::func_483(iParam0, 1, 1);
					__LIB_39__::func_482(iParam0, 1, 0);
					__LIB_39__::func_481(iParam0, 1, 1);
					__LIB_39__::func_480(iParam0, 1, 0);
					__LIB_39__::func_479(iParam0, 1, 0);
					__LIB_39__::func_657(iParam0, bParam2, -1, -1);
				}
				break;
			case 3:
				if (bVar0)
				{
					__LIB_39__::func_484(iParam0, 0, 0);
					__LIB_39__::func_483(iParam0, 0, 1);
					__LIB_39__::func_482(iParam0, 0, 1);
					__LIB_39__::func_481(iParam0, 0, 1);
					__LIB_39__::func_480(iParam0, 0, 0);
					__LIB_39__::func_657(iParam0, bParam2, -1, -1);
				}
				else
				{
					__LIB_39__::func_484(iParam0, 0, 0);
					__LIB_39__::func_483(iParam0, 2, 0);
					__LIB_39__::func_482(iParam0, 0, 2);
					__LIB_39__::func_481(iParam0, 1, 1);
					__LIB_39__::func_478(iParam0, 0, 0);
					__LIB_39__::func_480(iParam0, 0, 0);
					__LIB_39__::func_657(iParam0, bParam2, 2, 0);
				}
				break;
			case 4:
				if (bVar0)
				{
					__LIB_39__::func_484(iParam0, 1, 0);
					__LIB_39__::func_483(iParam0, 1, 0);
					__LIB_39__::func_482(iParam0, 1, 0);
					__LIB_39__::func_481(iParam0, 1, 0);
					__LIB_39__::func_657(iParam0, 1, -1, -1);
				}
				else
				{
					__LIB_39__::func_484(iParam0, 1, 0);
					__LIB_39__::func_483(iParam0, 2, 1);
					__LIB_39__::func_482(iParam0, 1, 2);
					__LIB_39__::func_481(iParam0, 0, 2);
					__LIB_39__::func_480(iParam0, 1, 0);
					__LIB_39__::func_479(iParam0, 1, 2);
					__LIB_39__::func_657(iParam0, bParam2, -1, -1);
				}
				break;
			case 5:
				if (bVar0)
				{
					__LIB_39__::func_484(iParam0, 0, 0);
					__LIB_39__::func_483(iParam0, 0, 0);
					__LIB_39__::func_482(iParam0, 0, 0);
					__LIB_39__::func_481(iParam0, 0, 0);
					__LIB_39__::func_480(iParam0, 0, 0);
					__LIB_39__::func_657(iParam0, bParam2, -1, -1);
				}
				else
				{
					__LIB_39__::func_484(iParam0, 1, 1);
					__LIB_39__::func_483(iParam0, 1, 0);
					__LIB_39__::func_482(iParam0, 0, 1);
					__LIB_39__::func_481(iParam0, 0, 2);
					__LIB_39__::func_478(iParam0, 2, 0);
					__LIB_39__::func_480(iParam0, 0, 0);
					__LIB_39__::func_657(iParam0, bParam2, 1, 2);
				}
				break;
			case 6:
				if (bVar0)
				{
					__LIB_39__::func_484(iParam0, 1, 0);
					__LIB_39__::func_483(iParam0, 1, 0);
					__LIB_39__::func_482(iParam0, 1, 0);
					__LIB_39__::func_481(iParam0, 1, 0);
					__LIB_39__::func_657(iParam0, 1, -1, -1);
				}
				else
				{
					__LIB_39__::func_484(iParam0, 0, 0);
					__LIB_39__::func_483(iParam0, 1, 0);
					__LIB_39__::func_482(iParam0, 0, 1);
					__LIB_39__::func_481(iParam0, 0, 1);
					__LIB_39__::func_480(iParam0, 1, 0);
					__LIB_39__::func_479(iParam0, 0, 1);
					__LIB_39__::func_657(iParam0, bParam2, 0, 1);
				}
				break;
			case 7:
				if (bVar0)
				{
					__LIB_39__::func_484(iParam0, 0, 0);
					__LIB_39__::func_483(iParam0, 0, 1);
					__LIB_39__::func_482(iParam0, 0, 0);
					__LIB_39__::func_481(iParam0, 0, 0);
					__LIB_39__::func_480(iParam0, 0, 0);
					__LIB_39__::func_657(iParam0, bParam2, -1, -1);
				}
				else
				{
					__LIB_39__::func_484(iParam0, 1, 0);
					__LIB_39__::func_483(iParam0, 0, 2);
					__LIB_39__::func_482(iParam0, 1, 1);
					__LIB_39__::func_481(iParam0, 0, 1);
					__LIB_39__::func_478(iParam0, 0, 0);
					__LIB_39__::func_480(iParam0, 1, 0);
					__LIB_39__::func_657(iParam0, bParam2, 0, 0);
				}
				break;
			case 8:
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, 2, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, 0, 1, 0);
				break;
			case 9:
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 0, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 2, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, 0);
				break;
			}
	}
}

void func_709(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x4ACB
{
	__LIB_17__::func_875(uParam0, iParam1);
	__LIB_17__::func_874(uParam0, iParam2);
	__LIB_17__::func_873(uParam0, iParam3);
	__LIB_0__::func_141(uParam0, iParam5);
	__LIB_3__::func_425(uParam0, iParam4);
	__LIB_0__::func_140(uParam0, iParam6);
}

void func_710(int iParam0, int iParam1)//Position - 0x4033
{
	Global_113386.f_243[__LIB_39__::func_68() /*53*/].f_2[iParam0 /*5*/].f_1 = iParam1;
}

void func_711(var uParam0)//Position - 0x42A2
{
	if (*uParam0 != 0)
	{
		GRAPHICS::DELETE_CHECKPOINT(*uParam0);
		*uParam0 = 0;
	}
}

bool func_712()//Position - 0xAC9A
{
	return PAD::IS_CONTROL_JUST_RELEASED(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/);
}

void func_713(var uParam0)//Position - 0xDF83
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_9, false))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_8, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uParam0->f_9))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(uParam0->f_9);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_8, true);
		}
	}
	uParam0->f_11 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_9, false))
	{
		if (!VEHICLE::IS_THIS_MODEL_A_BIKE(uParam0->f_22))
		{
			VEHICLE::SET_VEHICLE_ENGINE_ON(uParam0->f_9, true, true, false);
		}
	}
}

void func_714(var uParam0)//Position - 0xDFFA
{
	uParam0->f_12 = uParam0->f_12;
}

int func_715(int iParam0, int iParam1)//Position - 0xE35E
{
	switch (iParam0)
	{
		case 0:
			return 6;
			break;
		case 1:
			return 10;
			break;
		case 2:
			return 37;
			break;
		case 3:
			if (iParam1 == 2)
			{
				return 38;
			}
			else if (iParam1 == 3)
			{
				return 39;
			}
			else if (iParam1 == 1)
			{
				return 40;
			}
			break;
		case 4:
			return 16;
			break;
		case 5:
			return 27;
			break;
		case 6:
			return 32;
			break;
		case 7:
			return 22;
			break;
		case 8:
			return 26;
			break;
		case 9:
			return 31;
			break;
		case 10:
			return 36;
			break;
	}
	return 6;
}

bool func_716(var uParam0)//Position - 0xE9AF
{
	if (uParam0->f_21 == 0)
	{
		return 0;
	}
	return STREAMING::HAS_MODEL_LOADED(uParam0->f_21);
}

void func_717(var uParam0)//Position - 0xEA2D
{
	if (uParam0->f_22 == 0)
	{
		return;
	}
	STREAMING::REQUEST_MODEL(uParam0->f_22);
}

int func_718(int iParam0)//Position - 0xEA73
{
	if (CAM::IS_SCREEN_FADED_IN())
	{
		CAM::DO_SCREEN_FADE_OUT(iParam0);
	}
	else if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 1;
	}
	return 0;
}

void func_719(float fParam0, int iParam1)//Position - 0x1042E
{
	fParam0->f_4 = 255;
	fParam0->f_5 = 255;
	fParam0->f_6 = 255;
	if (iParam1 == 1)
	{
		fParam0->f_7 = 255;
	}
}

void func_720(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x20375
{
	uParam0->f_20 = iParam1;
	uParam0->f_21 = iParam2;
	uParam0->f_22 = iParam3;
}

void func_721(var uParam0, struct<3> Param1, float fParam2)//Position - 0x2038F
{
	uParam0->f_16 = { Param1 };
	uParam0->f_19 = fParam2;
}

void func_722(char* sParam0, char* sParam1)//Position - 0x20914
{
	StringCopy(sParam0, sParam1, 32);
}

void func_723(var uParam0)//Position - 0x20922
{
	uParam0->f_10 = 0;
	uParam0->f_11 = -1;
	uParam0->f_12 = 0;
	uParam0->f_13 = 0f;
	uParam0->f_23 = 13;
}

void func_724(var uParam0)//Position - 0x21883
{
	__LIB_13__::func_808(&(uParam0->f_10));
}

int func_725(int iParam0)//Position - 0x21AFC
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(iParam0);
	}
	else if (CAM::IS_SCREEN_FADED_IN())
	{
		return 1;
	}
	return 0;
}

void func_726(int iParam0, char* sParam1, int iParam2, int iParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)//Position - 0x2A0E
{
	int iVar0;
	int iVar1;
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (__LIB_0__::func_929(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1649593.f_1 = 1;
		__LIB_0__::func_928(7, iVar0);
		Global_1649593.f_4659[iVar0] = iParam0;
		StringCopy(&(Global_1649593.f_4659.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1649593.f_4659.f_172[iVar0] = iParam2;
		Global_1649593.f_4659.f_216[iVar0] = iParam3;
		Global_1649593.f_4659.f_183[iVar0] = uParam4;
		Global_1649593.f_4659.f_194[iVar0] = iParam5;
		Global_1649593.f_4659.f_249[iVar0] = iParam6;
		Global_1649593.f_4659.f_260[iVar0] = iParam7;
		Global_1649593.f_4659.f_205[iVar0] = iParam8;
		Global_1649593.f_4659.f_314[iVar0] = iParam9;
		Global_1649593.f_4659.f_325[iVar0] = iParam10;
		Global_1649593.f_4659.f_357[iVar0] = iParam11;
		Global_1649593.f_4659.f_238[iVar0] = iParam12;
		Global_1649593.f_4659.f_271[iVar0] = iParam13;
		Global_1649593.f_4659.f_368[iVar0] = iParam14;
		Global_1649593.f_4659.f_379[iVar0] = iParam15;
		Global_1649593.f_4659.f_390[iVar0] = iParam16;
		Global_1649593.f_4659.f_227[iVar0] = iParam17;
	}
}

void func_727(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)//Position - 0x2CAA
{
	int iVar0;
	int iVar1;
	if (__LIB_1__::func_76(sParam6))
	{
		sParam6 = "NUMBER";
	}
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (__LIB_0__::func_929(3, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1649593.f_1 = 1;
		__LIB_0__::func_928(3, iVar0);
		Global_1649593.f_2839[iVar0] = iParam0;
		StringCopy(&(Global_1649593.f_2839.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1649593.f_2839.f_183[iVar0] = uParam3;
		Global_1649593.f_2839.f_172[iVar0] = uParam2;
		Global_1649593.f_2839.f_205[iVar0] = iParam4;
		Global_1649593.f_2839.f_216[iVar0] = iParam5;
		StringCopy(&(Global_1649593.f_2839.f_259[iVar0 /*16*/]), sParam6, 64);
		Global_1649593.f_2839.f_420[iVar0] = iParam7;
		Global_1649593.f_2839.f_453[iVar0] = iParam8;
		Global_1649593.f_2839.f_431[iVar0] = iParam9;
		Global_1649593.f_2839.f_442[iVar0] = iParam10;
		Global_1649593.f_2839.f_464[iVar0] = iParam11;
		Global_1649593.f_2839.f_475[iVar0] = iParam12;
		Global_1649593.f_2839.f_486[iVar0] = iParam13;
		Global_1649593.f_2839.f_497[iVar0] = iParam14;
	}
}

int func_728(struct<3> Param0)//Position - 0xABF5
{
	float fVar0;
	fVar0 = ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID());
	if (SYSTEM::VDIST2(Param0, __LIB_0__::func_85(PLAYER::PLAYER_ID())) < (150f + (fVar0 * fVar0)))
	{
		return 1;
	}
	return 0;
}

void func_729(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, bool bParam5)//Position - 0xC1CC
{
	__LIB_38__::func_635(fParam0, fParam3, fParam4);
	__LIB_38__::func_634(fParam0, fParam1, fParam2, bParam5);
}

int func_730(int iParam0, struct<3> Param1, struct<3> Param2, struct<3> Param3)//Position - 0xE429
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	fVar3 = 180f;
	fVar4 = 140f;
	fVar5 = 80f;
	if (iParam0 == 0)
	{
		iVar6 = 6;
		iVar7 = 7;
		iVar8 = 8;
	}
	else if (iParam0 == 2)
	{
		iVar6 = 12;
		iVar7 = 13;
		iVar8 = 14;
	}
	else if (iParam0 == 5)
	{
		iVar6 = 27;
		iVar7 = 28;
		iVar8 = 29;
	}
	else if (iParam0 == 6)
	{
		iVar6 = 32;
		iVar7 = 33;
		iVar8 = 34;
	}
	else if (iParam0 == 7)
	{
		iVar6 = 22;
		iVar7 = 23;
		iVar8 = 24;
	}
	if (!__LIB_0__::func_78(Param1, 0f, 0f, 0f, 0))
	{
		Var0 = { Param1 - Param2 };
		Var1 = { Param3 - Param2 };
		fVar2 = MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var0.f_0, Var0.f_1, Var1.f_0, Var1.f_1);
		if (fVar2 > 180f)
		{
			fVar2 = (360f - fVar2);
		}
		if (fVar2 < fVar5)
		{
			return iVar8;
		}
		else if (fVar2 < fVar4)
		{
			return iVar7;
		}
		else if (fVar2 < fVar3)
		{
			return iVar6;
		}
	}
	return iVar6;
}

void func_731()//Position - 0x845C
{
	iLocal_41 = 0;
	iLocal_42 = 0;
	__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
	__LIB_0__::func_671(1);
}

void func_732(int iParam0, int iParam1)//Position - 0x847A
{
	if (iParam0 == 1)
	{
		__LIB_38__::func_670(0, 0);
		GRAPHICS::ANIMPOSTFX_PLAY("DeathFailOut", 0, false);
		MISC::SET_BIT(&iLocal_41, 1);
		__LIB_38__::func_584(1, 2, 0);
		CAM::SET_CAM_DEATH_FAIL_EFFECT_STATE(2);
	}
	else
	{
		if (BitTest(iLocal_41, 1) || iParam1)
		{
			GRAPHICS::ANIMPOSTFX_STOP("DeathFailOut");
			__LIB_38__::func_584(0, 2, 1);
			CAM::SET_CAM_DEATH_FAIL_EFFECT_STATE(0);
		}
		MISC::CLEAR_BIT(&iLocal_41, 1);
	}
}

void func_733(int iParam0)//Position - 0x521
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
	Global_22893[iParam0 /*9*/].f_2 = iVar0;
	Global_22893[iParam0 /*9*/].f_2.f_1 = iVar1;
	Global_22893[iParam0 /*9*/].f_2.f_2 = iVar2;
	Global_22893[iParam0 /*9*/].f_2.f_3 = iVar3;
	Global_22893[iParam0 /*9*/].f_2.f_4 = uVar4;
	Global_22893[iParam0 /*9*/].f_2.f_5 = iVar5;
}

int func_734()//Position - 0x5A3
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Global_22893[iVar0 /*9*/].f_8 == 0)
		{
			Global_22723 = iVar0;
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	Global_22723 = 3;
	Global_22893[Global_22723 /*9*/].f_2 = -1;
	Global_22893[Global_22723 /*9*/].f_2.f_1 = 0;
	Global_22893[Global_22723 /*9*/].f_2.f_2 = 0;
	Global_22893[Global_22723 /*9*/].f_2.f_3 = 0;
	Global_22893[Global_22723 /*9*/].f_2.f_5 = 99999;
	while (iVar0 < 2)
	{
		if (Global_22893[iVar0 /*9*/].f_8 == 0 || Global_22893[iVar0 /*9*/].f_8 == 1)
		{
			if (!__LIB_2__::func_831(Global_22893[iVar0 /*9*/].f_2, Global_22893[Global_22723 /*9*/].f_2))
			{
				Global_22723 = iVar0;
			}
		}
		iVar0++;
	}
	if (Global_22723 == 3)
	{
		return 0;
	}
	return 1;
}

int func_735(int iParam0, int iParam1)//Position - 0x31018
{
	if (iParam0 == iParam1)
	{
		return 1;
	}
	if (iParam0 == -1 || iParam1 == -1)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
				case 8:
				case 9:
				case 10:
				case 11:
				case 27:
					return 1;
				default:
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
				case 8:
				case 9:
				case 11:
				case 27:
					return 1;
				default:
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 3:
				case 4:
				case 5:
				case 11:
				case 27:
					return 1;
				default:
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 5:
				case 11:
					return 1;
				default:
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 11:
				case 27:
					return 1;
				default:
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
					return 1;
				default:
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 7:
				case 8:
				case 9:
				case 10:
				case 11:
				case 27:
					return 1;
				default:
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 6:
				case 8:
				case 11:
				case 27:
					return 1;
				default:
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 6:
				case 7:
				case 10:
				case 11:
				case 27:
					return 1;
				default:
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 6:
					return 1;
				default:
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
				case 6:
				case 8:
				case 27:
					return 1;
				default:
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
				case 6:
				case 7:
				case 8:
				case 27:
					return 1;
				default:
			}
			break;
		case 12:
			switch (iParam1)
			{
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
				case 27:
					return 1;
				default:
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 12:
				case 14:
				case 15:
				case 16:
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 23:
				case 27:
					return 1;
				default:
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 12:
				case 13:
				case 15:
				case 16:
				case 17:
				case 23:
				case 27:
					return 1;
				default:
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 12:
				case 13:
				case 14:
				case 17:
				case 23:
					return 1;
				default:
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 12:
				case 13:
				case 14:
				case 23:
				case 27:
					return 1;
				default:
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 12:
				case 13:
				case 14:
				case 15:
					return 1;
				default:
			}
			break;
		case 18:
			switch (iParam1)
			{
				case 12:
				case 13:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
				case 23:
				case 27:
					return 1;
				default:
			}
			break;
		case 19:
			switch (iParam1)
			{
				case 12:
				case 13:
				case 18:
				case 19:
				case 20:
				case 23:
				case 27:
					return 1;
				default:
			}
			break;
		case 20:
			switch (iParam1)
			{
				case 12:
				case 13:
				case 18:
				case 19:
				case 20:
				case 22:
				case 23:
				case 27:
					return 1;
				default:
			}
			break;
		case 21:
			switch (iParam1)
			{
				case 12:
				case 13:
				case 18:
				case 21:
					return 1;
				default:
			}
			break;
		case 22:
			switch (iParam1)
			{
				case 12:
				case 18:
				case 20:
				case 22:
				case 27:
					return 1;
				default:
			}
			break;
		case 23:
			switch (iParam1)
			{
				case 12:
				case 13:
				case 14:
				case 15:
				case 16:
				case 18:
				case 19:
				case 20:
				case 23:
				case 27:
					return 1;
				default:
			}
			break;
		case 24:
			switch (iParam1)
			{
				case 24:
					return 1;
				default:
			}
			break;
		case 25:
			switch (iParam1)
			{
				case 25:
					return 1;
				default:
			}
			break;
		case 26:
			switch (iParam1)
			{
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
					return 1;
				default:
			}
			break;
		case 27:
			switch (iParam1)
			{
				case 27:
				case 26:
				case 28:
				case 29:
				case 30:
				case 31:
				case 32:
				case 33:
				case 34:
				case 35:
				case 36:
				case 0:
				case 1:
				case 2:
				case 4:
				case 6:
				case 7:
				case 8:
				case 10:
				case 11:
				case 12:
				case 13:
				case 14:
				case 16:
				case 18:
				case 19:
				case 20:
				case 22:
				case 23:
					return 1;
				default:
			}
			break;
		case 28:
			switch (iParam1)
			{
				case 26:
				case 27:
				case 28:
				case 29:
				case 30:
				case 31:
				case 32:
					return 1;
				default:
			}
			break;
		case 29:
			switch (iParam1)
			{
				case 26:
				case 27:
				case 28:
				case 29:
					return 1;
				default:
			}
			break;
		case 30:
			switch (iParam1)
			{
				case 26:
				case 27:
				case 28:
				case 30:
				case 31:
				case 32:
					return 1;
				default:
			}
			break;
		case 31:
			switch (iParam1)
			{
				case 26:
				case 27:
				case 28:
				case 30:
				case 31:
					return 1;
				default:
			}
			break;
		case 32:
			switch (iParam1)
			{
				case 26:
				case 27:
				case 28:
				case 30:
				case 32:
					return 1;
				default:
			}
			break;
		case 33:
			switch (iParam1)
			{
				case 26:
				case 27:
				case 33:
				case 34:
				case 35:
				case 36:
					return 1;
				default:
			}
			break;
		case 34:
			switch (iParam1)
			{
				case 26:
				case 27:
				case 33:
				case 34:
					return 1;
				default:
			}
			break;
		case 35:
			switch (iParam1)
			{
				case 26:
				case 27:
				case 33:
				case 35:
					return 1;
				default:
			}
			break;
		case 36:
			switch (iParam1)
			{
				case 26:
				case 27:
				case 33:
				case 36:
					return 1;
				default:
			}
			break;
		case 37:
			switch (iParam1)
			{
				case 37:
				case 38:
				case 39:
				case 40:
				case 41:
				case 42:
				case 43:
				case 44:
					return 1;
				default:
			}
			break;
		case 38:
			switch (iParam1)
			{
				case 37:
				case 38:
				case 39:
				case 40:
				case 42:
				case 44:
				case 47:
				case 48:
				case 49:
				case 50:
					return 1;
				default:
			}
			break;
		case 39:
			switch (iParam1)
			{
				case 37:
				case 38:
				case 39:
				case 40:
				case 41:
				case 42:
				case 43:
				case 44:
				case 47:
				case 54:
				case 55:
				case 48:
				case 49:
				case 50:
				case 51:
				case 52:
				case 53:
					return 1;
				default:
			}
			break;
		case 40:
			switch (iParam1)
			{
				case 37:
				case 38:
				case 39:
				case 40:
				case 41:
				case 44:
					return 1;
				default:
			}
			break;
		case 41:
			switch (iParam1)
			{
				case 39:
				case 37:
				case 40:
				case 41:
					return 1;
				default:
			}
			break;
		case 42:
			switch (iParam1)
			{
				case 37:
				case 38:
				case 39:
				case 42:
				case 43:
				case 44:
					return 1;
				default:
			}
			break;
		case 43:
			switch (iParam1)
			{
				case 39:
				case 37:
				case 42:
				case 43:
					return 1;
				default:
			}
			break;
		case 44:
			switch (iParam1)
			{
				case 37:
				case 38:
				case 39:
				case 40:
				case 42:
				case 44:
					return 1;
				default:
			}
			break;
		case 45:
			switch (iParam1)
			{
				case 45:
					return 1;
				default:
			}
			break;
		case 46:
			switch (iParam1)
			{
				case 46:
					return 1;
				default:
			}
			break;
		case 47:
			switch (iParam1)
			{
				case 38:
				case 39:
				case 47:
				case 48:
				case 49:
				case 50:
				case 51:
				case 52:
				case 53:
				case 54:
				case 55:
					return 1;
				default:
			}
			break;
		case 48:
			switch (iParam1)
			{
				case 38:
				case 39:
				case 47:
				case 48:
				case 49:
				case 50:
				case 54:
				case 55:
					return 1;
				default:
			}
			break;
		case 49:
			switch (iParam1)
			{
				case 38:
				case 39:
				case 47:
				case 48:
				case 49:
				case 54:
					return 1;
				default:
			}
			break;
		case 50:
			switch (iParam1)
			{
				case 38:
				case 39:
				case 47:
				case 48:
				case 50:
				case 55:
					return 1;
				default:
			}
			break;
		case 51:
			switch (iParam1)
			{
				case 39:
				case 47:
				case 51:
				case 52:
				case 53:
				case 54:
				case 55:
					return 1;
				default:
			}
			break;
		case 52:
			switch (iParam1)
			{
				case 39:
				case 47:
				case 51:
				case 52:
				case 54:
					return 1;
				default:
			}
			break;
		case 53:
			switch (iParam1)
			{
				case 39:
				case 47:
				case 51:
				case 53:
				case 55:
					return 1;
				default:
			}
			break;
		case 54:
			switch (iParam1)
			{
				case 39:
				case 47:
				case 51:
				case 52:
				case 48:
				case 49:
					return 1;
				default:
			}
			break;
		case 55:
			switch (iParam1)
			{
				case 39:
				case 47:
				case 51:
				case 53:
				case 48:
				case 50:
					return 1;
				default:
			}
			break;
		case 56:
			switch (iParam1)
			{
				case 56:
					return 1;
				default:
			}
			break;
		case 57:
			switch (iParam1)
			{
				case 57:
					return 1;
				default:
			}
			break;
		case 58:
			switch (iParam1)
			{
				case 58:
					return 1;
				default:
			}
			break;
		case 59:
			switch (iParam1)
			{
				case 59:
				case 61:
				case 63:
					return 1;
				default:
			}
			break;
		case 60:
			switch (iParam1)
			{
				case 60:
					return 1;
				default:
			}
			break;
		case 61:
			switch (iParam1)
			{
				case 59:
				case 61:
				case 62:
					return 1;
				default:
			}
			break;
		case 62:
			switch (iParam1)
			{
				case 61:
				case 62:
					return 1;
				default:
			}
			break;
		case 63:
			switch (iParam1)
			{
				case 59:
				case 63:
				case 64:
					return 1;
				default:
			}
			break;
		case 64:
			switch (iParam1)
			{
				case 63:
				case 64:
					return 1;
				default:
			}
			break;
		case 65:
			switch (iParam1)
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
					return 1;
				default:
			}
			break;
		case 66:
			switch (iParam1)
			{
				case 65:
				case 66:
				case 68:
				case 69:
				case 71:
				case 72:
				case 73:
				case 74:
				case 76:
				case 77:
				case 78:
				case 79:
					return 1;
				default:
			}
			break;
		case 67:
			switch (iParam1)
			{
				case 65:
				case 67:
				case 68:
				case 70:
				case 71:
				case 72:
				case 73:
				case 75:
				case 76:
				case 77:
				case 79:
				case 80:
					return 1;
				default:
			}
			break;
		case 68:
			switch (iParam1)
			{
				case 65:
				case 66:
				case 67:
				case 68:
				case 69:
				case 70:
				case 71:
				case 72:
				case 78:
					return 1;
				default:
			}
			break;
		case 69:
			switch (iParam1)
			{
				case 65:
				case 66:
				case 68:
				case 69:
				case 71:
				case 72:
				case 78:
					return 1;
				default:
			}
			break;
		case 70:
			switch (iParam1)
			{
				case 65:
				case 67:
				case 68:
				case 70:
				case 71:
				case 72:
					return 1;
				default:
			}
			break;
		case 71:
			switch (iParam1)
			{
				case 65:
				case 66:
				case 67:
				case 68:
				case 69:
				case 70:
				case 71:
					return 1;
				default:
			}
			break;
		case 72:
			switch (iParam1)
			{
				case 65:
				case 66:
				case 67:
				case 68:
				case 69:
				case 70:
				case 72:
					return 1;
				default:
			}
			break;
		case 73:
			switch (iParam1)
			{
				case 65:
				case 66:
				case 67:
				case 73:
				case 74:
				case 75:
				case 76:
				case 77:
				case 78:
				case 79:
				case 80:
					return 1;
				default:
			}
			break;
		case 74:
			switch (iParam1)
			{
				case 65:
				case 66:
				case 73:
				case 74:
				case 76:
				case 77:
				case 78:
				case 79:
					return 1;
				default:
			}
			break;
		case 75:
			switch (iParam1)
			{
				case 65:
				case 67:
				case 73:
				case 75:
				case 76:
				case 77:
				case 79:
				case 80:
					return 1;
				default:
			}
			break;
		case 76:
			switch (iParam1)
			{
				case 65:
				case 66:
				case 67:
				case 73:
				case 74:
				case 75:
				case 76:
				case 80:
					return 1;
				default:
			}
			break;
		case 77:
			switch (iParam1)
			{
				case 65:
				case 66:
				case 67:
				case 73:
				case 74:
				case 75:
				case 77:
				case 80:
					return 1;
				default:
			}
			break;
		case 78:
			switch (iParam1)
			{
				case 65:
				case 66:
				case 68:
				case 69:
				case 73:
				case 74:
				case 78:
					return 1;
				default:
			}
			break;
		case 79:
			switch (iParam1)
			{
				case 65:
				case 66:
				case 67:
				case 73:
				case 74:
				case 75:
				case 79:
					return 1;
				default:
			}
			break;
		case 80:
			switch (iParam1)
			{
				case 65:
				case 67:
				case 73:
				case 75:
				case 76:
				case 77:
				case 80:
					return 1;
				default:
			}
			break;
		case 81:
			switch (iParam1)
			{
				case 81:
				case 82:
				case 83:
				case 84:
				case 85:
				case 86:
				case 87:
				case 88:
				case 89:
				case 90:
				case 91:
				case 92:
				case 93:
				case 94:
				case 95:
				case 96:
					return 1;
				default:
			}
			break;
		case 82:
			switch (iParam1)
			{
				case 81:
				case 82:
				case 84:
				case 85:
				case 87:
				case 88:
				case 89:
				case 90:
				case 92:
				case 93:
				case 94:
				case 95:
					return 1;
				default:
			}
			break;
		case 83:
			switch (iParam1)
			{
				case 81:
				case 83:
				case 84:
				case 86:
				case 87:
				case 88:
				case 89:
				case 91:
				case 92:
				case 93:
				case 95:
				case 96:
					return 1;
				default:
			}
			break;
		case 84:
			switch (iParam1)
			{
				case 81:
				case 82:
				case 83:
				case 84:
				case 85:
				case 86:
				case 87:
				case 88:
				case 94:
					return 1;
				default:
			}
			break;
		case 85:
			switch (iParam1)
			{
				case 81:
				case 82:
				case 84:
				case 85:
				case 87:
				case 88:
				case 94:
					return 1;
				default:
			}
			break;
		case 86:
			switch (iParam1)
			{
				case 81:
				case 83:
				case 84:
				case 86:
				case 87:
				case 88:
					return 1;
				default:
			}
			break;
		case 87:
			switch (iParam1)
			{
				case 81:
				case 82:
				case 83:
				case 84:
				case 85:
				case 86:
				case 87:
					return 1;
				default:
			}
			break;
		case 88:
			switch (iParam1)
			{
				case 81:
				case 82:
				case 83:
				case 84:
				case 85:
				case 86:
				case 88:
					return 1;
				default:
			}
			break;
		case 89:
			switch (iParam1)
			{
				case 81:
				case 82:
				case 83:
				case 89:
				case 90:
				case 91:
				case 92:
				case 93:
				case 94:
				case 95:
				case 96:
					return 1;
				default:
			}
			break;
		case 90:
			switch (iParam1)
			{
				case 81:
				case 82:
				case 89:
				case 90:
				case 92:
				case 93:
				case 94:
				case 95:
					return 1;
				default:
			}
			break;
		case 91:
			switch (iParam1)
			{
				case 81:
				case 83:
				case 89:
				case 91:
				case 92:
				case 93:
				case 95:
				case 96:
					return 1;
				default:
			}
			break;
		case 92:
			switch (iParam1)
			{
				case 81:
				case 82:
				case 83:
				case 89:
				case 90:
				case 91:
				case 92:
				case 96:
					return 1;
				default:
			}
			break;
		case 93:
			switch (iParam1)
			{
				case 81:
				case 82:
				case 83:
				case 89:
				case 90:
				case 91:
				case 93:
				case 96:
					return 1;
				default:
			}
			break;
		case 94:
			switch (iParam1)
			{
				case 81:
				case 82:
				case 84:
				case 85:
				case 89:
				case 90:
				case 94:
					return 1;
				default:
			}
			break;
		case 95:
			switch (iParam1)
			{
				case 81:
				case 82:
				case 83:
				case 89:
				case 90:
				case 91:
				case 95:
					return 1;
				default:
			}
			break;
		case 96:
			switch (iParam1)
			{
				case 81:
				case 83:
				case 89:
				case 91:
				case 92:
				case 93:
				case 96:
					return 1;
				default:
			}
			break;
		case 97:
			switch (iParam1)
			{
				case 97:
					return 1;
				default:
			}
			break;
		case 98:
			switch (iParam1)
			{
				case 98:
					return 1;
				default:
			}
			break;
		default:
			break;
	}
	return 0;
}

void func_736(bool bParam0)//Position - 0x52AE9
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	char cVar7[64];
	if (bParam0 == 8)
	{
		__LIB_0__::func_186(129, 1, -1);
		return;
	}
	if (bParam0 == 9)
	{
		__LIB_0__::func_186(135, 1, -1);
		return;
	}
	if (bParam0 == 10)
	{
		__LIB_0__::func_186(136, 1, -1);
		return;
	}
	if (bParam0 == 11)
	{
		__LIB_0__::func_186(137, 1, -1);
		return;
	}
	if (bParam0 == 12)
	{
		iVar0 = NETWORK::GET_CLOUD_TIME_AS_INT();
		__LIB_0__::func_413(8272, iVar0 + 2880, -1, 1, 0);
		return;
	}
	if (bParam0 == 13)
	{
		iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
		__LIB_0__::func_413(8273, iVar1 + 2880, -1, 1, 0);
		return;
	}
	if (bParam0 == 14)
	{
		iVar2 = NETWORK::GET_CLOUD_TIME_AS_INT();
		__LIB_0__::func_413(8274, iVar2 + 2880, -1, 1, 0);
		return;
	}
	if (bParam0 == 15)
	{
		iVar3 = NETWORK::GET_CLOUD_TIME_AS_INT();
		__LIB_0__::func_413(8275, iVar3 + 2880, -1, 1, 0);
		return;
	}
	if (bParam0 == 16)
	{
		iVar4 = NETWORK::GET_CLOUD_TIME_AS_INT();
		__LIB_0__::func_413(8276, iVar4 + 2880, -1, 1, 0);
		return;
	}
	if (bParam0 == 17)
	{
		iVar5 = NETWORK::GET_CLOUD_TIME_AS_INT();
		__LIB_0__::func_413(8277, iVar5 + 2880, -1, 1, 0);
		return;
	}
	bVar6 = false;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!BitTest(Global_113386.f_20564.f_471, bParam0))
		{
			bVar6 = true;
			MISC::SET_BIT(&(Global_113386.f_20564.f_471), bParam0);
		}
	}
	else if (!BitTest(Global_113386.f_20564.f_471, bParam0) || !BitTest(Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_10, bParam0))
	{
		bVar6 = true;
		MISC::SET_BIT(&(Global_113386.f_20564.f_471), bParam0);
		MISC::SET_BIT(&(Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_10), bParam0);
	}
	if (bVar6)
	{
		StringCopy(&cVar7, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_STR" /* GXT: You have received a new promotion for ~a~ */);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(__LIB_0__::func_181(bParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar7, &cVar7, true, 0, "", 0);
	}
}

void func_737(bool bParam0)//Position - 0x4A35
{
	Global_1660999 = bParam0;
	__LIB_0__::func_513(139, bParam0, -1, 1);
}

int func_738(int iParam0)//Position - 0x5706B
{
	if (iParam0 != __LIB_0__::func_162())
	{
		if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_465.f_2, 17))
		{
			return 1;
		}
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return __LIB_0__::func_369(9631, -1, 0) != 0;
		}
	}
	return 0;
}

int func_739()//Position - 0x570F9
{
	return __LIB_0__::func_369(9834, -1, 0);
}

void func_740(int iParam0, bool bParam1)//Position - 0x2EC0F
{
	if (bParam1)
	{
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
		if (!__LIB_0__::func_431(iParam0, 6, 1))
		{
			__LIB_13__::func_768(iParam0, 6, 1);
			Global_100493.f_376++;
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				PLAYER::FORCE_CLEANUP(8);
			}
		}
	}
	else if (__LIB_0__::func_431(iParam0, 6, 1))
	{
		__LIB_13__::func_776(iParam0, 6, 1);
		if (Global_100493.f_376 > 0)
		{
			Global_100493.f_376 = (Global_100493.f_376 - 1);
		}
		BRAIN::REACTIVATE_NAMED_WORLD_BRAINS_WAITING_TILL_OUT_OF_RANGE("act_cinema");
	}
}

void func_741(int iParam0, bool bParam1)//Position - 0x2EC8F
{
	if (bParam1)
	{
		Global_100493.f_472 = iParam0;
		if (!__LIB_0__::func_431(iParam0, 5, 1))
		{
			__LIB_13__::func_768(iParam0, 5, 1);
			__LIB_1__::func_714(iParam0);
			Global_100493.f_375++;
		}
	}
	else if (__LIB_0__::func_431(iParam0, 5, 1))
	{
		__LIB_13__::func_776(iParam0, 5, 1);
		__LIB_1__::func_714(iParam0);
		if (Global_100493.f_375 > 0)
		{
			Global_100493.f_375 = (Global_100493.f_375 - 1);
		}
	}
}

int func_742(int iParam0, int iParam1)//Position - 0x78C97
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	iVar5 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		iVar2 = iVar1;
		iVar4 = __LIB_0__::func_453(iParam0, iVar2);
		if (__LIB_0__::func_233(iVar5, 14, iVar4, -1))
		{
			uVar6 = __LIB_0__::func_279(iVar5, 14, iVar1);
			Stack.Push(iParam0);
			Stack.Push(14);
			Stack.Push(uVar6);
			Stack.Push(0);
			Stack.Push(-1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Stack.Push(-1);
			Stack.Push(-1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Call_Loc(*iParam1);
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		iVar3 = iVar0;
		if ((iVar3 != 12 && iVar3 != 13) && iVar3 != 14)
		{
			iVar4 = __LIB_0__::func_350(iParam0, iVar3);
			if (__LIB_0__::func_233(iVar5, iVar3, iVar4, -1))
			{
				uVar6 = __LIB_0__::func_279(iVar5, iVar3, -1);
				Stack.Push(iParam0);
				Stack.Push(iVar3);
				Stack.Push(uVar6);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Call_Loc(*iParam1);
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_743(int iParam0)//Position - 0x9936D
{
	return __LIB_0__::func_431(iParam0, 8, 1);
}

void func_744(int iParam0, bool bParam1)//Position - 0x9A9BE
{
	if (bParam1)
	{
		if (!__LIB_0__::func_431(iParam0, 1, 1))
		{
			__LIB_13__::func_768(iParam0, 1, 1);
		}
	}
	else if (__LIB_0__::func_431(iParam0, 1, 1))
	{
		__LIB_13__::func_776(iParam0, 1, 1);
	}
}

void func_745(int iParam0, bool bParam1)//Position - 0x9B46D
{
	if (bParam1)
	{
		if (!__LIB_0__::func_431(iParam0, 15, 1))
		{
			__LIB_13__::func_768(iParam0, 15, 1);
		}
	}
	else if (__LIB_0__::func_431(iParam0, 15, 1))
	{
		__LIB_13__::func_776(iParam0, 15, 1);
	}
}

void func_746(int iParam0, bool bParam1)//Position - 0x9B4E0
{
	if (bParam1)
	{
		if (!__LIB_0__::func_431(iParam0, 9, 0))
		{
			__LIB_13__::func_768(iParam0, 9, 0);
		}
	}
	else if (__LIB_0__::func_431(iParam0, 9, 0))
	{
		__LIB_13__::func_776(iParam0, 9, 0);
	}
}

void func_747(int iParam0, bool bParam1)//Position - 0x9BE2E
{
	int iVar0;
	int iVar1;
	if (bParam1)
	{
		if (!__LIB_0__::func_431(iParam0, 2, 0))
		{
			__LIB_13__::func_768(iParam0, 2, 0);
			__LIB_1__::func_714(iParam0);
			iVar0 = __LIB_0__::func_328(iParam0);
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (__LIB_0__::func_3() == 0)
				{
					iVar1 = __LIB_0__::func_369(827, -1, 0);
					MISC::SET_BIT(&iVar1, iVar0);
					__LIB_0__::func_413(827, iVar1, -1, 1, 0);
				}
			}
			else
			{
				MISC::SET_BIT(&(Global_113386.f_668.f_60), iVar0);
			}
		}
	}
	else if (__LIB_0__::func_431(iParam0, 2, 0))
	{
		__LIB_13__::func_776(iParam0, 2, 0);
	}
}

void func_748(int iParam0, bool bParam1)//Position - 0x9D5CF
{
	if (bParam1)
	{
		if (!__LIB_0__::func_431(iParam0, 18, 1))
		{
			__LIB_13__::func_768(iParam0, 18, 1);
		}
	}
	else if (__LIB_0__::func_431(iParam0, 18, 1))
	{
		__LIB_13__::func_776(iParam0, 18, 1);
	}
}

bool func_749(int iParam0)//Position - 0x9E3B4
{
	return __LIB_0__::func_431(iParam0, 14, 1);
}

bool func_750(int iParam0)//Position - 0x9EC14
{
	return __LIB_0__::func_431(iParam0, 15, 1);
}

bool func_751(int iParam0)//Position - 0x9EC25
{
	return __LIB_0__::func_431(iParam0, 4, 1);
}

bool func_752(int iParam0)//Position - 0x9F96A
{
	return __LIB_0__::func_431(iParam0, 3, 1);
}

bool func_753(int iParam0)//Position - 0x9FB04
{
	return __LIB_0__::func_431(iParam0, 18, 1);
}

int func_754(var uParam0)//Position - 0x3EF0
{
	if (uParam0->f_9)
	{
		if (__LIB_0__::func_431(*uParam0, 10, 1))
		{
			return 1;
		}
		if (uParam0->f_1 == 1)
		{
			if (__LIB_0__::func_431(*uParam0, 19, 1))
			{
				return 1;
			}
		}
		if (!Global_100493.f_16)
		{
			return 1;
		}
		if (Global_78319)
		{
			if (Global_1574654.f_4)
			{
				return 1;
			}
		}
		else if (uParam0->f_9 && uParam0->f_11 != 0)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 82.34222f, -1310.2776f, 25.770123f, 142.89174f, -1274.1537f, 46.512486f, 62f, false, true, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_755(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x957FC
{
	bool bVar0;
	int iVar1;
	int iVar2;
	if (__LIB_14__::func_404(1))
	{
		if (__LIB_13__::func_992(iParam0, iParam3))
		{
			if (!(ENTITY::DOES_ENTITY_EXIST(Global_2815059.f_304[0]) && __LIB_1__::func_659(PLAYER::PLAYER_ID())) && !ENTITY::DOES_ENTITY_EXIST(Global_103231))
			{
				return 0;
			}
			if (!(ENTITY::DOES_ENTITY_EXIST(Global_2815059.f_304[1]) && __LIB_1__::func_659(PLAYER::PLAYER_ID())) && !ENTITY::DOES_ENTITY_EXIST(Global_103231))
			{
				return 0;
			}
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_0__::func_328(iParam0) == 1)
		{
			if ((__LIB_1__::func_101(PLAYER::PLAYER_PED_ID()) || __LIB_12__::func_628(PLAYER::PLAYER_ID())) || __LIB_1__::func_748(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (__LIB_1__::func_832(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (__LIB_0__::func_927(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (iParam0 == 46 && ((Global_262145.f_21612 /* Tunable: 311722703 */ && __LIB_0__::func_389(PLAYER::PLAYER_ID())) || (Global_262145.f_21611 /* Tunable: GR_DISABLE_WEAPON_WORKSHOP */ && __LIB_0__::func_393(PLAYER::PLAYER_ID()))))
			{
				return 0;
			}
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (iParam0 == 48 && (Global_262145.f_24709 /* Tunable: 1908565944 */ && __LIB_12__::func_512(PLAYER::PLAYER_ID())))
			{
				return 0;
			}
		}
		if (bParam1)
		{
			if ((!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || ((!CAM::IS_GAMEPLAY_CAM_RENDERING() && !CAM::IS_AIM_CAM_ACTIVE()) && !bParam2)) || __LIB_0__::func_719())
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if ((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || !PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())) && !__LIB_13__::func_992(iParam0, iParam3))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 198.22726f, 5176.4146f, -89.99727f, 201.1166f, 5174.4595f, -87.24727f, 1.5f, false, true, 0) && __LIB_3__::func_145(iParam0, iParam3))
				{
				}
				else if (__LIB_13__::func_700(PLAYER::PLAYER_PED_ID()) && __LIB_13__::func_993(iParam0, iParam3))
				{
				}
				else if (__LIB_14__::func_287(iParam0, iParam3) && __LIB_13__::func_647())
				{
				}
				else
				{
					return 0;
				}
			}
			bVar0 = false;
			if (__LIB_13__::func_992(iParam0, iParam3))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2815059.f_304[0]))
				{
					iVar1 = Global_2815059.f_304[0];
					bVar0 = true;
				}
			}
			else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 198.22726f, 5176.4146f, -89.99727f, 201.1166f, 5174.4595f, -87.24727f, 1.5f, false, true, 0) && __LIB_3__::func_145(iParam0, iParam3))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_1965535))
				{
					iVar1 = Global_1965535;
					bVar0 = true;
				}
			}
			else if (__LIB_13__::func_993(iParam0, iParam3) && __LIB_13__::func_700(PLAYER::PLAYER_PED_ID()))
			{
				if (__LIB_10__::func_575(PLAYER::PLAYER_PED_ID()))
				{
					iVar1 = Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_5[0];
				}
				else
				{
					iVar1 = Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_5[1];
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					bVar0 = true;
				}
			}
			else if (__LIB_14__::func_287(iParam0, iParam3) && __LIB_13__::func_647())
			{
				iVar1 = Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_484;
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					bVar0 = true;
				}
			}
			else
			{
				iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, false))
				{
					if (!ENTITY::IS_ENTITY_UPSIDEDOWN(iVar1))
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar1, -1, false) == PLAYER::PLAYER_PED_ID())
						{
							if (!PED::IS_PED_BEING_JACKED(PLAYER::PLAYER_PED_ID()) && !TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
							{
								if (!ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar1) && !__LIB_13__::func_992(iParam0, iParam3))
								{
									bVar0 = true;
								}
							}
						}
					}
				}
			}
			if (!bVar0)
			{
				return 0;
			}
		}
		if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || TASK::IS_PED_GETTING_UP(PLAYER::PLAYER_PED_ID())) || FIRE::IS_ENTITY_ON_FIRE(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !bParam2)) || (!PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && !bParam2)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(PLAYER::PLAYER_PED_ID())) || HUD::IS_HUD_COMPONENT_ACTIVE(19)) || CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE()) || __LIB_0__::func_134()) || __LIB_17__::func_598(iParam0)) || __LIB_0__::func_629()) || __LIB_0__::func_879()) || __LIB_0__::func_691())
		{
			return 0;
		}
		if ((((__LIB_0__::func_201() || __LIB_0__::func_629()) || Global_31962) || Global_1836610) || Global_1836746)
		{
			return 0;
		}
		if ((!__LIB_0__::func_719() && __LIB_0__::func_193()) && (__LIB_0__::func_328(iParam0) != 4 || MISC::GET_HASH_KEY(&(Global_23150.f_1)) != joaat("PIM_TITLE1")))
		{
			return 0;
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (Global_1574964)
			{
				return 0;
			}
			if (BitTest(Global_2815059.f_428.f_5, 0))
			{
				return 0;
			}
			if (__LIB_0__::func_983())
			{
				return 0;
			}
			if (__LIB_2__::func_821(PLAYER::PLAYER_ID()))
			{
				if (__LIB_14__::func_407(iParam0, __LIB_0__::func_492(PLAYER::PLAYER_ID())))
				{
					if (__LIB_14__::func_286(iParam0))
					{
						return 0;
					}
				}
			}
			if (__LIB_0__::func_979(PLAYER::PLAYER_ID(), 21))
			{
				return 0;
			}
			if (__LIB_0__::func_979(PLAYER::PLAYER_ID(), 25))
			{
				return 0;
			}
			if (__LIB_1__::func_613(PLAYER::PLAYER_ID()) == 3)
			{
				if (__LIB_0__::func_525(PLAYER::PLAYER_ID()) == 8 || __LIB_0__::func_525(PLAYER::PLAYER_ID()) == 9)
				{
					return 0;
				}
			}
			if (Global_2815059.f_28.f_41)
			{
				if (__LIB_0__::func_328(iParam0) == 4)
				{
					return 0;
				}
			}
			if ((BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_30, 14) || BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_30, 11)) || Global_1946179)
			{
				if (__LIB_0__::func_328(iParam0) == 4)
				{
					return 0;
				}
			}
			if (Global_1574632.f_18 != 0)
			{
				return 0;
			}
			if (!__LIB_0__::func_796(PLAYER::PLAYER_ID()))
			{
				if ((__LIB_0__::func_315(PLAYER::PLAYER_ID()) && ((((__LIB_0__::func_492(PLAYER::PLAYER_ID()) == 159 || __LIB_0__::func_492(PLAYER::PLAYER_ID()) == 164) || __LIB_0__::func_492(PLAYER::PLAYER_ID()) == 142) || __LIB_0__::func_492(PLAYER::PLAYER_ID()) == 148) || __LIB_0__::func_492(PLAYER::PLAYER_ID()) == 153)) || __LIB_13__::func_703() != 0)
				{
					if (__LIB_0__::func_328(iParam0) == 1)
					{
						return 0;
					}
					if (__LIB_0__::func_328(iParam0) == 0)
					{
						return 0;
					}
				}
				else if ((((((__LIB_0__::func_492(PLAYER::PLAYER_ID()) == 167 || __LIB_0__::func_492(PLAYER::PLAYER_ID()) == 168) || __LIB_0__::func_492(PLAYER::PLAYER_ID()) == 169) || __LIB_0__::func_492(PLAYER::PLAYER_ID()) == 190) || __LIB_0__::func_492(PLAYER::PLAYER_ID()) == 191) || __LIB_0__::func_492(PLAYER::PLAYER_ID()) == 192) && __LIB_13__::func_703() == 0)
				{
					if (__LIB_0__::func_328(iParam0) == 1)
					{
						return 1;
					}
				}
			}
			else
			{
				if (__LIB_0__::func_315(PLAYER::PLAYER_ID()) && ((((__LIB_0__::func_492(PLAYER::PLAYER_ID()) == 159 || __LIB_0__::func_492(PLAYER::PLAYER_ID()) == 164) || __LIB_0__::func_492(PLAYER::PLAYER_ID()) == 142) || __LIB_0__::func_492(PLAYER::PLAYER_ID()) == 148) || __LIB_0__::func_492(PLAYER::PLAYER_ID()) == 153))
				{
					if (__LIB_0__::func_328(iParam0) == 3)
					{
						return 0;
					}
				}
				if ((__LIB_0__::func_315(PLAYER::PLAYER_ID()) && ((((__LIB_0__::func_492(PLAYER::PLAYER_ID()) == 159 || __LIB_0__::func_492(PLAYER::PLAYER_ID()) == 164) || __LIB_0__::func_492(PLAYER::PLAYER_ID()) == 142) || __LIB_0__::func_492(PLAYER::PLAYER_ID()) == 148) || __LIB_0__::func_492(PLAYER::PLAYER_ID()) == 153)) || __LIB_13__::func_703() != 0)
				{
					if (__LIB_0__::func_328(iParam0) == 1)
					{
						return 0;
					}
					if (__LIB_0__::func_328(iParam0) == 0)
					{
						return 0;
					}
				}
				else if ((((((__LIB_0__::func_492(PLAYER::PLAYER_ID()) == 167 || __LIB_0__::func_492(PLAYER::PLAYER_ID()) == 168) || __LIB_0__::func_492(PLAYER::PLAYER_ID()) == 169) || __LIB_0__::func_492(PLAYER::PLAYER_ID()) == 190) || __LIB_0__::func_492(PLAYER::PLAYER_ID()) == 191) || __LIB_0__::func_492(PLAYER::PLAYER_ID()) == 192) && __LIB_13__::func_703() == 0)
				{
					if (__LIB_0__::func_328(iParam0) == 1)
					{
						return 1;
					}
				}
			}
		}
		if (__LIB_1__::func_613(PLAYER::PLAYER_ID()) == 4 || __LIB_1__::func_727(PLAYER::PLAYER_ID(), 14))
		{
			if (__LIB_0__::func_328(iParam0) != 3)
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (__LIB_14__::func_408(iVar2))
			{
				if (__LIB_0__::func_328(iParam0) != 3)
				{
					return 0;
				}
				else
				{
					return 1;
				}
			}
		}
		if (iParam0 == 50)
		{
			if (__LIB_14__::func_406(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9))
			{
				return 0;
			}
			if (((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || __LIB_4__::func_850(PLAYER::PLAYER_PED_ID()) > 9) || Global_2667225.f_2681) || BitTest(Global_1946250.f_4, 2))
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int func_756(var uParam0, int iParam1)//Position - 0x9FBEE
{
	char* sVar0;
	struct<3> Var1;
	int iVar2;
	int iVar3;
	char* sVar4;
	struct<3> Var5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	char* sVar10;
	struct<3> Var11;
	int iVar12;
	int iVar13;
	char* sVar14;
	struct<3> Var15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	char* sVar20;
	struct<3> Var21;
	int iVar22;
	int iVar23;
	char* sVar24;
	struct<3> Var25;
	int iVar26;
	int iVar27;
	int iVar28;
	char* sVar29;
	struct<3> Var30;
	int iVar31;
	int iVar32;
	if (Global_3)
	{
		uParam0->f_10 = 1;
		return 1;
	}
	if (Global_78319)
	{
		if (__LIB_0__::func_959())
		{
			uParam0->f_10 = 1;
			return 1;
		}
		if (!Global_100493.f_77[iParam1])
		{
			uParam0->f_10 = 1;
			return 1;
		}
		if (__LIB_14__::func_353(PLAYER::PLAYER_ID()))
		{
			uParam0->f_10 = 1;
			return 1;
		}
		if (iParam1 == 46)
		{
			if (!BitTest(Global_4718592.f_169366.f_4, 0))
			{
				sVar0 = __LIB_3__::func_285(iParam1);
				Var1 = { __LIB_0__::func_785(iParam1, 0) };
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
				{
					iVar2 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var1, sVar0);
					iVar3 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
					if (iVar2 != 0 && iVar3 != 0)
					{
						if (iVar3 != iVar2)
						{
							if (Global_1853185 != __LIB_0__::func_162())
							{
								if (((((BitTest(Global_1853348[Global_1853185 /*834*/].f_267.f_273, 3) || BitTest(Global_1853348[Global_1853185 /*834*/].f_267.f_273, 4)) || BitTest(Global_1853348[Global_1853185 /*834*/].f_267.f_273, 5)) || BitTest(Global_1853348[Global_1853185 /*834*/].f_267.f_273, 0)) || BitTest(Global_1853348[Global_1853185 /*834*/].f_267.f_273, 1)) || BitTest(Global_1853348[Global_1853185 /*834*/].f_267.f_273, 2))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		else if (iParam1 == 47)
		{
			if (!Global_262145.f_23132 /* Tunable: 226347461 */)
			{
				if (!__LIB_1__::func_748(PLAYER::PLAYER_ID()) && !__LIB_1__::func_29(PLAYER::PLAYER_ID(), 1, 0))
				{
					sVar4 = __LIB_3__::func_285(iParam1);
					Var5 = { __LIB_0__::func_785(iParam1, 0) };
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar4))
					{
						iVar6 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var5, sVar4);
						iVar7 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
						if (iVar6 != 0 && iVar7 != 0)
						{
							if (iVar7 != iVar6)
							{
								if (Global_1853190 != __LIB_0__::func_162())
								{
									if (__LIB_3__::func_927(Global_1853190))
									{
										return 1;
									}
								}
							}
						}
					}
				}
			}
		}
		else if (iParam1 == 48)
		{
			iVar8 = 1;
			if (__LIB_14__::func_471(iParam1, &iVar8, 0))
			{
				if (__LIB_12__::func_512(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9))
				{
					return 1;
				}
			}
		}
		else if (iParam1 == 49)
		{
			iVar9 = 1;
			if (__LIB_14__::func_471(iParam1, &iVar9, 0))
			{
				if (__LIB_13__::func_701(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9))
				{
					return 1;
				}
			}
		}
		else if (iParam1 == 50)
		{
			if (!__LIB_1__::func_748(PLAYER::PLAYER_ID()) && !__LIB_1__::func_29(PLAYER::PLAYER_ID(), 1, 0))
			{
				sVar10 = __LIB_3__::func_285(iParam1);
				Var11 = { __LIB_0__::func_785(iParam1, 0) };
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar10))
				{
					iVar12 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var11, sVar10);
					iVar13 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
					if (iVar12 != 0 && iVar13 != 0)
					{
						if (iVar13 != iVar12)
						{
							if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 != __LIB_0__::func_162())
							{
								if (__LIB_9__::func_547(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9) && !Global_262145.f_26914 /* Tunable: VC_PENTHOUSE_DISABLE_BARBER */)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		else if (iParam1 == 51)
		{
			if (!__LIB_1__::func_748(PLAYER::PLAYER_ID()) && !__LIB_1__::func_29(PLAYER::PLAYER_ID(), 1, 0))
			{
				sVar14 = __LIB_3__::func_285(iParam1);
				Var15 = { __LIB_0__::func_785(iParam1, 0) };
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar14))
				{
					iVar16 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var15, sVar14);
					iVar17 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
					if (iVar16 != 0 && iVar17 != 0)
					{
						if (iVar17 != iVar16)
						{
							return 1;
						}
					}
				}
			}
		}
		else if (iParam1 == 52)
		{
			iVar18 = 1;
			if (__LIB_14__::func_471(iParam1, &iVar18, 0))
			{
				if (__LIB_13__::func_706(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
			}
		}
		else if (iParam1 == 53)
		{
			iVar19 = 1;
			if (__LIB_14__::func_471(iParam1, &iVar19, 0))
			{
				if (__LIB_3__::func_930(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
			}
		}
		else if (iParam1 == 54)
		{
			if (!__LIB_1__::func_748(PLAYER::PLAYER_ID()) && !__LIB_1__::func_29(PLAYER::PLAYER_ID(), 1, 0))
			{
				sVar20 = __LIB_3__::func_285(iParam1);
				Var21 = { __LIB_0__::func_785(iParam1, 0) };
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar20))
				{
					iVar22 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var21, sVar20);
					iVar23 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
					if (iVar22 != 0 && iVar23 != 0)
					{
						if (iVar23 != iVar22)
						{
							return 1;
						}
						else if (__LIB_13__::func_721())
						{
							return 1;
						}
					}
				}
			}
		}
		else if (iParam1 == 55)
		{
			if (!__LIB_1__::func_748(PLAYER::PLAYER_ID()) && !__LIB_1__::func_29(PLAYER::PLAYER_ID(), 1, 0))
			{
				sVar24 = __LIB_3__::func_285(iParam1);
				Var25 = { __LIB_0__::func_785(iParam1, 0) };
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar24))
				{
					iVar26 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var25, sVar24);
					iVar27 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
					if (iVar26 != 0 && iVar27 != 0)
					{
						if (iVar27 != iVar26)
						{
							return 1;
						}
						else if (__LIB_13__::func_721())
						{
							return 1;
						}
					}
				}
			}
		}
		else if (iParam1 == 56)
		{
			iVar28 = 1;
			if (__LIB_14__::func_471(iParam1, &iVar28, 0))
			{
				if (__LIB_3__::func_637(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9))
				{
					return 1;
				}
			}
		}
		else if (iParam1 == 57)
		{
			if (!__LIB_1__::func_748(PLAYER::PLAYER_ID()) && !__LIB_1__::func_29(PLAYER::PLAYER_ID(), 1, 0))
			{
				sVar29 = __LIB_3__::func_285(iParam1);
				Var30 = { __LIB_0__::func_785(iParam1, 0) };
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar29))
				{
					iVar31 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var30, sVar29);
					iVar32 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
					if (iVar31 != 0 && iVar32 != 0)
					{
						if (iVar32 != iVar31)
						{
							return 1;
						}
					}
				}
			}
		}
	}
	else if (Global_100493.f_77[iParam1])
	{
		uParam0->f_10 = 1;
		return 1;
	}
	if (__LIB_0__::func_431(iParam1, 9, 1))
	{
		uParam0->f_10 = 1;
		return 1;
	}
	return 0;
}

int func_757()//Position - 0x5371
{
	int iVar0;
	iVar0 = __LIB_0__::func_683();
	if (iVar0 == 0)
	{
		if (__LIB_0__::func_425(65))
		{
			return 1;
		}
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("ambient_solomon")) > 0)
		{
			return 1;
		}
	}
	else if (iVar0 == 1)
	{
		if (__LIB_0__::func_425(66))
		{
			return 1;
		}
	}
	else if (iVar0 == 2)
	{
		if (__LIB_0__::func_425(65))
		{
			return 1;
		}
	}
	return 0;
}

int func_758(int iParam0, int iParam1)//Position - 0x3A2
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (!PED::IS_PED_INJURED(iParam0))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 0)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

Vector3 func_759(int iParam0)//Position - 0x27F9
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	Var0 = { 0f, 0f, 0f };
	iVar5 = HUD::GET_BLIP_INFO_ID_TYPE(iParam0);
	if (iVar5 == 1)
	{
		iVar1 = HUD::GET_BLIP_INFO_ID_ENTITY_INDEX(iParam0);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, false))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(iVar1, true) };
		}
	}
	else if (iVar5 == 2)
	{
		iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(HUD::GET_BLIP_INFO_ID_ENTITY_INDEX(iParam0));
		if (!PED::IS_PED_INJURED(iVar2))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(iVar2, true) };
		}
	}
	else if (iVar5 == 3)
	{
		iVar3 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(HUD::GET_BLIP_INFO_ID_ENTITY_INDEX(iParam0));
		if (ENTITY::DOES_ENTITY_EXIST(iVar3))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(iVar3, true) };
		}
	}
	else if (iVar5 == 4)
	{
		Var0 = { HUD::GET_BLIP_COORDS(iParam0) };
	}
	else if (iVar5 == 6)
	{
		iVar4 = HUD::GET_BLIP_INFO_ID_PICKUP_INDEX(iParam0);
		if (OBJECT::DOES_PICKUP_EXIST(iVar4))
		{
			Var0 = { OBJECT::GET_PICKUP_COORDS(iVar4) };
		}
	}
	else if (iVar5 == 5)
	{
		Var0 = { HUD::GET_BLIP_COORDS(iParam0) };
	}
	return Var0;
}

int func_760(int iParam0)//Position - 0x6996
{
	int iVar0;
	if (HUD::DOES_BLIP_EXIST(iParam0))
	{
		iVar0 = HUD::GET_BLIP_SPRITE(iParam0);
	}
	return iVar0;
}

int func_761(int iParam0)//Position - 0xE67D
{
	int iVar0;
	if (HUD::DOES_BLIP_EXIST(iParam0))
	{
		iVar0 = HUD::GET_BLIP_INFO_ID_DISPLAY(iParam0);
		if (!iVar0 == 0 && !iVar0 == 1)
		{
			return 1;
		}
	}
	return 0;
}

int func_762()//Position - 0xFA75
{
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (Global_97361 == 1)
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (Global_112437)
	{
		return 0;
	}
	if (Global_4)
	{
		return 0;
	}
	if (REPLAY::REPLAY_SYSTEM_HAS_REQUESTED_A_SCRIPT_CLEANUP())
	{
		return 0;
	}
	return 1;
}

void func_763()//Position - 0xFBA8
{
	int iVar0;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_112417, false))
	{
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(Global_112417, 1, false))
		{
			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(Global_112417, 1, false);
			if (PLAYER::PLAYER_PED_ID() != iVar0)
			{
				if (!PED::IS_PED_GROUP_MEMBER(iVar0, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
				{
					TASK::TASK_SMART_FLEE_PED(iVar0, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
				}
			}
		}
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(Global_112417, 2, false))
		{
			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(Global_112417, 2, false);
			if (PLAYER::PLAYER_PED_ID() != iVar0)
			{
				if (!PED::IS_PED_GROUP_MEMBER(iVar0, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
				{
					TASK::TASK_SMART_FLEE_PED(iVar0, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
				}
			}
		}
	}
}

void func_764()//Position - 0xFD8E
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(Global_112418))
	{
		if (!PED::IS_PED_INJURED(Global_112418))
		{
			PED::SET_PED_CONFIG_FLAG(Global_112418, 251, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_112418, false);
			if (!PED::IS_PED_FLEEING(Global_112418) && !PED::IS_PED_IN_COMBAT(Global_112418, 0))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(Global_112418, false))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Global_112417))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_112417, false))
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(Global_112418, Global_112417))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Global_112418, joaat("SCRIPT_TASK_VEHICLE_DRIVE_WANDER")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Global_112418, joaat("SCRIPT_TASK_VEHICLE_DRIVE_WANDER")) != 0)
								{
									TASK::OPEN_SEQUENCE_TASK(&iVar0);
									if ((!VEHICLE::IS_VEHICLE_SEAT_FREE(Global_112417, 1, false) || !VEHICLE::IS_VEHICLE_SEAT_FREE(Global_112417, 2, false)) || !VEHICLE::IS_VEHICLE_SEAT_FREE(Global_112417, 0, false))
									{
										TASK::TASK_PAUSE(0, 2000);
									}
									else
									{
										TASK::TASK_PAUSE(0, 500);
									}
									TASK::TASK_VEHICLE_DRIVE_WANDER(0, Global_112417, 12f, 790699);
									TASK::CLOSE_SEQUENCE_TASK(iVar0);
									TASK::TASK_PERFORM_SEQUENCE(Global_112418, iVar0);
									TASK::CLEAR_SEQUENCE_TASK(&iVar0);
								}
							}
							else
							{
								TASK::TASK_SMART_FLEE_PED(Global_112418, PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
							}
						}
						else
						{
							TASK::TASK_SMART_FLEE_PED(Global_112418, PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
						}
					}
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(Global_112418, joaat("SCRIPT_TASK_WANDER_STANDARD")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Global_112418, joaat("SCRIPT_TASK_WANDER_STANDARD")) != 0)
				{
					TASK::TASK_WANDER_STANDARD(Global_112418, 40000f, 0);
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_112418))
	{
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(Global_112418))
		{
			if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_112418, false))
			{
				if (!PED::IS_PED_INJURED(Global_112418))
				{
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Global_112418, false, 1);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_112418, false);
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Global_112418);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_112417))
	{
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(Global_112417))
		{
			if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_112417, false))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_112417, false))
				{
					VEHICLE::SET_VEHICLE_HAS_BEEN_OWNED_BY_PLAYER(Global_112417, false);
					VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Global_112417, true, 0);
					VEHICLE::SET_VEHICLE_WILL_FORCE_OTHER_VEHICLES_TO_STOP(Global_112417, false);
				}
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Global_112417);
			}
		}
	}
	Global_112418 = 0;
	Global_112417 = 0;
	StringCopy(&Global_112448, "NULL", 24);
	Global_112454 = -1;
}

int func_765(int iParam0, int iParam1, int iParam2)//Position - 0xFFCC
{
	int iVar0;
	int iVar1;
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
		{
			if (ENTITY::GET_ENTITY_MODEL(*iParam0) == iParam1)
			{
				iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam0, -1, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!PED::IS_PED_INJURED(iVar0))
					{
						if (!PED::IS_PED_FLEEING(iVar0))
						{
							if (!PED::IS_PED_IN_COMBAT(iVar0, 0))
							{
								if (PED::IS_PED_MODEL(iVar0, iParam2))
								{
									if (ENTITY::IS_ENTITY_UPRIGHT(*iParam0, 90f))
									{
										iVar1 = VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(*iParam0);
										if (iVar1 != 3 && iVar1 != 2)
										{
											return 1;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_766()//Position - 0x10061
{
	return joaat("A_M_Y_StLat_01");
}

int func_767(int iParam0)//Position - 0x102D9
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (!PED::IS_PED_INJURED(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_768()//Position - 0x435
{
	int iVar0;
	var uVar1;
	int iVar2;
	if (PED::DOES_GROUP_EXIST(__LIB_0__::func_495()))
	{
		PED::GET_GROUP_SIZE(__LIB_0__::func_495(), &uVar1, &iVar0);
		if (iVar0 > 0)
		{
			iVar2 = PED::GET_PED_AS_GROUP_MEMBER(__LIB_0__::func_495(), 0);
			if (!PED::IS_PED_INJURED(iVar2))
			{
				TASK::CLEAR_PED_TASKS(iVar2);
				if (!ENTITY::IS_ENTITY_DEAD(Global_112417, false))
				{
					if (PED::IS_PED_IN_VEHICLE(iVar2, Global_112417, false))
					{
						TASK::TASK_LEAVE_VEHICLE(iVar2, Global_112417, 64);
					}
				}
			}
			if (iVar0 > 1)
			{
				iVar2 = PED::GET_PED_AS_GROUP_MEMBER(__LIB_0__::func_495(), 1);
				if (!PED::IS_PED_INJURED(iVar2))
				{
					TASK::CLEAR_PED_TASKS(iVar2);
					if (!ENTITY::IS_ENTITY_DEAD(Global_112417, false))
					{
						if (PED::IS_PED_IN_VEHICLE(iVar2, Global_112417, false))
						{
							TASK::TASK_LEAVE_VEHICLE(iVar2, Global_112417, 64);
						}
					}
				}
			}
		}
	}
}

void func_769(int* iParam0, float fParam1)//Position - 0x627E
{
	if (__LIB_0__::func_702(iParam0))
	{
		__LIB_0__::func_706(iParam0, (__LIB_37__::func_276(iParam0) + fParam1));
	}
}

int func_770(struct<3> Param0, struct<3> Param1)//Position - 0x69B1
{
	float fVar0;
	float fVar1;
	fVar1 = (Param1.f_2 - Param0.f_2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 * -1f);
	}
	if (Param0.f_2 <= 1f)
	{
		__LIB_38__::func_393("\nIS_COORD_ON_SAME_LEVEL_AS_COORD - vCoord1.z <= 1, probably a waypoint blip - RETURN TRUE\n");
		return 1;
	}
	fVar0 = SYSTEM::VDIST(Param0, Param1);
	fVar0 = (fVar0 / 1.75f);
	if (fVar1 < fVar0)
	{
		__LIB_38__::func_393("\nIS_COORD_ON_SAME_LEVEL_AS_COORD - fTemp < acceptableHeight, RETURN TRUE\n");
		return 1;
	}
	return 0;
}

int func_771(int iParam0)//Position - 0xDD76
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 58)
	{
		iVar1 = iVar0;
		iVar2 = __LIB_15__::func_277(iVar1);
		if (Global_32338[iVar2 /*23*/].f_19 == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return -1;
}

int func_772(int iParam0, bool bParam1)//Position - 0x2AE0
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(iParam0))
		{
			__LIB_38__::func_393("\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_AMBIENT_SPEECH_PLAYING(DriverID)\n");
			return 1;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
		{
			__LIB_38__::func_393("\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_AMBIENT_SPEECH_PLAYING(PLAYER_PED_ID())\n");
			return 1;
		}
	}
	if (__LIB_0__::func_75())
	{
		__LIB_38__::func_393("\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_ANY_CONVERSATION_ONGOING_OR_QUEUED()\n");
		return 1;
	}
	if (bParam1)
	{
		if (HUD::IS_MESSAGE_BEING_DISPLAYED())
		{
			__LIB_38__::func_393("\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_MESSAGE_BEING_DISPLAYED()\n");
			return 1;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::DOES_GROUP_EXIST(__LIB_0__::func_495()))
		{
			PED::GET_GROUP_SIZE(__LIB_0__::func_495(), &iVar2, &iVar1);
			if (iVar1 > 0)
			{
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar0 = PED::GET_PED_AS_GROUP_MEMBER(__LIB_0__::func_495(), iVar2);
					if (!PED::IS_PED_INJURED(iVar0))
					{
						if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(iVar0))
						{
							__LIB_38__::func_393("\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_AMBIENT_SPEECH_PLAYING(TempGroupPedID)\n");
							return 1;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return 0;
}

int func_773()//Position - 0xC105
{
	if (__LIB_0__::func_39(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113386.f_28050[0 /*29*/])
			{
				return 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113386.f_28050[1 /*29*/])
			{
				return 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113386.f_28050[2 /*29*/])
			{
				return 2;
			}
			else
			{
				return 3;
			}
		}
		else
		{
			return 3;
		}
	}
	return __LIB_0__::func_683();
}

int func_774(int iParam0)//Position - 0x2132
{
	int iVar0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 199;
			break;
		case 1:
			iVar0 = 200;
			break;
		case 2:
			iVar0 = 201;
			break;
		case 3:
			iVar0 = 202;
			break;
		case 4:
			iVar0 = 203;
			break;
		case 5:
			iVar0 = 204;
			break;
		case 6:
			iVar0 = 205;
			break;
		case 7:
			iVar0 = 206;
			break;
		case 8:
			iVar0 = 207;
			break;
		case 9:
			break;
		default:
			iVar0 = 199;
			break;
	}
	return iVar0;
}

void func_775()//Position - 0x5153
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
	{
		AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Radio_Off" /* GXT: Off */, iVar0, "TAXI_SOUNDS", false, 0);
	}
}

void func_776()//Position - 0x52B1
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
	{
		AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Radio_On", iVar0, "TAXI_SOUNDS", false, 0);
	}
}

int func_777(int iParam0)//Position - 0x804D
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	if (!VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 0, false))
	{
		iVar0++;
	}
	if (!VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 1, false))
	{
		iVar0++;
	}
	if (!VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 4, false))
	{
		iVar0++;
	}
	if (!VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 5, false))
	{
		iVar0++;
	}
	if (iVar0 < 2)
	{
		return 0;
	}
	if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		iVar1 = 0;
		if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 0))
		{
			iVar1++;
		}
		if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 1))
		{
			iVar1++;
		}
		if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 2))
		{
			iVar1++;
		}
		if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 3))
		{
			iVar1++;
		}
		if (iVar1 < 2)
		{
			return 0;
		}
	}
	return 1;
}

void func_778(char* sParam0, int iParam1, int iParam2)//Position - 0x88F1
{
	if (MISC::GET_GAME_TIMER() < (*iParam1 + iParam2))
	{
		return;
	}
	*iParam1 = MISC::GET_GAME_TIMER();
}

int func_779()//Position - 0x10D61
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == PLAYER::PLAYER_PED_ID())
				{
					if (VEHICLE::IS_VEHICLE_MODEL(iVar0, __LIB_12__::func_850()))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_780(var uParam0, int iParam1)//Position - 0x818E
{
	__LIB_0__::func_989(uParam0, iParam1);
}

void func_781(var uParam0)//Position - 0x1FE
{
	int iVar0;
	char cVar1[64];
	iVar0 = __LIB_0__::func_216(PLAYER::PLAYER_PED_ID());
	if (iVar0 == 0)
	{
		__LIB_0__::func_222(uParam0, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	}
	else if (iVar0 == 2)
	{
		__LIB_0__::func_222(uParam0, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	}
	else if (iVar0 == 1)
	{
		__LIB_0__::func_222(uParam0, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	}
	else
	{
		__LIB_0__::func_222(uParam0, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		StringCopy(&cVar1, "Invalid enum passed to Taxi dialogue is: ", 64);
		StringIntConCat(&cVar1, iVar0, 64);
	}
	__LIB_0__::func_222(uParam0, 8, 0, "TaxiDispatch", 0, 1);
}

struct<8> func_782(int iParam0)//Position - 0x1FF3
{
	struct<8> Var0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "TAXI_SC_N_NE", 32);
			break;
		case 1:
			StringCopy(&Var0, "TAXI_SC_N_TE", 32);
			break;
		case 2:
			StringCopy(&Var0, "TAXI_SC_N_DL", 32);
			break;
		case 3:
			StringCopy(&Var0, "TAXI_SC_N_GB", 32);
			break;
		case 4:
			StringCopy(&Var0, "TAXI_SC_N_TB", 32);
			break;
		case 5:
			StringCopy(&Var0, "TAXI_SC_N_CY", 32);
			break;
		case 6:
			StringCopy(&Var0, "TAXI_SC_N_GN", 32);
			break;
		case 7:
			StringCopy(&Var0, "TAXI_SC_N_CC", 32);
			break;
		case 8:
			StringCopy(&Var0, "TAXI_SC_N_FC", 32);
			break;
		case 9:
			StringCopy(&Var0, "TAXI_BLIP_CAR", 32);
			break;
		default:
			StringCopy(&Var0, "InvalidEnum", 32);
			break;
	}
	return Var0;
}

void func_783(var uParam0)//Position - 0x20BC
{
	VEHICLE::REMOVE_ROAD_NODE_SPEED_ZONE(uParam0->f_51[0]);
}

void func_784(var uParam0)//Position - 0x20D0
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_3, false))
			{
				PED::RESET_PED_LAST_VEHICLE(uParam0->f_3);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_3, false);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, uParam0->f_413, joaat("PLAYER"));
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
			{
				TASK::STOP_ANIM_TASK(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -8f);
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
			{
				TASK::STOP_ANIM_TASK(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -8f);
			}
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
			{
				TASK::STOP_ANIM_TASK(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -8f);
			}
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				TASK::STOP_ANIM_TASK(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", -8f);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_3));
		}
	}
}

int func_785()//Position - 0x24DE
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appinternet")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_786(var uParam0)//Position - 0x287D
{
	if (HUD::DOES_BLIP_EXIST(uParam0->f_8))
	{
		HUD::REMOVE_BLIP(&(uParam0->f_8));
	}
	if (HUD::DOES_BLIP_EXIST(uParam0->f_9))
	{
		HUD::REMOVE_BLIP(&(uParam0->f_9));
	}
	if (HUD::DOES_BLIP_EXIST(uParam0->f_10))
	{
		HUD::REMOVE_BLIP(&(uParam0->f_10));
	}
}

int func_787(var uParam0)//Position - 0x3039
{
	return uParam0->f_411;
}

char* func_788()//Position - 0x4893
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return "SHOW_COND_SHARD_MESSAGE";
	}
	return "SHOW_SHARD_MIDSIZED_MESSAGE";
}

char* func_789(var uParam0)//Position - 0x48AD
{
	char* sVar0;
	switch (uParam0->f_411)
	{
		case 0:
			sVar0 = "TAXI_SC_BN_02";
			break;
		case 1:
			sVar0 = "TAXI_SC_BN_01";
			break;
		case 2:
			sVar0 = "TAXI_SC_BN_03";
			break;
		case 3:
			sVar0 = "TAXI_SC_BN_12";
			break;
		case 4:
			sVar0 = "TAXI_SC_BN_08";
			break;
		case 5:
			sVar0 = "TAXI_SC_BN_07";
			break;
		case 6:
			sVar0 = "TAXI_SC_KO";
			break;
		case 7:
			sVar0 = "TAXI_SC_BN_10";
			break;
		case 8:
			sVar0 = "TAXI_SC_BN_04";
			break;
	}
	return sVar0;
}

void func_790()//Position - 0x4D63
{
	if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
	}
}

int func_791(var uParam0, var uParam1)//Position - 0x4E2E
{
	int iVar0;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, 1, false);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			*uParam1 = 1;
			return iVar0;
		}
		else
		{
			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, 2, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				*uParam1 = 2;
				return iVar0;
			}
			else
			{
				iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, 0, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					*uParam1 = 0;
					return iVar0;
				}
			}
		}
	}
	return 0;
}

void func_792(int iParam0)//Position - 0x5039
{
	Global_112096.f_221 = iParam0;
}

bool func_793(var uParam0, int iParam1)//Position - 0x52B3
{
	return __LIB_0__::func_702(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_794(var uParam0, int iParam1, bool bParam2)//Position - 0x52C7
{
	int iVar0;
	if (iParam1 == 14)
	{
	}
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			__LIB_1__::func_377(&(uParam0->f_146[iVar0 /*3*/]));
			iVar0++;
		}
	}
	else
	{
		__LIB_1__::func_377(&(uParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam2)
	{
	}
}

void func_795(var uParam0, int iParam1)//Position - 0x5358
{
	if (iParam1 < 5)
	{
		MISC::SET_BIT(&(uParam0->f_60[iParam1 /*3*/]), 2);
		uParam0->f_105 = (uParam0->f_105 + uParam0->f_60[iParam1 /*3*/].f_1);
	}
}

void func_796(var uParam0, float* fParam1)//Position - 0x53B7
{
	STATS::STAT_GET_FLOAT(uParam0->f_428, fParam1, -1);
	uParam0->f_41 = (*fParam1 - uParam0->f_42);
}

void func_797(var uParam0, int iParam1, bool bParam2)//Position - 0x5C7B
{
	uParam0->f_414 = iParam1;
	if (bParam2)
	{
	}
}

void func_798(var uParam0)//Position - 0x5D91
{
	if (HUD::DOES_BLIP_EXIST(uParam0->f_8))
	{
		HUD::SET_BLIP_ROUTE(uParam0->f_8, false);
		HUD::REMOVE_BLIP(&(uParam0->f_8));
	}
}

bool func_799(var uParam0)//Position - 0x6C60
{
	return uParam0->f_120;
}

int func_800(var uParam0)//Position - 0x6F19
{
	return uParam0->f_106;
}

void func_801(var uParam0, int iParam1)//Position - 0x6F43
{
	if (uParam0->f_106 != iParam1)
	{
		uParam0->f_106 = iParam1;
	}
}

void func_802(var uParam0, int iParam1, bool bParam2)//Position - 0x6FE9
{
	if (bParam2)
	{
		*uParam0 = 0;
	}
	else
	{
		*uParam0 = -1;
	}
	if (iParam1 > -1)
	{
		uParam0->f_27 = iParam1;
	}
}

int func_803(var uParam0)//Position - 0x7081
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (!PED::IS_PED_INJURED(uParam0->f_3))
		{
			if (PED::IS_PED_IN_VEHICLE(uParam0->f_3, uParam0->f_4, true))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_804(var uParam0)//Position - 0x70B6
{
	return uParam0->f_416;
}

void func_805(var uParam0, int iParam1)//Position - 0x7188
{
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		CAM::DESTROY_CAM(*uParam0, false);
	}
	if (iParam1 > 0)
	{
		CAM::RENDER_SCRIPT_CAMS(false, true, iParam1, true, false, 0);
	}
	else
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	}
}

void func_806(struct<3> Param0, bool bParam1, float fParam2)//Position - 0x71C2
{
	struct<3> Var0;
	struct<3> Var1;
	Var0 = { __LIB_1__::func_657(Param0, 1f, -fParam2, -fParam2, -fParam2) };
	Var1 = { __LIB_1__::func_657(Param0, 1f, fParam2, fParam2, fParam2) };
	Var0.f_2 = (Var0.f_2 - 22f);
	Var1.f_2 = (Var1.f_2 + 22f);
	if (!bParam1)
	{
		PATHFIND::SET_ROADS_IN_AREA(Var0, Var1, false, true);
	}
	else
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Var0, Var1, 1);
		PED::CLEAR_PED_NON_CREATION_AREA();
	}
}

void func_807(char* sParam0)//Position - 0x738E
{
	StringConCat(sParam0, "F", 24);
}

int func_808(var uParam0, struct<3> Param1, struct<3> Param2, bool bParam3)//Position - 0x80E7
{
	var uVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	if (*uParam0 == 0)
	{
		*uParam0 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Param1, Param2, 511, 0, 7);
		if (bParam3)
		{
		}
	}
	else
	{
		iVar4 = SHAPETEST::GET_SHAPE_TEST_RESULT(*uParam0, &iVar2, &uVar0, &uVar1, &uVar3);
		if (iVar4 == 2)
		{
			if (bParam3)
			{
			}
			if (iVar2 == 0)
			{
				*uParam0 = 0;
				return iVar2;
			}
			else
			{
				if (bParam3)
				{
				}
				*uParam0 = 0;
				return iVar2;
			}
		}
		else if (iVar4 == 0)
		{
			if (bParam3)
			{
			}
			*uParam0 = 0;
		}
	}
	return -1;
}

int func_809(var uParam0, bool bParam1)//Position - 0x83D0
{
	int iVar0[3];
	int iVar1;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		iVar0[0] = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, 1, false);
		iVar0[1] = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, 2, false);
		iVar0[2] = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, 0, false);
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0[iVar1]))
			{
				if (ENTITY::IS_ENTITY_DEAD(iVar0[iVar1], false))
				{
					if (iVar1 == 0)
					{
						uParam0->f_7 = 1;
						if (bParam1)
						{
						}
					}
					else if (iVar1 == 1)
					{
						uParam0->f_7 = 2;
						if (bParam1)
						{
						}
					}
					else
					{
						uParam0->f_7 = 0;
						if (bParam1)
						{
						}
					}
					if (bParam1)
					{
					}
					return 0;
				}
			}
			iVar1++;
		}
		if ((MISC::GET_GAME_TIMER() % 1000) < 50)
		{
		}
	}
	return 1;
}

void func_810(var uParam0)//Position - 0x935E
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		__LIB_0__::func_988(&(uParam0->f_100), iVar0);
		iVar0++;
	}
}

void func_811(var uParam0, var uParam1)//Position - 0x9383
{
	int iVar0;
	if (*uParam1 <= 5)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			MISC::CLEAR_BIT(&(uParam0->f_60[iVar0 /*3*/]), 1);
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			uParam0->f_60[iVar0 /*3*/] = { *(uParam1[iVar0 /*3*/]) };
			MISC::SET_BIT(&(uParam0->f_60[iVar0 /*3*/]), 1);
			MISC::CLEAR_BIT(&(uParam0->f_60[iVar0 /*3*/]), 2);
			iVar0++;
		}
	}
}

void func_812(var uParam0, char* sParam1, int iParam2)//Position - 0x93FA
{
	*uParam0 = 0;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = sParam1;
}

void func_813(var uParam0, int iParam1)//Position - 0x94BA
{
	uParam0->f_117 = 1;
	uParam0->f_118 = iParam1;
}

int func_814(int iParam0)//Position - 0x94CD
{
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 1;
	}
	if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iParam0) < -100f)
	{
		return 1;
	}
	else if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 0, 40000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

int func_815(var uParam0)//Position - 0x9607
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_4, false))
	{
		if (VEHICLE::DOES_VEHICLE_HAVE_STUCK_VEHICLE_CHECK(uParam0->f_4))
		{
			if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(uParam0->f_4, 0, 40000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(uParam0->f_4, 1, 40000))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_816(var uParam0)//Position - 0x9668
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_4, false))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
		{
			if (VEHICLE::IS_VEHICLE_STOPPED(uParam0->f_4))
			{
				if (__LIB_0__::func_703(uParam0->f_86, 8))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_817(int iParam0)//Position - 0x96E7
{
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 1;
	}
	if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iParam0) == 0f)
	{
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
		}
		return 1;
	}
	else if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 0, 40000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

void func_818(int iParam0, int iParam1, bool bParam2)//Position - 0x9742
{
	if (Local_165.f_0 >= 16)
	{
		Local_165.f_0 = 16;
		return;
	}
	Local_165.f_1[Local_165.f_0 /*4*/] = 0;
	__LIB_0__::func_989(&(Local_165.f_1[Local_165.f_0 /*4*/]), 1);
	if (bParam2)
	{
		__LIB_0__::func_989(&(Local_165.f_1[Local_165.f_0 /*4*/]), 2);
	}
	Local_165.f_1[Local_165.f_0 /*4*/].f_2 = iParam0;
	Local_165.f_1[Local_165.f_0 /*4*/].f_3 = iParam1;
	Local_165.f_0++;
}

int func_819(var uParam0)//Position - 0x97C5
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		if ((PED::IS_PED_INJURED(uParam0->f_3) || ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false)) || FIRE::IS_ENTITY_ON_FIRE(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

void func_820()//Position - 0x9805
{
	Local_162[5 /*10*/] = 5;
	Local_162[5 /*10*/].f_1 = 0;
	Local_162[5 /*10*/].f_2 = "TX_SPEED_N";
	Local_162[5 /*10*/].f_9 = 78;
	Local_162[0 /*10*/] = 5;
	Local_162[0 /*10*/].f_1 = 0;
	Local_162[0 /*10*/].f_2 = "TX_AIR_N";
	Local_162[0 /*10*/].f_9 = 76;
	Local_162[2 /*10*/] = 5;
	Local_162[2 /*10*/].f_1 = 0;
	Local_162[2 /*10*/].f_2 = "TX_QSTOP_N";
	Local_162[2 /*10*/].f_9 = 21;
	Local_162[1 /*10*/] = 10;
	Local_162[1 /*10*/].f_1 = 0;
	Local_162[1 /*10*/].f_2 = "TX_DRIFT_N";
	Local_162[1 /*10*/].f_9 = 71;
	Local_162[4 /*10*/] = 10;
	Local_162[4 /*10*/].f_1 = 0;
	Local_162[4 /*10*/].f_2 = "TX_SIDEWALK_N";
	Local_162[4 /*10*/].f_9 = 79;
	Local_162[6 /*10*/] = 10;
	Local_162[6 /*10*/].f_1 = 0;
	Local_162[6 /*10*/].f_2 = "TX_ONCOMING_N";
	Local_162[6 /*10*/].f_9 = 80;
	Local_162[9 /*10*/] = 15;
	Local_162[9 /*10*/].f_1 = 0;
	Local_162[9 /*10*/].f_2 = "TX_HITRUN_N";
	Local_162[9 /*10*/].f_9 = 82;
	Local_162[8 /*10*/] = 15;
	Local_162[8 /*10*/].f_1 = 0;
	Local_162[8 /*10*/].f_2 = "TX_RECKLESS_N";
	Local_162[8 /*10*/].f_9 = 72;
	Local_162[7 /*10*/] = 15;
	Local_162[7 /*10*/].f_1 = 0;
	Local_162[7 /*10*/].f_2 = "TX_ROLL_N";
	Local_162[7 /*10*/].f_9 = 74;
	Local_162[11 /*10*/] = 5;
	Local_162[11 /*10*/].f_1 = 0;
	Local_162[11 /*10*/].f_2 = "TX_SWERVE_N";
	Local_162[11 /*10*/].f_9 = 70;
	Local_162[12 /*10*/] = 5;
	Local_162[12 /*10*/].f_1 = 0;
	Local_162[12 /*10*/].f_2 = "TX_REVERSE_N";
	Local_162[12 /*10*/].f_9 = 69;
	Local_162[13 /*10*/] = 10;
	Local_162[13 /*10*/].f_1 = 0;
	Local_162[13 /*10*/].f_2 = "TX_OFFROAD_N";
	Local_162[13 /*10*/].f_9 = 67;
	Local_162[14 /*10*/] = 10;
	Local_162[14 /*10*/].f_1 = 0;
	Local_162[14 /*10*/].f_2 = "TX_NEARMIS_N";
	Local_162[14 /*10*/].f_9 = 75;
}

int func_821(int iParam0, bool bParam1)//Position - 0x9A50
{
	if (!STREAMING::HAS_MODEL_LOADED(__LIB_12__::func_850()))
	{
		__LIB_39__::func_778("TAXI_SHARED_ASSETS_STREAMED - TAXI MODEL Loading...", iParam0, 1000);
		return 0;
	}
	if (bParam1)
	{
		if (!STREAMING::HAS_ANIM_DICT_LOADED("gestures@m@standing@casual"))
		{
			__LIB_39__::func_778("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts gestures@m@standing@casual Loading...", iParam0, 1000);
			return 0;
		}
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@taxi@"))
	{
		__LIB_39__::func_778("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@taxi@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@towingcome_here"))
	{
		__LIB_39__::func_778("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@towingcome_here Loading...", iParam0, 1000);
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("misscommon@response"))
	{
		__LIB_39__::func_778("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts misscommon@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!HUD::HAS_ADDITIONAL_TEXT_LOADED(2))
	{
		__LIB_39__::func_778("TAXI_SHARED_ASSETS_STREAMED - Mission Text Loading...", iParam0, 1000);
		return 0;
	}
	return 1;
}

void func_822(var uParam0, int iParam1)//Position - 0x9B09
{
	switch (iParam1)
	{
		case 1:
			uParam0->f_123 = "TRS_STREAMING";
			break;
		case 2:
			uParam0->f_123 = " TRS_FINDING_LOCATION ";
			break;
		case 3:
			uParam0->f_123 = " TRS_SPAWNING ";
			break;
		case 4:
			uParam0->f_123 = " TRS_SPAWN_CAR ";
			break;
		case 5:
			uParam0->f_123 = " TRS_MANAGE_PICKUP ";
			break;
		case 6:
			uParam0->f_123 = " TRS_PASSENGER_ENTER ";
			break;
		case 7:
			uParam0->f_123 = " TRS_WAIT_FOR_TIME ";
			break;
		case 8:
			uParam0->f_123 = " TRS_WAIT_FOR_TAIL ";
			break;
		case 9:
			uParam0->f_123 = " TRS_DRIVING_PASSENGER ";
			break;
		case 10:
			uParam0->f_123 = " TRS_WAIT_FOR_FULL_STOP ";
			break;
		case 18:
			uParam0->f_123 = " TRS_PRE_CUTSCENE ";
			break;
		case 11:
			uParam0->f_123 = " TRS_SWITCH_JOB ";
			break;
		case 19:
			uParam0->f_123 = " TRS_CUTSCENE ";
			break;
		case 20:
			uParam0->f_123 = " TRS_CUTSCENE_02 ";
			break;
		case 13:
			uParam0->f_123 = " TRS_CHASE_DRIVER ";
			break;
		case 12:
			uParam0->f_123 = " TRS_SAVE_DAMSEL ";
			break;
		case 14:
			uParam0->f_123 = " TRS_REVEAL_DESTINATION ";
			break;
		case 15:
			uParam0->f_123 = " TRS_WAIT_PARK ";
			break;
		case 16:
			uParam0->f_123 = " TRS_SEND_TO_STORE ";
			break;
		case 17:
			uParam0->f_123 = " TRS_WAIT_1ST_STOP ";
			break;
		case 22:
			uParam0->f_123 = " TRS_DROPPING_OFF ";
			break;
		case 25:
			uParam0->f_123 = " TRS_ESCAPE_POLICE ";
			break;
		case 26:
			uParam0->f_123 = " TRS_POLICE_ESCAPED ";
			break;
		case 24:
			uParam0->f_123 = " TRS_TIE_UP_LOSE_ENDS ";
			break;
		case 27:
			uParam0->f_123 = " TRS_REGULAR_PAYMENT ";
			break;
		case 23:
			uParam0->f_123 = " TRS_ELIMATE_ALL_ENEMIES ";
			break;
		case 28:
			uParam0->f_123 = " TRS_SPECIAL_ENDING ";
			break;
		case 29:
			uParam0->f_123 = " TRS_SCORECARD_GRADE ";
			break;
		case 30:
			uParam0->f_123 = " TRS_CLEANUP ";
			break;
		case 21:
			uParam0->f_123 = " TRS_WAIT_FOR_PASSENGER ";
			break;
		default:
			uParam0->f_123 = " TRS IS UNIDENTIFIED - FIX THIS ";
			break;
	}
	uParam0->f_410 = iParam1;
}

int func_823(var uParam0)//Position - 0xB06A
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, -1, false) == PLAYER::PLAYER_PED_ID())
		{
			return 1;
		}
	}
	return 0;
}

int func_824(var uParam0)//Position - 0xC017
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, -1, false) == PLAYER::PLAYER_PED_ID())
		{
			if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_825(var uParam0)//Position - 0xC04C
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, -1, false) == PLAYER::PLAYER_PED_ID())
		{
			if (ENTITY::IS_ENTITY_UPSIDEDOWN(uParam0->f_4))
			{
				if (!iLocal_163)
				{
					if (ENTITY::GET_ENTITY_ROLL(uParam0->f_4) <= -145f || ENTITY::GET_ENTITY_ROLL(uParam0->f_4) >= 145f)
					{
						iLocal_163 = 1;
					}
				}
			}
			else if (iLocal_163)
			{
				if (ENTITY::GET_ENTITY_ROLL(uParam0->f_4) <= 35f && ENTITY::GET_ENTITY_ROLL(uParam0->f_4) >= -35f)
				{
					iLocal_163 = 0;
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_826(var uParam0, int iParam1)//Position - 0xC394
{
	uParam0->f_76 = (uParam0->f_76 + Local_162[iParam1 /*10*/]);
}

void func_827(var uParam0, int iParam1)//Position - 0xC3AB
{
	uParam0->f_104 = (uParam0->f_104 + iParam1);
}

void func_828(var uParam0)//Position - 0xD1F3
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false))
	{
		if (__LIB_0__::func_78(__LIB_0__::func_613(), uParam0->f_29, 0))
		{
			if (uParam0->f_411 == 2)
			{
				ENTITY::SET_ENTITY_HEADING(uParam0->f_3, 84.9058f);
				PED::SET_PED_KEEP_TASK(uParam0->f_3, true);
			}
			else if (uParam0->f_411 == 4)
			{
				ENTITY::SET_ENTITY_HEADING(uParam0->f_3, 68.3138f);
				PED::SET_PED_KEEP_TASK(uParam0->f_3, true);
			}
			else
			{
				TASK::TASK_WANDER_STANDARD(uParam0->f_3, 40000f, 0);
			}
		}
		else
		{
			TASK::CLEAR_PED_TASKS(uParam0->f_3);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_29, 1f, -1, 0.25f, 0, 40000f);
			if (uParam0->f_411 == 2)
			{
				TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_AA_SMOKE", 0, false);
			}
			else if (uParam0->f_411 == 0)
			{
				TASK::TASK_CLIMB_LADDER(0, true);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 813.9421f, 1172.6809f, 329.7988f, 1f, -1, 0.25f, 0, 40000f);
				TASK::TASK_ACHIEVE_HEADING(0, 151.7794f, 0);
				TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING_POT", 0, false);
			}
			else if (uParam0->f_411 == 4)
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(0, uParam0->f_29, 15f, 0);
			}
			else if (uParam0->f_411 == 1)
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(0, uParam0->f_29, 15f, 20000);
				TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
			}
			else
			{
				TASK::TASK_PLAY_ANIM(0, "oddjobs@taxi@", "base", 8f, -8f, -1, 0, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, "gestures@m@standing@casual", "gesture_pleased", 8f, -8f, -1, 0, 0f, false, false, false);
			}
			if (TASK::DOES_SCENARIO_EXIST_IN_AREA(uParam0->f_29, 15f, true))
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(0, uParam0->f_29, 15f, 0);
			}
			else
			{
				TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
			}
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(uParam0->f_3, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		}
		PED::SET_PED_KEEP_TASK(uParam0->f_3, true);
	}
}

int func_829(var uParam0)//Position - 0xD402
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false))
	{
		if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), uParam0->f_3, 1) < 40f && !ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

int func_830(var uParam0)//Position - 0xD440
{
	return uParam0->f_118;
}

int func_831(var uParam0)//Position - 0xDA78
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (__LIB_0__::func_703((uParam0[iVar0 /*8*/])->f_7, 4))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_832(var uParam0)//Position - 0xDAEF
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (__LIB_0__::func_703((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_833(var uParam0)//Position - 0x10F26
{
	if ((((((uParam0->f_411 == 2 || uParam0->f_411 == 3) || uParam0->f_411 == 4) || uParam0->f_411 == 5) || uParam0->f_411 == 6) || uParam0->f_411 == 7) || uParam0->f_411 == 8)
	{
		return 1;
	}
	return 0;
}

int func_834(var uParam0)//Position - 0x11072
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0[iVar0 /*8*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_835(var uParam0, bool bParam1)//Position - 0x1109F
{
	switch (uParam0->f_411)
	{
		case 0:
			if (bParam1)
			{
				__LIB_0__::func_229("TX_OBJ_NEX_PU", 7500, 1);
			}
			else
			{
				__LIB_0__::func_229("TX_OBJ_NEX_DO", 7500, 1);
			}
			break;
		case 1:
			if (bParam1)
			{
				__LIB_0__::func_229("TX_OBJ_TIE_PU", 7500, 1);
			}
			else
			{
				__LIB_0__::func_229("TX_OBJ_TIE_DO", 7500, 1);
			}
			break;
		case 2:
			if (bParam1)
			{
				__LIB_0__::func_229("TX_OBJ_DL_PU", 7500, 1);
			}
			else
			{
				__LIB_0__::func_229("TX_OBJ_DL_DO", 7500, 1);
			}
			break;
		case 3:
			if (bParam1)
			{
				__LIB_0__::func_229("TX_OBJ_GYB_PU", 7500, 1);
			}
			else
			{
				__LIB_0__::func_229("TX_OBJ_GYB_DO", 7500, 1);
			}
			break;
		case 4:
			if (bParam1)
			{
				__LIB_0__::func_229("TX_OBJ_TTB_PU", 7500, 1);
			}
			else
			{
				__LIB_0__::func_229("TX_OBJ_TTB_DO", 7500, 1);
			}
			break;
		case 5:
			if (bParam1)
			{
				__LIB_0__::func_229("TX_OBJ_CYI_PU", 7500, 1);
			}
			else
			{
				__LIB_0__::func_229("TX_OBJ_CYI_DO", 7500, 1);
			}
			break;
		case 6:
			if (bParam1)
			{
				__LIB_0__::func_229("TX_OBJ_GYN_PU", 7500, 1);
			}
			else
			{
				__LIB_0__::func_229("TX_OBJ_GYN_DO", 7500, 1);
			}
			break;
		case 7:
			if (bParam1)
			{
				__LIB_0__::func_229("TX_OBJ_CC_PU", 7500, 1);
			}
			else
			{
				__LIB_0__::func_229("TAXI_OBJ_CC1", 7500, 1);
			}
			break;
		case 8:
			if (bParam1)
			{
				__LIB_0__::func_229("TX_OBJ_FC_PU", 7500, 1);
			}
			else
			{
				__LIB_0__::func_229("TAXI_OBJ_FTC1", 7500, 1);
			}
			break;
		case 9:
			if (bParam1)
			{
				__LIB_0__::func_229("TX_OBJ_PRO_PU", 7500, 1);
			}
			else
			{
				__LIB_0__::func_229("TX_OBJ_PRO_DO", 7500, 1);
			}
			break;
	}
	if (!bParam1)
	{
		uParam0->f_139 = 1;
	}
}

char* func_836(var uParam0)//Position - 0x112D5
{
	char* sVar0;
	switch (uParam0->f_411)
	{
		case 0:
			sVar0 = "TaxiFelipe";
			break;
		case 1:
			sVar0 = "TaxiOtis";
			break;
		case 2:
			sVar0 = "TaxiKwak";
			break;
		case 3:
			sVar0 = "TaxiWalter";
			break;
		case 4:
			sVar0 = "TaxiMiranda";
			break;
		case 5:
			sVar0 = "TaxiDerrick";
			break;
		case 6:
			sVar0 = "TaxiAlonzo";
			break;
		case 7:
			sVar0 = "TaxiDarren";
			break;
		case 8:
			sVar0 = "TaxiKeyla";
			break;
	}
	return sVar0;
}

char* func_837(var uParam0, int iParam1)//Position - 0x1136F
{
	switch (iParam1)
	{
		case 72:
			switch (uParam0->f_411)
			{
				case 0:
					return "_ACRH";
				case 1:
					return "_ACRH";
				case 2:
					return "_ACAA";
				case 3:
					return "_ACRH";
				case 4:
					return "_AEAA";
				case 5:
					return "_DKAA";
				case 6:
					return "_ACAA";
				case 7:
					return "_ACAA";
				case 8:
					return "_ACRH";
				default:
			}
			return "_ACRH";
			break;
		case 82:
			switch (uParam0->f_411)
			{
				case 0:
					return "_AHIT";
				case 1:
					return "_AHIT";
				case 2:
					return "_AEAA";
				case 3:
					return "_ADAA";
				case 4:
					return "_AFAA";
				case 5:
					return "_AFAA";
				case 6:
					return "_AEAA";
				case 7:
					return "_AHAA";
				case 8:
					return "_AEAA";
				default:
			}
			return "_AHIT";
			break;
		case 74:
			switch (uParam0->f_411)
			{
				case 0:
					return "_AROL";
				case 1:
					return "_AROL";
				case 2:
					return "_AHAA";
				case 3:
					return "_AROL";
				case 4:
					return "_AGAA";
				case 5:
					return "_AROL";
				case 6:
					return "_AROL";
				case 7:
					return "_AROL";
				case 8:
					return "_AROL";
				default:
			}
			return "_AROL";
			break;
		case 65:
			switch (uParam0->f_411)
			{
				case 0:
					return "_ABAA";
				case 1:
					return "_FUAA";
				case 2:
					return "_AFAA";
				case 3:
					return "_DBAA";
				case 4:
					return "_DLAA";
				case 5:
					return "_DKAA";
				case 6:
					if (uParam0->f_115)
					{
						return "_EEAA";
					}
					else
					{
						return "_EFAA";
					}
					break;
				case 7:
					return "_DBAA";
				case 8:
					return "_EFAA";
				default:
					return "_AROL";
			}
			break;
		case 66:
			switch (uParam0->f_411)
			{
				case 0:
					return "_AEAA";
				case 1:
					return "_ACAA";
				case 2:
					return "_AJAA";
				case 3:
					return "_AHAA";
				case 4:
					return "_AHAA";
				case 5:
					return "_AIAA";
				case 6:
					if (uParam0->f_115)
					{
						return "_AJAA";
					}
					else
					{
						return "_AGAA";
					}
					break;
				case 7:
					return "_AUAA";
				case 8:
					return "_AHAA";
				default:
					return "_AROL";
			}
			break;
		case 2:
			switch (uParam0->f_411)
			{
				case 0:
					return "_AAAA";
				case 1:
					return "_AAAA";
				case 2:
					return "_ADAA";
				case 3:
					return "_ABAA";
				case 4:
					return "_AAAA";
				case 5:
					return "_ABAA";
				case 6:
					if (uParam0->f_115)
					{
						return "_AHAA";
					}
					else
					{
						return "_ABAA";
					}
					break;
				case 7:
					return "_BUAA";
				case 8:
					return "_ADAA";
				default:
					return "_AAAA";
			}
			break;
	}
	return "_ACRH";
}

int func_838(var uParam0)//Position - 0x11E4A
{
	switch (uParam0->f_411)
	{
		case 0:
			if (__LIB_0__::func_501("TX_OBJ_NEX_DO", 0, 0))
			{
				return 1;
			}
			break;
		case 1:
			if (__LIB_0__::func_501("TX_OBJ_TIE_DO", 0, 0))
			{
				return 1;
			}
			break;
		case 2:
			if (__LIB_0__::func_501("TX_OBJ_DL_DO", 0, 0))
			{
				return 1;
			}
			break;
		case 3:
			if ((__LIB_0__::func_501("TX_OBJ_GYB_DO", 0, 0) || __LIB_0__::func_501("TAXI_OBJ_GYB", 0, 0)) || __LIB_0__::func_501("TAXI_OBJ_GYB_2", 0, 0))
			{
				return 1;
			}
			break;
		case 4:
			if (__LIB_0__::func_501("TX_OBJ_TTB_DO", 0, 0))
			{
				return 1;
			}
			break;
		case 5:
			if ((__LIB_0__::func_501("TX_OBJ_CYI_DO", 0, 0) || __LIB_0__::func_501("TAXI_OBJ_CYI_01", 0, 0)) || __LIB_0__::func_501("TAXI_OBJ_CYI_02", 0, 0))
			{
				return 1;
			}
			break;
		case 6:
			if (((__LIB_0__::func_501("TX_OBJ_GYN_DO", 0, 0) || __LIB_0__::func_501("TAXI_OBJ_GYN", 0, 0)) || __LIB_0__::func_501("TAXI_OBJ_GYN_TG", 0, 0)) || __LIB_0__::func_501("TAXI_OBJ_GYN_GF", 0, 0))
			{
				return 1;
			}
			break;
		case 7:
			if ((__LIB_0__::func_501("TAXI_OBJ_CC1", 0, 0) || __LIB_0__::func_501("TAXI_OBJ_CC2", 0, 0)) || __LIB_0__::func_501("TAXI_OBJ_CC3", 0, 0))
			{
				return 1;
			}
			break;
		case 8:
			if ((__LIB_0__::func_501("TAXI_OBJ_FTC1", 0, 0) || __LIB_0__::func_501("TAXI_OBJ_FTC2", 0, 0)) || __LIB_0__::func_501("TAXI_OBJ_FTC3", 0, 0))
			{
				return 1;
			}
			break;
		case 9:
			if (__LIB_0__::func_501("TX_OBJ_PRO_DO", 0, 0))
			{
				return 1;
			}
			break;
	}
	return (((((__LIB_0__::func_501("TAXI_OBJ_GETRUN", 0, 0) || __LIB_0__::func_501("TAXI_OBJ_DRIVE", 0, 0)) || __LIB_0__::func_501("TAXI_OBJ_RETURN", 0, 0)) || __LIB_0__::func_501("TAXI_OBJ_POL", 0, 0)) || __LIB_0__::func_501("TAXI_OBJ_RUNOUT", 0, 0)) || __LIB_0__::func_501("TAXI_OBJ_POL", 0, 0));
}

int func_839(char* sParam0)//Position - 0x1206A
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		if (__LIB_0__::func_501(sParam0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_840(var uParam0)//Position - 0x120ED
{
	return uParam0->f_117;
}

void func_841(var uParam0, var uParam1, bool bParam2)//Position - 0x1213A
{
	if (!__LIB_0__::func_703(uParam0->f_55, 1))
	{
		switch (*uParam1)
		{
			case 0:
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_124)) && __LIB_0__::func_75())
				{
					*uParam1++;
				}
				break;
			case 1:
				if (!__LIB_0__::func_75())
				{
					StringCopy(&(uParam0->f_124), __LIB_0__::func_591(), 24);
					uParam0->f_56 = (uParam0->f_56 + uParam0->f_57);
					if (uParam0->f_56 < 0)
					{
						uParam0->f_56 = 0;
					}
					uParam0->f_57 = 0;
					*uParam1 = 0;
					if (bParam2)
					{
					}
				}
				break;
			}
	}
}

int func_842(var uParam0)//Position - 0x1356B
{
	if (uParam0->f_109 && uParam0->f_410 < 29)
	{
		return 1;
	}
	return 0;
}

void func_843(var uParam0, int iParam1, int iParam2)//Position - 0x13604
{
	uParam0->f_58 = iParam1;
	uParam0->f_59 = iParam2;
}

int func_844(int iParam0)//Position - 0x1369A
{
	return Global_113386.f_19097.f_39[iParam0];
}

void func_845(var uParam0, char* sParam1, char* sParam2, char* sParam3)//Position - 0x13802
{
	uParam0->f_122 = sParam1;
	uParam0->f_143 = sParam2;
	uParam0->f_144 = sParam3;
}

void func_846(var uParam0)//Position - 0x13953
{
	switch (uParam0->f_418.f_2)
	{
		case 2:
		case 8:
			uParam0->f_418.f_3 = 1;
			break;
		case 0:
		case 3:
		case 5:
		case 9:
		case 15:
			uParam0->f_418.f_3 = 2;
			break;
		case 4:
		case 10:
			uParam0->f_418.f_3 = 3;
			break;
		case 1:
		case 6:
		case 13:
			uParam0->f_418.f_3 = 4;
			break;
		case 11:
			uParam0->f_418.f_3 = 5;
			break;
		case 12:
		case 14:
			uParam0->f_418.f_3 = 6;
			break;
		case 7:
			uParam0->f_418.f_3 = 7;
			break;
	}
}

void func_847(var uParam0, int iParam1)//Position - 0x13AB6
{
	uParam0->f_418.f_1 = iParam1;
}

void func_848(var uParam0, int iParam1)//Position - 0x13AC7
{
	uParam0->f_418.f_2 = iParam1;
}

void func_849(struct<3> Param0, bool bParam1)//Position - 0x2515
{
	struct<3> Var0;
	struct<3> Var1;
	if (!__LIB_0__::func_78(Param0, __LIB_0__::func_613(), 0))
	{
		Var0 = { __LIB_1__::func_657(Param0, 1f, -30f, -30f, -10f) };
		Var1 = { __LIB_1__::func_657(Param0, 1f, 30f, 30f, 10f) };
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Var0, Var1, bParam1, true);
	}
}

bool func_850(var uParam0, int iParam1)//Position - 0x4AF1
{
	if (iParam1 != 1073741824)
	{
		return (__LIB_0__::func_703(uParam0->f_81, iParam1) && !__LIB_0__::func_75());
	}
	return __LIB_0__::func_75();
}

void func_851(var uParam0, int iParam1)//Position - 0x5392
{
	__LIB_0__::func_988(uParam0, iParam1);
}

void func_852(int iParam0, int iParam1)//Position - 0x53D8
{
	switch (iParam0)
	{
		case 0:
			Global_113386.f_19097.f_22[0]++;
			__LIB_0__::func_467("Fares Completed ++ = ", Global_113386.f_19097.f_22[0]);
			break;
		case 1:
			Global_113386.f_19097.f_22[1]++;
			__LIB_0__::func_467("Fares Failed ++ = ", Global_113386.f_19097.f_22[1]);
			break;
		case 2:
			Global_113386.f_19097.f_22[2]++;
			__LIB_0__::func_467("Fares Accepted ++ ", Global_113386.f_19097.f_22[2]);
			break;
		case 3:
			Global_113386.f_19097.f_22[3]++;
			__LIB_0__::func_467("Fares Expired ++ ", Global_113386.f_19097.f_22[3]);
			break;
		case 13:
			Global_113386.f_19097.f_22[13]++;
			__LIB_0__::func_467("Passengers run ++ = ", Global_113386.f_19097.f_22[13]);
			break;
		case 14:
			Global_113386.f_19097.f_22[14]++;
			__LIB_0__::func_467("Passenger Forced to Pay ++ = ", Global_113386.f_19097.f_22[14]);
			break;
		case 4:
			if (iParam1 != 0)
			{
				if (iParam1 > Global_113386.f_19097.f_22[4])
				{
					Global_113386.f_19097.f_22[4] = iParam1;
					__LIB_0__::func_467("This distance ", iParam1);
					__LIB_0__::func_467(" is longer than current best", Global_113386.f_19097.f_22[4]);
				}
				else
				{
					__LIB_0__::func_467("Longest Distance Not Beat ", Global_113386.f_19097.f_22[4]);
				}
			}
			break;
		case 5:
			Global_113386.f_19097.f_22[5] = (Global_113386.f_19097.f_22[5] + iParam1);
			__LIB_0__::func_467("Total Distance w/ Passenger = ", Global_113386.f_19097.f_22[5]);
			break;
		case 6:
			if (iParam1 == 0)
			{
				Global_113386.f_19097.f_22[6]++;
			}
			else
			{
				Global_113386.f_19097.f_22[6] = (Global_113386.f_19097.f_22[6] + iParam1);
			}
			__LIB_0__::func_467("Wanted Levels ++ = ", Global_113386.f_19097.f_22[6]);
			break;
		case 7:
			if (iParam1 > 0)
			{
				Global_113386.f_19097.f_22[7] = (Global_113386.f_19097.f_22[7] + iParam1);
			}
			else
			{
				Global_113386.f_19097.f_22[7]++;
			}
			__LIB_0__::func_467("Wanted Levels Lost = ", Global_113386.f_19097.f_22[7]);
			break;
		case 8:
			Global_113386.f_19097.f_22[8]++;
			__LIB_0__::func_467("Taxis wrecked ++ = ", Global_113386.f_19097.f_22[8]);
			break;
		case 9:
			Global_113386.f_19097.f_22[9]++;
			__LIB_0__::func_467("Horn Honked ++ = ", Global_113386.f_19097.f_22[9]);
			break;
		case 10:
			Global_113386.f_19097.f_22[10] = (Global_113386.f_19097.f_22[10] + iParam1);
			__LIB_0__::func_467("Total Money Earned = ", Global_113386.f_19097.f_22[10]);
			break;
		case 11:
			Global_113386.f_19097.f_22[11] = (Global_113386.f_19097.f_22[11] + iParam1);
			__LIB_0__::func_467("Total Tips Earned = ", Global_113386.f_19097.f_22[11]);
			break;
		case 12:
			if (iParam1 > Global_113386.f_19097.f_22[12])
			{
				Global_113386.f_19097.f_22[12] = iParam1;
				__LIB_0__::func_467("New Highest Tip = ", Global_113386.f_19097.f_22[12]);
			}
			else
			{
				__LIB_0__::func_467("Highest Tip Not Reached = ", Global_113386.f_19097.f_22[12]);
			}
			break;
	}
}

void func_853(var uParam0, int iParam1)//Position - 0x62CB
{
	int iVar0;
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (!__LIB_0__::func_701(&(uParam0->f_146[iVar0 /*3*/])))
			{
				__LIB_19__::func_933(&(uParam0->f_146[iVar0 /*3*/]));
			}
			iVar0++;
		}
	}
	else if (__LIB_0__::func_702(&(uParam0->f_146[iParam1 /*3*/])))
	{
		if (!__LIB_0__::func_701(&(uParam0->f_146[iParam1 /*3*/])))
		{
			__LIB_19__::func_933(&(uParam0->f_146[iParam1 /*3*/]));
		}
	}
}

void func_854(var uParam0, struct<3> Param1)//Position - 0x638D
{
	struct<3> Var0;
	struct<3> Var1;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false) && PED::IS_PED_SITTING_IN_VEHICLE(uParam0->f_3, uParam0->f_4))
		{
			Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, -1.78774f, -1.62399f, -0.6206f) };
			Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, 1.78498f, -1.24105f, -0.6422f) };
			if (__LIB_2__::func_837(uParam0->f_3, uParam0->f_4) == 0)
			{
				TASK::TASK_LEAVE_VEHICLE(uParam0->f_3, uParam0->f_4, 512);
			}
			else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Param1, false) < MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Param1, false) && VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(uParam0->f_3, uParam0->f_4, 1, false, false))
			{
				TASK::TASK_LEAVE_VEHICLE(uParam0->f_3, uParam0->f_4, 131072);
			}
			else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Param1, false) >= MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Param1, false) && VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(uParam0->f_3, uParam0->f_4, 2, false, false))
			{
				TASK::TASK_LEAVE_VEHICLE(uParam0->f_3, uParam0->f_4, 262144);
			}
			else
			{
				TASK::TASK_LEAVE_VEHICLE(uParam0->f_3, uParam0->f_4, 0);
			}
		}
	}
}

void func_855(var uParam0, int iParam1)//Position - 0x69BA
{
	__LIB_3__::func_128(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_856(var uParam0)//Position - 0x700D
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		(uParam0[iVar0 /*8*/])->f_6 = 0;
		(uParam0[iVar0 /*8*/])->f_7 = 0;
		StringCopy(uParam0[iVar0 /*8*/], __LIB_0__::func_591(), 24);
		iVar0++;
	}
	HUD::CLEAR_PRINTS();
	__LIB_0__::func_429();
}

void func_857(var uParam0)//Position - 0x8C77
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_4, false))
	{
		if (__LIB_0__::func_680())
		{
		}
	}
}

int func_858(var uParam0)//Position - 0x9537
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		if (__LIB_0__::func_703(uParam0->f_85, 32))
		{
			return 1;
		}
	}
	return 0;
}

void func_859(var uParam0, int iParam1, float fParam2, bool bParam3)//Position - 0x9F68
{
	int iVar0;
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (fParam2 > 0f)
			{
				__LIB_0__::func_706(&(uParam0->f_146[iVar0 /*3*/]), fParam2);
			}
			else
			{
				__LIB_1__::func_31(&(uParam0->f_146[iVar0 /*3*/]));
			}
			iVar0++;
		}
	}
	else if (fParam2 > 0f)
	{
		__LIB_0__::func_706(&(uParam0->f_146[iParam1 /*3*/]), fParam2);
	}
	else
	{
		__LIB_1__::func_31(&(uParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam3)
	{
	}
}

void func_860(bool bParam0)//Position - 0xA01A
{
	STREAMING::REQUEST_MODEL(__LIB_12__::func_850());
	if (bParam0)
	{
		STREAMING::REQUEST_ANIM_DICT("gestures@m@standing@casual");
	}
	STREAMING::REQUEST_ANIM_DICT("oddjobs@taxi@");
	STREAMING::REQUEST_ANIM_DICT("oddjobs@towingcome_here");
	STREAMING::REQUEST_ANIM_DICT("misscommon@response");
	HUD::REQUEST_ADDITIONAL_TEXT("TAXI" /* GXT: Taxi */, 2);
	if (!__LIB_0__::func_703(Global_113386.f_19097, 128))
	{
		__LIB_39__::func_780(&(Global_113386.f_19097), 128);
	}
}

int func_861(struct<3> Param0, struct<3> Param1, struct<3> Param2, struct<3> Param3)//Position - 0xBE6F
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	Param0.f_2 = 0f;
	Param1.f_2 = 0f;
	Param2.f_2 = 0f;
	Param3.f_2 = 0f;
	Var0 = { __LIB_0__::func_79(Param2 - Param1) };
	Var1 = { __LIB_0__::func_79(Param3 - Param1) };
	fVar2 = __LIB_0__::func_158(Param0, Var0);
	fVar3 = __LIB_0__::func_158(Param1, Var0);
	fVar4 = __LIB_0__::func_158(Param2, Var0);
	fVar5 = __LIB_0__::func_158(Param0, Var1);
	fVar6 = __LIB_0__::func_158(Param1, Var1);
	fVar7 = __LIB_0__::func_158(Param3, Var1);
	if (fVar3 > fVar4)
	{
		fVar8 = fVar3;
		fVar3 = fVar4;
		fVar4 = fVar8;
	}
	if (fVar2 < fVar3 || fVar2 > fVar4)
	{
		return 0;
	}
	if (fVar6 > fVar7)
	{
		fVar9 = fVar6;
		fVar6 = fVar7;
		fVar7 = fVar9;
	}
	if (fVar5 < fVar6 || fVar5 > fVar7)
	{
		return 0;
	}
	return 1;
}

struct<6> func_862(var uParam0)//Position - 0xDAA8
{
	int iVar0;
	struct<6> Var1;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (__LIB_0__::func_703((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			Var1 = { *(uParam0[iVar0 /*8*/]) };
			__LIB_39__::func_780(&((uParam0[iVar0 /*8*/])->f_7), 4);
		}
		iVar0++;
	}
	return Var1;
}

int func_863(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x12EAB
{
	int iVar0;
	int iVar1;
	if (bParam3)
	{
		if (!bLocal_73)
		{
			iLocal_74 = ENTITY::GET_ENTITY_HEALTH(iParam0);
			bLocal_73 = true;
		}
		iLocal_75 = ENTITY::GET_ENTITY_HEALTH(iParam0);
		iLocal_76 = (iLocal_74 - iLocal_75);
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, true))
			{
				if (IntToFloat(iLocal_76) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_73)
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), true))
			{
				if (IntToFloat(iLocal_76) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), true))
	{
		return 1;
	}
	if (!bParam3)
	{
		iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (!ENTITY::IS_ENTITY_DEAD(iVar1, false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar1, true))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (PED::IS_PED_BEING_JACKED(iParam0))
			{
				if (PED::GET_PEDS_JACKER(iParam0) == PLAYER::PLAYER_PED_ID())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 10f, 10f, 10f, false, true, 0))
			{
				if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
			}
		}
	}
	if (PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::WAS_PED_KILLED_BY_STEALTH(iParam0))
		{
			return 1;
		}
	}
	if (__LIB_14__::func_536(PLAYER::PLAYER_PED_ID(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (PED::IS_PED_RAGDOLL(iParam0) && __LIB_14__::func_556(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(iParam0, false)))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0))
		{
			return 1;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, PLAYER::PLAYER_PED_ID(), true))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_864(var uParam0, int iParam1)//Position - 0x465F
{
	if (!__LIB_0__::func_702(&(uParam0->f_2)))
	{
		__LIB_1__::func_31(&(uParam0->f_2));
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(14);
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || uParam0->f_8)
		{
			if (!__LIB_0__::func_702(&(uParam0->f_5)))
			{
				__LIB_1__::func_31(&(uParam0->f_5));
				__LIB_1__::func_216(uParam0, 1051260355);
			}
		}
		if (__LIB_0__::func_702(&(uParam0->f_5)))
		{
			if (__LIB_3__::func_108(&(uParam0->f_5)) > 0.33f)
			{
				__LIB_1__::func_377(&(uParam0->f_5));
				return 0;
			}
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (__LIB_3__::func_108(&(uParam0->f_2)) * 1000f) > SYSTEM::TO_FLOAT(uParam0->f_1)
	{
		if (!__LIB_0__::func_702(&(uParam0->f_5)))
		{
			__LIB_1__::func_31(&(uParam0->f_5));
			__LIB_1__::func_216(uParam0, 1051260355);
		}
		else if (__LIB_3__::func_108(&(uParam0->f_5)) > 0.33f)
		{
			__LIB_1__::func_377(&(uParam0->f_2));
			return 0;
		}
	}
	return 1;
}

void func_865(char* sParam0)//Position - 0xD0AC
{
	switch (__LIB_0__::func_216(PLAYER::PLAYER_PED_ID()))
	{
		case 0:
			StringConCat(sParam0, "M", 24);
			break;
		case 2:
			StringConCat(sParam0, "T", 24);
			break;
		case 1:
			StringConCat(sParam0, "F", 24);
			break;
		default:
			StringConCat(sParam0, "M", 24);
			break;
	}
}

int func_866()//Position - 0x1A6
{
	int iVar0;
	int iVar1;
	iVar1 = __LIB_0__::func_216(PLAYER::PLAYER_PED_ID());
	if (iVar1 == 0)
	{
		iVar0 = joaat("SP0_DIST_DRIVING_CAR");
	}
	else if (iVar1 == 2)
	{
		iVar0 = joaat("SP2_DIST_DRIVING_CAR");
	}
	else if (iVar1 == 1)
	{
		iVar0 = joaat("SP1_DIST_DRIVING_CAR");
	}
	else
	{
		iVar0 = joaat("SP0_DIST_DRIVING_CAR");
	}
	return iVar0;
}

void func_867(var uParam0)//Position - 0x56E5
{
	PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
	__LIB_39__::func_805(uParam0, 1000);
}

int func_868(var uParam0)//Position - 0x5C13
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (!PED::IS_PED_INJURED(uParam0->f_3))
		{
			if ((PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_3) && (MISC::GET_GAME_TIMER() - iLocal_81) > 500) || PED::IS_PED_IN_VEHICLE(uParam0->f_3, uParam0->f_4, true))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_869(int iParam0)//Position - 0x6706
{
	switch (iParam0)
	{
		case 1:
			return 2;
		case 2:
			return 3;
		case 0:
			return 1;
		case -1:
			return 0;
		default:
	}
	return 2;
}

void func_870(var uParam0, struct<3> Param1, struct<3> Param2, float fParam3)//Position - 0x673E
{
	if (!CAM::DOES_CAM_EXIST(*uParam0))
	{
		*uParam0 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Param1, Param2, fParam3, false, 2);
	}
}

int func_871(int iParam0, int iParam1)//Position - 0x6C7C
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	iVar2 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0);
	Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, true)) };
	if (ENTITY::GET_ENTITY_MODEL(iParam0) != joaat("vacca"))
	{
	}
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("sentinel2"))
	{
		iVar2 = 1;
	}
	if (iVar2 == 1)
	{
		iVar1 = 0;
	}
	else if (Var0.f_0 > 0f)
	{
		if (VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(iParam1, iParam0, 2, false, false))
		{
			iVar1 = 2;
		}
		else if (VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(iParam1, iParam0, 1, false, false))
		{
			iVar1 = 1;
		}
		else
		{
			iVar1 = -2;
		}
	}
	else if (VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(iParam1, iParam0, 1, false, false))
	{
		iVar1 = 1;
	}
	else if (VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(iParam1, iParam0, 2, false, false))
	{
		iVar1 = 2;
	}
	else
	{
		iVar1 = -2;
	}
	return iVar1;
}

float func_872(var uParam0, int iParam1)//Position - 0x72BC
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		if (__LIB_39__::func_823(uParam0))
		{
			return __LIB_0__::func_76(uParam0->f_4, iParam1, 1);
		}
	}
	return 0f;
}

int func_873(var uParam0, var uParam1)//Position - 0x7D99
{
	uParam1 = uParam1;
	__LIB_39__::func_813(uParam0, 11);
	return 1;
}

void func_874(var uParam0, struct<3> Param1)//Position - 0x8779
{
	uParam0->f_51[0] = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(Param1, 20f, 5f, false);
}

void func_875(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0xD6BC
{
	float fVar0;
	int iVar1;
	int iVar2;
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = SYSTEM::TO_FLOAT(iVar2);
		iVar1 = SYSTEM::ROUND(SYSTEM::POW(2f, fVar0));
		if (!__LIB_0__::func_703(*uParam0, iVar1))
		{
			__LIB_0__::func_989(uParam0, iVar1);
			if (bParam5)
			{
				StringConCat(sParam2, "_", 24);
			}
			StringIntConCat(sParam2, iVar2 + 1, 24);
			if ((*iParam3)[iVar2])
			{
				__LIB_39__::func_807(sParam2);
			}
			if (bParam4)
			{
				if (iVar2 == (iParam1 - 1))
				{
					*uParam0 = 0;
				}
			}
			return;
		}
		iVar2++;
	}
}

void func_876(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0xE4D9
{
	float fVar0;
	int iVar1;
	int iVar2;
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = SYSTEM::TO_FLOAT(iVar2);
		iVar1 = SYSTEM::ROUND(SYSTEM::POW(2f, fVar0));
		if (!__LIB_0__::func_703(*uParam0, iVar1))
		{
			__LIB_0__::func_989(uParam0, iVar1);
			if (bParam5)
			{
				if (!bParam4)
				{
					StringIntConCat(sParam2, iVar2 + 1, 24);
					__LIB_39__::func_807(sParam2);
				}
				else
				{
					__LIB_39__::func_807(sParam2);
				}
			}
			else
			{
				if (bParam4)
				{
					StringConCat(sParam2, "_", 24);
				}
				StringIntConCat(sParam2, iVar2 + 1, 24);
			}
			if (bParam3)
			{
				if (iVar2 == (iParam1 - 1))
				{
					*uParam0 = 0;
				}
			}
			return;
		}
		iVar2++;
	}
}

void func_877(int iParam0)//Position - 0x922
{
	var uVar0;
	if (iLocal_57[0] != 0)
	{
		MemCopy(&uVar0, {__LIB_39__::func_782(iParam0)}, 6);
		if (!MISC::IS_STRING_NULL(&uVar0))
		{
		}
	}
}

int func_878()//Position - 0xE1A
{
	if (!__LIB_39__::func_785() && !__LIB_3__::func_100())
	{
		if (!PLAYER::IS_PLAYER_SCRIPT_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
		{
			return 1;
		}
	}
	return 0;
}

void func_879(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, char* sParam7, int iParam8, int iParam9)//Position - 0x35AD
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, __LIB_39__::func_788());
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam9);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam7);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam6);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam5);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam4);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	__LIB_1__::func_31(&(uParam0->f_2));
	uParam0->f_1 = iParam8;
	uParam0->f_9 = 1;
}

void func_880(var uParam0)//Position - 0x36CC
{
	int iVar0;
	Local_161.f_1 = SYSTEM::TO_FLOAT(uParam0->f_50);
	Local_161.f_2 = SYSTEM::TO_FLOAT(uParam0->f_56);
	__LIB_39__::func_852(11, uParam0->f_56);
	__LIB_39__::func_852(12, uParam0->f_56);
	iLocal_57[1] = uParam0->f_56;
	iLocal_57[2] = uParam0->f_56;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_60)
	{
		Local_161.f_4[iVar0 /*3*/] = { uParam0->f_60[iVar0 /*3*/] };
		if (BitTest(Local_161.f_4[iVar0 /*3*/], 2))
		{
			Local_161.f_3 = (Local_161.f_3 + IntToFloat(uParam0->f_60[iVar0 /*3*/].f_1));
		}
		iVar0++;
	}
	Local_161.f_0 = uParam0->f_411;
	Local_161.f_20 = ((Local_161.f_1 + Local_161.f_2) + Local_161.f_3);
}

void func_881(var uParam0)//Position - 0x3EAF
{
	if (uParam0->f_56 >= uParam0->f_59)
	{
		uParam0->f_56 = SYSTEM::CEIL((IntToFloat(uParam0->f_50) * 0.4f));
	}
	else if (uParam0->f_56 < uParam0->f_59 && uParam0->f_56 >= uParam0->f_58)
	{
		uParam0->f_56 = SYSTEM::CEIL((IntToFloat(uParam0->f_50) * 0.15f));
	}
	else
	{
		uParam0->f_56 = 0;
	}
	if (!__LIB_0__::func_703(uParam0->f_55, 1))
	{
		__LIB_39__::func_780(&(uParam0->f_55), 1);
	}
}

void func_882(var uParam0)//Position - 0x3FDA
{
	float fVar0;
	fVar0 = uParam0->f_41;
	fVar0 = __LIB_27__::func_552(fVar0);
	iLocal_57[4] = SYSTEM::CEIL(fVar0);
	iLocal_57[5] = SYSTEM::CEIL(fVar0);
	__LIB_39__::func_852(4, SYSTEM::CEIL(fVar0));
	__LIB_39__::func_852(5, SYSTEM::CEIL(fVar0));
	uParam0->f_50 = SYSTEM::CEIL((fVar0 * 100f));
}

int func_883(var uParam0)//Position - 0x573D
{
	struct<3> Var0;
	struct<6> Var1;
	StringCopy(&Var0, uParam0->f_143, 24);
	if (__LIB_0__::func_75())
	{
		Var1 = { __LIB_0__::func_486() };
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
		{
			StringConCat(&Var0, "_obj1", 24);
			if (MISC::ARE_STRINGS_EQUAL(&Var1, &Var0))
			{
				return 1;
			}
			StringCopy(&Var0, uParam0->f_143, 24);
			StringConCat(&Var0, "_gret1", 24);
			__LIB_39__::func_807(&Var0);
			if (MISC::ARE_STRINGS_EQUAL(&Var1, &Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_884(var uParam0)//Position - 0x6769
{
	float fVar0;
	struct<3> Var1;
	fVar0 = 0f;
	Var1 = { __LIB_0__::func_613() };
	if (uParam0->f_7 == 2)
	{
		Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, 0.773f, -0.646f, -0.6422f) };
	}
	else
	{
		Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, -0.773f, -0.646f, -0.6422f) };
	}
	fVar0 = __LIB_0__::func_932(ENTITY::GET_ENTITY_COORDS(uParam0->f_3, true), Var1);
	return fVar0;
}

int func_885(var uParam0, int iParam1)//Position - 0x756D
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
				bVar2 = __LIB_39__::func_777(iVar0);
				bVar3 = true;
				if (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((iVar1 == joaat("rhino") || iVar1 == joaat("ratloader")) || iVar1 == joaat("surfer")) || iVar1 == joaat("surfer2")) || iVar1 == joaat("armytanker")) || iVar1 == joaat("barracks")) || iVar1 == joaat("barracks2")) || iVar1 == joaat("crusader")) || iVar1 == joaat("utillitruck")) || iVar1 == joaat("utillitruck2")) || iVar1 == joaat("utillitruck3")) || iVar1 == joaat("airtug")) || iVar1 == joaat("caddy")) || iVar1 == joaat("caddy2")) || iVar1 == joaat("dloader")) || iVar1 == joaat("docktug")) || iVar1 == joaat("flatbed")) || iVar1 == joaat("ripley")) || iVar1 == joaat("romero")) || iVar1 == joaat("towtruck")) || iVar1 == joaat("towtruck2")) || iVar1 == joaat("airbus")) || iVar1 == joaat("bus")) || iVar1 == joaat("coach")) || iVar1 == joaat("rentalbus")) || iVar1 == joaat("tourbus")) || iVar1 == joaat("riot")) || iVar1 == joaat("trash")) || iVar1 == joaat("benson")) || iVar1 == joaat("biff")) || iVar1 == joaat("hauler")) || iVar1 == joaat("packer")) || iVar1 == joaat("phantom")) || iVar1 == joaat("pounder")) || iVar1 == joaat("bulldozer")) || iVar1 == joaat("handler")) || iVar1 == joaat("tiptruck2")) || iVar1 == joaat("cutter")) || iVar1 == joaat("dump")) || iVar1 == joaat("mixer")) || iVar1 == joaat("mixer2")) || iVar1 == joaat("rubble")) || iVar1 == joaat("scrap")) || iVar1 == joaat("tiptruck")) || iVar1 == joaat("camper")) || iVar1 == joaat("taco")) || iVar1 == joaat("boxville")) || iVar1 == joaat("boxville2")) || iVar1 == joaat("boxville3")) || iVar1 == joaat("burrito")) || iVar1 == joaat("burrito2")) || iVar1 == joaat("burrito3")) || iVar1 == joaat("burrito4")) || iVar1 == joaat("gburrito")) || iVar1 == joaat("journey")) || iVar1 == joaat("mule")) || iVar1 == joaat("mule2")) || iVar1 == joaat("pony")) || iVar1 == joaat("rumpo")) || iVar1 == joaat("rumpo2")) || iVar1 == joaat("speedo")) || iVar1 == joaat("speedo2")) || iVar1 == joaat("youga")) || iVar1 == joaat("mower")) || iVar1 == joaat("tractor")) || iVar1 == joaat("tractor2")) || iVar1 == joaat("fbi")) || iVar1 == joaat("fbi2")) || iVar1 == joaat("pranger")) || iVar1 == joaat("ambulance")) || iVar1 == joaat("dilettante2")) || iVar1 == joaat("firetruk")) || iVar1 == joaat("lguard")) || iVar1 == joaat("dune")) || iVar1 == joaat("pbus")) || iVar1 == joaat("police")) || iVar1 == joaat("police2")) || iVar1 == joaat("police3")) || iVar1 == joaat("police4")) || iVar1 == joaat("policeb")) || iVar1 == joaat("policet")) || iVar1 == joaat("sheriff")) || iVar1 == joaat("sheriff2")) || iVar1 == joaat("stockade"))
				{
					bVar3 = false;
				}
				if (uParam0->f_411 == 7)
				{
					if (iVar1 == joaat("bodhi2"))
					{
						bVar3 = false;
					}
				}
				bVar4 = false;
				if (VEHICLE::IS_THIS_MODEL_A_CAR(iVar1))
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == PLAYER::PLAYER_PED_ID())
					{
						bVar4 = true;
					}
				}
				bVar5 = true;
				if (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iVar0) < iParam1)
				{
					bVar5 = false;
				}
				if (!bVar2)
				{
					if (!__LIB_0__::func_703(uParam0->f_44, 64))
					{
						if (HUD::HAS_ADDITIONAL_TEXT_LOADED(2))
						{
							__LIB_0__::func_151("TX_VIP_DMGD", -1);
							if (__LIB_0__::func_1("TX_VIP_DMGD"))
							{
								__LIB_39__::func_780(&(uParam0->f_44), 64);
							}
						}
					}
					return 0;
				}
				else if (!bVar4 || !bVar3)
				{
					if (!__LIB_0__::func_703(uParam0->f_44, 32))
					{
						if (HUD::HAS_ADDITIONAL_TEXT_LOADED(2))
						{
							__LIB_0__::func_151("TX_VIP_CAR", -1);
							if (__LIB_0__::func_1("TX_VIP_CAR"))
							{
								__LIB_39__::func_780(&(uParam0->f_44), 32);
							}
						}
					}
					return 0;
				}
				else if (!bVar5)
				{
					if (!__LIB_0__::func_703(uParam0->f_44, 16))
					{
						if (HUD::HAS_ADDITIONAL_TEXT_LOADED(2))
						{
							__LIB_0__::func_151("TX_VIP_SMALL", -1);
							if (__LIB_0__::func_1("TX_VIP_SMALL"))
							{
								__LIB_39__::func_780(&(uParam0->f_44), 16);
							}
						}
					}
					return 0;
				}
				return 1;
			}
		}
		else
		{
			__LIB_39__::func_851(&(uParam0->f_44), 16);
			__LIB_39__::func_851(&(uParam0->f_44), 64);
			__LIB_39__::func_851(&(uParam0->f_44), 32);
		}
	}
	return 0;
}

int func_886(var uParam0)//Position - 0x7CBD
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		if (__LIB_39__::func_814(uParam0->f_4))
		{
			__LIB_39__::func_813(uParam0, 1);
			return 1;
		}
	}
	return 0;
}

int func_887(var uParam0)//Position - 0x7EEA
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		if (__LIB_39__::func_817(uParam0->f_4))
		{
			__LIB_39__::func_813(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

void func_888(var uParam0, int iParam1, bool bParam2)//Position - 0x96A9
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_3, false);
		ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(uParam0->f_3);
		PED::SET_PED_FLEE_ATTRIBUTES(uParam0->f_3, 3, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_3, 17, true);
		TASK::CLEAR_PED_TASKS(uParam0->f_3);
		if ((__LIB_2__::func_485(uParam0->f_3, uParam0->f_29, 1) <= 200f && !__LIB_0__::func_86(uParam0->f_29)) && !bParam2)
		{
			__LIB_39__::func_828(uParam0);
		}
		else
		{
			PED::SET_PED_FLEE_ATTRIBUTES(uParam0->f_3, 1024, true);
			PED::SET_PED_FLEE_ATTRIBUTES(uParam0->f_3, 131072, true);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, iParam1);
			if (uParam0->f_415 == 8)
			{
				TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
			}
			else
			{
				TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
			}
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(uParam0->f_3, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		}
		PED::SET_PED_KEEP_TASK(uParam0->f_3, true);
	}
}

void func_889(var uParam0)//Position - 0x9EFF
{
	int iVar0;
	iVar0 = __LIB_39__::func_831(uParam0);
	if (iVar0 > -1)
	{
		__LIB_39__::func_851(&((uParam0[iVar0 /*8*/])->f_7), 2);
		__LIB_39__::func_851(&((uParam0[iVar0 /*8*/])->f_7), 4);
		__LIB_39__::func_780(&((uParam0[iVar0 /*8*/])->f_7), 8);
		StringCopy(uParam0[iVar0 /*8*/], __LIB_0__::func_591(), 24);
	}
}

void func_890(char[24] cParam0, var uParam1)//Position - 0xD73D
{
	int iVar0;
	iVar0 = __LIB_39__::func_834(uParam1);
	if (iVar0 > -1)
	{
		*(uParam1[iVar0 /*8*/]) = { cParam0 };
		__LIB_39__::func_780(&((uParam1[iVar0 /*8*/])->f_7), 2);
	}
}

void func_891(var uParam0, char[12] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char* sParam5)//Position - 0xD9BD
{
	__LIB_39__::func_859(uParam0, 16, 0, 0);
	__LIB_39__::func_859(uParam0, 17, 0f, 1);
	StringConCat(&cParam1, sParam5, 24);
	if (!PED::IS_PED_INJURED(uParam0->f_3))
	{
		AUDIO::INTERRUPT_CONVERSATION(uParam0->f_3, &cParam1, __LIB_39__::func_836(uParam0));
	}
}

void func_892(int iParam0, var uParam1, var uParam2, var uParam3, char[24] cParam4, bool bParam5)//Position - 0xDE7B
{
	if (iParam0 == 0)
	{
		if (__LIB_0__::func_703(*uParam2, 2))
		{
			if (!bParam5)
			{
				*uParam1 = (*uParam1 - 2);
			}
			else
			{
				*uParam1 += 3;
			}
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 8)
	{
		if (__LIB_0__::func_703(*uParam2, 1073741824))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 1)
	{
		if (__LIB_0__::func_703(*uParam2, 4))
		{
			if (!__LIB_0__::func_703(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				__LIB_39__::func_851(uParam2, 4096);
			}
		}
		else if (__LIB_0__::func_703(*uParam2, 8))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 5)
	{
		if (__LIB_0__::func_703(*uParam2, 512))
		{
			if (!__LIB_0__::func_703(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				__LIB_39__::func_851(uParam2, 4096);
			}
		}
	}
	else if (iParam0 == 2)
	{
		if (__LIB_0__::func_703(*uParam2, 16))
		{
			if (!__LIB_0__::func_703(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				__LIB_39__::func_851(uParam2, 4096);
			}
		}
		else if (__LIB_0__::func_703(*uParam2, 32))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 3)
	{
		if (__LIB_0__::func_703(*uParam2, 64))
		{
			if (!__LIB_0__::func_703(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else
			{
				__LIB_39__::func_851(uParam2, 4096);
			}
		}
		else if (__LIB_0__::func_703(*uParam2, 128))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 4)
	{
		if (__LIB_0__::func_703(*uParam2, 256))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 6)
	{
		if (__LIB_0__::func_703(*uParam2, 1024))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 7)
	{
		if (__LIB_0__::func_703(*uParam2, 2048))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 9)
	{
		if (__LIB_0__::func_703(*uParam2, 8192))
		{
			if (__LIB_0__::func_703(*uParam2, 2097152))
			{
				*uParam1 += 3;
				*uParam3 = { cParam4 };
			}
			else if (__LIB_0__::func_703(*uParam2, 4194304))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 10)
	{
		if (__LIB_0__::func_703(*uParam2, 16384))
		{
			if (__LIB_0__::func_703(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
			else
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 11)
	{
		if (__LIB_0__::func_703(*uParam2, 32768))
		{
			if (__LIB_0__::func_703(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (__LIB_0__::func_703(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 12)
	{
		if (__LIB_0__::func_703(*uParam2, 65536))
		{
			if (__LIB_0__::func_703(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 13)
	{
		if (__LIB_0__::func_703(*uParam2, 131072))
		{
			if (__LIB_0__::func_703(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (__LIB_0__::func_703(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 14)
	{
		if (__LIB_0__::func_703(*uParam2, 262144))
		{
			if (__LIB_0__::func_703(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (__LIB_0__::func_703(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 15)
	{
		if (__LIB_0__::func_703(*uParam2, 524288))
		{
			if (__LIB_0__::func_703(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (__LIB_0__::func_703(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 16)
	{
		if (__LIB_0__::func_703(*uParam2, 1048576))
		{
			if (__LIB_0__::func_703(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (__LIB_0__::func_703(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 21)
	{
		if (__LIB_0__::func_703(*uParam2, 8388608))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 22)
	{
		if (__LIB_0__::func_703(*uParam2, 16777216))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 23)
	{
		if (__LIB_0__::func_703(*uParam2, 33554432))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 17)
	{
		if (__LIB_0__::func_703(*uParam2, 67108864))
		{
			if (__LIB_0__::func_703(*uParam2, 67108864))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 18)
	{
		if (__LIB_0__::func_703(*uParam2, 134217728))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 20)
	{
		if (__LIB_0__::func_703(*uParam2, 536870912))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 19)
	{
		if (__LIB_0__::func_703(*uParam2, 268435456))
		{
			*uParam1++;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 25)
	{
		if (__LIB_0__::func_703(*uParam2, 32768))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
}

void func_893(var uParam0)//Position - 0x110B7
{
	if (!__LIB_0__::func_703(uParam0->f_98, 2))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
		{
			if (__LIB_2__::func_485(uParam0->f_4, uParam0->f_17, 1) < 180f)
			{
				MISC::CLEAR_AREA_OF_VEHICLES(uParam0->f_17, 25f, false, false, false, false, false, false, 0);
				__LIB_39__::func_780(&(uParam0->f_98), 2);
			}
		}
	}
}

void func_894(var uParam0)//Position - 0x113A3
{
	switch (__LIB_39__::func_787(uParam0))
	{
		case 0:
			__LIB_39__::func_845(uParam0, "EXC", "Txm2" /* GXT: Taxi - I Need Excitement! */, "Txm2aud");
			uParam0->f_101 = 2;
			break;
		case 1:
			__LIB_39__::func_845(uParam0, "TIE", "Txm1" /* GXT: Taxi - Take It Easy */, "txm1aud");
			uParam0->f_101 = 1;
			break;
		case 2:
			__LIB_39__::func_845(uParam0, "DED", "Txm3" /* GXT: Taxi - Deadline */, "Txm3aud");
			uParam0->f_101 = 1;
			break;
		case 3:
			__LIB_39__::func_845(uParam0, "GYB", "Txm12" /* GXT: Taxi - Got Your Back */, "Txm12au");
			uParam0->f_101 = 2;
			break;
		case 4:
			__LIB_39__::func_845(uParam0, "TTB", "Txm6" /* GXT: Taxi - Take Me to the Best... */, "Txm6aud");
			uParam0->f_101 = 2;
			break;
		case 5:
			__LIB_39__::func_845(uParam0, "CUI", "Txm8" /* GXT: Taxi - I'll Cut You In */, "Txm8aud");
			uParam0->f_101 = 1;
			break;
		case 6:
			__LIB_39__::func_845(uParam0, "GYN", "Txm9" /* GXT: Taxi - Got You Now */, "Txm9aud");
			uParam0->f_101 = 1;
			break;
		case 7:
			__LIB_39__::func_845(uParam0, "TCC", "Txm10" /* GXT: Taxi - Clown Car */, "Txm10au");
			uParam0->f_101 = 2;
			break;
		case 8:
			__LIB_39__::func_845(uParam0, "TFC", "Txm4" /* GXT: Taxi - Follow That Car! */, "Txm4aud");
			uParam0->f_101 = 1;
			break;
		case 9:
			__LIB_39__::func_845(uParam0, "PRO", "txmP", "TxmPaud");
			uParam0->f_101 = 1;
			break;
	}
}

void func_895(var uParam0)//Position - 0x11510
{
	int iVar0;
	switch (uParam0->f_411)
	{
		case 0:
			__LIB_39__::func_848(uParam0, 3);
			__LIB_39__::func_847(uParam0, 14);
			break;
		case 1:
			__LIB_39__::func_848(uParam0, 14);
			__LIB_39__::func_847(uParam0, 8);
			break;
		case 2:
			__LIB_39__::func_848(uParam0, 8);
			__LIB_39__::func_847(uParam0, 7);
			break;
		case 3:
			__LIB_39__::func_848(uParam0, 15);
			__LIB_39__::func_847(uParam0, 6);
			break;
		case 4:
			__LIB_39__::func_848(uParam0, 0);
			__LIB_39__::func_847(uParam0, 3);
			break;
		case 5:
			__LIB_39__::func_848(uParam0, 6);
			__LIB_39__::func_847(uParam0, 7);
			break;
		case 6:
			__LIB_39__::func_848(uParam0, 8);
			__LIB_39__::func_847(uParam0, 15);
			break;
		case 7:
			__LIB_39__::func_848(uParam0, 8);
			__LIB_39__::func_847(uParam0, 14);
			break;
		case 8:
			__LIB_39__::func_848(uParam0, 7);
			__LIB_39__::func_847(uParam0, 15);
			break;
		case 9:
			__LIB_39__::func_848(uParam0, MISC::GET_RANDOM_INT_IN_RANGE(0, 17));
			iVar0 = __LIB_16__::func_336((uParam0->f_418.f_2 + MISC::GET_RANDOM_INT_IN_RANGE(1, 17)), 0, 16);
			__LIB_39__::func_847(uParam0, iVar0);
			__LIB_39__::func_846(uParam0);
			uParam0->f_418.f_7 = 1;
			uParam0->f_418.f_8 = 1;
			break;
	}
}

void func_896(var uParam0)//Position - 0x39F8
{
	struct<3> Var0;
	if (__LIB_0__::func_86(uParam0->f_29))
	{
		Var0 = { uParam0->f_17 };
	}
	else
	{
		Var0 = { uParam0->f_29 };
	}
	__LIB_39__::func_854(uParam0, Var0);
}

void func_897(var uParam0)//Position - 0x4F0F
{
	__LIB_39__::func_859(uParam0, 14, 0, 0);
	__LIB_39__::func_775();
}

void func_898()//Position - 0x6934
{
	if (__LIB_39__::func_785())
	{
		MISC::TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("appInternet");
	}
	if (__LIB_3__::func_100())
	{
		MISC::TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("appCamera");
	}
	if (__LIB_0__::func_77(1))
	{
		__LIB_0__::func_366(0);
	}
}

void func_899(var uParam0, int iParam1, bool bParam2)//Position - 0x737E
{
	uParam0->f_110 = iParam1;
	if (bParam2)
	{
		__LIB_0__::func_429();
		__LIB_39__::func_859(uParam0, 16, 4f, 0);
		HUD::CLEAR_PRINTS();
	}
}

int func_900(var uParam0)//Position - 0x85C2
{
	if (!PED::IS_PED_INJURED(uParam0->f_3))
	{
		uParam0->f_8 = __LIB_0__::func_639(uParam0->f_3, 0, 0);
		HUD::SET_GPS_FLAGS(1, 0f);
		HUD::SET_BLIP_ROUTE(uParam0->f_8, true);
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_8, "TAXI_BLIP_PASS" /* GXT: Passenger */);
		TASK::TASK_LOOK_AT_ENTITY(uParam0->f_3, PLAYER::PLAYER_PED_ID(), -1, 2048, 4);
	}
	return 1;
}

bool func_901(int iParam0)//Position - 0xF34F
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	float fVar9;
	PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(iParam0, true), 1, &Var0, 1, 3f, 0f);
	PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(iParam0, true), 2, &Var1, 1, 3f, 0f);
	PATHFIND::GET_POSITION_BY_SIDE_OF_ROAD(Var0, -1, &Var2);
	fVar9 = SYSTEM::VMAG(Var2 - Var0);
	Var3 = { __LIB_0__::func_79((Var1.f_0 - Var0.f_0), (Var1.f_1 - Var0.f_1), 0f) };
	Var4 = { __LIB_1__::func_302(Var3, 0) * Vector(fVar9, fVar9, fVar9) };
	Var3 = { Var3 * Vector(2f, 2f, 2f) };
	Var5 = { Var0 - Var3 + Var4 };
	Var6 = { Var0 - Var3 - Var4 };
	Var7 = { Var1 + Var3 + Var4 };
	Var8 = { Var1 + Var3 - Var4 };
	Var8 = { Var8 };
	return __LIB_39__::func_861(ENTITY::GET_ENTITY_COORDS(iParam0, true), Var5, Var6, Var7);
}

int func_902(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x10A56
{
	int iVar0;
	bool bVar1;
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::IS_ENTITY_DEAD(iVar0, false) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (!__LIB_0__::func_703(*uParam2, 1))
		{
			if (__LIB_14__::func_574(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!__LIB_0__::func_703(*uParam2, 2))
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!__LIB_0__::func_703(*uParam2, 4))
		{
			if (__LIB_14__::func_585(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!__LIB_0__::func_703(*uParam2, 8))
		{
			if (__LIB_14__::func_537(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !__LIB_0__::func_703(*uParam2, 128);
		if (bParam4)
		{
			if (__LIB_39__::func_863(iParam0, iParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!__LIB_0__::func_703(*uParam2, 16))
		{
			if (__LIB_39__::func_863(iParam0, iParam1, 0, bParam6, bVar1, bParam8))
			{
				*uParam3 = 16;
				return 1;
			}
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (iParam7 && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, true))
		{
			*uParam3 = 16;
			return 1;
		}
	}
	return 0;
}

void func_903(var uParam0)//Position - 0xF5
{
	uParam0->f_2 = PLAYER::PLAYER_PED_ID();
	__LIB_39__::func_781(&(uParam0->f_244));
	uParam0->f_428 = __LIB_39__::func_866();
}

void func_904(var uParam0, char* sParam1)//Position - 0x9982
{
	if (__LIB_39__::func_829(uParam0))
	{
		__LIB_2__::func_859(&(uParam0->f_244), uParam0->f_144, sParam1, 9, 0, 0, 0);
	}
}

void func_905(var uParam0, int iParam1, struct<3> Param2, var uParam3, var uParam4, var uParam5, char* sParam6, bool bParam7, int iParam8)//Position - 0xD4D8
{
	__LIB_39__::func_780(&(uParam0->f_82), iParam1);
	__LIB_39__::func_859(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam6, 24);
	if (bParam7)
	{
		__LIB_39__::func_807(&Param2);
	}
	__LIB_2__::func_859(&(uParam0->f_244), uParam0->f_144, &Param2, iParam8, 0, 0, 0);
}

void func_906(var uParam0, struct<6> Param1, int iParam2)//Position - 0xD519
{
	char cVar0[24];
	cVar0 = { Param1 };
	if (!__LIB_0__::func_703(uParam0->f_82, 64))
	{
		__LIB_39__::func_780(&(uParam0->f_82), 64);
		StringConCat(&cVar0, "_1", 24);
	}
	else if (!__LIB_0__::func_703(uParam0->f_82, 128))
	{
		__LIB_39__::func_780(&(uParam0->f_82), 128);
		StringConCat(&cVar0, "_2", 24);
	}
	else
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, MISC::GET_RANDOM_INT_IN_RANGE(1, 3), 24);
	}
	__LIB_14__::func_535(&(uParam0->f_244), uParam0->f_144, &Param1, &cVar0, iParam2, 0, 0);
	__LIB_39__::func_859(uParam0, 16, 0, 0);
}

void func_907(var uParam0, int iParam1, struct<3> Param2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char* sParam6, int iParam7, bool bParam8)//Position - 0xD5A0
{
	__LIB_39__::func_780(&(uParam0->f_82), iParam1);
	__LIB_39__::func_859(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam6, 24);
	if ((((uParam0->f_411 == 1 || uParam0->f_411 == 0) || uParam0->f_411 == 5) || uParam0->f_411 == 8) || uParam0->f_411 == 2)
	{
		if (bParam8)
		{
			__LIB_39__::func_807(&Param2);
		}
	}
	__LIB_2__::func_859(&(uParam0->f_244), uParam0->f_144, &Param2, iParam7, 0, 0, 0);
}

void func_908(var uParam0, int iParam1, struct<3> Param2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char* sParam6, int iParam7)//Position - 0xD686
{
	__LIB_39__::func_780(&(uParam0->f_81), iParam1);
	__LIB_39__::func_859(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam6, 24);
	__LIB_2__::func_859(&(uParam0->f_244), uParam0->f_144, &Param2, iParam7, 0, 0, 0);
}

void func_909(var uParam0, int iParam1, struct<3> Param2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char* sParam6, bool bParam7, int iParam8)//Position - 0xD950
{
	__LIB_39__::func_780(&(uParam0->f_81), iParam1);
	__LIB_39__::func_859(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam6, 24);
	if (bParam7)
	{
		__LIB_39__::func_807(&Param2);
	}
	__LIB_2__::func_859(&(uParam0->f_244), uParam0->f_144, &Param2, iParam8, 0, 0, 0);
}

void func_910(var uParam0)//Position - 0x1619
{
	__LIB_39__::func_852(0, 0);
	if (uParam0->f_411 != 9)
	{
		__LIB_38__::func_753(1);
		__LIB_0__::func_746(15, 1);
	}
	__LIB_39__::func_780(&(Global_113386.f_19097), 1024);
	if (!__LIB_0__::func_703(Global_113386.f_19097, 64))
	{
		__LIB_0__::func_716(__LIB_39__::func_774(__LIB_39__::func_787(uParam0)), 0, 0);
	}
}

void func_911(var uParam0)//Position - 0x21A1
{
	int iVar0;
	iVar0 = ((uParam0->f_50 + uParam0->f_56) + uParam0->f_105);
	if (iVar0 > 0)
	{
		__LIB_14__::func_593(__LIB_0__::func_683(), 21, iVar0, 0, 0);
		__LIB_39__::func_852(10, iVar0);
		iLocal_57[0] = iVar0;
	}
}

void func_912(var uParam0, int iParam1, int iParam2)//Position - 0x6F3B
{
	*uParam0 = iParam2;
	if (iParam1 > -1)
	{
		uParam0->f_27 = iParam1;
	}
}

int func_913(int iParam0, int iParam1)//Position - 0x72E4
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_914(var uParam0, struct<3> Param1, struct<3> Param2, char* sParam3, int iParam4, float fParam5, float fParam6)//Position - 0xB717
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		__LIB_39__::func_874(uParam0, uParam0->f_14);
		uParam0->f_11 = { Param1 };
		uParam0->f_14 = { Param2 };
		__LIB_39__::func_849(uParam0->f_14, 0);
		MISC::CLEAR_AREA_OF_PEDS(uParam0->f_14, 2f, 0);
		__LIB_39__::func_806(uParam0->f_14, 0, fParam6);
		if (iParam4 == 0)
		{
			uParam0->f_3 = PED::CREATE_RANDOM_PED(uParam0->f_11);
		}
		else if (ENTITY::DOES_ENTITY_EXIST(Global_112096.f_225[0]))
		{
			uParam0->f_3 = Global_112096.f_225[0];
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_3, true, true);
		}
		else
		{
			uParam0->f_3 = PED::CREATE_PED(26, iParam4, uParam0->f_11, fParam5, true, true);
		}
		__LIB_0__::func_222(&(uParam0->f_244), 3, uParam0->f_3, sParam3, 0, 1);
		AUDIO::SET_AMBIENT_VOICE_NAME(uParam0->f_3, sParam3);
		PED::SET_PED_RESET_FLAG(uParam0->f_3, 112, true);
		if (!PED::IS_PED_INJURED(uParam0->f_3))
		{
			ENTITY::SET_ENTITY_LOD_DIST(uParam0->f_3, 250);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 32, false);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 104, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 177, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 116, false);
			PED::ADD_RELATIONSHIP_GROUP("TAXI_Passenger", &(uParam0->f_413));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, uParam0->f_413, joaat("PLAYER"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, uParam0->f_413, joaat("COP"));
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_3, uParam0->f_413);
			return 1;
		}
	}
	return 0;
}

int func_915(var uParam0)//Position - 0xC186
{
	float fVar0;
	if (!PED::IS_PED_INJURED(uParam0->f_2))
	{
		if ((!PED::IS_PED_STOPPED(uParam0->f_2) && !__LIB_0__::func_702(&(Local_162[0 /*10*/].f_3))) && !__LIB_0__::func_702(&(Local_162[1 /*10*/].f_3)))
		{
			if (!__LIB_0__::func_702(&(Local_162[2 /*10*/].f_3)))
			{
				uParam0->f_37 = ENTITY::GET_ENTITY_SPEED(uParam0->f_2);
				if (uParam0->f_37 > 10f)
				{
					__LIB_3__::func_128(&(Local_162[2 /*10*/].f_3));
				}
			}
			else if (__LIB_3__::func_108(&(Local_162[2 /*10*/].f_3)) > 0.9f)
			{
				uParam0->f_38 = uParam0->f_37;
				uParam0->f_37 = ENTITY::GET_ENTITY_SPEED(uParam0->f_2);
				fVar0 = (uParam0->f_38 - uParam0->f_37);
				__LIB_1__::func_377(&(Local_162[2 /*10*/].f_3));
				if (fVar0 > 10f && uParam0->f_37 < 12f)
				{
					return 1;
				}
			}
		}
		else
		{
			__LIB_1__::func_377(&(Local_162[2 /*10*/].f_3));
		}
	}
	return 0;
}

int func_916(var uParam0)//Position - 0xC283
{
	struct<3> Var0;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		Var0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(uParam0->f_4, true) };
		if (Var0.f_1 < -10f && !__LIB_0__::func_702(&(Local_162[0 /*10*/].f_3)))
		{
			if (!__LIB_0__::func_702(&(Local_162[12 /*10*/].f_3)))
			{
				__LIB_3__::func_128(&(Local_162[12 /*10*/].f_3));
			}
			else if (__LIB_3__::func_108(&(Local_162[12 /*10*/].f_3)) > 5f)
			{
				__LIB_1__::func_377(&(Local_162[12 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			__LIB_1__::func_377(&(Local_162[12 /*10*/].f_3));
		}
	}
	return 0;
}

int func_917(var uParam0)//Position - 0xC312
{
	struct<3> Var0;
	if ((((((VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false) && !__LIB_0__::func_702(&(Local_162[0 /*10*/].f_3))) && !__LIB_0__::func_702(&(Local_162[1 /*10*/].f_3))) && !__LIB_0__::func_702(&(Local_162[5 /*10*/].f_3))) && !__LIB_0__::func_702(&(Local_162[9 /*10*/].f_3))) && !__LIB_0__::func_702(&(Local_162[7 /*10*/].f_3))) && !__LIB_0__::func_702(&(Local_162[8 /*10*/].f_3)))
	{
		Var0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(uParam0->f_4, true) };
		if (MISC::ABSF(Var0.f_0) > 2.5f && !__LIB_0__::func_702(&(Local_162[0 /*10*/].f_3)))
		{
			if (!__LIB_0__::func_702(&(Local_162[11 /*10*/].f_3)))
			{
				__LIB_3__::func_128(&(Local_162[11 /*10*/].f_3));
				fLocal_164 = Var0.f_0;
			}
			else if (__LIB_3__::func_108(&(Local_162[11 /*10*/].f_3)) < 1.5f && (MISC::ABSF(fLocal_164) - MISC::ABSF(Var0.f_0)) < 0f)
			{
				__LIB_1__::func_377(&(Local_162[11 /*10*/].f_3));
				return 1;
			}
			else if (__LIB_3__::func_108(&(Local_162[11 /*10*/].f_3)) >= 1.5f)
			{
				__LIB_1__::func_377(&(Local_162[11 /*10*/].f_3));
				return 0;
			}
		}
	}
	return 0;
}

int func_918(var uParam0)//Position - 0xC442
{
	if (((((VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false) && !__LIB_0__::func_702(&(Local_162[0 /*10*/].f_3))) && !__LIB_0__::func_702(&(Local_162[8 /*10*/].f_3))) && !__LIB_0__::func_702(&(Local_162[5 /*10*/].f_3))) && !__LIB_0__::func_702(&(Local_162[9 /*10*/].f_3))) && !__LIB_0__::func_702(&(Local_162[7 /*10*/].f_3)))
	{
		if (!__LIB_0__::func_702(&(Local_162[14 /*10*/].f_3)))
		{
			uParam0->f_5 = VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(uParam0->f_4, true), 10f, 0, 260);
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5))
			{
				if ((ENTITY::GET_ENTITY_SPEED(uParam0->f_4) > 15f && __LIB_0__::func_76(uParam0->f_5, uParam0->f_4, 1) < 3f) && (!ENTITY::IS_ENTITY_DEAD(uParam0->f_5, false) && !VEHICLE::IS_VEHICLE_SEAT_FREE(uParam0->f_5, -1, false)))
				{
					__LIB_3__::func_128(&(Local_162[14 /*10*/].f_3));
				}
			}
		}
		else if ((__LIB_3__::func_108(&(Local_162[14 /*10*/].f_3)) < 1.5f && __LIB_0__::func_76(uParam0->f_5, uParam0->f_4, 1) > 4.5f) && !ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(uParam0->f_5))
		{
			__LIB_1__::func_377(&(Local_162[14 /*10*/].f_3));
			return 1;
		}
		else if (__LIB_3__::func_108(&(Local_162[14 /*10*/].f_3)) >= 1.5f)
		{
			__LIB_1__::func_377(&(Local_162[14 /*10*/].f_3));
			return 0;
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(uParam0->f_5))
		{
			__LIB_1__::func_377(&(Local_162[14 /*10*/].f_3));
			return 0;
		}
	}
	return 0;
}

int func_919(var uParam0)//Position - 0xC9D9
{
	int iVar0;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		iVar0 = PLAYER::GET_TIME_SINCE_PLAYER_DROVE_ON_PAVEMENT(PLAYER::PLAYER_ID());
		if (iVar0 == 0)
		{
			if (!__LIB_0__::func_702(&(Local_162[4 /*10*/].f_3)))
			{
				__LIB_3__::func_128(&(Local_162[4 /*10*/].f_3));
			}
			else if (__LIB_3__::func_108(&(Local_162[4 /*10*/].f_3)) > 2f)
			{
				__LIB_1__::func_377(&(Local_162[4 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			__LIB_1__::func_377(&(Local_162[4 /*10*/].f_3));
		}
	}
	return 0;
}

int func_920(var uParam0)//Position - 0xCA4B
{
	int iVar0;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		iVar0 = PLAYER::GET_TIME_SINCE_PLAYER_DROVE_AGAINST_TRAFFIC(PLAYER::PLAYER_ID());
		if (iVar0 == 0)
		{
			if (!__LIB_0__::func_702(&(Local_162[6 /*10*/].f_3)))
			{
				__LIB_3__::func_128(&(Local_162[6 /*10*/].f_3));
			}
			else if (__LIB_3__::func_108(&(Local_162[6 /*10*/].f_3)) > 3.5f)
			{
				__LIB_1__::func_377(&(Local_162[6 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			__LIB_1__::func_377(&(Local_162[6 /*10*/].f_3));
		}
	}
	return 0;
}

int func_921(var uParam0)//Position - 0xCB42
{
	struct<3> Var0;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		Var0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(uParam0->f_4, true) };
		if (MISC::ABSF(Var0.f_0) > 3f && !__LIB_0__::func_702(&(Local_162[0 /*10*/].f_3)))
		{
			if (!__LIB_0__::func_702(&(Local_162[1 /*10*/].f_3)))
			{
				__LIB_3__::func_128(&(Local_162[1 /*10*/].f_3));
			}
			else if (__LIB_3__::func_108(&(Local_162[1 /*10*/].f_3)) > 1.2f)
			{
				__LIB_1__::func_377(&(Local_162[1 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			__LIB_1__::func_377(&(Local_162[1 /*10*/].f_3));
		}
	}
	return 0;
}

int func_922(var uParam0)//Position - 0xCBCE
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (!VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(uParam0->f_4) && ENTITY::IS_ENTITY_IN_AIR(uParam0->f_4))
		{
			if (!__LIB_0__::func_702(&(Local_162[0 /*10*/].f_3)))
			{
				__LIB_3__::func_128(&(Local_162[0 /*10*/].f_3));
			}
			else if (__LIB_3__::func_108(&(Local_162[0 /*10*/].f_3)) > 0.7f)
			{
				__LIB_1__::func_377(&(Local_162[0 /*10*/].f_3));
				__LIB_1__::func_31(&(Local_162[1 /*10*/].f_6));
				return 1;
			}
		}
		else
		{
			__LIB_1__::func_377(&(Local_162[0 /*10*/].f_3));
		}
	}
	return 0;
}

void func_923(int iParam0, var uParam1)//Position - 0xCCA0
{
	Local_162[iParam0 /*10*/].f_1++;
	__LIB_39__::func_826(uParam1, iParam0);
	__LIB_1__::func_377(&(Local_162[iParam0 /*10*/].f_6));
	uParam1->f_112 = 1;
}

int func_924(var uParam0)//Position - 0xCCFD
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (ENTITY::GET_ENTITY_SPEED(uParam0->f_4) > 25f)
		{
			if (!__LIB_0__::func_702(&(Local_162[5 /*10*/].f_3)))
			{
				__LIB_3__::func_128(&(Local_162[5 /*10*/].f_3));
			}
			else if (__LIB_3__::func_108(&(Local_162[5 /*10*/].f_3)) > 3.5f)
			{
				__LIB_1__::func_377(&(Local_162[5 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			__LIB_1__::func_377(&(Local_162[5 /*10*/].f_3));
		}
	}
	return 0;
}

int func_925(var uParam0, bool bParam1, float fParam2)//Position - 0x451B
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (PED::IS_PED_IN_VEHICLE(uParam0->f_2, uParam0->f_4, false))
		{
			if (__LIB_0__::func_77(1))
			{
				__LIB_0__::func_366(0);
			}
			if (__LIB_39__::func_878())
			{
				__LIB_39__::func_790();
				return 1;
			}
			else if (__LIB_0__::func_213(uParam0->f_4, fParam2, 1, 1056964608, 0, 1, 0))
			{
				if (bParam1)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 256);
				}
				else
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0);
				}
			}
			VEHICLE::SET_VEHICLE_BRAKE_LIGHTS(uParam0->f_4, true);
		}
	}
	return 0;
}

char* func_926(int iParam0)//Position - 0x40F9
{
	char* sVar0;
	switch (iParam0->f_411)
	{
		case 0:
			sVar0 = "TAXI_SC_BN_02";
			break;
		case 1:
			sVar0 = "TAXI_SC_BN_01";
			break;
		case 2:
			sVar0 = "TAXI_SC_BN_03";
			break;
		case 3:
			sVar0 = "TAXI_SC_BN_12";
			break;
		case 4:
			sVar0 = "TAXI_SC_BN_08";
			break;
		case 5:
			sVar0 = "TAXI_SC_BN_07";
			break;
		case 6:
			sVar0 = "TAXI_SC_KO";
			break;
		case 7:
			sVar0 = "TAXI_SC_BN_10";
			break;
		case 8:
			sVar0 = "TAXI_SC_BN_04";
			break;
	}
	return sVar0;
}

void func_927(int iParam0, int iParam1, bool bParam2)//Position - 0x5149
{
	int iVar0;
	if (iParam1 == 14)
	{
	}
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			__LIB_1__::func_377(&(iParam0->f_146[iVar0 /*3*/]));
			iVar0++;
		}
	}
	else
	{
		__LIB_1__::func_377(&(iParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam2)
	{
	}
}

int func_928(int iParam0)//Position - 0x616C
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_4, false))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0->f_4, -1, false) == PLAYER::PLAYER_PED_ID())
		{
			return 1;
		}
	}
	return 0;
}

bool func_929(int iParam0, int iParam1)//Position - 0x6C42
{
	return __LIB_0__::func_702(&(iParam0->f_146[iParam1 /*3*/]));
}

void func_930(var uParam0, struct<3> Param1, float fParam2, bool bParam3)//Position - 0x7C67
{
	struct<3> Var0;
	struct<3> Var1;
	Var0 = { __LIB_1__::func_657(Param1, 1f, -fParam2, -fParam2, -22f) };
	Var1 = { __LIB_1__::func_657(Param1, 1f, fParam2, fParam2, 44f) };
	Var0.f_2 = (Var0.f_2 - 22f);
	Var1.f_2 = (Var1.f_2 + 22f);
	if (!bParam3)
	{
		PED::SET_PED_NON_CREATION_AREA(Var0, Var1);
		*uParam0 = PED::ADD_SCENARIO_BLOCKING_AREA(Var0, Var1, false, true, true, true);
		MISC::CLEAR_AREA_OF_PEDS(Param1, fParam2, 0);
	}
	else
	{
		PED::CLEAR_PED_NON_CREATION_AREA();
		PED::REMOVE_SCENARIO_BLOCKING_AREA(*uParam0, false);
	}
}

void func_931(int iParam0, int iParam1)//Position - 0xA5D9
{
	switch (iParam1)
	{
		case 1:
			iParam0->f_123 = "TRS_STREAMING";
			break;
		case 2:
			iParam0->f_123 = " TRS_FINDING_LOCATION ";
			break;
		case 3:
			iParam0->f_123 = " TRS_SPAWNING ";
			break;
		case 4:
			iParam0->f_123 = " TRS_SPAWN_CAR ";
			break;
		case 5:
			iParam0->f_123 = " TRS_MANAGE_PICKUP ";
			break;
		case 6:
			iParam0->f_123 = " TRS_PASSENGER_ENTER ";
			break;
		case 7:
			iParam0->f_123 = " TRS_WAIT_FOR_TIME ";
			break;
		case 8:
			iParam0->f_123 = " TRS_WAIT_FOR_TAIL ";
			break;
		case 9:
			iParam0->f_123 = " TRS_DRIVING_PASSENGER ";
			break;
		case 10:
			iParam0->f_123 = " TRS_WAIT_FOR_FULL_STOP ";
			break;
		case 18:
			iParam0->f_123 = " TRS_PRE_CUTSCENE ";
			break;
		case 11:
			iParam0->f_123 = " TRS_SWITCH_JOB ";
			break;
		case 19:
			iParam0->f_123 = " TRS_CUTSCENE ";
			break;
		case 20:
			iParam0->f_123 = " TRS_CUTSCENE_02 ";
			break;
		case 13:
			iParam0->f_123 = " TRS_CHASE_DRIVER ";
			break;
		case 12:
			iParam0->f_123 = " TRS_SAVE_DAMSEL ";
			break;
		case 14:
			iParam0->f_123 = " TRS_REVEAL_DESTINATION ";
			break;
		case 15:
			iParam0->f_123 = " TRS_WAIT_PARK ";
			break;
		case 16:
			iParam0->f_123 = " TRS_SEND_TO_STORE ";
			break;
		case 17:
			iParam0->f_123 = " TRS_WAIT_1ST_STOP ";
			break;
		case 22:
			iParam0->f_123 = " TRS_DROPPING_OFF ";
			break;
		case 25:
			iParam0->f_123 = " TRS_ESCAPE_POLICE ";
			break;
		case 26:
			iParam0->f_123 = " TRS_POLICE_ESCAPED ";
			break;
		case 24:
			iParam0->f_123 = " TRS_TIE_UP_LOSE_ENDS ";
			break;
		case 27:
			iParam0->f_123 = " TRS_REGULAR_PAYMENT ";
			break;
		case 23:
			iParam0->f_123 = " TRS_ELIMATE_ALL_ENEMIES ";
			break;
		case 28:
			iParam0->f_123 = " TRS_SPECIAL_ENDING ";
			break;
		case 29:
			iParam0->f_123 = " TRS_SCORECARD_GRADE ";
			break;
		case 30:
			iParam0->f_123 = " TRS_CLEANUP ";
			break;
		case 21:
			iParam0->f_123 = " TRS_WAIT_FOR_PASSENGER ";
			break;
		default:
			iParam0->f_123 = " TRS IS UNIDENTIFIED - FIX THIS ";
			break;
	}
	iParam0->f_410 = iParam1;
}

void func_932(int iParam0)//Position - 0x4194
{
	int iVar0;
	Local_161.f_1 = SYSTEM::TO_FLOAT(iParam0->f_50);
	Local_161.f_2 = SYSTEM::TO_FLOAT(iParam0->f_56);
	__LIB_39__::func_852(11, iParam0->f_56);
	__LIB_39__::func_852(12, iParam0->f_56);
	iLocal_57[1] = iParam0->f_56;
	iLocal_57[2] = iParam0->f_56;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iParam0->f_60)
	{
		Local_161.f_4[iVar0 /*3*/] = { iParam0->f_60[iVar0 /*3*/] };
		if (BitTest(Local_161.f_4[iVar0 /*3*/], 2))
		{
			Local_161.f_3 = (Local_161.f_3 + IntToFloat(iParam0->f_60[iVar0 /*3*/].f_1));
		}
		iVar0++;
	}
	Local_161.f_0 = iParam0->f_411;
	Local_161.f_20 = ((Local_161.f_1 + Local_161.f_2) + Local_161.f_3);
}

void func_933(int iParam0, int iParam1, float fParam2, bool bParam3)//Position - 0xA9BA
{
	int iVar0;
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (fParam2 > 0f)
			{
				__LIB_0__::func_706(&(iParam0->f_146[iVar0 /*3*/]), fParam2);
			}
			else
			{
				__LIB_1__::func_31(&(iParam0->f_146[iVar0 /*3*/]));
			}
			iVar0++;
		}
	}
	else if (fParam2 > 0f)
	{
		__LIB_0__::func_706(&(iParam0->f_146[iParam1 /*3*/]), fParam2);
	}
	else
	{
		__LIB_1__::func_31(&(iParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam3)
	{
	}
}

float func_934(int iParam0, int iParam1)//Position - 0x58F7
{
	if (!__LIB_0__::func_702(&(iParam0->f_146[iParam1 /*3*/])))
	{
		__LIB_3__::func_128(&(iParam0->f_146[iParam1 /*3*/]));
	}
	return __LIB_3__::func_108(&(iParam0->f_146[iParam1 /*3*/]));
}

int func_935(var uParam0, float fParam1)//Position - 0x6966
{
	if (__LIB_39__::func_787(uParam0) == 2)
	{
		if (ENTITY::IS_ENTITY_AT_COORD(uParam0->f_4, uParam0->f_17, (fParam1 + 1f), (fParam1 + 1f), 2f, !uParam0->f_140, true, 0))
		{
		}
		if (((__LIB_0__::func_724(uParam0->f_4, uParam0->f_17, 1) <= (fParam1 + 1f) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1) && __LIB_0__::func_494(1, 1, 1)) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(uParam0->f_4))
		{
			return __LIB_39__::func_925(uParam0, 1, fParam1);
		}
	}
	else if (((ENTITY::IS_ENTITY_AT_COORD(uParam0->f_4, uParam0->f_17, (fParam1 + 1f), (fParam1 + 1f), 2f, !uParam0->f_140, true, 0) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1) && __LIB_0__::func_494(1, 1, 1)) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(uParam0->f_4))
	{
		return __LIB_39__::func_925(uParam0, 1, fParam1);
	}
	return 0;
}

int func_936(var uParam0)//Position - 0xB6F9
{
	if (((VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false) && !__LIB_0__::func_702(&(Local_162[9 /*10*/].f_3))) && !__LIB_0__::func_702(&(Local_162[7 /*10*/].f_3))) && !__LIB_0__::func_702(&(Local_162[4 /*10*/].f_3)))
	{
		if (!__LIB_39__::func_901(uParam0->f_4) && ENTITY::GET_ENTITY_SPEED(uParam0->f_4) > 15f)
		{
			if (!__LIB_0__::func_702(&(Local_162[13 /*10*/].f_3)))
			{
				__LIB_3__::func_128(&(Local_162[13 /*10*/].f_3));
			}
			else if (__LIB_3__::func_108(&(Local_162[13 /*10*/].f_3)) > 5f)
			{
				__LIB_1__::func_377(&(Local_162[13 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			__LIB_1__::func_377(&(Local_162[13 /*10*/].f_3));
		}
	}
	return 0;
}

void func_937(var uParam0, bool bParam1)//Position - 0x12A5
{
	__LIB_39__::func_786(uParam0);
	if (__LIB_0__::func_75())
	{
		__LIB_0__::func_429();
	}
	__LIB_16__::func_616();
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(true);
	__LIB_0__::func_366(0);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(uParam0->f_4, false);
		VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(uParam0->f_4);
		VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(uParam0->f_4);
	}
	__LIB_39__::func_849(uParam0->f_14, 1);
	__LIB_39__::func_806(uParam0->f_14, 1, 1114636288);
	__LIB_0__::func_221(&(uParam0->f_244), 3);
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, true);
	if (__LIB_39__::func_878())
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	CUTSCENE::SET_PAD_CAN_SHAKE_DURING_CUTSCENE(true);
	__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
	HUD::DISPLAY_RADAR(true);
	HUD::DISPLAY_HUD(true);
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		CAM::DESTROY_CAM(*uParam0, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	}
	if (__LIB_0__::func_703(Global_113386.f_19097, 4))
	{
		__LIB_39__::func_851(&(Global_113386.f_19097), 4);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(__LIB_12__::func_850(), false);
	}
	if (bParam1)
	{
		__LIB_39__::func_784(uParam0);
	}
	__LIB_39__::func_783(uParam0);
	STREAMING::REMOVE_ANIM_DICT("gestures@m@standing@casual");
	STREAMING::REMOVE_ANIM_DICT("oddjobs@taxi@");
	STREAMING::REMOVE_ANIM_DICT("oddjobs@towingcome_here");
	if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		__LIB_39__::func_877(uParam0->f_411);
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
	}
	STATS::PLAYSTATS_ODDJOB_DONE(SYSTEM::ROUND((__LIB_9__::func_437(&iLocal_82) * 1000f)), 12, false);
}

int func_938(var uParam0, int iParam1, bool bParam2)//Position - 0x558E
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, uParam0->f_4, true))
			{
				return 1;
			}
		}
	}
	if (bParam2)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iParam1))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, PLAYER::PLAYER_PED_ID(), true))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

float func_939(var uParam0, int iParam1)//Position - 0x9F39
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		if (__LIB_39__::func_928(uParam0))
		{
			return __LIB_0__::func_76(uParam0->f_4, iParam1, 1);
		}
	}
	return 0f;
}

void func_940(var uParam0, bool bParam1)//Position - 0x11F10
{
	uParam0->f_120 = 1;
	if (bParam1)
	{
	}
}

bool func_941(var uParam0, var uParam1)//Position - 0x11F90
{
	return ((*uParam1 == -1 && uParam0->f_412 == 0) && !__LIB_39__::func_929(uParam0, 9));
}

void func_942(var uParam0)//Position - 0x13F23
{
	uParam0->f_2 = PLAYER::PLAYER_PED_ID();
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_14 = { __LIB_0__::func_613() };
	uParam0->f_17 = { __LIB_0__::func_613() };
	uParam0->f_35 = 0f;
	uParam0->f_76 = 0;
	uParam0->f_49 = 0;
	uParam0->f_109 = 0;
	uParam0->f_36 = 0f;
	uParam0->f_410 = 2;
	uParam0->f_123 = "TRS_FINDING_LOCATION";
	__LIB_39__::func_927(uParam0, 32, 0);
}

void func_943(int iParam0)//Position - 0x3F36
{
	if (iParam0->f_56 >= iParam0->f_59)
	{
		iParam0->f_56 = SYSTEM::CEIL((IntToFloat(iParam0->f_50) * 0.4f));
	}
	else if (iParam0->f_56 < iParam0->f_59 && iParam0->f_56 >= iParam0->f_58)
	{
		iParam0->f_56 = SYSTEM::CEIL((IntToFloat(iParam0->f_50) * 0.15f));
	}
	else
	{
		iParam0->f_56 = 0;
	}
	if (!__LIB_0__::func_703(iParam0->f_55, 1))
	{
		__LIB_39__::func_780(&(iParam0->f_55), 1);
	}
}

void func_944(var uParam0)//Position - 0x7699
{
	__LIB_39__::func_927(uParam0, 14, 0);
	__LIB_39__::func_927(uParam0, 15, 0);
	__LIB_39__::func_776();
	if (__LIB_0__::func_568())
	{
		__LIB_0__::func_620(0);
	}
}

int func_945(var uParam0)//Position - 0xBE33
{
	float fVar0;
	if (!PED::IS_PED_INJURED(uParam0->f_2))
	{
		if ((!PED::IS_PED_STOPPED(uParam0->f_2) && !__LIB_0__::func_702(&(Local_162[0 /*10*/].f_3))) && !__LIB_0__::func_702(&(Local_162[1 /*10*/].f_3)))
		{
			if (!__LIB_0__::func_702(&(Local_162[2 /*10*/].f_3)))
			{
				uParam0->f_37 = ENTITY::GET_ENTITY_SPEED(uParam0->f_2);
				if (uParam0->f_37 > 10f)
				{
					__LIB_3__::func_128(&(Local_162[2 /*10*/].f_3));
				}
			}
			else if (__LIB_37__::func_276(&(Local_162[2 /*10*/].f_3)) > 0.9f)
			{
				uParam0->f_38 = uParam0->f_37;
				uParam0->f_37 = ENTITY::GET_ENTITY_SPEED(uParam0->f_2);
				fVar0 = (uParam0->f_38 - uParam0->f_37);
				__LIB_1__::func_377(&(Local_162[2 /*10*/].f_3));
				if (fVar0 > 10f && uParam0->f_37 < 12f)
				{
					return 1;
				}
			}
		}
		else
		{
			__LIB_1__::func_377(&(Local_162[2 /*10*/].f_3));
		}
	}
	return 0;
}

int func_946(var uParam0)//Position - 0xBF30
{
	struct<3> Var0;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		Var0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(uParam0->f_4, true) };
		if (Var0.f_1 < -10f && !__LIB_0__::func_702(&(Local_162[0 /*10*/].f_3)))
		{
			if (!__LIB_0__::func_702(&(Local_162[12 /*10*/].f_3)))
			{
				__LIB_3__::func_128(&(Local_162[12 /*10*/].f_3));
			}
			else if (__LIB_37__::func_276(&(Local_162[12 /*10*/].f_3)) > 5f)
			{
				__LIB_1__::func_377(&(Local_162[12 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			__LIB_1__::func_377(&(Local_162[12 /*10*/].f_3));
		}
	}
	return 0;
}

int func_947(var uParam0)//Position - 0xBFBF
{
	struct<3> Var0;
	if ((((((VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false) && !__LIB_0__::func_702(&(Local_162[0 /*10*/].f_3))) && !__LIB_0__::func_702(&(Local_162[1 /*10*/].f_3))) && !__LIB_0__::func_702(&(Local_162[5 /*10*/].f_3))) && !__LIB_0__::func_702(&(Local_162[9 /*10*/].f_3))) && !__LIB_0__::func_702(&(Local_162[7 /*10*/].f_3))) && !__LIB_0__::func_702(&(Local_162[8 /*10*/].f_3)))
	{
		Var0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(uParam0->f_4, true) };
		if (MISC::ABSF(Var0.f_0) > 2.5f && !__LIB_0__::func_702(&(Local_162[0 /*10*/].f_3)))
		{
			if (!__LIB_0__::func_702(&(Local_162[11 /*10*/].f_3)))
			{
				__LIB_3__::func_128(&(Local_162[11 /*10*/].f_3));
				fLocal_164 = Var0.f_0;
			}
			else if (__LIB_37__::func_276(&(Local_162[11 /*10*/].f_3)) < 1.5f && (MISC::ABSF(fLocal_164) - MISC::ABSF(Var0.f_0)) < 0f)
			{
				__LIB_1__::func_377(&(Local_162[11 /*10*/].f_3));
				return 1;
			}
			else if (__LIB_37__::func_276(&(Local_162[11 /*10*/].f_3)) >= 1.5f)
			{
				__LIB_1__::func_377(&(Local_162[11 /*10*/].f_3));
				return 0;
			}
		}
	}
	return 0;
}

int func_948(var uParam0)//Position - 0xC0F0
{
	if (((((VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false) && !__LIB_0__::func_702(&(Local_162[0 /*10*/].f_3))) && !__LIB_0__::func_702(&(Local_162[8 /*10*/].f_3))) && !__LIB_0__::func_702(&(Local_162[5 /*10*/].f_3))) && !__LIB_0__::func_702(&(Local_162[9 /*10*/].f_3))) && !__LIB_0__::func_702(&(Local_162[7 /*10*/].f_3)))
	{
		if (!__LIB_0__::func_702(&(Local_162[14 /*10*/].f_3)))
		{
			uParam0->f_5 = VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(uParam0->f_4, true), 10f, 0, 260);
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5))
			{
				if ((ENTITY::GET_ENTITY_SPEED(uParam0->f_4) > 15f && __LIB_0__::func_76(uParam0->f_5, uParam0->f_4, 1) < 3f) && (!ENTITY::IS_ENTITY_DEAD(uParam0->f_5, false) && !VEHICLE::IS_VEHICLE_SEAT_FREE(uParam0->f_5, -1, false)))
				{
					__LIB_3__::func_128(&(Local_162[14 /*10*/].f_3));
				}
			}
		}
		else if ((__LIB_37__::func_276(&(Local_162[14 /*10*/].f_3)) < 1.5f && __LIB_0__::func_76(uParam0->f_5, uParam0->f_4, 1) > 4.5f) && !ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(uParam0->f_5))
		{
			__LIB_1__::func_377(&(Local_162[14 /*10*/].f_3));
			return 1;
		}
		else if (__LIB_37__::func_276(&(Local_162[14 /*10*/].f_3)) >= 1.5f)
		{
			__LIB_1__::func_377(&(Local_162[14 /*10*/].f_3));
			return 0;
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(uParam0->f_5))
		{
			__LIB_1__::func_377(&(Local_162[14 /*10*/].f_3));
			return 0;
		}
	}
	return 0;
}

int func_949(var uParam0)//Position - 0xC687
{
	int iVar0;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		iVar0 = PLAYER::GET_TIME_SINCE_PLAYER_DROVE_ON_PAVEMENT(PLAYER::PLAYER_ID());
		if (iVar0 == 0)
		{
			if (!__LIB_0__::func_702(&(Local_162[4 /*10*/].f_3)))
			{
				__LIB_3__::func_128(&(Local_162[4 /*10*/].f_3));
			}
			else if (__LIB_37__::func_276(&(Local_162[4 /*10*/].f_3)) > 2f)
			{
				__LIB_1__::func_377(&(Local_162[4 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			__LIB_1__::func_377(&(Local_162[4 /*10*/].f_3));
		}
	}
	return 0;
}

int func_950(var uParam0)//Position - 0xC6F9
{
	int iVar0;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		iVar0 = PLAYER::GET_TIME_SINCE_PLAYER_DROVE_AGAINST_TRAFFIC(PLAYER::PLAYER_ID());
		if (iVar0 == 0)
		{
			if (!__LIB_0__::func_702(&(Local_162[6 /*10*/].f_3)))
			{
				__LIB_3__::func_128(&(Local_162[6 /*10*/].f_3));
			}
			else if (__LIB_37__::func_276(&(Local_162[6 /*10*/].f_3)) > 3.5f)
			{
				__LIB_1__::func_377(&(Local_162[6 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			__LIB_1__::func_377(&(Local_162[6 /*10*/].f_3));
		}
	}
	return 0;
}

int func_951(var uParam0)//Position - 0xC7F0
{
	struct<3> Var0;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		Var0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(uParam0->f_4, true) };
		if (MISC::ABSF(Var0.f_0) > 3f && !__LIB_0__::func_702(&(Local_162[0 /*10*/].f_3)))
		{
			if (!__LIB_0__::func_702(&(Local_162[1 /*10*/].f_3)))
			{
				__LIB_3__::func_128(&(Local_162[1 /*10*/].f_3));
			}
			else if (__LIB_37__::func_276(&(Local_162[1 /*10*/].f_3)) > 1.2f)
			{
				__LIB_1__::func_377(&(Local_162[1 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			__LIB_1__::func_377(&(Local_162[1 /*10*/].f_3));
		}
	}
	return 0;
}

int func_952(var uParam0)//Position - 0xC87C
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (!VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(uParam0->f_4) && ENTITY::IS_ENTITY_IN_AIR(uParam0->f_4))
		{
			if (!__LIB_0__::func_702(&(Local_162[0 /*10*/].f_3)))
			{
				__LIB_3__::func_128(&(Local_162[0 /*10*/].f_3));
			}
			else if (__LIB_37__::func_276(&(Local_162[0 /*10*/].f_3)) > 0.7f)
			{
				__LIB_1__::func_377(&(Local_162[0 /*10*/].f_3));
				__LIB_1__::func_31(&(Local_162[1 /*10*/].f_6));
				return 1;
			}
		}
		else
		{
			__LIB_1__::func_377(&(Local_162[0 /*10*/].f_3));
		}
	}
	return 0;
}

void func_953(var uParam0)//Position - 0xC906
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (__LIB_0__::func_702(&(Local_162[iVar0 /*10*/].f_6)))
		{
			__LIB_1__::func_31(&(Local_162[iVar0 /*10*/].f_6));
		}
		iVar0++;
	}
	__LIB_39__::func_933(uParam0, 10, 0f, 1);
	PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
}

int func_954(var uParam0)//Position - 0xC9AB
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (ENTITY::GET_ENTITY_SPEED(uParam0->f_4) > 25f)
		{
			if (!__LIB_0__::func_702(&(Local_162[5 /*10*/].f_3)))
			{
				__LIB_3__::func_128(&(Local_162[5 /*10*/].f_3));
			}
			else if (__LIB_37__::func_276(&(Local_162[5 /*10*/].f_3)) > 3.5f)
			{
				__LIB_1__::func_377(&(Local_162[5 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			__LIB_1__::func_377(&(Local_162[5 /*10*/].f_3));
		}
	}
	return 0;
}

void func_955(var uParam0, char[12] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char* sParam5)//Position - 0x113B1
{
	__LIB_39__::func_933(uParam0, 16, 0, 0);
	__LIB_39__::func_933(uParam0, 17, 0f, 1);
	StringConCat(&cParam1, sParam5, 24);
	if (!PED::IS_PED_INJURED(uParam0->f_3))
	{
		AUDIO::INTERRUPT_CONVERSATION(uParam0->f_3, &cParam1, __LIB_39__::func_836(uParam0));
	}
}

int func_956(var uParam0, int iParam1)//Position - 0x3AC1
{
	if (!__LIB_0__::func_702(&(uParam0->f_2)))
	{
		__LIB_1__::func_31(&(uParam0->f_2));
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(14);
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || uParam0->f_8)
		{
			if (!__LIB_0__::func_702(&(uParam0->f_5)))
			{
				__LIB_1__::func_31(&(uParam0->f_5));
				__LIB_1__::func_216(uParam0, 1051260355);
			}
		}
		if (__LIB_0__::func_702(&(uParam0->f_5)))
		{
			if (__LIB_37__::func_276(&(uParam0->f_5)) > 0.33f)
			{
				__LIB_1__::func_377(&(uParam0->f_5));
				return 0;
			}
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (__LIB_37__::func_276(&(uParam0->f_2)) * 1000f) > SYSTEM::TO_FLOAT(uParam0->f_1)
	{
		if (!__LIB_0__::func_702(&(uParam0->f_5)))
		{
			__LIB_1__::func_31(&(uParam0->f_5));
			__LIB_1__::func_216(uParam0, 1051260355);
		}
		else if (__LIB_37__::func_276(&(uParam0->f_5)) > 0.33f)
		{
			__LIB_1__::func_377(&(uParam0->f_2));
			return 0;
		}
	}
	return 1;
}

void func_957(var uParam0)//Position - 0x7566
{
	__LIB_39__::func_933(uParam0, 14, 0, 0);
	__LIB_39__::func_775();
}

void func_958(int iParam0)//Position - 0x1CD
{
	iParam0->f_2 = PLAYER::PLAYER_PED_ID();
	__LIB_39__::func_781(&(iParam0->f_244));
	iParam0->f_428 = __LIB_39__::func_866();
}

void func_959(var uParam0, int iParam1, struct<3> Param2, var uParam3, var uParam4, var uParam5, char* sParam6, bool bParam7, int iParam8)//Position - 0x10ECC
{
	__LIB_39__::func_780(&(uParam0->f_82), iParam1);
	__LIB_39__::func_933(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam6, 24);
	if (bParam7)
	{
		__LIB_39__::func_807(&Param2);
	}
	__LIB_2__::func_859(&(uParam0->f_244), uParam0->f_144, &Param2, iParam8, 0, 0, 0);
}

void func_960(var uParam0, int iParam1, struct<3> Param2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char* sParam6, int iParam7, bool bParam8)//Position - 0x10F94
{
	__LIB_39__::func_780(&(uParam0->f_82), iParam1);
	__LIB_39__::func_933(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam6, 24);
	if ((((uParam0->f_411 == 1 || uParam0->f_411 == 0) || uParam0->f_411 == 5) || uParam0->f_411 == 8) || uParam0->f_411 == 2)
	{
		if (bParam8)
		{
			__LIB_39__::func_807(&Param2);
		}
	}
	__LIB_2__::func_859(&(uParam0->f_244), uParam0->f_144, &Param2, iParam7, 0, 0, 0);
}

void func_961(var uParam0, int iParam1, struct<3> Param2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char* sParam6, int iParam7)//Position - 0x1107A
{
	__LIB_39__::func_780(&(uParam0->f_81), iParam1);
	__LIB_39__::func_933(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam6, 24);
	__LIB_2__::func_859(&(uParam0->f_244), uParam0->f_144, &Param2, iParam7, 0, 0, 0);
}

void func_962(var uParam0, int iParam1, struct<3> Param2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char* sParam6, bool bParam7, int iParam8)//Position - 0x11344
{
	__LIB_39__::func_780(&(uParam0->f_81), iParam1);
	__LIB_39__::func_933(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam6, 24);
	if (bParam7)
	{
		__LIB_39__::func_807(&Param2);
	}
	__LIB_2__::func_859(&(uParam0->f_244), uParam0->f_144, &Param2, iParam8, 0, 0, 0);
}

void func_963(var uParam0, struct<6> Param1, int iParam2)//Position - 0x10F0D
{
	char cVar0[24];
	cVar0 = { Param1 };
	if (!__LIB_0__::func_703(uParam0->f_82, 64))
	{
		__LIB_39__::func_780(&(uParam0->f_82), 64);
		StringConCat(&cVar0, "_1", 24);
	}
	else if (!__LIB_0__::func_703(uParam0->f_82, 128))
	{
		__LIB_39__::func_780(&(uParam0->f_82), 128);
		StringConCat(&cVar0, "_2", 24);
	}
	else
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, MISC::GET_RANDOM_INT_IN_RANGE(1, 3), 24);
	}
	__LIB_14__::func_535(&(uParam0->f_244), uParam0->f_144, &Param1, &cVar0, iParam2, 0, 0);
	__LIB_39__::func_933(uParam0, 16, 0, 0);
}

void func_964(int iParam0)//Position - 0x28F0
{
	int iVar0;
	iVar0 = ((iParam0->f_50 + iParam0->f_56) + iParam0->f_105);
	if (iVar0 > 0)
	{
		__LIB_14__::func_593(__LIB_0__::func_683(), 21, iVar0, 0, 0);
		__LIB_39__::func_852(10, iVar0);
		iLocal_57[0] = iVar0;
	}
}

bool func_965(var uParam0, var uParam1)//Position - 0x10948
{
	return ((*uParam1 == -1 && uParam0->f_412 == 0) && !__LIB_39__::func_793(uParam0, 9));
}

void func_966(var uParam0)//Position - 0x12390
{
	uParam0->f_2 = PLAYER::PLAYER_PED_ID();
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_14 = { __LIB_0__::func_613() };
	uParam0->f_17 = { __LIB_0__::func_613() };
	uParam0->f_35 = 0f;
	uParam0->f_76 = 0;
	uParam0->f_49 = 0;
	uParam0->f_109 = 0;
	uParam0->f_36 = 0f;
	uParam0->f_410 = 2;
	uParam0->f_123 = "TRS_FINDING_LOCATION";
	__LIB_39__::func_794(uParam0, 32, 0);
}

void func_967(var uParam0)//Position - 0x70BF
{
	__LIB_39__::func_794(uParam0, 14, 0);
	__LIB_39__::func_794(uParam0, 15, 0);
	__LIB_39__::func_776();
	if (__LIB_0__::func_568())
	{
		__LIB_0__::func_620(0);
	}
}

void func_968(var uParam0)//Position - 0xB3A5
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (__LIB_0__::func_702(&(Local_162[iVar0 /*10*/].f_6)))
		{
			__LIB_1__::func_31(&(Local_162[iVar0 /*10*/].f_6));
		}
		iVar0++;
	}
	__LIB_39__::func_859(uParam0, 10, 0f, 1);
	PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
}

float func_969(var uParam0, int iParam1)//Position - 0x11C7B
{
	if (!__LIB_0__::func_702(&(uParam0->f_146[iParam1 /*3*/])))
	{
		__LIB_3__::func_128(&(uParam0->f_146[iParam1 /*3*/]));
	}
	return __LIB_37__::func_276(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_970(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x7395
{
	uParam0->f_416 = iParam1;
	if (bParam4)
	{
		__LIB_39__::func_859(uParam0, 16, 4f, 0);
		if (__LIB_39__::func_883(uParam0))
		{
			__LIB_0__::func_429();
		}
	}
	__LIB_39__::func_899(uParam0, iParam2, bParam3);
}

int func_971(var uParam0)//Position - 0xAD14
{
	if (((VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false) && !__LIB_0__::func_702(&(Local_162[9 /*10*/].f_3))) && !__LIB_0__::func_702(&(Local_162[7 /*10*/].f_3))) && !__LIB_0__::func_702(&(Local_162[4 /*10*/].f_3)))
	{
		if (!__LIB_39__::func_901(uParam0->f_4) && ENTITY::GET_ENTITY_SPEED(uParam0->f_4) > 15f)
		{
			if (!__LIB_0__::func_702(&(Local_162[13 /*10*/].f_3)))
			{
				__LIB_3__::func_128(&(Local_162[13 /*10*/].f_3));
			}
			else if (__LIB_37__::func_276(&(Local_162[13 /*10*/].f_3)) > 5f)
			{
				__LIB_1__::func_377(&(Local_162[13 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			__LIB_1__::func_377(&(Local_162[13 /*10*/].f_3));
		}
	}
	return 0;
}

int func_972(var uParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x10301
{
	__LIB_39__::func_859(uParam0, 16, 0, 0);
	if (bParam3)
	{
		__LIB_39__::func_859(uParam0, 17, 0f, 1);
	}
	__LIB_39__::func_899(uParam0, iParam2, 0);
	return __LIB_2__::func_859(&(uParam0->f_244), uParam0->f_144, sParam1, iParam4, 0, 0, 0);
}

void func_973(var uParam0, char* sParam1, int iParam2)//Position - 0xB4EB
{
	struct<3> Var0;
	__LIB_0__::func_325();
	__LIB_38__::func_753(2);
	Var0 = { __LIB_13__::func_743() };
	if ((!MISC::IS_STRING_NULL_OR_EMPTY(&Var0) && __LIB_0__::func_75()) && !MISC::ARE_STRINGS_EQUAL(&Var0, "NULL"))
	{
	}
	else
	{
		HUD::CLEAR_PRINTS();
		HUD::CLEAR_HELP(true);
		StringCopy(&Var0, uParam0->f_143, 24);
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false))
		{
			if (!__LIB_39__::func_803(uParam0))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
				{
					TASK::STOP_ANIM_TASK(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -8f);
				}
				else if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
				{
					TASK::STOP_ANIM_TASK(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -8f);
				}
				else if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
				{
					TASK::STOP_ANIM_TASK(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -8f);
				}
			}
		}
		uParam0->f_109 = 1;
		uParam0->f_121 = sParam1;
		uParam0->f_415 = iParam2;
		__LIB_39__::func_859(uParam0, 3, 0, 0);
		if (iParam2 == 8 || iParam2 == 18)
		{
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_aband2", 24);
				}
				else
				{
					StringConCat(&Var0, "_aband1", 24);
				}
				__LIB_39__::func_904(uParam0, &Var0);
			}
			else if (!PED::IS_PED_INJURED(uParam0->f_3))
			{
				__LIB_0__::func_709(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 10)
		{
			if (uParam0->f_115)
			{
				StringConCat(&Var0, "_aggro2", 24);
			}
			else
			{
				StringConCat(&Var0, "_aggro", 24);
			}
			__LIB_39__::func_904(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (uParam0->f_415 == 15)
		{
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_DEAD", 24);
		}
		else if (iParam2 == 2)
		{
			StringConCat(&Var0, "_lost1", 24);
			__LIB_39__::func_904(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 3)
		{
			StringConCat(&Var0, "_spotd1", 24);
			__LIB_39__::func_904(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 4)
		{
			StringConCat(&Var0, "_wntd1", 24);
			__LIB_39__::func_904(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 5)
		{
			StringConCat(&Var0, "_spook", 24);
			__LIB_39__::func_904(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
			if (__LIB_39__::func_803(uParam0))
			{
				if (VEHICLE::IS_VEHICLE_STOPPED(uParam0->f_4))
				{
					__LIB_39__::func_888(uParam0, 4096, 0);
				}
				else
				{
					__LIB_39__::func_888(uParam0, 0, 0);
				}
			}
		}
		else if (iParam2 == 6)
		{
			StringConCat(&Var0, "_hit2", 24);
			__LIB_39__::func_904(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (iParam2 == 7)
		{
			StringConCat(&Var0, "_jak", 24);
			__LIB_39__::func_904(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 14)
		{
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_shot2", 24);
				}
				else
				{
					StringConCat(&Var0, "_shot1", 24);
				}
				__LIB_39__::func_904(uParam0, &Var0);
			}
			else if (!PED::IS_PED_INJURED(uParam0->f_3))
			{
				__LIB_0__::func_709(uParam0->f_3, "CALL_COPS_COMMIT", uParam0->f_145, 4);
			}
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, false);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SHT", 24);
		}
		else if (iParam2 == 12)
		{
			StringConCat(&Var0, "_shot1", 24);
			__LIB_39__::func_904(uParam0, &Var0);
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, false);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 13)
		{
			StringConCat(&Var0, "_shot1", 24);
			__LIB_39__::func_904(uParam0, &Var0);
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, false);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_CK", 24);
		}
		else if (iParam2 == 11)
		{
			__LIB_39__::func_852(8, 0);
			iLocal_57[3] = 1;
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&Var0, "_noDri1", 24);
				}
				__LIB_39__::func_904(uParam0, &Var0);
			}
			else if (!PED::IS_PED_INJURED(uParam0->f_3))
			{
				__LIB_0__::func_709(uParam0->f_3, "GENERIC_INSULT_MED", uParam0->f_145, 4);
			}
			__LIB_39__::func_888(uParam0, 0, 0);
			__LIB_39__::func_904(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_WAT", 24);
		}
		else if (iParam2 == 0)
		{
			__LIB_39__::func_852(8, 0);
			iLocal_57[3] = 1;
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&Var0, "_noDri1", 24);
				}
				__LIB_39__::func_904(uParam0, &Var0);
			}
			else if (!PED::IS_PED_INJURED(uParam0->f_3))
			{
				__LIB_0__::func_709(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			__LIB_39__::func_904(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_DR", 24);
		}
		else if (iParam2 == 1)
		{
			__LIB_39__::func_852(8, 0);
			iLocal_57[3] = 1;
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&Var0, "_noDri1", 24);
				}
				__LIB_39__::func_904(uParam0, &Var0);
			}
			else if (!PED::IS_PED_INJURED(uParam0->f_3))
			{
				__LIB_0__::func_709(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_FIRE", 24);
		}
		else if (iParam2 == 19)
		{
			StringCopy(&Var0, "OJTX_QUIT_", 24);
			__LIB_39__::func_865(&Var0);
			__LIB_2__::func_859(&(uParam0->f_244), "OJTXAUD", &Var0, 7, 0, 0, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_CNCL", 24);
		}
		else if (iParam2 == 20)
		{
			if (uParam0->f_115)
			{
				StringConCat(&Var0, "_aband2", 24);
			}
			else
			{
				StringConCat(&Var0, "_fail1", 24);
			}
			__LIB_39__::func_904(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else
		{
			if (uParam0->f_411 != 9)
			{
				if (iParam2 != 21)
				{
					StringConCat(&Var0, "_Fail1", 24);
				}
				else
				{
					StringConCat(&Var0, "_aband1", 24);
				}
				if (uParam0->f_410 > 5)
				{
					__LIB_39__::func_904(uParam0, &Var0);
				}
			}
			else if (!PED::IS_PED_INJURED(uParam0->f_3))
			{
				__LIB_0__::func_709(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
			__LIB_39__::func_852(3, 0);
		}
		__LIB_39__::func_859(uParam0, 3, 0f, 1);
	}
}

int func_974(int iParam0, int iParam1)//Position - 0x3AFF
{
	if (!PED::IS_PED_INJURED(iParam1))
	{
		if (!ENTITY::IS_ENTITY_AT_ENTITY(iParam0, iParam1, 100f, 100f, 50f, false, true, 0))
		{
			if (!CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(iParam1, true), 15f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_975(var uParam0)//Position - 0x104BE
{
	if (__LIB_0__::func_75())
	{
		return 1;
	}
	if (__LIB_39__::func_793(uParam0, 17))
	{
		return 1;
	}
	if (__LIB_39__::func_793(uParam0, 14))
	{
		return 1;
	}
	if (__LIB_21__::func_727(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_976(var uParam0)//Position - 0x10524
{
	if (__LIB_39__::func_793(uParam0, 17))
	{
		if (!__LIB_39__::func_793(uParam0, 14))
		{
			if (!__LIB_21__::func_727(uParam0))
			{
				if (!__LIB_0__::func_75())
				{
					__LIB_39__::func_794(uParam0, 17, 1);
				}
			}
		}
	}
}

void func_977(var uParam0, var uParam1, char* sParam2, bool bParam3)//Position - 0x4BF9
{
	if (bParam3)
	{
		__LIB_39__::func_786(uParam0);
	}
	if (!HUD::DOES_BLIP_EXIST(uParam0->f_8))
	{
		uParam0->f_8 = __LIB_0__::func_511(*uParam1, 0, 0);
	}
	if (!MISC::IS_STRING_NULL(sParam2))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_8, sParam2);
	}
}

float func_978(var uParam0, int iParam1)//Position - 0x11E7F
{
	if (!__LIB_0__::func_702(&(uParam0->f_146[iParam1 /*3*/])))
	{
		__LIB_3__::func_128(&(uParam0->f_146[iParam1 /*3*/]));
	}
	return __LIB_3__::func_108(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_979(int iParam0, var uParam1, bool bParam2, int iParam3)//Position - 0x38FA
{
	struct<3> Var0;
	uParam1->f_1 = 0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		uParam1->f_2 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
		PED::SET_PED_MONEY(iParam0, 0);
		*uParam1 = 0;
	}
	else
	{
		if (iParam3 <= 0)
		{
			*uParam1 = MISC::GET_RANDOM_INT_IN_RANGE(80, 200);
		}
		else
		{
			*uParam1 = iParam3;
		}
		uParam1->f_2 = { PED::GET_DEAD_PED_PICKUP_COORDS(iParam0, 1.2f, 1.5f) };
	}
	MISC::SET_BIT(&(uParam1->f_1), 3);
	MISC::SET_BIT(&(uParam1->f_1), 4);
	Var0 = { OBJECT::GET_SAFE_PICKUP_COORDS(uParam1->f_2, 1.2f, 1.5f) };
	uParam1->f_6 = OBJECT::CREATE_PICKUP(joaat("PICKUP_MONEY_VARIABLE"), Var0, uParam1->f_1, *uParam1, true, 0);
	if (bParam2)
	{
		if (!HUD::DOES_BLIP_EXIST(uParam1->f_5))
		{
			uParam1->f_5 = __LIB_16__::func_324(uParam1->f_6);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uParam1->f_5, "TAXI_BLIP_MONE");
		}
		else
		{
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uParam1->f_5, "TAXI_BLIP_MONE");
		}
	}
}

void func_980(var uParam0)//Position - 0x6732
{
	__LIB_39__::func_805(uParam0, 1000);
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_3);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(uParam0->f_3, PLAYER::PLAYER_PED_ID(), 0);
	}
	__LIB_0__::func_325();
	__LIB_39__::func_967(uParam0);
}

int func_981(var uParam0, bool bParam1)//Position - 0x504B
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false))
	{
		if (__LIB_39__::func_803(uParam0) && __LIB_39__::func_925(uParam0, 1, 1084227584))
		{
			if (bParam1)
			{
				if (__LIB_39__::func_850(uParam0, 2097152))
				{
					__LIB_39__::func_896(uParam0);
				}
			}
			else
			{
				__LIB_39__::func_896(uParam0);
			}
		}
		else if (!__LIB_39__::func_803(uParam0))
		{
			if (bParam1)
			{
				if (__LIB_39__::func_850(uParam0, 2097152))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, joaat("SCRIPT_TASK_LEAVE_VEHICLE")) == 7)
					{
						return 1;
					}
				}
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, joaat("SCRIPT_TASK_LEAVE_VEHICLE")) == 7)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_982(var uParam0, float fParam1)//Position - 0x8756
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	var uVar3;
	var uVar4;
	int iVar5;
	var uVar6;
	int iVar7;
	int iVar8;
	iVar8 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uParam0->f_4, "windscreen");
	if (iVar8 == -1)
	{
		iVar8 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uParam0->f_4, "windscreen_f");
	}
	if (iVar8 != -1)
	{
		Var2 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(uParam0->f_4, iVar8) };
		Var2 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(uParam0->f_4, Var2) };
		Var2.f_1 = (Var2.f_1 + 1f);
	}
	else
	{
		Var2 = { 0f, 1f, 1f };
	}
	Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, Var2) };
	Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_3, 0f, 0.25f, 0.9f) };
	GRAPHICS::DRAW_DEBUG_LINE(Var0, Var1, 0, 0, 255, 255);
	switch (iLocal_79)
	{
		case 0:
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_3, true);
			iLocal_79 = 1;
			break;
		case 1:
			if ((__LIB_0__::func_76(uParam0->f_4, uParam0->f_3, 0) <= fParam1 && !uParam0->f_142) && MISC::ABSF((Var0.f_2 - Var1.f_2)) < 5f)
			{
				if (uParam0->f_409 == 0)
				{
					uParam0->f_409 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Var0, Var1, 511, 0, 7);
				}
				else
				{
					iVar7 = SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_409, &iVar5, &uVar3, &uVar4, &uVar6);
					if (iVar7 == 2)
					{
						if (iVar5 == 0)
						{
							iLocal_79 = 2;
						}
						uParam0->f_409 = 0;
					}
					else if (iVar7 == 0)
					{
						uParam0->f_409 = 0;
					}
				}
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 0)
			{
				TASK::CLEAR_SEQUENCE_TASK(&(uParam0->f_243));
				TASK::OPEN_SEQUENCE_TASK(&(uParam0->f_243));
				TASK::TASK_PLAY_ANIM(0, "oddjobs@taxi@", "idle_a", 8f, -8f, -1, 0, 0f, false, false, false);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
				TASK::SET_SEQUENCE_TO_REPEAT(uParam0->f_243, true);
				TASK::CLOSE_SEQUENCE_TASK(uParam0->f_243);
				TASK::TASK_PERFORM_SEQUENCE(uParam0->f_3, uParam0->f_243);
			}
			break;
		case 2:
			HUD::CLEAR_PRINTS();
			if (uParam0->f_411 != 9)
			{
				if (!__LIB_0__::func_703(uParam0->f_44, 128))
				{
					__LIB_39__::func_970(uParam0, 4, 1, 0, 1);
				}
			}
			else
			{
				__LIB_0__::func_709(uParam0->f_3, "TAXI_HAIL", uParam0->f_145, 4);
			}
			TASK::CLEAR_PED_TASKS(uParam0->f_3);
			TASK::TASK_LOOK_AT_ENTITY(uParam0->f_3, uParam0->f_4, -1, 2048, 4);
			TASK::CLEAR_SEQUENCE_TASK(&(uParam0->f_243));
			TASK::OPEN_SEQUENCE_TASK(&(uParam0->f_243));
			if (uParam0->f_411 != 9)
			{
				TASK::TASK_PLAY_ANIM(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0f, false, false, false);
			}
			else
			{
				TASK::TASK_PLAY_ANIM(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -1.5f, -1, 48, 0f, false, false, false);
			}
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
			TASK::CLOSE_SEQUENCE_TASK(uParam0->f_243);
			TASK::TASK_PERFORM_SEQUENCE(uParam0->f_3, uParam0->f_243);
			TASK::CLEAR_SEQUENCE_TASK(&(uParam0->f_243));
			iLocal_79 = 3;
			break;
		case 3:
			iLocal_79 = 0;
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				ENTITY::SET_ENTITY_ANIM_SPEED(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 0.8f);
			}
			return 1;
			break;
	}
	return 0;
}

int func_983(var uParam0, int iParam1, int iParam2)//Position - 0x117A1
{
	if (((uParam0->f_107 >= 2 && uParam0->f_410 < 29) || uParam0->f_410 <= 5) || (iParam1 && !uParam0->f_114))
	{
		return 1;
	}
	else if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false))
	{
		if (!ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_3))
		{
			if (iParam2 == 4)
			{
				__LIB_39__::func_970(uParam0, 66, 1, 0, 1);
			}
			else
			{
				__LIB_39__::func_970(uParam0, 65, 1, 0, 1);
			}
		}
	}
	return 0;
}

void func_984(var uParam0, bool bParam1, bool bParam2)//Position - 0x653A
{
	if (bParam1)
	{
		__LIB_39__::func_786(uParam0);
	}
	if (!HUD::DOES_BLIP_EXIST(uParam0->f_10))
	{
		uParam0->f_10 = __LIB_0__::func_511(uParam0->f_4, 1, 0);
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_10, "TAXI_BLIP_CAR");
		HUD::SET_BLIP_ROUTE(uParam0->f_10, true);
		__LIB_39__::func_897(uParam0);
		if (bParam2)
		{
			HUD::CLEAR_PRINTS();
			__LIB_39__::func_970(uParam0, 3, 1, 0, 0);
		}
	}
}

void func_985(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x65D4
{
	if (!__LIB_0__::func_703(*uParam1, iParam2))
	{
		HUD::CLEAR_PRINTS();
		__LIB_39__::func_970(uParam0, iParam3, 1, 0, 0);
		__LIB_39__::func_780(uParam1, iParam2);
	}
}

void func_986(bool bParam0, var uParam1, bool bParam2)//Position - 0x733
{
	if (bParam0)
	{
		__LIB_39__::func_910(uParam1);
		if (!PED::IS_PED_INJURED(uParam1->f_3))
		{
			PED::SET_PED_CONFIG_FLAG(uParam1->f_3, 317, true);
		}
	}
	else
	{
		__LIB_39__::func_852(1, 0);
	}
	__LIB_39__::func_937(uParam1, bParam2);
}

void func_987(var uParam0)//Position - 0x10885
{
	if (!__LIB_3__::func_423(uParam0->f_429))
	{
		uParam0->f_429 = __LIB_11__::func_762();
		__LIB_13__::func_726(&(uParam0->f_429), 0, 0, MISC::GET_RANDOM_INT_IN_RANGE(4, 7), 0, 0, 0);
	}
	else if (__LIB_14__::func_793(uParam0->f_429))
	{
		__LIB_39__::func_973(uParam0, "Player took too long to make pickup", 9);
	}
}

int func_988(var uParam0, var uParam1)//Position - 0x120A9
{
	uParam1 = uParam1;
	__LIB_39__::func_973(uParam0, "Taxi Not Driveable", 1);
	return 1;
}

int func_989(var uParam0, var uParam1)//Position - 0x1214D
{
	uParam1 = uParam1;
	__LIB_39__::func_973(uParam0, "Didn't lose police in time.", 9);
	return 1;
}

int func_990(var uParam0, var uParam1)//Position - 0x1220F
{
	uParam1 = uParam1;
	__LIB_39__::func_973(uParam0, "Taxi Is Flipped", 0);
	return 1;
}

int func_991(var uParam0, var uParam1)//Position - 0x1226F
{
	uParam1 = uParam1;
	__LIB_39__::func_973(uParam0, "Stayed stopped for too long.", 9);
	return 1;
}

int func_992(var uParam0, var uParam1)//Position - 0x122C6
{
	uParam1 = uParam1;
	__LIB_39__::func_973(uParam0, "Taxi Not Driveable", 0);
	return 1;
}

int func_993(var uParam0, var uParam1)//Position - 0x123CB
{
	uParam1 = uParam1;
	__LIB_39__::func_973(uParam0, "Passenger injured.", 15);
	return 1;
}

void func_994(var uParam0, int iParam1)//Position - 0x6621
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
			{
				if ((WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iParam1, joaat("WEAPON_STUNGUN"), 0) || WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iParam1, 0, 2)) || WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iParam1, 0, 1))
				{
					__LIB_39__::func_973(uParam0, "Passenger injured by player with weapon.", 14);
				}
				PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
			}
		}
	}
}

int func_995(var uParam0, int iParam1)//Position - 0x7690
{
	if (!PED::IS_PED_INJURED(uParam0->f_3))
	{
		if (PED::IS_PED_IN_VEHICLE(uParam0->f_3, uParam0->f_4, false))
		{
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(uParam0->f_4, iParam1, false))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, joaat("SCRIPT_TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT")) != 1)
				{
					TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(uParam0->f_3, uParam0->f_4, false);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_996(var uParam0, int iParam1)//Position - 0x76E5
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (!PED::IS_PED_INJURED(uParam0->f_3))
		{
			if (PED::IS_PED_IN_VEHICLE(uParam0->f_3, uParam0->f_4, false))
			{
				if (!VEHICLE::IS_VEHICLE_SEAT_FREE(uParam0->f_4, iParam1, false))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_997(var uParam0, char* sParam1)//Position - 0xCF5B
{
	if (MISC::ARE_STRINGS_EQUAL(&(uParam0->f_13), "txm3_bant1") || MISC::ARE_STRINGS_EQUAL(&(uParam0->f_13), "txm9_bant2"))
	{
		StringConCat(sParam1, "_resBn1", 24);
		return 1;
	}
	if ((MISC::ARE_STRINGS_EQUAL(&(uParam0->f_13), "txm6_bant3M") || MISC::ARE_STRINGS_EQUAL(&(uParam0->f_13), "txm6_bant3T")) || MISC::ARE_STRINGS_EQUAL(&(uParam0->f_13), "txm6_bant3F"))
	{
		__LIB_39__::func_780(&(uParam0->f_28), 1);
		StringConCat(sParam1, "_resBn1", 24);
		return 1;
	}
	return 0;
}

int func_998(var uParam0, bool bParam1)//Position - 0x12A03
{
	if (bParam1)
	{
		return 1;
	}
	if ((((!__LIB_0__::func_75() && __LIB_39__::func_978(uParam0, 3) > 1f) || uParam0->f_415 == 18) || uParam0->f_415 == 14) || uParam0->f_415 == 15)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
			{
				if (PED::IS_PED_IN_VEHICLE(uParam0->f_3, uParam0->f_4, false))
				{
					if (__LIB_39__::func_787(uParam0) == 0 || __LIB_0__::func_703(uParam0->f_85, 32))
					{
						if (!VEHICLE::IS_VEHICLE_STOPPED(uParam0->f_4))
						{
							__LIB_39__::func_888(uParam0, 4160, 0);
						}
						else
						{
							__LIB_39__::func_888(uParam0, 0, 0);
						}
						return 1;
					}
					else
					{
						__LIB_39__::func_888(uParam0, 0, 0);
						return 1;
					}
				}
				else
				{
					__LIB_39__::func_888(uParam0, 0, 0);
					return 1;
				}
			}
			else
			{
				__LIB_39__::func_888(uParam0, 0, 0);
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else if ((MISC::GET_GAME_TIMER() % 1000) < 50)
	{
	}
	return 0;
}

int func_999(var uParam0)//Position - 0x8F27
{
	if ((ENTITY::GET_ENTITY_SPEED(uParam0->f_4) > 3f && __LIB_39__::func_978(uParam0, 5) > 15f) || ENTITY::IS_ENTITY_UPSIDEDOWN(uParam0->f_4))
	{
		return 1;
	}
	return 0;
}
