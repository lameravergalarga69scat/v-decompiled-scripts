void func_0(float fParam0, float fParam1, char* sParam2, int iParam3)//Position - 0x4A85C
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1);
}

void func_1(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)//Position - 0x4A930
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_FLOAT(fParam3, iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1);
}

void func_2(float fParam0, float fParam1, char* sParam2)//Position - 0x4AA13
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1);
}

void func_3()//Position - 0x4AF59
{
	AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_MINI_GAME_SOUNDSET");
}

bool func_4(int iParam0, var uParam1)//Position - 0x4AF85
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

void func_5()//Position - 0x4B05E
{
	AUDIO::PLAY_SOUND_FRONTEND(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET");
}

void func_6(var uParam0, bool bParam1)//Position - 0x4B310
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

void func_7(var uParam0, bool bParam1)//Position - 0x4B3D2
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

void func_8(struct<30> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, float fParam15, bool bParam16)//Position - 0x4C874
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

int func_9(int iParam0)//Position - 0x4D2A8
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

void func_10(var uParam0)//Position - 0x4D803
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

int func_11(int iParam0)//Position - 0x4D8F3
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

void func_12(var uParam0)//Position - 0x4DF00
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
	__LIB_0__.func_579(&(Global_1835390.f_2182));
}

void func_13(var uParam0, struct<2> Param1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68)//Position - 0x4F83B
{
	*uParam0 = Param1.f_0;
	uParam0->f_1 = Param1.f_1;
	uParam0->f_2 = 0;
}

int func_14()//Position - 0x4F98D
{
	if (Global_1835388 && Global_1835389)
	{
		return 1;
	}
	return 0;
}

struct<6> func_15(int iParam0)//Position - 0x5583A
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

int func_16(var uParam0)//Position - 0x55BE3
{
	if ((unk_0xA921AA820C25702F(uParam0->f_42, 1) && Global_1835390.f_2056[0] > 0) && uParam0->f_246.f_1 >= 0)
	{
		return 1;
	}
	return 0;
}

void func_17()//Position - 0x55D27
{
	AUDIO::PLAY_SOUND_FRONTEND(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET");
}

bool func_18(int* iParam0)//Position - 0x5733E
{
	return (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("HUD_321_GO", false));
}

void func_19(int* iParam0)//Position - 0x573B7
{
	*iParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("COUNTDOWN");
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("HUD_321_GO", true);
}

int func_20(int iParam0)//Position - 0x58F1F
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

void func_21()//Position - 0x58FAE
{
	Global_1835013.f_73 = Global_1835013.f_142;
	Global_1835013.f_73.f_1 = Global_1835013.f_142.f_1;
	Global_1835013.f_73.f_2 = Global_1835013.f_142.f_2;
	Global_1835013.f_211 = Global_1835013.f_142;
	Global_1835013.f_211.f_1 = Global_1835013.f_142.f_1;
	Global_1835013.f_211.f_2 = Global_1835013.f_142.f_2;
}

int func_22(int iParam0, int iParam1)//Position - 0x5900E
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

void func_23(char* sParam0)//Position - 0x499
{
	AUDIO::TRIGGER_MUSIC_EVENT(sParam0);
}

void func_24(var uParam0)//Position - 0x5B1
{
	if (!AUDIO::HAS_SOUND_FINISHED(*uParam0))
	{
		AUDIO::STOP_SOUND(*uParam0);
	}
	AUDIO::RELEASE_SOUND_ID(*uParam0);
	*uParam0 = -1;
}

void func_25()//Position - 0x107F
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

int func_26()//Position - 0x194D
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

struct<2> func_27(struct<2> Param0)//Position - 0x9922
{
	return __LIB_3__.func_990((Param0.f_0 * 1920f), (Param0.f_1 * 1080f));
}

int func_28(struct<2> Param0, struct<2> Param1)//Position - 0xA084
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

void func_29(bool bParam0)//Position - 0x11CB0
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

bool func_30()//Position - 0x6F0F1
{
	return Global_2714762.f_687;
}

void func_31(int iParam0)//Position - 0x736AC
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

bool func_32()//Position - 0x74E46
{
	return Global_2715699.f_1.f_2827;
}

int func_33()//Position - 0xFDCF3
{
	if ((__LIB_24__.func_923() || !__LIB_0__.func_834(PLAYER::PLAYER_ID())) || BitTest(Global_1946250.f_4523.f_1, 7))
	{
		return 0;
	}
	return 1;
}

bool func_34()//Position - 0x1B0033
{
	return BitTest(Global_2714762, 0);
}

int func_35()//Position - 0x1B0053
{
	if (__LIB_0__.func_739())
	{
		__LIB_1__.func_659();
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

void func_36()//Position - 0x1B00DB
{
	MISC::CLEAR_BIT(&(Global_2714762.f_2), 16);
}

bool func_37(int iParam0)//Position - 0x1B0103
{
	return BitTest(Global_1853348[iParam0 /*834*/].f_36.f_18, 5);
}

void func_38(var uParam0)//Position - 0x1B0179
{
	struct<4> Var0;
	*uParam0 = { Var0 };
}

int func_39()//Position - 0x1B0B69
{
	return Global_2621446.f_69.f_4;
}

void func_40(int iParam0)//Position - 0x1B0F83
{
	Global_1937518.f_46 = iParam0;
}

void func_41()//Position - 0x1B2D24
{
	Global_1937518.f_42 = 0;
}

int func_42()//Position - 0x56E
{
	return joaat("MP_M_Freemode_01");
}

int func_43(bool bParam0)//Position - 0x5A9E
{
	if (!__LIB_0__.func_317(bParam0))
	{
		return 7;
	}
	return Global_113386.f_7688.f_919[bParam0];
}

void func_44(int iParam0)//Position - 0x734C0
{
	Global_2725360 = iParam0;
}

bool func_45()//Position - 0x741E9
{
	return Global_1575060;
}

var func_46()//Position - 0x74331
{
	return Global_1575056;
}

void func_47(int iParam0)//Position - 0x74875
{
	Global_1575058 = iParam0;
}

void func_48(int iParam0)//Position - 0x74883
{
	Global_1575031 = iParam0;
}

void func_49()//Position - 0x74891
{
	Global_1574654.f_1 = -1;
	Global_1574654.f_2 = 0;
	Global_1574654.f_4 = 0;
	Global_1574654.f_5 = 0;
}

void func_50(int iParam0)//Position - 0x748B5
{
	Global_1574531 = iParam0;
}

void func_51(int iParam0)//Position - 0x748D1
{
	Global_2725337 = iParam0;
}

void func_52(bool bParam0)//Position - 0x749FA
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

void func_53(int iParam0)//Position - 0x74A49
{
	Global_2725909 = iParam0;
}

void func_54(int iParam0)//Position - 0x74A73
{
	Global_2725389 = iParam0;
}

void func_55(int iParam0)//Position - 0x74A9D
{
	Global_2727742 = iParam0;
}

void func_56(int iParam0)//Position - 0x74AD5
{
	Global_1574537 = iParam0;
}

void func_57(int iParam0)//Position - 0x74AE3
{
	Global_2725402 = iParam0;
}

void func_58(int iParam0)//Position - 0x74AF1
{
	Global_1575022 = iParam0;
}

void func_59(int iParam0)//Position - 0x74B6F
{
	Global_1575028 = iParam0;
}

void func_60(int iParam0)//Position - 0x74B8B
{
	Global_1574613 = iParam0;
}

void func_61(int iParam0)//Position - 0x74B99
{
	Global_1575055 = iParam0;
}

void func_62(int iParam0)//Position - 0x74BA7
{
	Global_2727714 = iParam0;
}

void func_63(int iParam0)//Position - 0x74BB5
{
	Global_2727713 = iParam0;
}

void func_64(int iParam0)//Position - 0x74CCB
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

void func_65(int iParam0)//Position - 0x74D12
{
	Global_2725428 = iParam0;
}

void func_66(int iParam0)//Position - 0x74D20
{
	Global_1575064 = iParam0;
}

void func_67()//Position - 0x74D2E
{
	Global_1574612 = 0;
}

void func_68(int iParam0)//Position - 0x74D84
{
	Global_2725422 = iParam0;
}

void func_69(int iParam0)//Position - 0x74DDF
{
	Global_2725339 = iParam0;
}

void func_70()//Position - 0x74F05
{
	Global_1575043 = 0;
}

void func_71(int iParam0)//Position - 0x75014
{
	Global_2725359 = iParam0;
}

int func_72()//Position - 0x77316
{
	if (Global_1575046)
	{
		return 1;
	}
	return 0;
}

int func_73()//Position - 0x774EE
{
	return Global_2726955;
}

void func_74(int iParam0)//Position - 0x78F31
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

void func_75()//Position - 0x790E2
{
	Global_1931899.f_1 = 0;
}

int func_76()//Position - 0x79129
{
	return Global_2727894;
}

void func_77(int iParam0)//Position - 0x79143
{
	Global_2727719 = iParam0;
}

void func_78()//Position - 0x79245
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Global_1575086[iVar0] = 0;
		iVar0++;
	}
}

var func_79()//Position - 0x7938E
{
	return Global_2725413;
}

bool func_80()//Position - 0x79443
{
	return Global_1574529;
}

void func_81(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4)//Position - 0x7AE36
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
			Var2 = { __LIB_0__.func_79(Var0 - Var1) * FtoV((fParam3 / 2f)) };
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

void func_82(int iParam0)//Position - 0x7B0E1
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

void func_83(var uParam0, int iParam1)//Position - 0xCF63
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

int func_84(int iParam0)//Position - 0x519F
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

int func_85()//Position - 0x41C02
{
	char cVar0[64];
	StringCopy(&cVar0, "MP_STAT_BIKER_CLIENT_VEHICLE_v0", 64);
	return MISC::GET_HASH_KEY(&cVar0);
}

int func_86(int iParam0)//Position - 0x42518
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

bool func_87(int iParam0)//Position - 0x46DBA
{
	return 0 == __LIB_26__.func_405(iParam0);
}

bool func_88()//Position - 0x47055
{
	return BitTest(Global_1966179, 2);
}

int func_89(int iParam0)//Position - 0xBE8B5
{
	if (__LIB_1__.func_264(iParam0, 1, 1))
	{
		if (BitTest(Global_2689235[iParam0 /*453*/].f_416, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_90(int iParam0)//Position - 0xBF2CF
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

void func_91(int iParam0, int iParam1)//Position - 0xBF984
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
			iVar2 = __LIB_0__.func_228(__LIB_22__.func_885(iVar1), -1);
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

int func_92(int iParam0)//Position - 0xBFBB3
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

int func_93(int iParam0)//Position - 0xC1ADE
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

int func_94(var uParam0)//Position - 0xC1B0E
{
	if (uParam0->f_66.f_4 == joaat("SERVICE_SPEND_CASH_DROP"))
	{
		return 0;
	}
	return 1;
}

int func_95(var uParam0)//Position - 0xC4D9B
{
	*uParam0 = SYSTEM::SHIFT_LEFT(1, 2);
	return 5410420;
}

int func_96()//Position - 0xC4DB0
{
	return SYSTEM::SHIFT_LEFT(1, 25);
}

int func_97(struct<18> Param0, var uParam1, int iParam2)//Position - 0xC4F17
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

void func_98(int* iParam0, bool bParam1)//Position - 0x6E2
{
	if (bParam1)
	{
		__LIB_0__.func_712(&(iParam0->f_1), 16);
	}
	else
	{
		__LIB_0__.func_711(&(iParam0->f_1), 16);
	}
}

void func_99(int* iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x7F5
{
	if (*iParam0 == 0)
	{
		*iParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE_INSTANCE("instructional_buttons");
	}
	iParam0->f_1 = 0;
	iParam0->f_123 = 0;
	if (bParam1)
	{
		__LIB_0__.func_712(&(iParam0->f_1), 32);
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		__LIB_0__.func_712(&(iParam0->f_1), 1);
		if (bParam2)
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_TO_USE_SYSTEM_TIME(*iParam0, true);
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (bParam3)
		{
			__LIB_0__.func_712(&(iParam0->f_1), 4096);
		}
	}
	if (bParam4)
	{
		__LIB_0__.func_712(&(iParam0->f_1), 8192);
	}
}

int func_100(int* iParam0, int iParam1)//Position - 0x9DD
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

struct<4> func_101(var uParam0)//Position - 0xAB7
{
	struct<4> Var0;
	int iVar1;
	StringCopy(&Var0, "SUMMARY_", 16);
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1, 24);
	uParam0->f_15 = iVar1;
	StringIntConCat(&Var0, iVar1, 16);
	return Var0;
}

struct<4> func_102(var uParam0)//Position - 0xB95
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

struct<4> func_103(var uParam0)//Position - 0xFEC
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

struct<4> func_104(var uParam0)//Position - 0x11E9
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

struct<4> func_105(var uParam0)//Position - 0x127E
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

int func_106(int iParam0)//Position - 0x134B
{
	if (iParam0 < 9)
	{
		return BitTest(Global_113386.f_18103.f_175[iParam0 /*19*/].f_18, 0);
	}
	return 0;
}

int func_107(int iParam0)//Position - 0x13E8
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

struct<4> func_108(var uParam0)//Position - 0x1440
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

struct<4> func_109(var uParam0)//Position - 0x1525
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

struct<4> func_110(var uParam0)//Position - 0x15C5
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

struct<4> func_111(var uParam0)//Position - 0x1693
{
	struct<4> Var0;
	int iVar1;
	StringCopy(&Var0, "STORY_", 16);
	if (__LIB_0__.func_368(135))
	{
		StringCopy(&(uParam0->f_1), "M", 4);
		StringConCat(&Var0, "M", 16);
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1, 11);
	}
	else if (__LIB_0__.func_368(136))
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

struct<4> func_112(var uParam0)//Position - 0x171E
{
	struct<4> Var0;
	int iVar1;
	StringCopy(&Var0, "INTRO_", 16);
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1, 21);
	*uParam0 = iVar1;
	StringIntConCat(&Var0, iVar1, 16);
	return Var0;
}

void func_113(int iParam0)//Position - 0x31AC
{
	MISC::SET_BIT(&(Global_1641031.f_15[iParam0 /*24*/]), 0);
}

void func_114(int iParam0, int iParam1)//Position - 0x31C3
{
	Global_1641031.f_15[iParam0 /*24*/].f_16 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam1);
	Global_1641031.f_15[iParam0 /*24*/].f_17 = 1;
}

bool func_115(int iParam0)//Position - 0x3279
{
	return BitTest(Global_1641031.f_15[iParam0 /*24*/], 1);
}

bool func_116()//Position - 0x3D98
{
	return BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833, 2);
}

bool func_117()//Position - 0x3DDD
{
	return Global_2723612.f_1;
}

int func_118(int iParam0, int iParam1)//Position - 0xC98B
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

int func_119(int iParam0, int iParam1)//Position - 0x31B55
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

bool func_120(int iParam0, char* sParam1)//Position - 0x132FC
{
	return VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam0, sParam1);
}

void func_121(int iParam0, char* sParam1)//Position - 0x1330C
{
	VEHICLE::REQUEST_VEHICLE_RECORDING(iParam0, sParam1);
}

int func_122()//Position - 0x14440
{
	if (iLocal_198 == 0)
	{
		return joaat("A_M_Y_Business_01");
	}
	return iLocal_198;
}

int func_123()//Position - 0x1B12D
{
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("digitalOverlay", false);
	if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("digitalOverlay"))
	{
		return 1;
	}
	return 0;
}

void func_124(int iParam0, int iParam1, float fParam2)//Position - 0x1BC3E
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

void func_125(int iParam0, int iParam1, char* sParam2, int iParam3)//Position - 0x1BC8D
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

void func_126(int iParam0, char* sParam1)//Position - 0x21701
{
	VEHICLE::REMOVE_VEHICLE_RECORDING(iParam0, sParam1);
}

Vector3 func_127(int iParam0, int iParam1)//Position - 0x1988
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

int func_128()//Position - 0x72EB
{
	if (Global_1946250.f_4698 != -1)
	{
		return 1;
	}
	return 0;
}

int func_129(int iParam0, int iParam1)//Position - 0xCF5A
{
	var uVar0;
	switch (iParam0)
	{
		case 0:
			return 0;
		case 8:
			if (iParam1 > 4)
			{
				return 4;
			}
			return iParam1;
		case 1:
			uVar0 = __LIB_0__.func_534(5329, -1, 0);
			if (BitTest(uVar0, 7))
			{
				if (iParam1 > 4)
				{
					return 4;
				}
				return iParam1;
			}
			else
			{
				return 0;
			}
			break;
	}
	return 0;
}

Vector3 func_130(int iParam0)//Position - 0x175F
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

void func_131(int iParam0)//Position - 0x2BF5
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

Vector3 func_132(int iParam0)//Position - 0x50F9
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

Vector3 func_133(struct<3> Param0, bool bParam1)//Position - 0xECF2
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

void func_134(int iParam0)//Position - 0x14DA7
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

void func_135()//Position - 0x80AFA
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

var func_136(int iParam0)//Position - 0x8442E
{
	return Global_1998[iParam0 /*29*/].f_1;
}

void func_137()//Position - 0x308
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

void func_138(var* uParam0, char* sParam1)//Position - 0x25C3
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

int func_139()//Position - 0x23113
{
	if (((LOADINGSCREEN::LOBBY_AUTO_MULTIPLAYER_FREEMODE() || LOADINGSCREEN::LOBBY_AUTO_MULTIPLAYER_MENU()) || NETWORK::GET_IS_LAUNCH_FROM_LIVE_AREA()) || NETWORK::GET_IS_LIVE_AREA_LAUNCH_WITH_CONTENT())
	{
		return 1;
	}
	return 0;
}

void func_140(char* sParam0, int iParam1)//Position - 0x15
{
	SCRIPT::REQUEST_SCRIPT(sParam0);
	while (!SCRIPT::HAS_SCRIPT_LOADED(sParam0))
	{
		SYSTEM::WAIT(0);
		SCRIPT::REQUEST_SCRIPT(sParam0);
	}
	SYSTEM::START_NEW_SCRIPT(sParam0, iParam1);
}

int func_141(struct<3> Param0, var uParam1, int iParam2, int iParam3, float fParam4, float fParam5)//Position - 0x9FE7
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

int func_142(struct<3> Param0, float fParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0xA070
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

int func_143(int iParam0, struct<3> Param1, struct<3> Param2, float fParam3, int iParam4, int iParam5)//Position - 0x97C69
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

int func_144(int iParam0)//Position - 0x985A7
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

int func_145(int iParam0, int iParam1)//Position - 0x98AB2
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

int func_146(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x99022
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

int func_147(var uParam0, int iParam1, var uParam2)//Position - 0x99538
{
	if (*uParam0 >= *uParam2)
	{
		return 0;
	}
	(*uParam2)[*uParam0] = iParam1;
	*uParam0++;
	return 1;
}

int func_148(int iParam0, bool bParam1)//Position - 0x997C0
{
	if (BitTest(Global_113386.f_18574[iParam0 /*6*/], bParam1))
	{
		return 1;
	}
	return 0;
}

int func_149(int iParam0, float fParam1, var uParam2, var uParam3, int iParam4)//Position - 0x99B5B
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

int func_150(int iParam0, int iParam1, int iParam2)//Position - 0x99B8B
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

bool func_151(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x9AA4B
{
	*uParam0 = 318;
	*uParam1 = -1f;
	uParam2->f_2 = uParam2->f_2;
	uParam3->f_111 = uParam3->f_111;
	uParam4 = uParam4;
	return *uParam0 != 318;
}

void func_152()//Position - 0xCC
{
	iLocal_54 = 0;
}

bool func_153()//Position - 0xD31
{
	return Global_1648034.f_112;
}

int func_154(int iParam0)//Position - 0x17AA
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

int func_155(int iParam0)//Position - 0x218D
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

int func_156(int iParam0, int iParam1)//Position - 0x4E40
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

void func_157(int iParam0)//Position - 0x19DF
{
	MISC::CLEAR_BIT(&uLocal_160, iParam0);
}

void func_158(int iParam0)//Position - 0x19F0
{
	MISC::SET_BIT(&uLocal_160, iParam0);
}

void func_159(int iParam0, int iParam1, int iParam2)//Position - 0x5967
{
	if (PED::IS_PED_COMPONENT_VARIATION_VALID(iParam0, 6, iParam1, iParam2))
	{
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 6, iParam1, iParam2, 0);
	}
}

void func_160(int iParam0, int iParam1, int iParam2)//Position - 0x598C
{
	if (PED::IS_PED_COMPONENT_VARIATION_VALID(iParam0, 11, iParam1, iParam2))
	{
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 11, iParam1, iParam2, 0);
	}
}

void func_161(int iParam0, int iParam1, int iParam2)//Position - 0x59B3
{
	if (PED::IS_PED_COMPONENT_VARIATION_VALID(iParam0, 8, iParam1, iParam2))
	{
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, iParam1, iParam2, 0);
	}
}

void func_162(int iParam0, int iParam1, int iParam2)//Position - 0x5A7E
{
	if (PED::IS_PED_COMPONENT_VARIATION_VALID(iParam0, 4, iParam1, iParam2))
	{
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, iParam1, iParam2, 0);
	}
}

void func_163(int iParam0, int iParam1, int iParam2)//Position - 0x5AA3
{
	if (PED::IS_PED_COMPONENT_VARIATION_VALID(iParam0, 3, iParam1, iParam2))
	{
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, iParam1, iParam2, 0);
	}
}

void func_164(int iParam0, int iParam1, int iParam2)//Position - 0x5AC8
{
	if (PED::IS_PED_COMPONENT_VARIATION_VALID(iParam0, 2, iParam1, iParam2))
	{
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 2, iParam1, iParam2, 0);
	}
}

void func_165(int iParam0, int iParam1, int iParam2)//Position - 0x5AED
{
	if (PED::IS_PED_COMPONENT_VARIATION_VALID(iParam0, 0, iParam1, iParam2))
	{
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 0, iParam1, iParam2, 0);
	}
}

void func_166(int iParam0)//Position - 0x62C0
{
	if (CAM::DOES_CAM_EXIST(iParam0))
	{
		CAM::DESTROY_CAM(iParam0, false);
	}
}

int func_167(int iParam0)//Position - 0x6D981
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

int func_168(int iParam0, bool bParam1)//Position - 0x6E2F3
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

char* func_169(int iParam0)//Position - 0x6F9B5
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

char* func_170(int iParam0)//Position - 0x6F9F4
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

bool func_171(int iParam0)//Position - 0x70AF5
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, false), 128.7f, -1298.22f, 29.31f) < 9f;
}

void func_172(int iParam0)//Position - 0x74123
{
	iLocal_167 = iParam0;
}

int func_173()//Position - 0x762F3
{
	return iLocal_103;
}

bool func_174(int iParam0)//Position - 0x772DA
{
	return BitTest(uLocal_160, iParam0);
}

int func_175()//Position - 0x79668
{
	return joaat("WEAPON_PISTOL");
}

void func_176(var uParam0, int iParam1)//Position - 0x79EC9
{
	__LIB_10__.func_592(uParam0, 0, iParam1, "NULL", 0);
}

void func_177(bool bParam0)//Position - 0x7AC17
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

void func_178(int iParam0)//Position - 0x58B2F
{
	int iVar0;
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	STATS::STAT_SET_INT(iParam0, iVar0 + 1, true);
}

void func_179(int iParam0)//Position - 0x58B4D
{
	iLocal_77 = (iLocal_77 + iParam0);
	iLocal_79 = 1;
}

struct<6> func_180(int iParam0)//Position - 0x5A4D5
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

struct<4> func_181(int iParam0)//Position - 0x5A565
{
	struct<4> Var0;
	StringCopy(&Var0, "SCLUB_NM_", 16);
	StringIntConCat(&Var0, iParam0, 16);
	return Var0;
}

char* func_182(int iParam0, bool bParam1)//Position - 0x5A852
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

int func_183(char* sParam0, int iParam1)//Position - 0x5A955
{
	if (__LIB_4__.func_66(sParam0, iParam1))
	{
		return 1;
	}
	return 0;
}

int func_184(char* sParam0)//Position - 0x5A96D
{
	if (__LIB_0__.func_1(sParam0))
	{
		return 1;
	}
	if (__LIB_9__.func_610(sParam0))
	{
		return 1;
	}
	return 0;
}

bool func_185()//Position - 0x5AB12
{
	return (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("maintransition")) > 0 || Global_23011.f_11);
}

Vector3 func_186()//Position - 0x5B5D3
{
	switch (iLocal_82)
	{
		case 0:
			return 127.16f, -1283.59f, 29.27f;
			break;
	}
	return 0f, 0f, 0f;
}

bool func_187()//Position - 0x5BEC5
{
	return __LIB_0__.func_517(Global_112411, 4);
}

Vector3 func_188()//Position - 0x4ADC
{
	return 127.96f, -1298.51f, 29.42f;
}

void func_189(int iParam0)//Position - 0x54A0
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

void func_190()//Position - 0x607D
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

int func_191(int iParam0)//Position - 0x6123
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

void func_192()//Position - 0x7007
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

char* func_193(int iParam0, bool bParam1)//Position - 0x704C
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

char* func_194(int iParam0)//Position - 0x70EE
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

struct<4> func_195(int iParam0)//Position - 0x8690
{
	struct<4> Var0;
	StringCopy(&Var0, "SCLUB_METER_", 16);
	StringIntConCat(&Var0, iParam0, 16);
	return Var0;
}

char* func_196(bool bParam0)//Position - 0x90E0
{
	if (bParam0)
	{
		return "mini@strip_club@lap_dance_2g@ld_2g_decline";
	}
	return "mini@strip_club@lap_dance@ld_girl_a_decline";
}

char* func_197(bool bParam0)//Position - 0x90FB
{
	if (bParam0)
	{
		return "mini@strip_club@lap_dance_2g@ld_2g_accept";
	}
	return "mini@strip_club@lap_dance@ld_girl_a_accept";
}

char* func_198(bool bParam0)//Position - 0x9116
{
	if (bParam0)
	{
		return "mini@strip_club@lap_dance_2g@ld_2g_wait";
	}
	return "mini@strip_club@lap_dance@ld_girl_a_wait";
}

char* func_199(bool bParam0)//Position - 0x9131
{
	if (bParam0)
	{
		return "mini@strip_club@lap_dance_2g@ld_2g_reach";
	}
	return "mini@strip_club@lap_dance@ld_reach";
}

Vector3 func_200(bool bParam0)//Position - 0x990F
{
	if (bParam0)
	{
		return 116.9946f, -1300.2452f, 28.019f;
	}
	return 114.529f, -1297.4677f, 28.2688f;
}

Vector3 func_201(int iParam0)//Position - 0x9F52
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

char* func_202(bool bParam0, bool bParam1)//Position - 0xA027
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

char* func_203(int iParam0, bool bParam1)//Position - 0xA051
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

char* func_204(int iParam0, bool bParam1)//Position - 0xA269
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

char* func_205(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0xA38B
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

char* func_206(int iParam0, bool bParam1)//Position - 0xA960
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

int func_207(int iParam0)//Position - 0xB133
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

int func_208(int iParam0)//Position - 0xB6BA
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

char* func_209(int iParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x75EFD
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

void func_210()//Position - 0x76314
{
	iLocal_151 = MISC::GET_GAME_TIMER() + 3000;
}

void func_211()//Position - 0x798E2
{
	iLocal_76++;
	iLocal_79 = 1;
}

char* func_212(bool bParam0, bool bParam1)//Position - 0x7A7F4
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

char* func_213(bool bParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x7A821
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

int func_214(int iParam0)//Position - 0x7A9F2
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

void func_215()//Position - 0x7B340
{
	if (CAM::DOES_CAM_EXIST(Local_122.f_0))
	{
		CAM::DETACH_CAM(Local_122.f_0);
		Local_122.f_1 = { Local_204 + Vector(0.066f, 0.0107f, -0.1052f) };
		Local_122.f_4 = 15f;
		Local_122.f_4.f_2 = __LIB_0__.func_670(CAM::GET_CAM_COORD(Local_122.f_0), ENTITY::GET_ENTITY_COORDS(Local_89[iLocal_136 /*11*/], true));
	}
}

Vector3 func_216()//Position - 0x7B9A5
{
	return 116.2204f, -1297.7778f, 28.0192f;
}

char* func_217(int iParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x7BA70
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

int func_218()//Position - 0x7BB94
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

int func_219()//Position - 0x7BC92
{
	if (__LIB_0__.func_75() || Global_21605 != 0)
	{
		return 0;
	}
	return 1;
}

void func_220(int iParam0, int iParam1)//Position - 0x7BCD6
{
	int iVar0;
	iVar0 = 1500;
	PED::SET_IK_TARGET(PLAYER::PLAYER_PED_ID(), 1, Local_89[iParam0 /*11*/], iParam1, 0f, 0f, 0f, 0, iVar0, iVar0);
}

char* func_221(bool bParam0)//Position - 0x7BDC1
{
	if (bParam0)
	{
		return "mini@strip_club@lap_dance_2g@ld_2g_intro";
	}
	return "mini@strip_club@lap_dance@ld_girl_a_intro";
}

char* func_222(bool bParam0)//Position - 0x7BDDE
{
	if (bParam0)
	{
		return "mini@strip_club@lap_dance_2g@ld_2g_approach";
	}
	return "mini@strip_club@lap_dance@ld_girl_a_approach";
}

void func_223()//Position - 0x7BEC2
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

char* func_224(int iParam0, bool bParam1, bool bParam2)//Position - 0x7C0AF
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

void func_225(int iParam0, struct<3> Param1, struct<3> Param2, var uParam3, int iParam4, int iParam5, int iParam6, float fParam7, int iParam8, int iParam9, float fParam10, bool bParam11)//Position - 0x7C6F6
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

Vector3 func_226(int iParam0, int iParam1, bool bParam2)//Position - 0x7C889
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

float func_227(int iParam0)//Position - 0x7CCFE
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

Vector3 func_228(int iParam0)//Position - 0x7CDA1
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

void func_229(int iParam0, int iParam1, int iParam2)//Position - 0x7D171
{
	uLocal_91[iParam2] = Local_89[iParam0 /*11*/].f_1;
	uLocal_187[iParam2] = iParam1;
}

char* func_230(int iParam0)//Position - 0x7D413
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

char* func_231()//Position - 0x7D480
{
	return "mini@strip_club@idles@bouncer@go_away";
}

float func_232()//Position - 0x7D50C
{
	return 130.0314f;
}

Vector3 func_233()//Position - 0x7D54C
{
	return 118.4887f, -1300.0215f, 28.0194f;
}

void func_234()//Position - 0x7DC4C
{
	MISC::CLEAR_AREA_OF_OBJECTS(116.62639f, -1294.9115f, 28.270168f, 1.5f, 0);
	MISC::CLEAR_AREA_OF_VEHICLES(116.62639f, -1294.9115f, 28.270168f, 1.5f, false, false, false, false, false, false, 0);
}

bool func_235()//Position - 0x7E642
{
	return PED::IS_ANY_PED_SHOOTING_IN_AREA(137.6174f, -1271.6357f, 28.1323f, 96.3833f, -1322.4016f, 28.2919f, false, false);
}

int func_236()//Position - 0x7E66E
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

bool func_237(int iParam0)//Position - 0x7E93C
{
	return __LIB_0__.func_517(uLocal_100, iParam0);
}

void func_238()//Position - 0x7EBA8
{
	iLocal_141++;
}

void func_239()//Position - 0x7EBFB
{
	MISC::CLEAR_AREA_OF_PEDS(116.484f, -1302.986f, 29f, 2f, 0);
}

Vector3 func_240()//Position - 0x7EDAD
{
	return 117.27327f, -1294.7175f, 28.27479f;
}

int func_241()//Position - 0x7EDC4
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

char* func_242()//Position - 0x7F566
{
	return "mini@strip_club@pole_dance@stage_exit";
}

char* func_243()//Position - 0x7F573
{
	return "mini@strip_club@pole_dance@stage_enter";
}

char* func_244()//Position - 0x7F580
{
	return "mini@strip_club@pole_dance@pole_exit";
}

char* func_245()//Position - 0x7F58D
{
	return "mini@strip_club@pole_dance@pole_enter";
}

char* func_246(int iParam0)//Position - 0x7F59A
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

char* func_247(int iParam0)//Position - 0x7F5E0
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

char* func_248(int iParam0)//Position - 0x7F626
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

char* func_249(int iParam0)//Position - 0x7F66C
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

char* func_250()//Position - 0x7F6CA
{
	return "mini@strip_club@idles@stripper";
}

char* func_251()//Position - 0x7FE93
{
	return "mini@strip_club@idles@bouncer@side_exit";
}

char* func_252()//Position - 0x7FEA0
{
	return "mini@strip_club@idles@bouncer@side_enter";
}

char* func_253()//Position - 0x7FEAD
{
	return "mini@strip_club@idles@bouncer@stop";
}

int func_254(int iParam0)//Position - 0x7FEBA
{
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, __LIB_31__.func_170(0), __LIB_31__.func_169(0), 3))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, __LIB_31__.func_170(1), __LIB_31__.func_169(1), 3))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, __LIB_31__.func_170(2), __LIB_31__.func_169(2), 3))
	{
		return 2;
	}
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, __LIB_31__.func_170(3), __LIB_31__.func_169(3), 3))
	{
		return 3;
	}
	return -1;
}

float func_255(int iParam0)//Position - 0x7FF23
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

int func_256()//Position - 0x802AB
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

void func_257()//Position - 0x8043C
{
	iLocal_140 = __LIB_0__.func_138(iLocal_140 + 1 < 30, iLocal_140 + 1, 0);
}

Vector3 func_258(int iParam0)//Position - 0x80586
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

char* func_259(int iParam0)//Position - 0x80B49
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

char* func_260(int iParam0)//Position - 0x80BCE
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

char* func_261()//Position - 0x80F95
{
	return "stripclub_drinking";
}

char* func_262(int iParam0, bool bParam1)//Position - 0x81559
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

int func_263(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, float fParam5, int iParam6, bool bParam7)//Position - 0x82C5C
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

char* func_264()//Position - 0x82EAD
{
	return "mini@strip_club@private_dance@exit";
}

char* func_265(int iParam0)//Position - 0x82EBA
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

char* func_266()//Position - 0x82F00
{
	return "mini@strip_club@private_dance@idle";
}

char* func_267(int iParam0)//Position - 0x82F0D
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

char* func_268(int iParam0)//Position - 0x8304E
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

Vector3 func_269(int iParam0)//Position - 0x83094
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

Vector3 func_270(int iParam0)//Position - 0x8311F
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

bool func_271(var uParam0)//Position - 0x831A1
{
	return BitTest(*uParam0, 7);
}

char* func_272(int iParam0)//Position - 0x83472
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

char* func_273(int iParam0)//Position - 0x83584
{
	iParam0 = __LIB_0__.func_138(iParam0 <= 0, MISC::GET_RANDOM_INT_IN_RANGE(2, 7), iParam0);
	iParam0 = __LIB_0__.func_138(iParam0 == 5, 2, iParam0);
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

float func_274(int iParam0)//Position - 0x838FD
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

Vector3 func_275()//Position - 0x83A41
{
	return 120.25f, -1293.07f, 28.27f;
}

float func_276(int iParam0, struct<3> Param1)//Position - 0x842ED
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
			return __LIB_0__.func_670(Param1, ENTITY::GET_ENTITY_COORDS(iVar1, true));
		}
	}
	return fVar0;
}

bool func_277()//Position - 0x84786
{
	return MISC::GET_GAME_TIMER() < iLocal_164;
}

void func_278(int iParam0)//Position - 0x848CF
{
	if (STREAMING::HAS_ANIM_DICT_LOADED("facials@gen_female@variations@happy"))
	{
		if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "facials@gen_female@variations@happy", "mood_happy_1", 3))
		{
			TASK::TASK_PLAY_ANIM(iParam0, "facials@gen_female@variations@happy", "mood_happy_1", 8f, -8f, -1, 33, 0f, false, false, false);
		}
	}
}

void func_279(int iParam0)//Position - 0x85911
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

char* func_280(bool bParam0, int iParam1)//Position - 0x85961
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

float func_281(struct<3> Param0, struct<3> Param1)//Position - 0x85B34
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

int func_282()//Position - 0x85F07
{
	return joaat("prop_anim_cash_note_b");
}

int func_283(int iParam0)//Position - 0x85F84
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

Vector3 func_284(struct<3> Param0, struct<3> Param1, struct<3> Param2)//Position - 0x86425
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

void func_285()//Position - 0x86546
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_31__.func_168(0, 0));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_31__.func_168(1, 0));
}

int func_286(int iParam0)//Position - 0x86562
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

void func_287(int iParam0, struct<3> Param1, struct<3> Param2, float fParam3, int iParam4)//Position - 0x8687F
{
	Local_90[iParam0 /*8*/] = { Param1 };
	Local_90[iParam0 /*8*/].f_3 = { Param2 };
	Local_90[iParam0 /*8*/].f_6 = fParam3;
	Local_90[iParam0 /*8*/].f_7 = iParam4;
}

void func_288()//Position - 0x86ACD
{
	iLocal_200[0] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(116.03237f, -1288.5013f, 27.26096f, 0.66f, 1.2f, 0.5f, 0f, false, 7);
	iLocal_200[1] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(113.30757f, -1283.595f, 27.26592f, 0.5f, 0.5f, 0.5f, 0f, false, 7);
	iLocal_200[2] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(107.46f, -1292.28f, 28.795f, 10f, 0.2f, 2f, 0.55f, false, 7);
	iLocal_200[3] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(105.58f, -1289.37f, 28.795f, 10f, 0.2f, 2f, 0.55f, false, 7);
}

int func_289()//Position - 0x86B81
{
	return joaat("p_whiskey_bottle_s");
}

Vector3 func_290(int iParam0)//Position - 0x86EB1
{
	switch (iParam0)
	{
		case 0:
			return 114.64f, -1290.34f, 29.68f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_291()//Position - 0x875FB
{
	Global_96908 = MISC::GET_GAME_TIMER();
}

int func_292(int iParam0, int iParam1)//Position - 0x8765E
{
	if (iParam1 != 0)
	{
		return NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0);
	}
	return 1;
}

Vector3 func_293()//Position - 0x877DA
{
	return 128.15f, -1282.8f, 29.45f;
}

Vector3 func_294()//Position - 0x877F1
{
	return 128.36f, -1283.11f, 29.29f;
}

bool func_295()//Position - 0x87808
{
	return (ENTITY::DOES_ENTITY_EXIST(iLocal_107) && ENTITY::DOES_ENTITY_EXIST(iLocal_108));
}

void func_296()//Position - 0x879DC
{
	PED::SET_PED_COMPONENT_VARIATION(iLocal_101[4], 0, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_101[4], 2, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_101[4], 3, 0, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_101[4], 4, 0, 1, 0);
}

void func_297()//Position - 0x87A36
{
	PED::SET_PED_COMPONENT_VARIATION(iLocal_101[1], 0, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_101[1], 3, 1, 0, 0);
}

void func_298()//Position - 0x87A58
{
	PED::SET_PED_COMPONENT_VARIATION(iLocal_101[2], 0, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_101[2], 2, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_101[2], 3, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_101[2], 4, 0, 0, 0);
}

void func_299()//Position - 0x87B3E
{
	MISC::CLEAR_AREA_OF_PEDS(114.09f, -1302.54f, 28.02f, 5.75f, 0);
}

bool func_300()//Position - 0x87BC4
{
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 132.7121f, -1304.899f, 28.195f) < (25f * 25f);
}

Vector3 func_301()//Position - 0x87DF1
{
	return 116f, -1304.66f, 35f;
}

Vector3 func_302()//Position - 0x87E08
{
	return 111.1f, -1295.46f, 25f;
}

bool func_303()//Position - 0x88487
{
	return __LIB_0__.func_517(uLocal_159, 16384);
}

void func_304(bool bParam0)//Position - 0x887F2
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

int func_305(int iParam0)//Position - 0x890FB
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

void func_306()//Position - 0x89163
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

int func_307()//Position - 0x891BA
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

bool func_308()//Position - 0x89229
{
	return __LIB_0__.func_517(uLocal_159, 4);
}

void func_309(char* sParam0, int iParam1)//Position - 0x89458
{
	if (__LIB_4__.func_66(sParam0, iParam1))
	{
		HUD::CLEAR_HELP(true);
	}
}

void func_310()//Position - 0x89653
{
	if (iLocal_143 != 0 && MISC::GET_GAME_TIMER() > iLocal_143)
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		iLocal_143 = 0;
	}
}

Vector3 func_311()//Position - 0x89886
{
	return 113.98f, -1297.43f, 29.42f;
}

Vector3 func_312()//Position - 0x89922
{
	return 96.092f, -1284.8536f, 29.4319f;
}

int func_313()//Position - 0x89D06
{
	return iLocal_77;
}

int func_314()//Position - 0x89D10
{
	return iLocal_78;
}

int func_315()//Position - 0x89D1A
{
	return iLocal_76;
}

int func_316(int iParam0)//Position - 0x292F
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

char* func_317()//Position - 0x2B01
{
	return "mini@prostitutes@sexnorm_veh_first_person";
}

char* func_318()//Position - 0x2B19
{
	return "mini@prostitutes@sexlow_veh_first_person";
}

char* func_319()//Position - 0x2B25
{
	return "mini@prostitutes@sexlow_veh";
}

int func_320(int iParam0)//Position - 0x38D1
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

int func_321(int iParam0)//Position - 0x390B
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

int func_322(int iParam0)//Position - 0x7421
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

void func_323(var uParam0)//Position - 0x42A2
{
	if (*uParam0 != 0)
	{
		GRAPHICS::DELETE_CHECKPOINT(*uParam0);
		*uParam0 = 0;
	}
}

bool func_324()//Position - 0xAC9A
{
	return PAD::IS_CONTROL_JUST_RELEASED(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/);
}

void func_325(var uParam0)//Position - 0xDF83
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

void func_326(var uParam0)//Position - 0xDFFA
{
	uParam0->f_12 = uParam0->f_12;
}

void func_327(int iParam0, int iParam1)//Position - 0xE051
{
	__LIB_0__.func_687(iParam0, iParam1);
}

int func_328(int iParam0, int iParam1)//Position - 0xE35E
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

bool func_329(var uParam0)//Position - 0xE9AF
{
	if (uParam0->f_21 == 0)
	{
		return 0;
	}
	return STREAMING::HAS_MODEL_LOADED(uParam0->f_21);
}

void func_330(var uParam0)//Position - 0xEA2D
{
	if (uParam0->f_22 == 0)
	{
		return;
	}
	STREAMING::REQUEST_MODEL(uParam0->f_22);
}

int func_331(int iParam0)//Position - 0xEA73
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

void func_332(float fParam0, int iParam1)//Position - 0x1042E
{
	fParam0->f_4 = 255;
	fParam0->f_5 = 255;
	fParam0->f_6 = 255;
	if (iParam1 == 1)
	{
		fParam0->f_7 = 255;
	}
}

void func_333(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x20375
{
	uParam0->f_20 = iParam1;
	uParam0->f_21 = iParam2;
	uParam0->f_22 = iParam3;
}

void func_334(var uParam0, struct<3> Param1, float fParam2)//Position - 0x2038F
{
	uParam0->f_16 = { Param1 };
	uParam0->f_19 = fParam2;
}

void func_335(char* sParam0, char* sParam1)//Position - 0x20914
{
	StringCopy(sParam0, sParam1, 32);
}

void func_336(var uParam0)//Position - 0x20922
{
	uParam0->f_10 = 0;
	uParam0->f_11 = -1;
	uParam0->f_12 = 0;
	uParam0->f_13 = 0f;
	uParam0->f_23 = 13;
}

void func_337(var uParam0)//Position - 0x21883
{
	__LIB_10__.func_7(&(uParam0->f_10));
}

void func_338(bool bParam0)//Position - 0x21A9C
{
	if (bParam0)
	{
		MISC::SET_FADE_IN_AFTER_DEATH_ARREST(false);
		MISC::PAUSE_DEATH_ARREST_RESTART(true);
		MISC::SET_FADE_OUT_AFTER_DEATH(false);
		__LIB_10__.func_841(1);
		Global_95699 = 1;
	}
	else
	{
		MISC::SET_FADE_IN_AFTER_DEATH_ARREST(true);
		MISC::PAUSE_DEATH_ARREST_RESTART(false);
		MISC::SET_FADE_OUT_AFTER_DEATH(true);
		__LIB_10__.func_841(0);
		Global_95699 = 0;
	}
}

int func_339(int iParam0)//Position - 0x21AFC
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

void func_340(int iParam0)//Position - 0x521
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

int func_341(int iParam0, int iParam1)//Position - 0x31018
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

int func_342(int iParam0, int iParam1)//Position - 0x3A2
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

Vector3 func_343(int iParam0)//Position - 0x27F9
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

int func_344(int iParam0)//Position - 0x6996
{
	int iVar0;
	if (HUD::DOES_BLIP_EXIST(iParam0))
	{
		iVar0 = HUD::GET_BLIP_SPRITE(iParam0);
	}
	return iVar0;
}

int func_345(int iParam0)//Position - 0xE67D
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

int func_346()//Position - 0xFA75
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

void func_347()//Position - 0xFBA8
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

void func_348()//Position - 0xFD8E
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

int func_349(int iParam0, int iParam1, int iParam2)//Position - 0xFFCC
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

int func_350()//Position - 0x10061
{
	return joaat("A_M_Y_StLat_01");
}

int func_351(int iParam0)//Position - 0x102D9
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

int func_352(int iParam0)//Position - 0x2132
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

float func_353(int* iParam0)//Position - 0x389E
{
	if (__LIB_0__.func_516(iParam0))
	{
		if (__LIB_0__.func_515(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (__LIB_0__.func_484(BitTest(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

void func_354()//Position - 0x5153
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
	{
		AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Radio_Off" /* GXT: Off */, iVar0, "TAXI_SOUNDS", false, 0);
	}
}

void func_355()//Position - 0x52B1
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
	{
		AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Radio_On", iVar0, "TAXI_SOUNDS", false, 0);
	}
}

void func_356(int* iParam0, float fParam1)//Position - 0x5BF1
{
	iParam0->f_1 = (__LIB_0__.func_484(BitTest(*iParam0, 4)) + fParam1);
	MISC::SET_BIT(iParam0, 1);
	MISC::CLEAR_BIT(iParam0, 2);
	iParam0->f_2 = 0f;
}

int func_357(int iParam0)//Position - 0x804D
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

void func_358(char* sParam0, int iParam1, int iParam2)//Position - 0x88F1
{
	if (MISC::GET_GAME_TIMER() < (*iParam1 + iParam2))
	{
		return;
	}
	*iParam1 = MISC::GET_GAME_TIMER();
}

void func_359(int* iParam0, float fParam1)//Position - 0x99D3
{
	if (!__LIB_0__.func_516(iParam0))
	{
		__LIB_2__.func_186(iParam0, fParam1);
	}
}

int func_360()//Position - 0x10D61
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
					if (VEHICLE::IS_VEHICLE_MODEL(iVar0, __LIB_9__.func_486()))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

struct<8> func_361(int iParam0)//Position - 0x1FF3
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

void func_362(var uParam0)//Position - 0x20BC
{
	VEHICLE::REMOVE_ROAD_NODE_SPEED_ZONE(uParam0->f_51[0]);
}

void func_363(var uParam0)//Position - 0x20D0
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

int func_364()//Position - 0x24DE
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appinternet")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_365(var uParam0)//Position - 0x287D
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

int func_366(var uParam0)//Position - 0x3039
{
	return uParam0->f_411;
}

char* func_367()//Position - 0x4893
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return "SHOW_COND_SHARD_MESSAGE";
	}
	return "SHOW_SHARD_MIDSIZED_MESSAGE";
}

char* func_368(var uParam0)//Position - 0x48AD
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

void func_369()//Position - 0x4D63
{
	if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
	}
}

int func_370(var uParam0, var uParam1)//Position - 0x4E2E
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

void func_371(int iParam0)//Position - 0x5039
{
	Global_112096.f_221 = iParam0;
}

bool func_372(var uParam0, int iParam1)//Position - 0x52B3
{
	return __LIB_0__.func_516(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_373(var uParam0, int iParam1, bool bParam2)//Position - 0x52C7
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
			__LIB_1__.func_37(&(uParam0->f_146[iVar0 /*3*/]));
			iVar0++;
		}
	}
	else
	{
		__LIB_1__.func_37(&(uParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam2)
	{
	}
}

void func_374(var uParam0, int iParam1)//Position - 0x5358
{
	if (iParam1 < 5)
	{
		MISC::SET_BIT(&(uParam0->f_60[iParam1 /*3*/]), 2);
		uParam0->f_105 = (uParam0->f_105 + uParam0->f_60[iParam1 /*3*/].f_1);
	}
}

void func_375(var uParam0, float* fParam1)//Position - 0x53B7
{
	STATS::STAT_GET_FLOAT(uParam0->f_428, fParam1, -1);
	uParam0->f_41 = (*fParam1 - uParam0->f_42);
}

void func_376(var uParam0, int iParam1, bool bParam2)//Position - 0x5C7B
{
	uParam0->f_414 = iParam1;
	if (bParam2)
	{
	}
}

void func_377(var uParam0)//Position - 0x5D91
{
	if (HUD::DOES_BLIP_EXIST(uParam0->f_8))
	{
		HUD::SET_BLIP_ROUTE(uParam0->f_8, false);
		HUD::REMOVE_BLIP(&(uParam0->f_8));
	}
}

bool func_378(var uParam0)//Position - 0x6C60
{
	return uParam0->f_120;
}

int func_379(var uParam0)//Position - 0x6F19
{
	return uParam0->f_106;
}

void func_380(var uParam0, int iParam1)//Position - 0x6F43
{
	if (uParam0->f_106 != iParam1)
	{
		uParam0->f_106 = iParam1;
	}
}

void func_381(var uParam0, int iParam1, bool bParam2)//Position - 0x6FE9
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

int func_382(var uParam0)//Position - 0x7081
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

int func_383(var uParam0)//Position - 0x70B6
{
	return uParam0->f_416;
}

void func_384(var uParam0, int iParam1)//Position - 0x7188
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

void func_385(char* sParam0)//Position - 0x738E
{
	StringConCat(sParam0, "F", 24);
}

int func_386(var uParam0, struct<3> Param1, struct<3> Param2, bool bParam3)//Position - 0x80E7
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

int func_387(var uParam0, bool bParam1)//Position - 0x83D0
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

void func_388(var uParam0)//Position - 0x935E
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		__LIB_0__.func_711(&(uParam0->f_100), iVar0);
		iVar0++;
	}
}

void func_389(var uParam0, var uParam1)//Position - 0x9383
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

void func_390(var uParam0, char* sParam1, int iParam2)//Position - 0x93FA
{
	*uParam0 = 0;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = sParam1;
}

void func_391(var uParam0, int iParam1)//Position - 0x94BA
{
	uParam0->f_117 = 1;
	uParam0->f_118 = iParam1;
}

int func_392(int iParam0)//Position - 0x94CD
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

int func_393(var uParam0)//Position - 0x9607
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

int func_394(var uParam0)//Position - 0x9668
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_4, false))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
		{
			if (VEHICLE::IS_VEHICLE_STOPPED(uParam0->f_4))
			{
				if (__LIB_0__.func_517(uParam0->f_86, 8))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_395(int iParam0)//Position - 0x96E7
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

void func_396(int iParam0, int iParam1, bool bParam2)//Position - 0x9742
{
	if (Local_165.f_0 >= 16)
	{
		Local_165.f_0 = 16;
		return;
	}
	Local_165.f_1[Local_165.f_0 /*4*/] = 0;
	__LIB_0__.func_712(&(Local_165.f_1[Local_165.f_0 /*4*/]), 1);
	if (bParam2)
	{
		__LIB_0__.func_712(&(Local_165.f_1[Local_165.f_0 /*4*/]), 2);
	}
	Local_165.f_1[Local_165.f_0 /*4*/].f_2 = iParam0;
	Local_165.f_1[Local_165.f_0 /*4*/].f_3 = iParam1;
	Local_165.f_0++;
}

int func_397(var uParam0)//Position - 0x97C5
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

void func_398()//Position - 0x9805
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

void func_399(var uParam0, int iParam1)//Position - 0x9B09
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

int func_400(var uParam0)//Position - 0xB06A
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

int func_401(var uParam0)//Position - 0xC017
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

int func_402(var uParam0)//Position - 0xC04C
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

void func_403(var uParam0, int iParam1)//Position - 0xC394
{
	uParam0->f_76 = (uParam0->f_76 + Local_162[iParam1 /*10*/]);
}

void func_404(var uParam0, int iParam1)//Position - 0xC3AB
{
	uParam0->f_104 = (uParam0->f_104 + iParam1);
}

void func_405(var uParam0)//Position - 0xD1F3
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false))
	{
		if (__LIB_0__.func_78(__LIB_0__.func_481(), uParam0->f_29, 0))
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

int func_406(var uParam0)//Position - 0xD402
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false))
	{
		if (__LIB_0__.func_76(PLAYER::PLAYER_PED_ID(), uParam0->f_3, 1) < 40f && !ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

int func_407(var uParam0)//Position - 0xD440
{
	return uParam0->f_118;
}

int func_408(var uParam0)//Position - 0xDA78
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (__LIB_0__.func_517((uParam0[iVar0 /*8*/])->f_7, 4))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_409(var uParam0)//Position - 0xDAEF
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (__LIB_0__.func_517((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_410(var uParam0)//Position - 0x10F26
{
	if ((((((uParam0->f_411 == 2 || uParam0->f_411 == 3) || uParam0->f_411 == 4) || uParam0->f_411 == 5) || uParam0->f_411 == 6) || uParam0->f_411 == 7) || uParam0->f_411 == 8)
	{
		return 1;
	}
	return 0;
}

int func_411(var uParam0)//Position - 0x11072
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

void func_412(var uParam0, bool bParam1)//Position - 0x1109F
{
	switch (uParam0->f_411)
	{
		case 0:
			if (bParam1)
			{
				__LIB_0__.func_210("TX_OBJ_NEX_PU", 7500, 1);
			}
			else
			{
				__LIB_0__.func_210("TX_OBJ_NEX_DO", 7500, 1);
			}
			break;
		case 1:
			if (bParam1)
			{
				__LIB_0__.func_210("TX_OBJ_TIE_PU", 7500, 1);
			}
			else
			{
				__LIB_0__.func_210("TX_OBJ_TIE_DO", 7500, 1);
			}
			break;
		case 2:
			if (bParam1)
			{
				__LIB_0__.func_210("TX_OBJ_DL_PU", 7500, 1);
			}
			else
			{
				__LIB_0__.func_210("TX_OBJ_DL_DO", 7500, 1);
			}
			break;
		case 3:
			if (bParam1)
			{
				__LIB_0__.func_210("TX_OBJ_GYB_PU", 7500, 1);
			}
			else
			{
				__LIB_0__.func_210("TX_OBJ_GYB_DO", 7500, 1);
			}
			break;
		case 4:
			if (bParam1)
			{
				__LIB_0__.func_210("TX_OBJ_TTB_PU", 7500, 1);
			}
			else
			{
				__LIB_0__.func_210("TX_OBJ_TTB_DO", 7500, 1);
			}
			break;
		case 5:
			if (bParam1)
			{
				__LIB_0__.func_210("TX_OBJ_CYI_PU", 7500, 1);
			}
			else
			{
				__LIB_0__.func_210("TX_OBJ_CYI_DO", 7500, 1);
			}
			break;
		case 6:
			if (bParam1)
			{
				__LIB_0__.func_210("TX_OBJ_GYN_PU", 7500, 1);
			}
			else
			{
				__LIB_0__.func_210("TX_OBJ_GYN_DO", 7500, 1);
			}
			break;
		case 7:
			if (bParam1)
			{
				__LIB_0__.func_210("TX_OBJ_CC_PU", 7500, 1);
			}
			else
			{
				__LIB_0__.func_210("TAXI_OBJ_CC1", 7500, 1);
			}
			break;
		case 8:
			if (bParam1)
			{
				__LIB_0__.func_210("TX_OBJ_FC_PU", 7500, 1);
			}
			else
			{
				__LIB_0__.func_210("TAXI_OBJ_FTC1", 7500, 1);
			}
			break;
		case 9:
			if (bParam1)
			{
				__LIB_0__.func_210("TX_OBJ_PRO_PU", 7500, 1);
			}
			else
			{
				__LIB_0__.func_210("TX_OBJ_PRO_DO", 7500, 1);
			}
			break;
	}
	if (!bParam1)
	{
		uParam0->f_139 = 1;
	}
}

char* func_413(var uParam0)//Position - 0x112D5
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

char* func_414(var uParam0, int iParam1)//Position - 0x1136F
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

int func_415(var uParam0)//Position - 0x11E4A
{
	switch (uParam0->f_411)
	{
		case 0:
			if (__LIB_0__.func_405("TX_OBJ_NEX_DO", 0, 0))
			{
				return 1;
			}
			break;
		case 1:
			if (__LIB_0__.func_405("TX_OBJ_TIE_DO", 0, 0))
			{
				return 1;
			}
			break;
		case 2:
			if (__LIB_0__.func_405("TX_OBJ_DL_DO", 0, 0))
			{
				return 1;
			}
			break;
		case 3:
			if ((__LIB_0__.func_405("TX_OBJ_GYB_DO", 0, 0) || __LIB_0__.func_405("TAXI_OBJ_GYB", 0, 0)) || __LIB_0__.func_405("TAXI_OBJ_GYB_2", 0, 0))
			{
				return 1;
			}
			break;
		case 4:
			if (__LIB_0__.func_405("TX_OBJ_TTB_DO", 0, 0))
			{
				return 1;
			}
			break;
		case 5:
			if ((__LIB_0__.func_405("TX_OBJ_CYI_DO", 0, 0) || __LIB_0__.func_405("TAXI_OBJ_CYI_01", 0, 0)) || __LIB_0__.func_405("TAXI_OBJ_CYI_02", 0, 0))
			{
				return 1;
			}
			break;
		case 6:
			if (((__LIB_0__.func_405("TX_OBJ_GYN_DO", 0, 0) || __LIB_0__.func_405("TAXI_OBJ_GYN", 0, 0)) || __LIB_0__.func_405("TAXI_OBJ_GYN_TG", 0, 0)) || __LIB_0__.func_405("TAXI_OBJ_GYN_GF", 0, 0))
			{
				return 1;
			}
			break;
		case 7:
			if ((__LIB_0__.func_405("TAXI_OBJ_CC1", 0, 0) || __LIB_0__.func_405("TAXI_OBJ_CC2", 0, 0)) || __LIB_0__.func_405("TAXI_OBJ_CC3", 0, 0))
			{
				return 1;
			}
			break;
		case 8:
			if ((__LIB_0__.func_405("TAXI_OBJ_FTC1", 0, 0) || __LIB_0__.func_405("TAXI_OBJ_FTC2", 0, 0)) || __LIB_0__.func_405("TAXI_OBJ_FTC3", 0, 0))
			{
				return 1;
			}
			break;
		case 9:
			if (__LIB_0__.func_405("TX_OBJ_PRO_DO", 0, 0))
			{
				return 1;
			}
			break;
	}
	return (((((__LIB_0__.func_405("TAXI_OBJ_GETRUN", 0, 0) || __LIB_0__.func_405("TAXI_OBJ_DRIVE", 0, 0)) || __LIB_0__.func_405("TAXI_OBJ_RETURN", 0, 0)) || __LIB_0__.func_405("TAXI_OBJ_POL", 0, 0)) || __LIB_0__.func_405("TAXI_OBJ_RUNOUT", 0, 0)) || __LIB_0__.func_405("TAXI_OBJ_POL", 0, 0));
}

int func_416(char* sParam0)//Position - 0x1206A
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		if (__LIB_0__.func_405(sParam0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_417(var uParam0)//Position - 0x120ED
{
	return uParam0->f_117;
}

void func_418(var uParam0, var uParam1, bool bParam2)//Position - 0x1213A
{
	if (!__LIB_0__.func_517(uParam0->f_55, 1))
	{
		switch (*uParam1)
		{
			case 0:
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_124)) && __LIB_0__.func_75())
				{
					*uParam1++;
				}
				break;
			case 1:
				if (!__LIB_0__.func_75())
				{
					StringCopy(&(uParam0->f_124), __LIB_0__.func_459(), 24);
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

int func_419(var uParam0)//Position - 0x1356B
{
	if (uParam0->f_109 && uParam0->f_410 < 29)
	{
		return 1;
	}
	return 0;
}

void func_420(var uParam0, int iParam1, int iParam2)//Position - 0x13604
{
	uParam0->f_58 = iParam1;
	uParam0->f_59 = iParam2;
}

int func_421(int iParam0)//Position - 0x1369A
{
	return Global_113386.f_19097.f_39[iParam0];
}

void func_422(var uParam0, char* sParam1, char* sParam2, char* sParam3)//Position - 0x13802
{
	uParam0->f_122 = sParam1;
	uParam0->f_143 = sParam2;
	uParam0->f_144 = sParam3;
}

void func_423(var uParam0)//Position - 0x13953
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

void func_424(var uParam0, int iParam1)//Position - 0x13AB6
{
	uParam0->f_418.f_1 = iParam1;
}

void func_425(var uParam0, int iParam1)//Position - 0x13AC7
{
	uParam0->f_418.f_2 = iParam1;
}

void func_426(var uParam0)//Position - 0x56E5
{
	PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
	__LIB_31__.func_384(uParam0, 1000);
}

int func_427(var uParam0)//Position - 0x5C13
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

int func_428(int iParam0)//Position - 0x6706
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

void func_429(var uParam0, struct<3> Param1, struct<3> Param2, float fParam3)//Position - 0x673E
{
	if (!CAM::DOES_CAM_EXIST(*uParam0))
	{
		*uParam0 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Param1, Param2, fParam3, false, 2);
	}
}

int func_430(int iParam0, int iParam1)//Position - 0x6C7C
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

int func_431(var uParam0, var uParam1)//Position - 0x7D99
{
	uParam1 = uParam1;
	__LIB_31__.func_391(uParam0, 11);
	return 1;
}

int func_432(int iParam0, bool bParam1)//Position - 0x82ED
{
	if (!STREAMING::HAS_MODEL_LOADED(__LIB_9__.func_486()))
	{
		__LIB_31__.func_358("TAXI_SHARED_ASSETS_STREAMED - TAXI MODEL Loading...", iParam0, 1000);
		return 0;
	}
	if (bParam1)
	{
		if (!STREAMING::HAS_ANIM_DICT_LOADED("gestures@m@standing@casual"))
		{
			__LIB_31__.func_358("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts gestures@m@standing@casual Loading...", iParam0, 1000);
			return 0;
		}
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@taxi@"))
	{
		__LIB_31__.func_358("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@taxi@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@towingcome_here"))
	{
		__LIB_31__.func_358("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@towingcome_here Loading...", iParam0, 1000);
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("misscommon@response"))
	{
		__LIB_31__.func_358("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts misscommon@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!HUD::HAS_ADDITIONAL_TEXT_LOADED(2))
	{
		__LIB_31__.func_358("TAXI_SHARED_ASSETS_STREAMED - Mission Text Loading...", iParam0, 1000);
		return 0;
	}
	return 1;
}

void func_433(var uParam0, struct<3> Param1)//Position - 0x8779
{
	uParam0->f_51[0] = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(Param1, 20f, 5f, false);
}

void func_434(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0xD6BC
{
	float fVar0;
	int iVar1;
	int iVar2;
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = SYSTEM::TO_FLOAT(iVar2);
		iVar1 = SYSTEM::ROUND(SYSTEM::POW(2f, fVar0));
		if (!__LIB_0__.func_517(*uParam0, iVar1))
		{
			__LIB_0__.func_712(uParam0, iVar1);
			if (bParam5)
			{
				StringConCat(sParam2, "_", 24);
			}
			StringIntConCat(sParam2, iVar2 + 1, 24);
			if ((*iParam3)[iVar2])
			{
				__LIB_31__.func_385(sParam2);
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

void func_435(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0xE4D9
{
	float fVar0;
	int iVar1;
	int iVar2;
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = SYSTEM::TO_FLOAT(iVar2);
		iVar1 = SYSTEM::ROUND(SYSTEM::POW(2f, fVar0));
		if (!__LIB_0__.func_517(*uParam0, iVar1))
		{
			__LIB_0__.func_712(uParam0, iVar1);
			if (bParam5)
			{
				if (!bParam4)
				{
					StringIntConCat(sParam2, iVar2 + 1, 24);
					__LIB_31__.func_385(sParam2);
				}
				else
				{
					__LIB_31__.func_385(sParam2);
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

void func_436(var uParam0, int iParam1, int iParam2)//Position - 0x6F3B
{
	*uParam0 = iParam2;
	if (iParam1 > -1)
	{
		uParam0->f_27 = iParam1;
	}
}

int func_437(int iParam0, int iParam1)//Position - 0x72E4
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

void func_438(struct<3> Param0, bool bParam1, float fParam2)//Position - 0x8CE9
{
	struct<3> Var0;
	struct<3> Var1;
	Var0 = { __LIB_1__.func_249(Param0, 1f, -fParam2, -fParam2, -fParam2) };
	Var1 = { __LIB_1__.func_249(Param0, 1f, fParam2, fParam2, fParam2) };
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

char* func_439(int iParam0)//Position - 0x40F9
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

void func_440(int iParam0, int iParam1, bool bParam2)//Position - 0x5149
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
			__LIB_1__.func_37(&(iParam0->f_146[iVar0 /*3*/]));
			iVar0++;
		}
	}
	else
	{
		__LIB_1__.func_37(&(iParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam2)
	{
	}
}

int func_441(int iParam0)//Position - 0x616C
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

bool func_442(int iParam0, int iParam1)//Position - 0x6C42
{
	return __LIB_0__.func_516(&(iParam0->f_146[iParam1 /*3*/]));
}

void func_443(var uParam0, struct<3> Param1, float fParam2, bool bParam3)//Position - 0x7C67
{
	struct<3> Var0;
	struct<3> Var1;
	Var0 = { __LIB_1__.func_249(Param1, 1f, -fParam2, -fParam2, -22f) };
	Var1 = { __LIB_1__.func_249(Param1, 1f, fParam2, fParam2, 44f) };
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

void func_444(int iParam0, int iParam1)//Position - 0xA5D9
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

int func_445(var uParam0, int iParam1, bool bParam2)//Position - 0x558E
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

void func_446(var uParam0, int iParam1)//Position - 0x6816
{
	__LIB_0__.func_712(uParam0, iParam1);
}

float func_447(var uParam0, int iParam1)//Position - 0x9F39
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		if (__LIB_31__.func_441(uParam0))
		{
			return __LIB_0__.func_76(uParam0->f_4, iParam1, 1);
		}
	}
	return 0f;
}

void func_448(var uParam0, bool bParam1)//Position - 0x11F10
{
	uParam0->f_120 = 1;
	if (bParam1)
	{
	}
}

bool func_449(var uParam0, var uParam1)//Position - 0x11F90
{
	return ((*uParam1 == -1 && uParam0->f_412 == 0) && !__LIB_31__.func_442(uParam0, 9));
}

void func_450(var uParam0)//Position - 0x13F23
{
	uParam0->f_2 = PLAYER::PLAYER_PED_ID();
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_14 = { __LIB_0__.func_481() };
	uParam0->f_17 = { __LIB_0__.func_481() };
	uParam0->f_35 = 0f;
	uParam0->f_76 = 0;
	uParam0->f_49 = 0;
	uParam0->f_109 = 0;
	uParam0->f_36 = 0f;
	uParam0->f_410 = 2;
	uParam0->f_123 = "TRS_FINDING_LOCATION";
	__LIB_31__.func_440(uParam0, 32, 0);
}

float func_451(var uParam0, int iParam1)//Position - 0x8B0F
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		if (__LIB_31__.func_400(uParam0))
		{
			return __LIB_0__.func_76(uParam0->f_4, iParam1, 1);
		}
	}
	return 0f;
}

bool func_452(var uParam0, var uParam1)//Position - 0x10948
{
	return ((*uParam1 == -1 && uParam0->f_412 == 0) && !__LIB_31__.func_372(uParam0, 9));
}

void func_453(var uParam0)//Position - 0x12390
{
	uParam0->f_2 = PLAYER::PLAYER_PED_ID();
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_14 = { __LIB_0__.func_481() };
	uParam0->f_17 = { __LIB_0__.func_481() };
	uParam0->f_35 = 0f;
	uParam0->f_76 = 0;
	uParam0->f_49 = 0;
	uParam0->f_109 = 0;
	uParam0->f_36 = 0f;
	uParam0->f_410 = 2;
	uParam0->f_123 = "TRS_FINDING_LOCATION";
	__LIB_31__.func_373(uParam0, 32, 0);
}

int func_454(int iParam0, int iParam1)//Position - 0x3AFF
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

void func_455(var uParam0)//Position - 0x10524
{
	if (__LIB_31__.func_372(uParam0, 17))
	{
		if (!__LIB_31__.func_372(uParam0, 14))
		{
			if (!__LIB_15__.func_87(uParam0))
			{
				if (!__LIB_0__.func_75())
				{
					__LIB_31__.func_373(uParam0, 17, 1);
				}
			}
		}
	}
}

int func_456(var uParam0, int iParam1)//Position - 0x7690
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

int func_457(var uParam0, int iParam1)//Position - 0x76E5
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

int func_458(var uParam0)//Position - 0x1162F
{
	if (__LIB_0__.func_75())
	{
		return 1;
	}
	if (__LIB_31__.func_372(uParam0, 17))
	{
		return 1;
	}
	if (__LIB_31__.func_372(uParam0, 14))
	{
		return 1;
	}
	if (__LIB_15__.func_87(uParam0))
	{
		return 1;
	}
	return 0;
}

bool func_459(var uParam0, int iParam1)//Position - 0x3A8C
{
	if (iParam1 != 1073741824)
	{
		return (__LIB_0__.func_517(uParam0->f_81, iParam1) && !__LIB_0__.func_75());
	}
	return __LIB_0__.func_75();
}

Vector3 func_460(var uParam0)//Position - 0x2A76
{
	return uParam0->f_49;
}

int func_461(var uParam0)//Position - 0x30B1
{
	return uParam0->f_30;
}

void func_462(var uParam0, int iParam1)//Position - 0x13661
{
	uParam0->f_25 = iParam1;
}

int func_463(int iParam0)//Position - 0x17327
{
	int iVar0;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (iVar0)
	{
		case joaat("blimp"):
			return 1;
		case joaat("blimp2"):
			return 1;
		case joaat("cargobob"):
			return 1;
		case joaat("cargobob2"):
			return 1;
		case joaat("cargobob3"):
			return 1;
		case joaat("buzzard"):
			return 1;
		case joaat("buzzard2"):
			return 1;
		case joaat("maverick"):
			return 1;
		case joaat("polmav"):
			return 1;
		case joaat("swift"):
			return 1;
		case joaat("valkyrie"):
			return 1;
		case joaat("annihilator"):
			return 1;
		case joaat("frogger"):
			return 1;
		case joaat("frogger2"):
			return 1;
		case joaat("dodo"):
			return 1;
		default:
	}
	return 0;
}

int func_464(var uParam0)//Position - 0x18F29
{
	return uParam0->f_55;
}

int func_465(var uParam0)//Position - 0x1AA0D
{
	return uParam0->f_77;
}

int func_466(var uParam0)//Position - 0x20467
{
	return uParam0->f_281;
}

void func_467(var uParam0)//Position - 0x21BB7
{
	uParam0->f_22 = 0;
}

var func_468(var uParam0)//Position - 0x4287A
{
	return uParam0->f_67;
}

var func_469(var uParam0)//Position - 0x42886
{
	return uParam0->f_70;
}

void func_470(int iParam0)//Position - 0x470CF
{
	Global_112472 = (Global_112472 || iParam0);
}

int func_471(var uParam0)//Position - 0x476E7
{
	return uParam0->f_76;
}

void func_472(var uParam0, int iParam1)//Position - 0x4773A
{
	uParam0->f_76 = iParam1;
}

void func_473()//Position - 0x4A039
{
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		HUD::CLEAR_HELP(true);
	}
}

void func_474(var uParam0, int iParam1)//Position - 0x4D5FD
{
	uParam0->f_24 = iParam1;
}

void func_475(var uParam0, int iParam1)//Position - 0x4D60B
{
	uParam0->f_28 = iParam1;
}

int func_476(struct<3> Param0, struct<3> Param1)//Position - 0x4E73D
{
	PED::SET_PED_NON_CREATION_AREA(Param0, Param1);
	PATHFIND::DISABLE_NAVMESH_IN_AREA(Param0, Param1, true);
	return PED::ADD_SCENARIO_BLOCKING_AREA(Param0, Param1, false, true, true, true);
}

void func_477(int iParam0, struct<3> Param1, struct<3> Param2)//Position - 0x54D5D
{
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iParam0, false);
	PED::CLEAR_PED_NON_CREATION_AREA();
	PATHFIND::DISABLE_NAVMESH_IN_AREA(Param1, Param2, false);
}

void func_478(var uParam0)//Position - 0x2D59
{
	if (ENTITY::DOES_ENTITY_EXIST((uParam0[0 /*94*/])->f_33))
	{
		(uParam0[0 /*94*/])->f_46 = { ENTITY::GET_ENTITY_COORDS((uParam0[0 /*94*/])->f_33, true) };
	}
	if (ENTITY::DOES_ENTITY_EXIST((uParam0[1 /*94*/])->f_33))
	{
		(uParam0[1 /*94*/])->f_46 = { ENTITY::GET_ENTITY_COORDS((uParam0[1 /*94*/])->f_33, true) };
	}
}

var func_479(var uParam0)//Position - 0x314B
{
	return uParam0->f_71;
}

void func_480(var uParam0, float fParam1)//Position - 0x318A
{
	uParam0->f_67 = fParam1;
}

int func_481(int iParam0, int iParam1)//Position - 0x3198
{
	if (iParam1 < 0)
	{
		return 0;
	}
	if (iParam0 == 54)
	{
		return 0;
	}
	if (iParam0 == 56)
	{
		return 0;
	}
	if (iParam0 == 55)
	{
		return 0;
	}
	if (iParam0 == 57)
	{
		return 0;
	}
	if (iParam0 == 59)
	{
		return 0;
	}
	if (iParam0 == 58)
	{
		return 0;
	}
	return 1;
}

int func_482(int iParam0)//Position - 0x31ED
{
	float fVar0;
	float fVar1;
	fVar0 = (SYSTEM::TO_FLOAT(iParam0) * 0.033333335f);
	fVar1 = (fVar0 / MISC::GET_FRAME_TIME());
	return SYSTEM::ROUND(fVar1);
}

int func_483(var uParam0)//Position - 0x3212
{
	return uParam0->f_53;
}

int func_484(var uParam0, int iParam1)//Position - 0x321E
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < iParam1 + 1)
	{
		iVar0 = (iVar0 + (uParam0[0 /*8*/])->f_1[iVar1]);
		iVar0 = (iVar0 + (uParam0[1 /*8*/])->f_1[iVar1]);
		iVar1++;
	}
	if ((iVar0 % 2) == 0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_485(var uParam0)//Position - 0x334F
{
	return uParam0->f_1674;
}

void func_486(var uParam0, var uParam1)//Position - 0x335C
{
	uParam0->f_1674 = uParam1;
}

void func_487(var uParam0, int iParam1)//Position - 0x336B
{
	uParam0->f_1673 = (uParam0->f_1673 || iParam1);
}

void func_488(var uParam0)//Position - 0x3380
{
	uParam0->f_25 = 0;
}

void func_489(var uParam0, var uParam1)//Position - 0x3712
{
	uParam0->f_1678 = uParam1;
}

void func_490(var uParam0)//Position - 0x3721
{
	uParam0->f_23 = 0f;
	uParam0->f_21 = 0f;
	uParam0->f_22 = 0f;
}

void func_491(var uParam0, int iParam1)//Position - 0x3A9A
{
	uParam0->f_26 = iParam1;
}

int func_492(var uParam0)//Position - 0x3B8B
{
	return uParam0->f_34;
}

void func_493(var uParam0)//Position - 0x3DBC
{
	uParam0->f_60 = 0f;
}

void func_494(var uParam0)//Position - 0x416B
{
	uParam0->f_23 = (uParam0->f_23 - 0.5f);
	uParam0->f_23 = __LIB_0__.func_301(uParam0->f_23, -1.5f, 1.5f);
}

void func_495(var uParam0)//Position - 0x4197
{
	uParam0->f_23 = (uParam0->f_23 + 0.5f);
	uParam0->f_23 = __LIB_0__.func_301(uParam0->f_23, -1.5f, 1.5f);
}

void func_496(var uParam0, bool bParam1)//Position - 0x4370
{
	float fVar0;
	switch (uParam0->f_20)
	{
		case 0:
			fVar0 = 0.1f;
			break;
		case 1:
			fVar0 = 0.1f;
			break;
		case 2:
			fVar0 = 0.1f;
			break;
	}
	if (!bParam1)
	{
		fVar0 = (fVar0 * -1f);
	}
	uParam0->f_22 = (uParam0->f_22 + fVar0);
	uParam0->f_22 = __LIB_0__.func_301(uParam0->f_22, -2f, 2f);
}

void func_497(var uParam0)//Position - 0x43DA
{
	float fVar0;
	switch (uParam0->f_20)
	{
		case 0:
			fVar0 = 0.5f;
			break;
		case 1:
			fVar0 = 0.25f;
			break;
		case 2:
			fVar0 = 0.05f;
			break;
	}
	uParam0->f_21 = (uParam0->f_21 - fVar0);
	uParam0->f_21 = __LIB_0__.func_301(uParam0->f_21, -2f, 2f);
}

void func_498(var uParam0)//Position - 0x4438
{
	float fVar0;
	switch (uParam0->f_20)
	{
		case 0:
			fVar0 = 0.5f;
			break;
		case 1:
			fVar0 = 0.25f;
			break;
		case 2:
			fVar0 = 0.05f;
			break;
	}
	uParam0->f_21 = (uParam0->f_21 + fVar0);
	uParam0->f_21 = __LIB_0__.func_301(uParam0->f_21, -2f, 2f);
}

bool func_499(struct<3> Param0, struct<3> Param1, struct<3> Param2, float fParam3)//Position - 0x44A2
{
	Param1.f_2 = (Param1.f_2 + 30f);
	Param2.f_2 = (Param2.f_2 - 5f);
	return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Param1, Param2, fParam3, false, true);
}

void func_500(var uParam0)//Position - 0x44E2
{
	if (uParam0->f_20 == 0)
	{
		uParam0->f_24 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 0.4f);
	}
	else if (uParam0->f_20 == 1)
	{
		uParam0->f_24 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 0.2f);
	}
	else if (uParam0->f_20 == 2)
	{
		uParam0->f_24 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 0.01f);
	}
}

void func_501(var uParam0, float fParam1)//Position - 0x4532
{
	uParam0->f_24 = fParam1;
}

void func_502(var uParam0, struct<3> Param1)//Position - 0x4552
{
	*uParam0 = { Param1 };
}

float func_503(var uParam0, struct<3> Param1, float fParam2, float fParam3)//Position - 0x465C
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	Var0 = { Param1 - uParam0->f_37 };
	*fParam3 = SYSTEM::VMAG(Var0);
	if (*fParam3 > 5f)
	{
		Var0 = { Var0 * FtoV((5f / *fParam3)) };
	}
	Var1 = { ENTITY::GET_ENTITY_VELOCITY(uParam0->f_32) };
	fVar2 = ((SYSTEM::VDIST(Var0, Var1) * 2f) / 5f);
	fVar3 = ((fParam2 * 5f) - fVar2);
	if (fVar3 < 0f)
	{
		fVar3 = 0f;
	}
	return fVar3;
}

float func_504(int iParam0)//Position - 0x46C8
{
	switch (iParam0)
	{
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
			return 0.05f;
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
			return 0.05f;
		case 72:
		case 73:
			return 0.4f;
		default:
	}
	return 0f;
}

Vector3 func_505(var uParam0, struct<3> Param1)//Position - 0x4768
{
	struct<3> Var0;
	Var0 = { Vector(Param1.f_0, Param1.f_0, Param1.f_0) * uParam0->f_43 };
	Var0 = { Var0 + Vector(Param1.f_1, Param1.f_1, Param1.f_1) * uParam0->f_40 };
	Var0.f_2 = (Var0.f_2 + Param1.f_2);
	return Var0;
}

Vector3 func_506(var uParam0, struct<3> Param1)//Position - 0x47A4
{
	struct<3> Var0;
	float fVar1;
	struct<3> Var2;
	Var0 = { Param1 - uParam0->f_37 };
	fVar1 = __LIB_0__.func_156(Var0, uParam0->f_40);
	Var2 = { uParam0->f_40 * Vector(fVar1, fVar1, fVar1) };
	return uParam0->f_37 + Var2;
}

void func_507(var uParam0, var uParam1)//Position - 0x4893
{
	uParam0->f_49 = { *uParam1 };
}

void func_508(var uParam0)//Position - 0x4962
{
	uParam0->f_1++;
}

void func_509(var uParam0)//Position - 0x4CCC
{
	uParam0->f_6 = 0f;
}

struct<8> func_510(var uParam0)//Position - 0x59CE
{
	return uParam0->f_86;
}

void func_511(int iParam0, bool bParam1)//Position - 0x5AB2
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if ((ENTITY::IS_ENTITY_VISIBLE(iParam0) && !bParam1) || (!ENTITY::IS_ENTITY_VISIBLE(iParam0) && bParam1))
		{
			ENTITY::SET_ENTITY_VISIBLE(iParam0, bParam1, false);
			OBJECT::SET_ENTITY_FLAG_RENDER_SMALL_SHADOW(iParam0, bParam1);
		}
	}
}

float func_512(var uParam0)//Position - 0x64CA
{
	return uParam0->f_66;
}

int func_513(int iParam0)//Position - 0x64D6
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		case 1:
			if (MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < 0.3f)
			{
				if (MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < 0.5f)
				{
					return 1;
				}
				else
				{
					return 2;
				}
			}
			else
			{
				return 0;
			}
			break;
		case 2:
			if (MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < 0.2f)
			{
				if (MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < 0.6f)
				{
					return 1;
				}
				else
				{
					return 2;
				}
			}
			else
			{
				return 0;
			}
			break;
	}
	return 0;
}

void func_514(var uParam0, int iParam1)//Position - 0x6575
{
	uParam0->f_22 = iParam1;
}

void func_515(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, int iParam5)//Position - 0x6583
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	if (iParam5 == 0)
	{
		if (bParam4)
		{
			fVar0 = PAD::GET_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/);
			fVar1 = PAD::GET_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/);
			fVar2 = PAD::GET_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 220 /*INPUT_SCRIPT_RIGHT_AXIS_X*/);
			fVar3 = PAD::GET_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 221 /*INPUT_SCRIPT_RIGHT_AXIS_Y*/);
		}
		else
		{
			fVar0 = PAD::GET_DISABLED_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/);
			fVar1 = PAD::GET_DISABLED_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/);
			fVar2 = PAD::GET_DISABLED_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 220 /*INPUT_SCRIPT_RIGHT_AXIS_X*/);
			fVar3 = PAD::GET_DISABLED_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 221 /*INPUT_SCRIPT_RIGHT_AXIS_Y*/);
		}
	}
	else if (bParam4)
	{
		fVar0 = PAD::GET_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/);
		fVar1 = PAD::GET_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/);
		fVar2 = PAD::GET_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 220 /*INPUT_SCRIPT_RIGHT_AXIS_X*/);
		fVar3 = PAD::GET_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 221 /*INPUT_SCRIPT_RIGHT_AXIS_Y*/);
	}
	else
	{
		fVar0 = PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/);
		fVar1 = PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/);
		fVar2 = PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 220 /*INPUT_SCRIPT_RIGHT_AXIS_X*/);
		fVar3 = PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 221 /*INPUT_SCRIPT_RIGHT_AXIS_Y*/);
	}
	*iParam0 = SYSTEM::ROUND((128f * fVar0));
	*iParam1 = SYSTEM::ROUND((128f * fVar1));
	*uParam2 = SYSTEM::ROUND((128f * fVar2));
	*uParam3 = SYSTEM::ROUND((128f * fVar3));
}

void func_516(var uParam0)//Position - 0x675E
{
	uParam0->f_63 = 0f;
}

int func_517(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x69CD
{
	struct<3> Var0;
	var uVar1;
	var uVar2;
	struct<3> Var3;
	float fVar4;
	struct<3> Var5;
	float fVar6;
	bool bVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		ENTITY::GET_ENTITY_MATRIX(iParam0, &uVar2, &uVar1, &Var3, &Var0);
		Var0 = { Var0 + Var3 * Vector(0.4f, 0.4f, 0.4f) };
		fVar4 = MISC::GET_FRAME_TIME();
		*uParam3 = { *uParam3 + *uParam4 * Vector(fVar4, fVar4, fVar4) };
		Var5 = { *uParam1 };
		fVar6 = __LIB_0__.func_156(*uParam3 - Var5, *uParam2);
		bVar7 = fVar6 < 0.35f;
		if (bVar7)
		{
			fVar8 = __LIB_0__.func_156(*uParam4, *uParam2);
			if (fVar8 < 0f)
			{
				fVar9 = (fVar6 / fVar8);
				fVar9 = __LIB_0__.func_301(fVar9, 0f, fVar4);
				*uParam3 = { *uParam3 - *uParam4 * Vector(fVar9, fVar9, fVar9) };
				fVar10 = __LIB_0__.func_156(*uParam3 - Var0, *uParam2);
				if (fVar10 < -0.1f)
				{
					*uParam3 = { *uParam3 - *uParam2 * Vector(fVar10, fVar10, fVar10) };
				}
			}
			else
			{
				*uParam3 = { *uParam3 - *uParam2 * Vector(fVar6, fVar6, fVar6) };
			}
		}
		return bVar7;
	}
	return 0;
}

Vector3 func_518(var uParam0)//Position - 0x6AC2
{
	struct<3> Var0;
	var uVar1;
	var uVar2;
	struct<3> Var3;
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_33))
	{
		ENTITY::PROCESS_ENTITY_ATTACHMENTS(uParam0->f_33);
		ENTITY::GET_ENTITY_MATRIX(uParam0->f_33, &uVar2, &uVar1, &Var3, &Var0);
		Var0 = { Var0 + Var3 * Vector(0.4f, 0.4f, 0.4f) };
	}
	return Var0;
}

int func_519(var uParam0)//Position - 0x6B05
{
	return uParam0->f_56;
}

void func_520(var uParam0, var uParam1)//Position - 0x6CA1
{
	uParam0->f_65 = uParam1;
}

void func_521(var uParam0, int iParam1)//Position - 0x6E93
{
	uParam0->f_52 = iParam1;
}

void func_522(var uParam0, float fParam1)//Position - 0x6EA1
{
	uParam0->f_71 = fParam1;
}

void func_523(var uParam0, float fParam1)//Position - 0x6EAF
{
	uParam0->f_70 = fParam1;
}

int func_524(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6, float fParam7, float fParam8, var uParam9)//Position - 0x6EBD
{
	float fVar0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	var uVar4;
	struct<3> Var5;
	fVar0 = 0f;
	MISC::GET_LINE_PLANE_INTERSECTION(*uParam1, *uParam2, uParam0->f_37, uParam0->f_40, &fVar0);
	if (fVar0 < 0f || fVar0 > 1f)
	{
		return 0;
	}
	Var1 = { *uParam1 + *uParam2 - *uParam1 * Vector(fVar0, fVar0, fVar0) };
	Var2 = { Var1 - uParam0->f_37 };
	fVar3 = __LIB_0__.func_156(Var2, uParam0->f_43);
	if (MISC::ABSF(fVar3) < 2.85f)
	{
		return 0;
	}
	uVar4 = Var2.f_2;
	Var5 = { fVar3, 0f, uVar4 };
	*fParam7 = MISC::GET_RATIO_OF_CLOSEST_POINT_ON_LINE(Var5, *uParam5, *uParam3, false);
	*fParam8 = MISC::GET_RATIO_OF_CLOSEST_POINT_ON_LINE(Var5, __LIB_0__.func_998(bParam6, *uParam5, *uParam4), __LIB_0__.func_998(bParam6, *uParam4, *uParam5), false);
	if (((*fParam7 < 0f || *fParam7 > 2f) || *fParam8 < 0f) || *fParam8 > 2f)
	{
		return 0;
	}
	*uParam9 = { Var1 };
	return 2;
}

void func_525(var uParam0, var uParam1)//Position - 0x726D
{
	uParam0->f_56 = uParam1;
}

void func_526(var uParam0, int iParam1)//Position - 0x727B
{
	uParam0->f_53 = iParam1;
}

int func_527(var uParam0)//Position - 0x778C
{
	if (uParam0->f_31 == 4)
	{
		return 0;
	}
	return 1;
}

bool func_528(var uParam0)//Position - 0x77EF
{
	return uParam0->f_64 > 0.5f;
}

void func_529(var uParam0)//Position - 0x7801
{
	uParam0->f_64 = 0f;
}

void func_530(var uParam0)//Position - 0x780E
{
	uParam0->f_64 = (uParam0->f_64 + MISC::GET_FRAME_TIME());
}

void func_531(var uParam0)//Position - 0x7823
{
	uParam0->f_60 = (uParam0->f_60 + MISC::GET_FRAME_TIME());
}

void func_532(var uParam0)//Position - 0x7838
{
	uParam0->f_61 = (uParam0->f_61 + MISC::GET_FRAME_TIME());
}

void func_533(var uParam0)//Position - 0x784D
{
	uParam0->f_61 = 0f;
}

float func_534(var uParam0)//Position - 0x785A
{
	return uParam0->f_61;
}

int func_535(var uParam0, var uParam1, bool bParam2)//Position - 0x7935
{
	if (__LIB_0__.func_156(uParam1->f_40, uParam0->f_247.f_10) > 0f)
	{
		return 0;
	}
	if (__LIB_0__.func_156(uParam1->f_40, uParam0->f_1583[1 /*3*/] - uParam1->f_37) > 0f)
	{
		return 0;
	}
	if (__LIB_6__.func_144(uParam1) != 75)
	{
		return 0;
	}
	if (!bParam2)
	{
		return 0;
	}
	return 1;
}

bool func_536(var uParam0)//Position - 0x7996
{
	return uParam0->f_63 > 3f;
}

int func_537(var uParam0)//Position - 0x79A4
{
	return uParam0->f_65;
}

void func_538(var uParam0)//Position - 0x79B0
{
	uParam0->f_68 = 0f;
}

float func_539(var uParam0)//Position - 0x7A2B
{
	return uParam0->f_69;
}

float func_540(var uParam0)//Position - 0x7A37
{
	return uParam0->f_68;
}

void func_541(var uParam0)//Position - 0x7A43
{
	uParam0->f_68 = (uParam0->f_68 + MISC::GET_FRAME_TIME());
}

void func_542(var uParam0, struct<3> Param1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x7B84
{
	uParam0->f_78 = { Param1 };
	uParam0->f_81 = uParam2;
	uParam0->f_82 = uParam3;
	uParam0->f_83 = uParam4;
	uParam0->f_84 = uParam5;
}

void func_543(var uParam0, float fParam1)//Position - 0x7BD8
{
	uParam0->f_69 = fParam1;
}

void func_544(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x7BE6
{
	*uParam1 = { uParam0->f_78 };
	*uParam2 = uParam0->f_81;
	*uParam3 = uParam0->f_82;
	*uParam4 = uParam0->f_83;
	*uParam5 = uParam0->f_84;
}

bool func_545(var uParam0)//Position - 0x7CF8
{
	return uParam0->f_26;
}

int func_546(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x8820
{
	float fVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	int iVar12;
	Var1 = { 0f, 0f, 0f };
	fVar8 = 1f;
	Var6 = { ENTITY::GET_ENTITY_COORDS(uParam1->f_247, true) };
	if (MISC::ABSI(iParam3) > 125)
	{
		fVar9 = 2.5f;
		fVar10 = 0.5f;
		fVar11 = 0.75f;
		iVar12 = 0;
	}
	else
	{
		fVar9 = 0.55f;
		fVar10 = 0f;
		fVar11 = 0f;
		iVar12 = 1;
	}
	Var5 = { __LIB_0__.func_79(uParam1->f_1661) };
	fVar7 = ((SYSTEM::TO_FLOAT(iParam3) + 128f) / 256f);
	if (uParam0->f_1 == 0)
	{
		if (iParam2 == 1)
		{
			Var3 = { uParam1->f_189.f_16[3 /*3*/] - Var5 * Vector(fVar9, fVar9, fVar9) };
			Var4 = { uParam1->f_189.f_16[3 /*3*/] + uParam1->f_1661 * Vector(0.5f, 0.5f, 0.5f) + Var5 * Vector(fVar10, fVar10, fVar10) };
			Var1 = { __LIB_1__.func_163(Var3, Var4, fVar7) };
			if (__LIB_0__.func_156(uParam0->f_43, Var1 - Var6) > 0f)
			{
				fVar8 = -1f;
			}
		}
		else if (iParam2 == 0)
		{
			Var4 = { uParam1->f_189.f_16[2 /*3*/] + Var5 * Vector(fVar9, fVar9, fVar9) };
			Var3 = { uParam1->f_189.f_16[2 /*3*/] - uParam1->f_1661 * Vector(0.5f, 0.5f, 0.5f) - Var5 * Vector(fVar11, fVar11, fVar11) };
			Var1 = { __LIB_1__.func_163(Var3, Var4, fVar7) };
			if (__LIB_0__.func_156(uParam0->f_43, Var1 - Var6) < 0f)
			{
				fVar8 = -1f;
			}
		}
	}
	else if (iParam2 == 1)
	{
		Var3 = { uParam1->f_189.f_16[1 /*3*/] + Var5 * Vector(fVar9, fVar9, fVar9) };
		Var4 = { uParam1->f_189.f_16[1 /*3*/] - uParam1->f_1661 * Vector(0.5f, 0.5f, 0.5f) - Var5 * Vector(fVar10, fVar10, fVar10) };
		Var1 = { __LIB_1__.func_163(Var3, Var4, fVar7) };
		if (__LIB_0__.func_156(uParam0->f_43, Var1 - Var6) > 0f)
		{
			fVar8 = -1f;
		}
	}
	else if (iParam2 == 0)
	{
		Var4 = { uParam1->f_189.f_16[0 /*3*/] - Var5 * Vector(fVar9, fVar9, fVar9) };
		Var3 = { uParam1->f_189.f_16[0 /*3*/] + uParam1->f_1661 * Vector(0.5f, 0.5f, 0.5f) + Var5 * Vector(fVar11, fVar11, fVar11) };
		Var1 = { __LIB_1__.func_163(Var3, Var4, fVar7) };
		if (__LIB_0__.func_156(uParam0->f_43, Var1 - Var6) < 0f)
		{
			fVar8 = -1f;
		}
	}
	Var1.f_2 = uParam0->f_37.f_2;
	Var2 = { __LIB_0__.func_79(Var1 - Var6) };
	fVar0 = MISC::GET_ANGLE_BETWEEN_2D_VECTORS(uParam0->f_40, uParam0->f_40.f_1, Var2.f_0, Var2.f_1);
	fVar0 = (fVar0 * fVar8);
	*uParam0 = fVar0;
	if (iParam2 == 0)
	{
		*uParam0 = (*uParam0 * -1f);
	}
	return iVar12;
}

float func_547(var uParam0)//Position - 0x8ACA
{
	return uParam0->f_60;
}

void func_548(var uParam0, int iParam1)//Position - 0x8DA1
{
	uParam0->f_1672 = iParam1;
}

void func_549(var uParam0, int iParam1)//Position - 0x92BD
{
	uParam0->f_55 = iParam1;
}

void func_550(var uParam0, int iParam1, bool bParam2)//Position - 0x92CB
{
	if (bParam2)
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY((uParam0[iParam1 /*94*/])->f_32);
	}
	else
	{
		TASK::CLEAR_PED_TASKS((uParam0[iParam1 /*94*/])->f_32);
	}
}

bool func_551(var uParam0, int iParam1)//Position - 0x97AB
{
	return (uParam0->f_1673 && iParam1) != 0;
}

void func_552(var uParam0, int iParam1)//Position - 0x97BD
{
	uParam0->f_34 = iParam1;
}

void func_553(var uParam0, int iParam1)//Position - 0x97CB
{
	uParam0->f_1673 = (uParam0->f_1673 - (uParam0->f_1673 && iParam1));
}

void func_554(int iParam0, bool bParam1)//Position - 0x97E6
{
	if (iParam0 != 1)
	{
		if (bParam1)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
			}
		}
		else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0);
		}
	}
}

void func_555(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x9DF5
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	if (bParam4)
	{
		fVar0 = PAD::GET_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 30 /*INPUT_MOVE_LR*/);
		fVar1 = PAD::GET_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 31 /*INPUT_MOVE_UD*/);
		fVar2 = PAD::GET_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/);
		fVar3 = PAD::GET_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 2 /*INPUT_LOOK_UD*/);
	}
	else
	{
		fVar0 = PAD::GET_DISABLED_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 30 /*INPUT_MOVE_LR*/);
		fVar1 = PAD::GET_DISABLED_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 31 /*INPUT_MOVE_UD*/);
		fVar2 = PAD::GET_DISABLED_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/);
		fVar3 = PAD::GET_DISABLED_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 2 /*INPUT_LOOK_UD*/);
	}
	*uParam0 = ((fVar0 + 1f) / 2f);
	*uParam1 = ((fVar1 + 1f) / 2f);
	*uParam2 = ((fVar2 + 1f) / 2f);
	*uParam3 = ((fVar3 + 1f) / 2f);
}

void func_556(var uParam0)//Position - 0xA548
{
	uParam0->f_24 = (uParam0->f_24 - MISC::GET_FRAME_TIME());
}

int func_557(var uParam0)//Position - 0xA602
{
	float fVar0;
	fVar0 = SYSTEM::VDIST(*uParam0, uParam0->f_3);
	if (fVar0 > 0.1f)
	{
		return 1;
	}
	return 0;
}

void func_558(var uParam0, var uParam1)//Position - 0xA691
{
	uParam0->f_26 = uParam1;
}

void func_559(var uParam0)//Position - 0xA738
{
	uParam0->f_63 = (uParam0->f_63 + MISC::GET_FRAME_TIME());
}

void func_560(var uParam0, float fParam1)//Position - 0xA74D
{
	uParam0->f_72 = fParam1;
}

float func_561(var uParam0)//Position - 0xA75B
{
	return uParam0->f_72;
}

int func_562(var uParam0)//Position - 0xA7EE
{
	return uParam0->f_1672;
}

void func_563(var uParam0, int iParam1)//Position - 0xAA70
{
	uParam0->f_32 = iParam1;
}

int func_564(var uParam0)//Position - 0xAB1F
{
	if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\Tennis", false, -1))
	{
		if (uParam0->f_1657 != 1)
		{
		}
		return 0;
	}
	if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\TENNIS_VER2_A", false, -1))
	{
		if (uParam0->f_1657 != 1)
		{
		}
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("prop_tennis_ball")))
	{
		if (uParam0->f_1657 != 1)
		{
		}
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_1668))
	{
		if (uParam0->f_1657 != 1)
		{
		}
		return 0;
	}
	if (uParam0->f_1657 == 1 && !STREAMING::HAS_MODEL_LOADED(uParam0->f_1669))
	{
		if (uParam0->f_1657 != 1)
		{
		}
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("prop_tennis_rack_01b")))
	{
		if (uParam0->f_1657 != 1)
		{
		}
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("mini@tennis"))
	{
		if (uParam0->f_1657 != 1)
		{
		}
		return 0;
	}
	if (uParam0->f_1657 == 1)
	{
		if (!STREAMING::HAS_ANIM_DICT_LOADED("mini@tennis@female"))
		{
			if (uParam0->f_1657 != 1)
			{
			}
			return 0;
		}
	}
	if (uParam0->f_1657 != 1)
	{
		if (uParam0->f_1657 != 1 && !STREAMING::HAS_MODEL_LOADED(joaat("prop_vb_34_tencrt_lighting")))
		{
			return 0;
		}
		if (uParam0->f_1657 != 1 && !STREAMING::HAS_ANIM_DICT_LOADED("mini@triathlon"))
		{
		}
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("weapons@tennis@male"))
	{
		return 0;
	}
	return 1;
}

Vector3 func_565(var uParam0, int iParam1, struct<3> Param2, struct<3> Param3, bool bParam4, int iParam5)//Position - 0xAC98
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	int iVar4;
	iVar4 = iParam5;
	if ((bParam4 && iParam1 == 1) && iVar4 == 0)
	{
		fVar2 = 0.75f;
		fVar3 = -0.025f;
		Var1 = { uParam0->f_3[0 /*3*/] };
	}
	else if ((bParam4 && iParam1 == 0) && iVar4 == 0)
	{
		fVar2 = 0.25f;
		fVar3 = -0.025f;
		Var1 = { uParam0->f_3[0 /*3*/] };
	}
	else if ((bParam4 && iParam1 == 1) && iVar4 == 1)
	{
		fVar2 = 0.25f;
		fVar3 = 0.025f;
		Var1 = { uParam0->f_3[3 /*3*/] };
	}
	else if ((bParam4 && iParam1 == 0) && iVar4 == 1)
	{
		fVar2 = 0.75f;
		fVar3 = 0.025f;
		Var1 = { uParam0->f_3[3 /*3*/] };
	}
	else if ((!bParam4 && iParam1 == 1) && iVar4 == 0)
	{
		fVar2 = 0.75f;
		fVar3 = 0f;
		Var1 = { uParam0->f_3[0 /*3*/] };
	}
	else if ((!bParam4 && iParam1 == 0) && iVar4 == 0)
	{
		fVar2 = 0.25f;
		fVar3 = 0f;
		Var1 = { uParam0->f_3[0 /*3*/] };
	}
	else if ((!bParam4 && iParam1 == 1) && iVar4 == 1)
	{
		fVar2 = 0.25f;
		fVar3 = 0f;
		Var1 = { uParam0->f_3[3 /*3*/] };
	}
	else if ((!bParam4 && iParam1 == 0) && iVar4 == 1)
	{
		fVar2 = 0.75f;
		fVar3 = 0f;
		Var1 = { uParam0->f_3[3 /*3*/] };
	}
	Var0 = { Var1 + Param2 * Vector(fVar2, fVar2, fVar2) + Param3 * Vector(fVar3, fVar3, fVar3) };
	return Var0;
}

bool func_566(var uParam0)//Position - 0xAFB6
{
	return GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_23);
}

Vector3 func_567(struct<3> Param0, float fParam1)//Position - 0xB376
{
	struct<3> Var0;
	float fVar1;
	struct<3> Var2;
	Var0 = { 0f, 0f, -9.8f };
	fVar1 = SYSTEM::VMAG(Param0);
	Var2 = { -Param0 * FtoV((fVar1 * 0.065f)) };
	Var2 = { Var2 + Var0 };
	Var2 = { Var2 * Vector(fParam1, fParam1, fParam1) };
	return Var2;
}

Vector3 func_568(struct<3> Param0)//Position - 0xB3C3
{
	Param0 = { Param0 * Vector(1f, 1f, 1f) };
	Param0.f_2 = -Param0.f_2;
	if (Param0.f_2 < 0.01f)
	{
		Param0.f_2 = 0f;
	}
	return Param0;
}

int func_569(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6)//Position - 0xB3F5
{
	float fVar0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	float fVar4;
	float fVar5;
	struct<3> Var6;
	float fVar7;
	MISC::GET_LINE_PLANE_INTERSECTION(*uParam1, *uParam2, uParam0->f_29, *uParam3, &fVar0);
	if (fVar0 >= 0f && fVar0 <= 1f)
	{
		Var1 = { *uParam1 + *uParam2 - *uParam1 * Vector(fVar0, fVar0, fVar0) };
		fVar3 = MISC::GET_RATIO_OF_CLOSEST_POINT_ON_LINE(Var1, uParam0->f_39[0 /*3*/], uParam0->f_39[1 /*3*/], false);
		fVar4 = MISC::GET_RATIO_OF_CLOSEST_POINT_ON_LINE(Var1, uParam0->f_39[1 /*3*/], uParam0->f_39[2 /*3*/], false);
		if (fVar3 > 0f && fVar3 < 1f)
		{
			Var2 = { uParam0->f_39[0 /*3*/] + uParam0->f_39[1 /*3*/] - uParam0->f_39[0 /*3*/] * Vector(fVar3, fVar3, fVar3) };
		}
		else if ((fVar4 > 0f && fVar4 < 1f) && fVar3 > 0f)
		{
			Var2 = { uParam0->f_39[1 /*3*/] + uParam0->f_39[2 /*3*/] - uParam0->f_39[1 /*3*/] * Vector(fVar4, fVar4, fVar4) };
		}
		fVar5 = (Var1.f_2 - Var2.f_2);
		if (fVar5 <= __LIB_0__.func_301((0.025f - fParam6), -1f, 0f))
		{
			return 2;
		}
		else if (fVar5 > 0f && fVar5 <= (0.025f - fParam6))
		{
			Var6 = { *uParam3 / FtoV(SYSTEM::VMAG(*uParam3)) };
			if (__LIB_0__.func_156(*uParam2 - *uParam1, Var6) > 0f)
			{
				Var6 = { Var6 * Vector(-1f, -1f, -1f) };
			}
			fVar7 = SYSTEM::SQRT(((0.025f * 0.025f) - (fVar5 * fVar5)));
			*uParam4 = { Var1 + Var6 * Vector(fVar7, fVar7, fVar7) };
			*uParam5 = { *uParam4 - Var2 };
			*uParam5 = { *uParam5 / FtoV(SYSTEM::VMAG(*uParam5)) };
			return 3;
		}
	}
	return 0;
}

bool func_570(var uParam0, int iParam1)//Position - 0xB709
{
	return __LIB_0__.func_517(uParam0->f_24, iParam1);
}

void func_571(var uParam0)//Position - 0xB71B
{
	uParam0->f_1667 = !uParam0->f_1667;
}

void func_572(var uParam0)//Position - 0xBC86
{
	uParam0->f_6 = (uParam0->f_6 + MISC::GET_FRAME_TIME());
}

void func_573(var uParam0)//Position - 0xC020
{
	uParam0->f_1672 = (uParam0->f_1672 + SYSTEM::ROUND((MISC::GET_FRAME_TIME() * 1000f)));
}

void func_574(var uParam0, struct<3> Param1, struct<3> Param2, struct<3> Param3, struct<3> Param4)//Position - 0xC1F7
{
	uParam0->f_6[0 /*3*/] = { Param1 + Param2 * Vector(1f, 1f, 1f) + Param3 * Vector(4f, 4f, 4f) };
	uParam0->f_6[1 /*3*/] = { Param1 + Param2 * Vector(8f, 8f, 8f) + Param3 * Vector(2.165f, 2.165f, 2.165f) };
	uParam0->f_6[2 /*3*/] = { Param1 + Param2 * Vector(8f, 8f, 8f) + Param3 * Vector(6f, 6f, 6f) };
	uParam0->f_6[3 /*3*/] = { Param4 + Param2 * Vector(0.5f, 0.5f, 0.5f) + Param3 * Vector(4f, 4f, 4f) };
}

void func_575(var uParam0)//Position - 0xC283
{
	uParam0->f_535[3 /*12*/] = 0f;
	uParam0->f_535[3 /*12*/].f_1 = 0.167f;
	uParam0->f_535[3 /*12*/].f_2 = 0.633f;
	uParam0->f_535[3 /*12*/].f_3 = 48;
	StringCopy(&(uParam0->f_535[3 /*12*/].f_4), "backhand_bs_hi", 32);
	uParam0->f_535[5 /*12*/] = 0f;
	uParam0->f_535[5 /*12*/].f_1 = 0.143f;
	uParam0->f_535[5 /*12*/].f_2 = 0.633f;
	uParam0->f_535[5 /*12*/].f_3 = 56;
	StringCopy(&(uParam0->f_535[5 /*12*/].f_4), "backhand_bs_lo", 32);
	uParam0->f_535[4 /*12*/] = 0f;
	uParam0->f_535[4 /*12*/].f_1 = 0.15f;
	uParam0->f_535[4 /*12*/].f_2 = 0.633f;
	uParam0->f_535[4 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[4 /*12*/].f_4), "backhand_bs_md", 32);
	uParam0->f_535[0 /*12*/] = 0f;
	uParam0->f_535[0 /*12*/].f_1 = 0.14f;
	uParam0->f_535[0 /*12*/].f_2 = 0.53f;
	uParam0->f_535[0 /*12*/].f_3 = 58;
	StringCopy(&(uParam0->f_535[0 /*12*/].f_4), "backhand_ts_hi", 32);
	uParam0->f_535[2 /*12*/] = 0f;
	uParam0->f_535[2 /*12*/].f_1 = 0.15f;
	uParam0->f_535[2 /*12*/].f_2 = 0.535f;
	uParam0->f_535[2 /*12*/].f_3 = 54;
	StringCopy(&(uParam0->f_535[2 /*12*/].f_4), "backhand_ts_lo", 32);
	uParam0->f_535[1 /*12*/] = 0f;
	uParam0->f_535[1 /*12*/].f_1 = 0.17f;
	uParam0->f_535[1 /*12*/].f_2 = 0.665f;
	uParam0->f_535[1 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[1 /*12*/].f_4), "backhand_ts_md", 32);
	uParam0->f_535[9 /*12*/] = 0.125f;
	uParam0->f_535[9 /*12*/].f_1 = 0.167f;
	uParam0->f_535[9 /*12*/].f_2 = 0.633f;
	uParam0->f_535[9 /*12*/].f_3 = 48;
	StringCopy(&(uParam0->f_535[9 /*12*/].f_4), "backhand_bs_hi", 32);
	uParam0->f_535[11 /*12*/] = 0.089f;
	uParam0->f_535[11 /*12*/].f_1 = 0.143f;
	uParam0->f_535[11 /*12*/].f_2 = 0.633f;
	uParam0->f_535[11 /*12*/].f_3 = 56;
	StringCopy(&(uParam0->f_535[11 /*12*/].f_4), "backhand_bs_lo", 32);
	uParam0->f_535[10 /*12*/] = 0.108f;
	uParam0->f_535[10 /*12*/].f_1 = 0.15f;
	uParam0->f_535[10 /*12*/].f_2 = 0.633f;
	uParam0->f_535[10 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[10 /*12*/].f_4), "backhand_bs_md", 32);
	uParam0->f_535[6 /*12*/] = 0.086f;
	uParam0->f_535[6 /*12*/].f_1 = 0.12f;
	uParam0->f_535[6 /*12*/].f_2 = 0.53f;
	uParam0->f_535[6 /*12*/].f_3 = 58;
	StringCopy(&(uParam0->f_535[6 /*12*/].f_4), "backhand_ts_hi", 32);
	uParam0->f_535[8 /*12*/] = 0.0925f;
	uParam0->f_535[8 /*12*/].f_1 = 0.15f;
	uParam0->f_535[8 /*12*/].f_2 = 0.535f;
	uParam0->f_535[8 /*12*/].f_3 = 54;
	StringCopy(&(uParam0->f_535[8 /*12*/].f_4), "backhand_ts_lo", 32);
	uParam0->f_535[7 /*12*/] = 0.108f;
	uParam0->f_535[7 /*12*/].f_1 = 0.16f;
	uParam0->f_535[7 /*12*/].f_2 = 0.665f;
	uParam0->f_535[7 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[7 /*12*/].f_4), "backhand_ts_md", 32);
	uParam0->f_535[35 /*12*/] = 0f;
	uParam0->f_535[35 /*12*/].f_1 = 0.3f;
	uParam0->f_535[35 /*12*/].f_2 = 0.58f;
	uParam0->f_535[35 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[35 /*12*/].f_4), "close_bh_bs_lo", 32);
	uParam0->f_535[34 /*12*/] = 0f;
	uParam0->f_535[34 /*12*/].f_1 = 0.3f;
	uParam0->f_535[34 /*12*/].f_2 = 0.585f;
	uParam0->f_535[34 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[34 /*12*/].f_4), "close_bh_bs_md", 32);
	uParam0->f_535[33 /*12*/] = 0f;
	uParam0->f_535[33 /*12*/].f_1 = 0.29f;
	uParam0->f_535[33 /*12*/].f_2 = 0.63f;
	uParam0->f_535[33 /*12*/].f_3 = 48;
	StringCopy(&(uParam0->f_535[33 /*12*/].f_4), "close_bh_bs_hi", 32);
	uParam0->f_535[32 /*12*/] = 0f;
	uParam0->f_535[32 /*12*/].f_1 = 0.28f;
	uParam0->f_535[32 /*12*/].f_2 = 0.708f;
	uParam0->f_535[32 /*12*/].f_3 = 50;
	StringCopy(&(uParam0->f_535[32 /*12*/].f_4), "close_bh_ts_lo", 32);
	uParam0->f_535[31 /*12*/] = 0f;
	uParam0->f_535[31 /*12*/].f_1 = 0.26f;
	uParam0->f_535[31 /*12*/].f_2 = 0.71f;
	uParam0->f_535[31 /*12*/].f_3 = 54;
	StringCopy(&(uParam0->f_535[31 /*12*/].f_4), "close_bh_ts_md", 32);
	uParam0->f_535[30 /*12*/] = 0f;
	uParam0->f_535[30 /*12*/].f_1 = 0.26f;
	uParam0->f_535[30 /*12*/].f_2 = 0.643f;
	uParam0->f_535[30 /*12*/].f_3 = 54;
	StringCopy(&(uParam0->f_535[30 /*12*/].f_4), "close_bh_ts_hi", 32);
	uParam0->f_535[47 /*12*/] = 0.174f;
	uParam0->f_535[47 /*12*/].f_1 = uParam0->f_535[35 /*12*/].f_1;
	uParam0->f_535[47 /*12*/].f_2 = uParam0->f_535[35 /*12*/].f_2;
	uParam0->f_535[47 /*12*/].f_3 = uParam0->f_535[35 /*12*/].f_3;
	StringCopy(&(uParam0->f_535[47 /*12*/].f_4), "close_bh_bs_lo", 32);
	uParam0->f_535[46 /*12*/] = 0.217f;
	uParam0->f_535[46 /*12*/].f_1 = uParam0->f_535[34 /*12*/].f_1;
	uParam0->f_535[46 /*12*/].f_2 = uParam0->f_535[34 /*12*/].f_2;
	uParam0->f_535[46 /*12*/].f_3 = uParam0->f_535[34 /*12*/].f_3;
	StringCopy(&(uParam0->f_535[46 /*12*/].f_4), "close_bh_bs_md", 32);
	uParam0->f_535[45 /*12*/] = 0.208f;
	uParam0->f_535[45 /*12*/].f_1 = uParam0->f_535[33 /*12*/].f_1;
	uParam0->f_535[45 /*12*/].f_2 = uParam0->f_535[33 /*12*/].f_2;
	uParam0->f_535[45 /*12*/].f_3 = uParam0->f_535[33 /*12*/].f_3;
	StringCopy(&(uParam0->f_535[45 /*12*/].f_4), "close_bh_bs_hi", 32);
	uParam0->f_535[44 /*12*/] = 0.12f;
	uParam0->f_535[44 /*12*/].f_1 = uParam0->f_535[32 /*12*/].f_1;
	uParam0->f_535[44 /*12*/].f_2 = uParam0->f_535[32 /*12*/].f_2;
	uParam0->f_535[44 /*12*/].f_3 = uParam0->f_535[32 /*12*/].f_3;
	StringCopy(&(uParam0->f_535[44 /*12*/].f_4), "close_bh_ts_lo", 32);
	uParam0->f_535[43 /*12*/] = 0.148f;
	uParam0->f_535[43 /*12*/].f_1 = uParam0->f_535[31 /*12*/].f_1;
	uParam0->f_535[43 /*12*/].f_2 = uParam0->f_535[31 /*12*/].f_2;
	uParam0->f_535[43 /*12*/].f_3 = uParam0->f_535[31 /*12*/].f_3;
	StringCopy(&(uParam0->f_535[43 /*12*/].f_4), "close_bh_ts_md", 32);
	uParam0->f_535[42 /*12*/] = 0.09f;
	uParam0->f_535[42 /*12*/].f_1 = uParam0->f_535[30 /*12*/].f_1;
	uParam0->f_535[42 /*12*/].f_2 = uParam0->f_535[30 /*12*/].f_2;
	uParam0->f_535[42 /*12*/].f_3 = uParam0->f_535[30 /*12*/].f_3;
	StringCopy(&(uParam0->f_535[42 /*12*/].f_4), "close_bh_ts_hi", 32);
	uParam0->f_535[41 /*12*/] = 0f;
	uParam0->f_535[41 /*12*/].f_1 = 0.27f;
	uParam0->f_535[41 /*12*/].f_2 = 0.613f;
	uParam0->f_535[41 /*12*/].f_3 = 56;
	StringCopy(&(uParam0->f_535[41 /*12*/].f_4), "close_fh_bs_lo", 32);
	uParam0->f_535[40 /*12*/] = 0f;
	uParam0->f_535[40 /*12*/].f_1 = 0.27f;
	uParam0->f_535[40 /*12*/].f_2 = 0.533f;
	uParam0->f_535[40 /*12*/].f_3 = 57;
	StringCopy(&(uParam0->f_535[40 /*12*/].f_4), "close_fh_bs_md", 32);
	uParam0->f_535[39 /*12*/] = 0f;
	uParam0->f_535[39 /*12*/].f_1 = 0.28f;
	uParam0->f_535[39 /*12*/].f_2 = 0.69f;
	uParam0->f_535[39 /*12*/].f_3 = 53;
	StringCopy(&(uParam0->f_535[39 /*12*/].f_4), "close_fh_bs_hi", 32);
	uParam0->f_535[38 /*12*/] = 0f;
	uParam0->f_535[38 /*12*/].f_1 = 0.26f;
	uParam0->f_535[38 /*12*/].f_2 = 0.665f;
	uParam0->f_535[38 /*12*/].f_3 = 57;
	StringCopy(&(uParam0->f_535[38 /*12*/].f_4), "close_fh_ts_lo", 32);
	uParam0->f_535[37 /*12*/] = 0f;
	uParam0->f_535[37 /*12*/].f_1 = 0.28f;
	uParam0->f_535[37 /*12*/].f_2 = 0.782f;
	uParam0->f_535[37 /*12*/].f_3 = 55;
	StringCopy(&(uParam0->f_535[37 /*12*/].f_4), "close_fh_ts_md", 32);
	uParam0->f_535[36 /*12*/] = 0f;
	uParam0->f_535[36 /*12*/].f_1 = 0.24f;
	uParam0->f_535[36 /*12*/].f_2 = 0.698f;
	uParam0->f_535[36 /*12*/].f_3 = 62;
	StringCopy(&(uParam0->f_535[36 /*12*/].f_4), "close_fh_ts_hi", 32);
	uParam0->f_535[53 /*12*/] = 0.135f;
	uParam0->f_535[53 /*12*/].f_1 = uParam0->f_535[41 /*12*/].f_1;
	uParam0->f_535[53 /*12*/].f_2 = uParam0->f_535[41 /*12*/].f_2;
	uParam0->f_535[53 /*12*/].f_3 = uParam0->f_535[41 /*12*/].f_3;
	StringCopy(&(uParam0->f_535[53 /*12*/].f_4), "close_fh_bs_lo", 32);
	uParam0->f_535[52 /*12*/] = 0.173f;
	uParam0->f_535[52 /*12*/].f_1 = uParam0->f_535[40 /*12*/].f_1;
	uParam0->f_535[52 /*12*/].f_2 = uParam0->f_535[40 /*12*/].f_2;
	uParam0->f_535[52 /*12*/].f_3 = uParam0->f_535[40 /*12*/].f_3;
	StringCopy(&(uParam0->f_535[52 /*12*/].f_4), "close_fh_bs_md", 32);
	uParam0->f_535[51 /*12*/] = 0.12f;
	uParam0->f_535[51 /*12*/].f_1 = uParam0->f_535[39 /*12*/].f_1;
	uParam0->f_535[51 /*12*/].f_2 = uParam0->f_535[39 /*12*/].f_2;
	uParam0->f_535[51 /*12*/].f_3 = uParam0->f_535[39 /*12*/].f_3;
	StringCopy(&(uParam0->f_535[51 /*12*/].f_4), "close_fh_bs_hi", 32);
	uParam0->f_535[50 /*12*/] = 0.148f;
	uParam0->f_535[50 /*12*/].f_1 = uParam0->f_535[38 /*12*/].f_1;
	uParam0->f_535[50 /*12*/].f_2 = uParam0->f_535[38 /*12*/].f_2;
	uParam0->f_535[50 /*12*/].f_3 = uParam0->f_535[38 /*12*/].f_3;
	StringCopy(&(uParam0->f_535[50 /*12*/].f_4), "close_fh_ts_lo", 32);
	uParam0->f_535[49 /*12*/] = 0.16f;
	uParam0->f_535[49 /*12*/].f_1 = uParam0->f_535[37 /*12*/].f_1;
	uParam0->f_535[49 /*12*/].f_2 = uParam0->f_535[37 /*12*/].f_2;
	uParam0->f_535[49 /*12*/].f_3 = uParam0->f_535[37 /*12*/].f_3;
	StringCopy(&(uParam0->f_535[49 /*12*/].f_4), "close_fh_ts_md", 32);
	uParam0->f_535[48 /*12*/] = 0.155f;
	uParam0->f_535[48 /*12*/].f_1 = uParam0->f_535[36 /*12*/].f_1;
	uParam0->f_535[48 /*12*/].f_2 = uParam0->f_535[36 /*12*/].f_2;
	uParam0->f_535[48 /*12*/].f_3 = uParam0->f_535[36 /*12*/].f_3;
	StringCopy(&(uParam0->f_535[48 /*12*/].f_4), "close_fh_ts_hi", 32);
	uParam0->f_535[15 /*12*/] = 0f;
	uParam0->f_535[15 /*12*/].f_1 = 0.21f;
	uParam0->f_535[15 /*12*/].f_2 = 0.7f;
	uParam0->f_535[15 /*12*/].f_3 = 43;
	StringCopy(&(uParam0->f_535[15 /*12*/].f_4), "forehand_bs_hi", 32);
	uParam0->f_535[17 /*12*/] = 0f;
	uParam0->f_535[17 /*12*/].f_1 = 0.16f;
	uParam0->f_535[17 /*12*/].f_2 = 0.67f;
	uParam0->f_535[17 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[17 /*12*/].f_4), "forehand_bs_lo", 32);
	uParam0->f_535[16 /*12*/] = 0f;
	uParam0->f_535[16 /*12*/].f_1 = 0.18f;
	uParam0->f_535[16 /*12*/].f_2 = 0.6f;
	uParam0->f_535[16 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[16 /*12*/].f_4), "forehand_bs_md", 32);
	uParam0->f_535[24 /*12*/] = 0.136f;
	uParam0->f_535[24 /*12*/].f_1 = 0.21f;
	uParam0->f_535[24 /*12*/].f_2 = 0.7f;
	uParam0->f_535[24 /*12*/].f_3 = 43;
	StringCopy(&(uParam0->f_535[24 /*12*/].f_4), "forehand_bs_hi", 32);
	uParam0->f_535[26 /*12*/] = 0.108f;
	uParam0->f_535[26 /*12*/].f_1 = 0.16f;
	uParam0->f_535[26 /*12*/].f_2 = 0.67f;
	uParam0->f_535[26 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[26 /*12*/].f_4), "forehand_bs_lo", 32);
	uParam0->f_535[25 /*12*/] = 0.108f;
	uParam0->f_535[25 /*12*/].f_1 = 0.18f;
	uParam0->f_535[25 /*12*/].f_2 = 0.6f;
	uParam0->f_535[25 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[25 /*12*/].f_4), "forehand_bs_md", 32);
	uParam0->f_535[18 /*12*/] = 0f;
	uParam0->f_535[18 /*12*/].f_1 = 0.17f;
	uParam0->f_535[18 /*12*/].f_2 = 0.722f;
	uParam0->f_535[18 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[18 /*12*/].f_4), "forehand_smash", 32);
	uParam0->f_535[19 /*12*/] = 0f;
	uParam0->f_535[19 /*12*/].f_1 = 0.17f;
	uParam0->f_535[19 /*12*/].f_2 = 0.614f;
	uParam0->f_535[19 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[19 /*12*/].f_4), "forehand_smash_lt", 32);
	uParam0->f_535[20 /*12*/] = 0f;
	uParam0->f_535[20 /*12*/].f_1 = 0.17f;
	uParam0->f_535[20 /*12*/].f_2 = 0.7f;
	uParam0->f_535[20 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[20 /*12*/].f_4), "forehand_smash_rt", 32);
	uParam0->f_535[27 /*12*/] = 0.108f;
	uParam0->f_535[27 /*12*/].f_1 = 0.17f;
	uParam0->f_535[27 /*12*/].f_2 = 0.722f;
	uParam0->f_535[27 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[27 /*12*/].f_4), "forehand_smash", 32);
	uParam0->f_535[28 /*12*/] = 0.108f;
	uParam0->f_535[28 /*12*/].f_1 = 0.17f;
	uParam0->f_535[28 /*12*/].f_2 = 0.614f;
	uParam0->f_535[28 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[28 /*12*/].f_4), "forehand_smash_lt", 32);
	uParam0->f_535[29 /*12*/] = 0.108f;
	uParam0->f_535[29 /*12*/].f_1 = 0.17f;
	uParam0->f_535[29 /*12*/].f_2 = 0.7f;
	uParam0->f_535[29 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[29 /*12*/].f_4), "forehand_smash_rt", 32);
	uParam0->f_535[12 /*12*/] = 0f;
	uParam0->f_535[12 /*12*/].f_1 = 0.14f;
	uParam0->f_535[12 /*12*/].f_2 = 0.615f;
	uParam0->f_535[12 /*12*/].f_3 = 62;
	StringCopy(&(uParam0->f_535[12 /*12*/].f_4), "forehand_ts_hi", 32);
	uParam0->f_535[14 /*12*/] = 0f;
	uParam0->f_535[14 /*12*/].f_1 = 0.16f;
	uParam0->f_535[14 /*12*/].f_2 = 0.643f;
	uParam0->f_535[14 /*12*/].f_3 = 52;
	StringCopy(&(uParam0->f_535[14 /*12*/].f_4), "forehand_ts_lo", 32);
	uParam0->f_535[13 /*12*/] = 0f;
	uParam0->f_535[13 /*12*/].f_1 = 0.18f;
	uParam0->f_535[13 /*12*/].f_2 = 0.779f;
	uParam0->f_535[13 /*12*/].f_3 = 45;
	StringCopy(&(uParam0->f_535[13 /*12*/].f_4), "forehand_ts_md", 32);
	uParam0->f_535[21 /*12*/] = 0.08f;
	uParam0->f_535[21 /*12*/].f_1 = 0.14f;
	uParam0->f_535[21 /*12*/].f_2 = 0.615f;
	uParam0->f_535[21 /*12*/].f_3 = 62;
	StringCopy(&(uParam0->f_535[21 /*12*/].f_4), "forehand_ts_hi", 32);
	uParam0->f_535[23 /*12*/] = 0.094f;
	uParam0->f_535[23 /*12*/].f_1 = 0.16f;
	uParam0->f_535[23 /*12*/].f_2 = 0.643f;
	uParam0->f_535[23 /*12*/].f_3 = 52;
	StringCopy(&(uParam0->f_535[23 /*12*/].f_4), "forehand_ts_lo", 32);
	uParam0->f_535[22 /*12*/] = 0.108f;
	uParam0->f_535[22 /*12*/].f_1 = 0.18f;
	uParam0->f_535[22 /*12*/].f_2 = 0.779f;
	uParam0->f_535[22 /*12*/].f_3 = 45;
	StringCopy(&(uParam0->f_535[22 /*12*/].f_4), "forehand_ts_md", 32);
	uParam0->f_535[54 /*12*/] = 0.28f;
	uParam0->f_535[54 /*12*/].f_1 = 0.37f;
	uParam0->f_535[54 /*12*/].f_2 = 0.708f;
	uParam0->f_535[54 /*12*/].f_3 = 57;
	StringCopy(&(uParam0->f_535[54 /*12*/].f_4), "lunge_bh_hi", 32);
	uParam0->f_535[56 /*12*/] = 0.275f;
	uParam0->f_535[56 /*12*/].f_1 = 0.37f;
	uParam0->f_535[56 /*12*/].f_2 = 0.695f;
	uParam0->f_535[56 /*12*/].f_3 = 58;
	StringCopy(&(uParam0->f_535[56 /*12*/].f_4), "lunge_bh_lo", 32);
	uParam0->f_535[55 /*12*/] = 0.27f;
	uParam0->f_535[55 /*12*/].f_1 = 0.37f;
	uParam0->f_535[55 /*12*/].f_2 = 0.688f;
	uParam0->f_535[55 /*12*/].f_3 = 58;
	StringCopy(&(uParam0->f_535[55 /*12*/].f_4), "lunge_bh_mid", 32);
	uParam0->f_535[57 /*12*/] = 0.26f;
	uParam0->f_535[57 /*12*/].f_1 = 0.41f;
	uParam0->f_535[57 /*12*/].f_2 = 0.705f;
	uParam0->f_535[57 /*12*/].f_3 = 54;
	StringCopy(&(uParam0->f_535[57 /*12*/].f_4), "lunge_fh_hi", 32);
	uParam0->f_535[59 /*12*/] = 0.26f;
	uParam0->f_535[59 /*12*/].f_1 = 0.42f;
	uParam0->f_535[59 /*12*/].f_2 = 0.738f;
	uParam0->f_535[59 /*12*/].f_3 = 52;
	StringCopy(&(uParam0->f_535[59 /*12*/].f_4), "lunge_fh_lo", 32);
	uParam0->f_535[58 /*12*/] = 0.263f;
	uParam0->f_535[58 /*12*/].f_1 = 0.43f;
	uParam0->f_535[58 /*12*/].f_2 = 0.695f;
	uParam0->f_535[58 /*12*/].f_3 = 50;
	StringCopy(&(uParam0->f_535[58 /*12*/].f_4), "lunge_fh_mid", 32);
	uParam0->f_535[72 /*12*/] = 0.073f;
	uParam0->f_535[72 /*12*/].f_1 = 0.17f;
	uParam0->f_535[72 /*12*/].f_2 = 0.77f;
	uParam0->f_535[72 /*12*/].f_3 = 102;
	StringCopy(&(uParam0->f_535[72 /*12*/].f_4), "dive_bh", 32);
	uParam0->f_535[73 /*12*/] = 0.053f;
	uParam0->f_535[73 /*12*/].f_1 = 0.17f;
	uParam0->f_535[73 /*12*/].f_2 = 0.781f;
	uParam0->f_535[73 /*12*/].f_3 = 102;
	StringCopy(&(uParam0->f_535[73 /*12*/].f_4), "dive_fh", 32);
	uParam0->f_535[60 /*12*/] = 0f;
	uParam0->f_535[60 /*12*/].f_1 = 0.15f;
	uParam0->f_535[60 /*12*/].f_2 = 0.95f;
	uParam0->f_535[60 /*12*/].f_3 = 65;
	StringCopy(&(uParam0->f_535[60 /*12*/].f_4), "forehand_ts_lo_far", 32);
	uParam0->f_535[61 /*12*/] = 0f;
	uParam0->f_535[61 /*12*/].f_1 = 0.17f;
	uParam0->f_535[61 /*12*/].f_2 = 0.95f;
	uParam0->f_535[61 /*12*/].f_3 = 58;
	StringCopy(&(uParam0->f_535[61 /*12*/].f_4), "forehand_ts_md_far", 32);
	uParam0->f_535[62 /*12*/] = 0f;
	uParam0->f_535[62 /*12*/].f_1 = 0.13f;
	uParam0->f_535[62 /*12*/].f_2 = 0.95f;
	uParam0->f_535[62 /*12*/].f_3 = 74;
	StringCopy(&(uParam0->f_535[62 /*12*/].f_4), "forehand_ts_hi_far", 32);
	uParam0->f_535[63 /*12*/] = 0f;
	uParam0->f_535[63 /*12*/].f_1 = 0.2f;
	uParam0->f_535[63 /*12*/].f_2 = 0.95f;
	uParam0->f_535[63 /*12*/].f_3 = 40;
	StringCopy(&(uParam0->f_535[63 /*12*/].f_4), "close_bh_lo", 32);
	uParam0->f_535[64 /*12*/] = 0f;
	uParam0->f_535[64 /*12*/].f_1 = 0.2f;
	uParam0->f_535[64 /*12*/].f_2 = 0.95f;
	uParam0->f_535[64 /*12*/].f_3 = 40;
	StringCopy(&(uParam0->f_535[64 /*12*/].f_4), "close_bh_md", 32);
	uParam0->f_535[65 /*12*/] = 0f;
	uParam0->f_535[65 /*12*/].f_1 = 0.2f;
	uParam0->f_535[65 /*12*/].f_2 = 0.95f;
	uParam0->f_535[65 /*12*/].f_3 = 40;
	StringCopy(&(uParam0->f_535[65 /*12*/].f_4), "close_bh_hi", 32);
	uParam0->f_535[66 /*12*/] = 0f;
	uParam0->f_535[66 /*12*/].f_1 = 0.174f;
	uParam0->f_535[66 /*12*/].f_2 = 0.95f;
	uParam0->f_535[66 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[66 /*12*/].f_4), "close_fh_lo", 32);
	uParam0->f_535[67 /*12*/] = 0f;
	uParam0->f_535[67 /*12*/].f_1 = 0.174f;
	uParam0->f_535[67 /*12*/].f_2 = 0.95f;
	uParam0->f_535[67 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[67 /*12*/].f_4), "close_fh_md", 32);
	uParam0->f_535[68 /*12*/] = 0f;
	uParam0->f_535[68 /*12*/].f_1 = 0.174f;
	uParam0->f_535[68 /*12*/].f_2 = 0.95f;
	uParam0->f_535[68 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[68 /*12*/].f_4), "close_fh_hi", 32);
	uParam0->f_535[69 /*12*/] = 0f;
	uParam0->f_535[69 /*12*/].f_1 = 0.25f;
	uParam0->f_535[69 /*12*/].f_2 = 0.95f;
	uParam0->f_535[69 /*12*/].f_3 = 48;
	StringCopy(&(uParam0->f_535[69 /*12*/].f_4), "mid_bh_lo", 32);
	uParam0->f_535[70 /*12*/] = 0f;
	uParam0->f_535[70 /*12*/].f_1 = 0.231f;
	uParam0->f_535[70 /*12*/].f_2 = 0.95f;
	uParam0->f_535[70 /*12*/].f_3 = 52;
	StringCopy(&(uParam0->f_535[70 /*12*/].f_4), "mid_bh_md", 32);
	uParam0->f_535[71 /*12*/] = 0f;
	uParam0->f_535[71 /*12*/].f_1 = 0.231f;
	uParam0->f_535[71 /*12*/].f_2 = 0.95f;
	uParam0->f_535[71 /*12*/].f_3 = 52;
	StringCopy(&(uParam0->f_535[71 /*12*/].f_4), "mid_bh_hi", 32);
}

void func_576(var uParam0)//Position - 0xD885
{
	int iVar0;
	int iVar1;
	uParam0->f_303[5 /*3*/] = { -0.8036f, 0.6726f, -0.6097f };
	uParam0->f_303[4 /*3*/] = { -0.8147f, 0.6746f, -0.0154f };
	uParam0->f_303[3 /*3*/] = { -0.8298f, 0.6483f, 0.615f };
	uParam0->f_303[2 /*3*/] = { -0.8254f, 0.6648f, -0.6352f };
	uParam0->f_303[1 /*3*/] = { -0.8217f, 0.6774f, -0.012f };
	uParam0->f_303[0 /*3*/] = { -0.8072f, 0.6576f, 0.5741f };
	uParam0->f_303[17 /*3*/] = { 0.813f, 0.6795f, -0.5939f };
	uParam0->f_303[16 /*3*/] = { 0.8651f, 0.6928f, 0.0177f };
	uParam0->f_303[15 /*3*/] = { 0.8592f, 0.6398f, 0.585f };
	uParam0->f_303[14 /*3*/] = { 0.8073f, 0.6708f, -0.5718f };
	uParam0->f_303[13 /*3*/] = { 0.831f, 0.6645f, 0.0059f };
	uParam0->f_303[12 /*3*/] = { 0.8462f, 0.6823f, 0.6137f };
	uParam0->f_303[18 /*3*/] = { 0.0038f, 0.571f, 1.4844f };
	uParam0->f_303[19 /*3*/] = { -0.6106f, 0.6003f, 1.4926f };
	uParam0->f_303[20 /*3*/] = { 0.5791f, 0.6003f, 1.4524f };
	uParam0->f_303[35 /*3*/] = { -0.1276f, 0.6496f, -0.6081f };
	uParam0->f_303[34 /*3*/] = { -0.1219f, 0.6858f, -0.0039f };
	uParam0->f_303[33 /*3*/] = { -0.158f, 0.6565f, 0.5989f };
	uParam0->f_303[32 /*3*/] = { -0.1302f, 0.6646f, -0.6002f };
	uParam0->f_303[31 /*3*/] = { -0.1243f, 0.6686f, 0.0104f };
	uParam0->f_303[30 /*3*/] = { -0.1614f, 0.6659f, 0.6349f };
	uParam0->f_303[41 /*3*/] = { 0.2654f, 0.7156f, -0.6474f };
	uParam0->f_303[40 /*3*/] = { 0.2594f, 0.6587f, -0.0193f };
	uParam0->f_303[39 /*3*/] = { 0.2755f, 0.6588f, 0.5959f };
	uParam0->f_303[38 /*3*/] = { 0.2617f, 0.701f, -0.6222f };
	uParam0->f_303[37 /*3*/] = { 0.2718f, 0.6637f, -0.0077f };
	uParam0->f_303[36 /*3*/] = { 0.269f, 0.6677f, 0.6025f };
	uParam0->f_303[11 /*3*/] = { -0.7118f, 0.5888f, -0.6097f };
	uParam0->f_303[10 /*3*/] = { -0.7944f, 0.5983f, -0.0154f };
	uParam0->f_303[9 /*3*/] = { -0.7291f, 0.5708f, 0.615f };
	uParam0->f_303[8 /*3*/] = { -0.6591f, 0.4535f, -0.6352f };
	uParam0->f_303[7 /*3*/] = { -0.7722f, 0.6042f, -0.012f };
	uParam0->f_303[6 /*3*/] = { -0.8057f, 0.6484f, 0.5741f };
	uParam0->f_303[26 /*3*/] = { 0.7679f, 0.5793f, -0.5939f };
	uParam0->f_303[25 /*3*/] = { 0.7837f, 0.616f, 0.0177f };
	uParam0->f_303[24 /*3*/] = { 0.6994f, 0.5786f, 0.585f };
	uParam0->f_303[23 /*3*/] = { 0.8024f, 0.5107f, -0.5718f };
	uParam0->f_303[22 /*3*/] = { 0.8475f, 0.4297f, 0.0059f };
	uParam0->f_303[21 /*3*/] = { 0.8012f, 0.6051f, 0.6137f };
	uParam0->f_303[27 /*3*/] = { -0.0045f, 0.4354f, 1.4844f };
	uParam0->f_303[28 /*3*/] = { -0.5737f, 0.4354f, 1.4926f };
	uParam0->f_303[29 /*3*/] = { 0.5691f, 0.4354f, 1.4524f };
	uParam0->f_303[47 /*3*/] = { -0.4511f, 0.4966f, -0.6081f };
	uParam0->f_303[46 /*3*/] = { -0.5103f, 0.51f, -0.0039f };
	uParam0->f_303[45 /*3*/] = { -0.4779f, 0.3857f, 0.5989f };
	uParam0->f_303[44 /*3*/] = { -0.3778f, 0.5049f, -0.6002f };
	uParam0->f_303[43 /*3*/] = { -0.3224f, 0.5942f, 0.0104f };
	uParam0->f_303[42 /*3*/] = { -0.3764f, 0.6902f, 0.6349f };
	uParam0->f_303[53 /*3*/] = { 0.4805f, 0.7156f, -0.6474f };
	uParam0->f_303[52 /*3*/] = { 0.7625f, 0.6532f, -0.0193f };
	uParam0->f_303[51 /*3*/] = { 0.6043f, 0.6588f, 0.5959f };
	uParam0->f_303[50 /*3*/] = { 0.473f, 0.6992f, -0.6222f };
	uParam0->f_303[49 /*3*/] = { 0.5413f, 0.6353f, -0.0077f };
	uParam0->f_303[48 /*3*/] = { 0.714f, 0.6593f, 0.6025f };
	uParam0->f_303[56 /*3*/] = { -1.3525f, 0.6005f, -0.7221f };
	uParam0->f_303[55 /*3*/] = { -1.5755f, 0.4699f, -0.0379f };
	uParam0->f_303[54 /*3*/] = { -1.318f, 0.4631f, 0.7024f };
	uParam0->f_303[59 /*3*/] = { 1.9622f, 0.2122f, -0.6432f };
	uParam0->f_303[58 /*3*/] = { 1.9598f, 0.5945f, -0.0585f };
	uParam0->f_303[57 /*3*/] = { 1.8166f, 0.3588f, 0.7322f };
	uParam0->f_303[73 /*3*/] = { 2.2269f, -0.0119f, 0.0417f };
	uParam0->f_303[72 /*3*/] = { -2.2644f, -0.1467f, 0.0997f };
	uParam0->f_303[60 /*3*/] = { 1.4174f, 0.6731f, -0.5824f };
	uParam0->f_303[61 /*3*/] = { 1.4134f, 0.6671f, 0.0059f };
	uParam0->f_303[62 /*3*/] = { 1.4031f, 0.6845f, 0.6133f };
	uParam0->f_303[63 /*3*/] = { -0.1726f, 0.6642f, -0.6095f };
	uParam0->f_303[64 /*3*/] = { -0.2261f, 0.7049f, 0.0018f };
	uParam0->f_303[65 /*3*/] = { -0.1558f, 0.6787f, 0.6703f };
	uParam0->f_303[66 /*3*/] = { 0.2443f, 0.6567f, -0.5885f };
	uParam0->f_303[67 /*3*/] = { 0.2594f, 0.6587f, -0.0193f };
	uParam0->f_303[68 /*3*/] = { 0.2594f, 0.6387f, 0.6221f };
	uParam0->f_303[69 /*3*/] = { -0.4975f, 0.6646f, -0.6002f };
	uParam0->f_303[70 /*3*/] = { -0.4998f, 0.6686f, 0.0104f };
	uParam0->f_303[71 /*3*/] = { -0.4952f, 0.6659f, 0.6349f };
	uParam0->f_303[74 /*3*/] = { 1000f, 1000f, 1000f };
	uParam0->f_303[76 /*3*/] = { 1000f, 1000f, 1000f };
	uParam0->f_303[75 /*3*/] = { 1000f, 1000f, 1000f };
	uParam0->f_1571[0] = -2.2644f;
	uParam0->f_1571[1] = -0.826f;
	uParam0->f_1571[2] = -0.6969f;
	uParam0->f_1571[3] = -0.4494f;
	uParam0->f_1571[4] = -0.2019f;
	uParam0->f_1571[5] = 0.0456f;
	uParam0->f_1571[6] = 0.2931f;
	uParam0->f_1571[7] = 0.5406f;
	uParam0->f_1571[8] = 0.7881f;
	uParam0->f_1571[9] = 1.0356f;
	uParam0->f_1571[10] = 2.6669f;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar1 = 0;
		while (iVar1 < 10)
		{
			uParam0->f_1460[iVar0 /*11*/][iVar1] = 75;
			iVar1++;
		}
		iVar0++;
	}
	uParam0->f_1460[0 /*11*/][0] = 3;
	uParam0->f_1460[0 /*11*/][1] = 54;
	uParam0->f_1460[0 /*11*/][2] = 55;
	uParam0->f_1460[0 /*11*/][3] = 56;
	uParam0->f_1460[0 /*11*/][4] = 72;
	uParam0->f_1460[1 /*11*/][0] = 0;
	uParam0->f_1460[1 /*11*/][1] = 1;
	uParam0->f_1460[1 /*11*/][2] = 2;
	uParam0->f_1460[1 /*11*/][3] = 4;
	uParam0->f_1460[1 /*11*/][4] = 5;
	uParam0->f_1460[1 /*11*/][5] = 6;
	uParam0->f_1460[1 /*11*/][6] = 7;
	uParam0->f_1460[1 /*11*/][7] = 9;
	uParam0->f_1460[1 /*11*/][8] = 10;
	uParam0->f_1460[1 /*11*/][9] = 11;
	uParam0->f_1460[2 /*11*/][0] = 8;
	uParam0->f_1460[2 /*11*/][1] = 19;
	uParam0->f_1460[2 /*11*/][2] = 28;
	uParam0->f_1460[2 /*11*/][3] = 45;
	uParam0->f_1460[2 /*11*/][4] = 46;
	uParam0->f_1460[2 /*11*/][5] = 47;
	uParam0->f_1460[2 /*11*/][6] = 69;
	uParam0->f_1460[2 /*11*/][7] = 70;
	uParam0->f_1460[2 /*11*/][8] = 71;
	uParam0->f_1460[3 /*11*/][0] = 42;
	uParam0->f_1460[3 /*11*/][1] = 43;
	uParam0->f_1460[3 /*11*/][2] = 44;
	uParam0->f_1460[3 /*11*/][3] = 64;
	uParam0->f_1460[4 /*11*/][0] = 18;
	uParam0->f_1460[4 /*11*/][1] = 27;
	uParam0->f_1460[4 /*11*/][2] = 30;
	uParam0->f_1460[4 /*11*/][3] = 31;
	uParam0->f_1460[4 /*11*/][4] = 32;
	uParam0->f_1460[4 /*11*/][5] = 33;
	uParam0->f_1460[4 /*11*/][6] = 34;
	uParam0->f_1460[4 /*11*/][7] = 35;
	uParam0->f_1460[4 /*11*/][8] = 63;
	uParam0->f_1460[4 /*11*/][9] = 65;
	uParam0->f_1460[5 /*11*/][0] = 36;
	uParam0->f_1460[5 /*11*/][1] = 37;
	uParam0->f_1460[5 /*11*/][2] = 38;
	uParam0->f_1460[5 /*11*/][3] = 39;
	uParam0->f_1460[5 /*11*/][4] = 40;
	uParam0->f_1460[5 /*11*/][5] = 41;
	uParam0->f_1460[5 /*11*/][6] = 66;
	uParam0->f_1460[5 /*11*/][7] = 67;
	uParam0->f_1460[5 /*11*/][8] = 68;
	uParam0->f_1460[6 /*11*/][0] = 50;
	uParam0->f_1460[6 /*11*/][1] = 53;
	uParam0->f_1460[7 /*11*/][0] = 20;
	uParam0->f_1460[7 /*11*/][1] = 24;
	uParam0->f_1460[7 /*11*/][2] = 25;
	uParam0->f_1460[7 /*11*/][3] = 26;
	uParam0->f_1460[7 /*11*/][4] = 29;
	uParam0->f_1460[7 /*11*/][5] = 48;
	uParam0->f_1460[7 /*11*/][6] = 49;
	uParam0->f_1460[7 /*11*/][7] = 51;
	uParam0->f_1460[7 /*11*/][8] = 52;
	uParam0->f_1460[8 /*11*/][0] = 12;
	uParam0->f_1460[8 /*11*/][1] = 13;
	uParam0->f_1460[8 /*11*/][2] = 14;
	uParam0->f_1460[8 /*11*/][3] = 15;
	uParam0->f_1460[8 /*11*/][4] = 16;
	uParam0->f_1460[8 /*11*/][5] = 17;
	uParam0->f_1460[8 /*11*/][6] = 21;
	uParam0->f_1460[8 /*11*/][7] = 22;
	uParam0->f_1460[8 /*11*/][8] = 23;
	uParam0->f_1460[9 /*11*/][0] = 57;
	uParam0->f_1460[9 /*11*/][1] = 58;
	uParam0->f_1460[9 /*11*/][2] = 59;
	uParam0->f_1460[9 /*11*/][3] = 60;
	uParam0->f_1460[9 /*11*/][4] = 61;
	uParam0->f_1460[9 /*11*/][5] = 62;
	uParam0->f_1460[9 /*11*/][6] = 73;
}

void func_577(var uParam0)//Position - 0xE4E7
{
	uParam0->f_282[0 /*2*/] = 45;
	uParam0->f_282[1 /*2*/] = 40;
	uParam0->f_282[2 /*2*/] = 35;
	uParam0->f_282[3 /*2*/] = 30;
	uParam0->f_282[4 /*2*/] = 25;
	uParam0->f_282[5 /*2*/] = 20;
	uParam0->f_282[6 /*2*/] = 30;
	uParam0->f_282[7 /*2*/] = 35;
	uParam0->f_282[8 /*2*/] = 24;
	uParam0->f_282[9 /*2*/] = 27;
	uParam0->f_282[0 /*2*/].f_1 = 355;
	uParam0->f_282[1 /*2*/].f_1 = 356;
	uParam0->f_282[2 /*2*/].f_1 = 358;
	uParam0->f_282[3 /*2*/].f_1 = 2;
	uParam0->f_282[4 /*2*/].f_1 = 5;
	uParam0->f_282[5 /*2*/].f_1 = 9;
	uParam0->f_282[6 /*2*/].f_1 = 354;
	uParam0->f_282[7 /*2*/].f_1 = 2;
	uParam0->f_282[8 /*2*/].f_1 = 15;
	uParam0->f_282[9 /*2*/].f_1 = 4;
}

void func_578(var uParam0, float fParam1)//Position - 0xFFBB
{
	uParam0->f_2 = fParam1;
}

void func_579(var uParam0, float fParam1)//Position - 0xFFD6
{
	uParam0->f_1 = fParam1;
}

int func_580(int iParam0)//Position - 0xE48
{
	return Global_95447[iParam0];
}

void func_581(var uParam0, var uParam1)//Position - 0x30A6
{
	uParam0->f_77 = uParam1;
}

void func_582(int iParam0, int iParam1)//Position - 0x3F00
{
	uLocal_175[iParam0] = iParam1;
}

int func_583(int iParam0)//Position - 0x3F10
{
	return uLocal_175[iParam0];
}

void func_584(var uParam0)//Position - 0x5AD3
{
	uParam0->f_4 = 0f;
	uParam0->f_5 = 0f;
	__LIB_31__.func_509(uParam0);
}

bool func_585(var uParam0, var uParam1, struct<3> Param2)//Position - 0x66DF
{
	struct<3> Var0;
	struct<3> Var1;
	var uVar2;
	Var0 = { uParam1->f_16[0 /*3*/] + Param2 * Vector(0.5f, 0.5f, 0.5f) };
	Var1 = { uParam1->f_16[3 /*3*/] + Param2 * Vector(0.5f, 0.5f, 0.5f) };
	uVar2 = __LIB_31__.func_499(uParam0->f_37, Var0, Var1, __LIB_0__.func_649(uParam1));
	return uVar2;
}

bool func_586(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0xB5CE
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	Var0 = { uParam1->f_3[0 /*3*/] + *uParam3 * Vector(0.5f, 0.5f, 0.5f) };
	Var1 = { uParam1->f_3[3 /*3*/] + *uParam3 * Vector(0.5f, 0.5f, 0.5f) };
	Var2 = { *uParam2 * Vector(0.191f, 0.191f, 0.191f) };
	fVar3 = (uParam1->f_1 * 1.8f);
	Var0 = { Var0 - Var2 };
	Var1 = { Var1 + Var2 };
	return __LIB_31__.func_499(__LIB_4__.func_586(uParam0), Var0, Var1, fVar3);
}

void func_587(var uParam0, struct<3> Param1)//Position - 0xB83B
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	if (__LIB_31__.func_570(uParam0, 1))
	{
		if (!__LIB_31__.func_566(uParam0))
		{
			uParam0->f_23 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_tennis_ball_trail", Param1, 0f, 0f, 0f, 1f, false, false, false, true);
			HUD::GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &uVar3);
			GRAPHICS::SET_PARTICLE_FX_LOOPED_COLOUR(uParam0->f_23, (SYSTEM::TO_FLOAT(iVar0) / 255f), (SYSTEM::TO_FLOAT(iVar1) / 255f), (SYSTEM::TO_FLOAT(iVar2) / 255f), false);
			uVar3 = uVar3;
		}
		GRAPHICS::SET_PARTICLE_FX_LOOPED_OFFSETS(uParam0->f_23, Param1, 0f, 0f, 0f);
	}
}

void func_588(var uParam0, var uParam1, var uParam2)//Position - 0x5501
{
	float fVar0;
	struct<3> Var1;
	struct<3> Var2;
	fVar0 = (MISC::GET_HEADING_FROM_VECTOR_2D(*uParam1, uParam1->f_1) + 27f);
	Var1 = { *uParam2 + Vector(10f, 0f, 0f) };
	Var2 = { -15f, 0f, fVar0 };
	CAM::SET_CAM_PARAMS(uParam0->f_3, Var1, Var2, 45f, 0, 1, 1, 2);
}

void func_589(var uParam0, int iParam1)//Position - 0x5551
{
	uParam0->f_13 = (uParam0->f_13 - (uParam0->f_13 && iParam1));
}

void func_590(bool bParam0)//Position - 0x5569
{
	GRAPHICS::CASCADE_SHADOWS_SET_DYNAMIC_DEPTH_MODE(bParam0);
	if (bParam0)
	{
		GRAPHICS::CASCADE_SHADOWS_SET_CASCADE_BOUNDS_SCALE(0.25f);
	}
}

void func_591(var uParam0, int iParam1)//Position - 0x5585
{
	uParam0->f_13 = (uParam0->f_13 || iParam1);
}

void func_592(var uParam0, var uParam1)//Position - 0x353EA
{
	(uParam0[0 /*94*/])->f_43 = { (uParam0[0 /*94*/])->f_43 * Vector(-1f, -1f, -1f) };
	(uParam0[0 /*94*/])->f_40 = { (uParam0[0 /*94*/])->f_40 * Vector(-1f, -1f, -1f) };
	(uParam0[1 /*94*/])->f_43 = { (uParam0[1 /*94*/])->f_43 * Vector(-1f, -1f, -1f) };
	(uParam0[1 /*94*/])->f_40 = { (uParam0[1 /*94*/])->f_40 * Vector(-1f, -1f, -1f) };
	if (uParam1->f_10 == 1)
	{
		uParam1->f_10 = 2;
	}
	else if (uParam1->f_10 == 2)
	{
		uParam1->f_10 = 1;
	}
	if (uParam1->f_9 == 1)
	{
		uParam1->f_9 = 2;
	}
	else if (uParam1->f_9 == 2)
	{
		uParam1->f_9 = 1;
	}
}

void func_593(var uParam0)//Position - 0x35893
{
	if ((uParam0[0 /*94*/])->f_1 == 0)
	{
		(uParam0[0 /*94*/])->f_1 = 1;
		(uParam0[1 /*94*/])->f_1 = 0;
	}
	else
	{
		(uParam0[0 /*94*/])->f_1 = 0;
		(uParam0[1 /*94*/])->f_1 = 1;
	}
}

char* func_594()//Position - 0x35A74
{
	char* sVar0;
	sVar0 = "b_44";
	return sVar0;
}

void func_595(var uParam0, var uParam1)//Position - 0x3AC8E
{
	uParam0->f_10 = uParam1;
}

int func_596(var uParam0, int iParam1, bool bParam2)//Position - 0x3B9B7
{
	if (bParam2)
	{
		return 0;
	}
	if (((*uParam0)[0 /*8*/] + (*uParam0)[1 /*8*/]) >= 2)
	{
		return 0;
	}
	if ((uParam0[0 /*8*/])->f_1[iParam1] > 0)
	{
		return 0;
	}
	if ((uParam0[1 /*8*/])->f_1[iParam1] > 0)
	{
		return 0;
	}
	if ((uParam0[0 /*8*/])->f_7 > 0)
	{
		return 0;
	}
	if ((uParam0[1 /*8*/])->f_7 > 0)
	{
		return 0;
	}
	return 1;
}

void func_597(int iParam0, bool bParam1)//Position - 0x3CA5C
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "DISPLAY_PLAYER_CARD");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_598(var uParam0)//Position - 0x3D9AB
{
	return uParam0->f_1678;
}

void func_599(struct<3> Param0, var uParam1, bool bParam2)//Position - 0x3D9B8
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	Param0.f_2 = (Param0.f_2 + 0.05f);
	Var0 = { 0.673f, 0.673f, 0.65f };
	if (!bParam2)
	{
		switch (*uParam1)
		{
			case 1:
				HUD::GET_HUD_COLOUR(6, &iVar1, &iVar2, &iVar3, &iVar4);
				break;
			case 2:
				HUD::GET_HUD_COLOUR(12, &iVar1, &iVar2, &iVar3, &iVar4);
				break;
			default:
				HUD::GET_HUD_COLOUR(1, &iVar1, &iVar2, &iVar3, &iVar4);
				break;
		}
		GRAPHICS::DRAW_MARKER(23, Param0, 0f, 0f, 0f, 0f, 0f, 0f, Var0, iVar1, iVar2, iVar3, iVar4, false, false, 2, false, 0, 0, false);
	}
	else
	{
		GRAPHICS::DRAW_MARKER(23, Param0, 0f, 0f, 0f, 0f, 0f, 0f, Var0, 64, 255, 64, 255, false, false, 2, false, 0, 0, false);
	}
}

char* func_600(int iParam0)//Position - 0x3E058
{
	switch (iParam0)
	{
		case 1:
			return "VESP_HEADER";
		case 0:
			return "MIKE_HEADER";
		case 5:
			return "VESP_APTS";
		case 2:
			return "VINE_APTS";
		case 4:
			return "LSU_COURT";
		case 6:
			return "WEAZEL_COURT";
		case 7:
			return "CHUMASH_HOTEL";
		case 3:
			return "RICHMAN_HOTEL";
		default:
	}
	return "VESP_HEADER";
}

void func_601(int iParam0, float fParam1)//Position - 0x3E181
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SWING_METER_TRANSITION_OUT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_602(int iParam0)//Position - 0x3E19E
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SWING_METER_TRANSITION_IN");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_603(int iParam0, float fParam1, float fParam2)//Position - 0x3E1B5
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SWING_METER_POSITION");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_604(int iParam0, bool bParam1, float fParam2, bool bParam3, float fParam4)//Position - 0x3E449
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SWING_METER_SET_APEX_MARKER");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam4);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_605(int iParam0, bool bParam1, float fParam2, bool bParam3, float fParam4)//Position - 0x3E478
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SWING_METER_SET_MARKER");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam4);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_606(var uParam0)//Position - 0x5C206
{
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 0, 0);
}

bool func_607()//Position - 0x5C370
{
	return Global_2715699.f_2846.f_26;
}

void func_608(int iParam0)//Position - 0x5D8CE
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_SCOREBOARD_SLOT");
}

void func_609(int iParam0)//Position - 0x5D8E2
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_SCOREBOARD_TITLE");
}

void func_610(int iParam0)//Position - 0x5D930
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_PLAYERCARD_SLOT");
}

void func_611(char* sParam0, int iParam1)//Position - 0x5D950
{
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "NUMBER") && iParam1 == -1)
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("");
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	else
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
}

void func_612(int iParam0)//Position - 0x5D98D
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_PLAYERCARD_TITLE");
}

float func_613(char* sParam0)//Position - 0x5D9F8
{
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "react_lose_01"))
	{
		return (125f * 0.033f);
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "react_lose_02"))
	{
		return (155f * 0.033f);
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "react_lose_03"))
	{
		return (135f * 0.033f);
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "react_lose_04"))
	{
		return (195f * 0.033f);
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "react_lose_05"))
	{
		return (135f * 0.033f);
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "react_win_01"))
	{
		return (114f * 0.033f);
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "react_win_02"))
	{
		return (144f * 0.033f);
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "react_win_03"))
	{
		return (155f * 0.033f);
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "react_win_04"))
	{
		return (139f * 0.033f);
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "react_win_05"))
	{
		return (150f * 0.033f);
	}
	return 3.55f;
}

void func_614(var uParam0, int iParam1, bool bParam2)//Position - 0x6BC58
{
	if (bParam2)
	{
		uParam0->f_10 = iParam1;
	}
	uParam0->f_9 = iParam1;
	uParam0->f_27 = bParam2;
}

bool func_615(var uParam0, int iParam1)//Position - 0x6BC77
{
	return (uParam0->f_13 && iParam1) != 0;
}

void func_616(int iParam0, float fParam1, float fParam2)//Position - 0x6BD7B
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SWING_METER_SET_FILL");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam2);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_617(int iParam0, float fParam1, float fParam2)//Position - 0x6BD9F
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SWING_METER_SET_TARGET");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam2);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_618(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8)//Position - 0x6C0D3
{
	switch (iParam0)
	{
		case 5:
			*uParam4 = 6.871f;
			break;
		case 1:
			*uParam4 = 6.116f;
			break;
		case 3:
			*uParam4 = 6.374f;
			break;
		case 4:
			*uParam4 = 6.454f;
			break;
		case 7:
			*uParam4 = 6.439f;
			break;
		case 2:
			*uParam4 = 6.521f;
			break;
		default:
			*uParam4 = 6.116f;
			break;
	}
	switch (iParam0)
	{
		case 5:
			*uParam2 = -7.003f;
			break;
		case 1:
			*uParam2 = -7.003f;
			break;
		case 3:
			*uParam2 = -6.656f;
			break;
		case 4:
			*uParam2 = -6.621f;
			break;
		case 7:
			*uParam2 = -6.608f;
			break;
		case 2:
			*uParam2 = -6.681f;
			break;
		default:
			*uParam2 = -6.008f;
			break;
	}
	switch (iParam0)
	{
		case 5:
			*uParam1 = 6.851f;
			break;
		case 1:
			*uParam1 = 6.701f;
			break;
		default:
			*uParam1 = 6.566f;
			break;
	}
	switch (iParam0)
	{
		case 1:
			*uParam6 = 4.538f;
			break;
		default:
			*uParam6 = 4.538f;
			break;
	}
	switch (iParam0)
	{
		case 5:
			*uParam3 = 45f;
			break;
		case 1:
			*uParam3 = 45f;
			break;
		case 3:
			*uParam3 = 45f;
			break;
		case 4:
			*uParam3 = 45f;
			break;
		case 7:
			*uParam3 = 45f;
			break;
		case 2:
			*uParam3 = 45f;
			break;
		default:
			*uParam3 = 50f;
			break;
	}
	switch (iParam0)
	{
		case 5:
			*uParam5 = 11.2f;
			break;
		default:
			*uParam5 = 11.2f;
			break;
	}
	*uParam7 = 18.6f;
	*uParam8 = 15.543f;
}

struct<16> func_619()//Position - 0x6CA2E
{
	return Global_1574992;
}

void func_620()//Position - 0x981A5
{
	GRAPHICS::DRAW_DEBUG_TEXT_2D("Disabling First Person Cam", 0.5f, 0.8f, 0f, 0, 0, 255, 255);
	CAM::DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE();
}

void func_621(var uParam0, int iParam1)//Position - 0x981CA
{
	uParam0->f_16 = iParam1;
}

void func_622(var uParam0, struct<3> Param1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, int iParam27)//Position - 0xA0377
{
	int iVar0;
	float fVar1;
	float fVar2;
	iVar0 = __LIB_0__.func_138(iParam27 == 0, 0, 2);
	fVar1 = __LIB_0__.func_316(__LIB_0__.func_348(&(uParam0->f_189)) == 1, -7.003f, -6.008f);
	fVar2 = __LIB_0__.func_316(__LIB_0__.func_348(&(uParam0->f_189)) == 1, 6.701f, 6.566f);
	CAM::SET_CAM_COORD(Param1.f_2, uParam0->f_189.f_3[iVar0 /*3*/] + (uParam0[iParam27 /*94*/])->f_43 * (uParam0[iParam27 /*94*/])->f_43 + (uParam0[iParam27 /*94*/])->f_40 * Vector(fVar1, fVar1, fVar1) + Vector(1f, 0f, 0f) * Vector(fVar2, fVar2, fVar2));
}

void func_623(var uParam0, int iParam1)//Position - 0xA067C
{
	uParam0->f_14 = 0.063f;
	uParam0->f_15 = 0.491f;
	uParam0->f_16 = 0.484f;
	uParam0->f_17 = 50f;
	if (iParam1 == 1)
	{
		uParam0->f_14 = 0.033f;
		uParam0->f_15 = 0.588f;
		uParam0->f_16 = 0.461f;
		uParam0->f_17 = 45f;
	}
	else if (iParam1 == 5)
	{
		uParam0->f_14 = 0.039f;
		uParam0->f_15 = 0.401f;
		uParam0->f_16 = 0.334f;
		uParam0->f_17 = 50f;
	}
	else if (iParam1 == 3)
	{
		uParam0->f_14 = 0.032f;
		uParam0->f_15 = 0.588f;
		uParam0->f_16 = 0.442f;
		uParam0->f_17 = 45f;
	}
	else if (iParam1 == 4)
	{
		uParam0->f_14 = 0.036f;
		uParam0->f_15 = 0.606f;
		uParam0->f_16 = 0.468f;
		uParam0->f_17 = 45f;
	}
	else if (iParam1 == 6)
	{
		uParam0->f_14 = 0.037f;
		uParam0->f_15 = 0.506f;
		uParam0->f_16 = 0.428f;
		uParam0->f_17 = 45f;
	}
	else if (iParam1 == 7)
	{
		uParam0->f_14 = 0.032f;
		uParam0->f_15 = 0.42f;
		uParam0->f_16 = 0.341f;
		uParam0->f_17 = 50f;
	}
	else if (iParam1 == 2)
	{
		uParam0->f_14 = 0.034f;
		uParam0->f_15 = 0.503f;
		uParam0->f_16 = 0.418f;
		uParam0->f_17 = 45f;
	}
}

void func_624()//Position - 0x796
{
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	HUD::CLEAR_PRINTS();
}

char* func_625()//Position - 0x8056
{
	return "anim_casino_b@amb@casino@games@threecardpoker@dealer";
}

int func_626(int iParam0, int iParam1)//Position - 0x88CB
{
	if ((iParam0 == 2 || iParam0 == 3) || iParam1 == 1)
	{
		return 1;
	}
	return 0;
}

char* func_627()//Position - 0x9215
{
	return "anim_casino_b@amb@casino@games@shared@dealer@";
}

void func_628(int iParam0, int iParam1)//Position - 0x955D
{
	switch (iParam0)
	{
		case 0:
			AUDIO::SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_M_Y_Casino_01_WHITE_01"));
			break;
		case 1:
			AUDIO::SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_M_Y_Casino_01_ASIAN_01"));
			break;
		case 2:
			AUDIO::SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_M_Y_Casino_01_ASIAN_02"));
			break;
		case 3:
			AUDIO::SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_M_Y_Casino_01_ASIAN_01"));
			break;
		case 4:
			AUDIO::SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_M_Y_Casino_01_WHITE_01"));
			break;
		case 5:
			AUDIO::SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_M_Y_Casino_01_WHITE_02"));
			break;
		case 6:
			AUDIO::SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_M_Y_Casino_01_WHITE_01"));
			break;
		case 7:
			AUDIO::SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_F_Y_Casino_01_ASIAN_01"));
			break;
		case 8:
			AUDIO::SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_F_Y_Casino_01_ASIAN_02"));
			break;
		case 9:
			AUDIO::SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_F_Y_Casino_01_ASIAN_01"));
			break;
		case 10:
			AUDIO::SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_F_Y_Casino_01_ASIAN_02"));
			break;
		case 11:
			AUDIO::SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_F_Y_Casino_01_LATINA_01"));
			break;
		case 12:
			AUDIO::SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_F_Y_Casino_01_LATINA_02"));
			break;
		case 13:
			AUDIO::SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_F_Y_Casino_01_LATINA_01"));
			break;
	}
}

void func_629(int iParam0, int iParam1)//Position - 0x96BC
{
	switch (iParam0)
	{
		case 0:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 1, 0, 0);
			break;
		case 1:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 2, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 0, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 1, 0, 0);
			break;
		case 2:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 0, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 1, 0, 0);
			break;
		case 3:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 1, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 1, 0, 0);
			break;
		case 4:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 4, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 1, 0, 0);
			break;
		case 5:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 1, 0, 0);
			break;
		case 6:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 4, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 1, 0, 0);
			break;
		case 7:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 0, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 0, 0, 0);
			break;
		case 8:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 1, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 0, 0, 0);
			break;
		case 9:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 2, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 0, 0, 0);
			break;
		case 10:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 3, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 0, 0, 0);
			break;
		case 11:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(*iParam1, 1, 0, 0, false);
			break;
		case 12:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 3, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 3, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 0, 0, 0);
			break;
		case 13:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(*iParam1, 1, 0, 0, false);
			break;
	}
}

char* func_630(int iParam0)//Position - 0xB2FA
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 4:
		case 5:
		case 8:
		case 9:
		case 12:
		case 13:
			return "sit_exit_left";
		default:
	}
	return "sit_exit_left";
}

void func_631(char* sParam0, char* sParam1, int iParam2)//Position - 0x10801
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, false, -1);
}

char* func_632()//Position - 0x1228D
{
	if (__LIB_6__.func_925())
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
		{
			case 0:
				return "female_reaction_great_var_01";
			case 1:
				return "female_reaction_great_var_02";
			case 2:
				return "female_reaction_great_var_03";
			case 3:
				return "female_reaction_great_var_04";
			case 4:
				return "female_reaction_great_var_05";
			default:
		}
	}
	else
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
		{
			case 0:
				return "reaction_great_var_01";
			case 1:
				return "reaction_great_var_02";
			case 2:
				return "reaction_great_var_03";
			case 3:
				return "reaction_great_var_04";
			}
		default:
	}
	return "";
}

char* func_633(int iParam0)//Position - 0x160D3
{
	switch (iParam0)
	{
		case 0:
			return "sit_enter_left";
		case 1:
			return "sit_enter_left_side";
		case 2:
			return "sit_enter_right_side";
		default:
	}
	return "sit_enter_left";
}

char* func_634()//Position - 0x1610D
{
	return "anim_casino_b@amb@casino@games@shared@player@";
}

int func_635(int iParam0)//Position - 0x1CD08
{
	switch (iParam0)
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
			return 2;
		case 12:
		case 13:
		case 14:
		case 15:
			return 3;
		default:
	}
	return 0;
}

char* func_636(int iParam0)//Position - 0x1D911
{
	switch (iParam0)
	{
		case 10:
			return "DLC_VW_CHIP_BET_SML_SINGLE";
		case 20:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		case 30:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		case 40:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		case 50:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		case 60:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		case 70:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		case 80:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		case 90:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		case 100:
			return "DLC_VW_CHIP_BET_SML_SINGLE";
		case 150:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		case 200:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		case 250:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		case 300:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		case 350:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		case 400:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		case 450:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		case 500:
			return "DLC_VW_CHIP_BET_SML_SINGLE";
		case 1000:
			return "DLC_VW_CHIP_BET_SML_SINGLE";
		case 1500:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		case 2000:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		case 2500:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		case 3000:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		case 3500:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		case 4000:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		case 4500:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		case 5000:
			return "DLC_VW_CHIP_BET_LRG_SINGLE";
		case 6000:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		case 7000:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		case 8000:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		case 9000:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		case 10000:
			return "DLC_VW_CHIP_BET_LRG_SINGLE";
		case 15000:
			return "DLC_VW_CHIP_BET_LRG_SMALL";
		case 20000:
			return "DLC_VW_CHIP_BET_LRG_SMALL";
		case 25000:
			return "DLC_VW_CHIP_BET_LRG_MEDIUM";
		case 30000:
			return "DLC_VW_CHIP_BET_LRG_SMALL";
		case 35000:
			return "DLC_VW_CHIP_BET_LRG_MEDIUM";
		case 40000:
			return "DLC_VW_CHIP_BET_LRG_MEDIUM";
		case 45000:
			return "DLC_VW_CHIP_BET_LRG_LARGE";
		case 50000:
			return "DLC_VW_CHIP_BET_LRG_MEDIUM";
		default:
	}
	return "";
}

int func_637(int iParam0, bool bParam1)//Position - 0x1E896
{
	if (!bParam1)
	{
		switch (iParam0)
		{
			case 10:
				return joaat("vw_prop_chip_10dollar_x1");
			case 20:
				return joaat("vw_prop_chip_10dollar_st");
			case 30:
				return joaat("vw_prop_chip_10dollar_st");
			case 40:
				return joaat("vw_prop_chip_10dollar_st");
			case 50:
				return joaat("vw_prop_chip_50dollar_x1");
			case 60:
				return joaat("vw_prop_chip_10dollar_st");
			case 70:
				return joaat("vw_prop_chip_10dollar_st");
			case 80:
				return joaat("vw_prop_chip_10dollar_st");
			case 90:
				return joaat("vw_prop_chip_10dollar_st");
			case 100:
				return joaat("vw_prop_chip_100dollar_x1");
			case 150:
				return joaat("vw_prop_chip_50dollar_st");
			case 200:
				return joaat("vw_prop_chip_100dollar_st");
			case 250:
				return joaat("vw_prop_chip_50dollar_st");
			case 300:
				return joaat("vw_prop_chip_100dollar_st");
			case 350:
				return joaat("vw_prop_chip_50dollar_st");
			case 400:
				return joaat("vw_prop_chip_100dollar_st");
			case 450:
				return joaat("vw_prop_chip_50dollar_st");
			case 500:
				return joaat("vw_prop_chip_500dollar_x1");
			case 1000:
				return joaat("vw_prop_chip_1kdollar_x1");
			case 1500:
				return joaat("vw_prop_chip_500dollar_st");
			case 2000:
				return joaat("vw_prop_chip_1kdollar_st");
			case 2500:
				return joaat("vw_prop_chip_500dollar_st");
			case 3000:
				return joaat("vw_prop_chip_1kdollar_st");
			case 3500:
				return joaat("vw_prop_chip_500dollar_st");
			case 4000:
				return joaat("vw_prop_chip_1kdollar_st");
			case 4500:
				return joaat("vw_prop_chip_500dollar_st");
			case 5000:
				return joaat("vw_prop_chip_5kdollar_x1");
			case 6000:
				return joaat("vw_prop_chip_1kdollar_st");
			case 7000:
				return joaat("vw_prop_chip_1kdollar_st");
			case 8000:
				return joaat("vw_prop_chip_1kdollar_st");
			case 9000:
				return joaat("vw_prop_chip_1kdollar_st");
			case 10000:
				return joaat("vw_prop_chip_10kdollar_x1");
			case 15000:
				return joaat("vw_prop_chip_5kdollar_st");
			case 20000:
				return joaat("vw_prop_chip_10kdollar_st");
			case 25000:
				return joaat("vw_prop_chip_5kdollar_st");
			case 30000:
				return joaat("vw_prop_chip_10kdollar_st");
			case 35000:
				return joaat("vw_prop_chip_5kdollar_st");
			case 40000:
				return joaat("vw_prop_chip_10kdollar_st");
			case 45000:
				return joaat("vw_prop_chip_5kdollar_st");
			case 50000:
				return joaat("vw_prop_chip_10kdollar_st");
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 10:
				return joaat("vw_prop_chip_10dollar_x1");
			case 20:
				return joaat("vw_prop_chip_10dollar_st");
			case 30:
				return joaat("vw_prop_chip_10dollar_st");
			case 40:
				return joaat("vw_prop_chip_10dollar_st");
			case 50:
				return joaat("vw_prop_chip_50dollar_x1");
			case 60:
				return joaat("vw_prop_chip_10dollar_st");
			case 70:
				return joaat("vw_prop_chip_10dollar_st");
			case 80:
				return joaat("vw_prop_chip_10dollar_st");
			case 90:
				return joaat("vw_prop_chip_10dollar_st");
			case 100:
				return joaat("vw_prop_chip_100dollar_x1");
			case 150:
				return joaat("vw_prop_chip_50dollar_st");
			case 200:
				return joaat("vw_prop_chip_100dollar_st");
			case 250:
				return joaat("vw_prop_chip_50dollar_st");
			case 300:
				return joaat("vw_prop_chip_100dollar_st");
			case 350:
				return joaat("vw_prop_chip_50dollar_st");
			case 400:
				return joaat("vw_prop_chip_100dollar_st");
			case 450:
				return joaat("vw_prop_chip_50dollar_st");
			case 500:
				return joaat("vw_prop_chip_500dollar_x1");
			case 1000:
				return joaat("vw_prop_chip_1kdollar_x1");
			case 1500:
				return joaat("vw_prop_chip_500dollar_st");
			case 2000:
				return joaat("vw_prop_chip_1kdollar_st");
			case 2500:
				return joaat("vw_prop_chip_500dollar_st");
			case 3000:
				return joaat("vw_prop_chip_1kdollar_st");
			case 3500:
				return joaat("vw_prop_chip_500dollar_st");
			case 4000:
				return joaat("vw_prop_chip_1kdollar_st");
			case 4500:
				return joaat("vw_prop_chip_500dollar_st");
			case 5000:
				return joaat("vw_prop_plaq_5kdollar_x1");
			case 6000:
				return joaat("vw_prop_chip_1kdollar_st");
			case 7000:
				return joaat("vw_prop_chip_1kdollar_st");
			case 8000:
				return joaat("vw_prop_chip_1kdollar_st");
			case 9000:
				return joaat("vw_prop_chip_1kdollar_st");
			case 10000:
				return joaat("vw_prop_plaq_10kdollar_x1");
			case 15000:
				return joaat("vw_prop_plaq_5kdollar_st");
			case 20000:
				return joaat("vw_prop_plaq_10kdollar_st");
			case 25000:
				return joaat("vw_prop_plaq_5kdollar_st");
			case 30000:
				return joaat("vw_prop_plaq_10kdollar_st");
			case 35000:
				return joaat("vw_prop_plaq_5kdollar_st");
			case 40000:
				return joaat("vw_prop_plaq_10kdollar_st");
			case 45000:
				return joaat("vw_prop_plaq_5kdollar_st");
			case 50000:
				return joaat("vw_prop_plaq_10kdollar_st");
			}
		default:
	}
	return 0;
}

int func_638(int iParam0)//Position - 0x1ED55
{
	switch (iParam0)
	{
		case 0:
			return joaat("vw_prop_chip_10dollar_x1");
		case 1:
			return joaat("vw_prop_chip_50dollar_x1");
		case 2:
			return joaat("vw_prop_chip_100dollar_x1");
		case 3:
			return joaat("vw_prop_chip_500dollar_x1");
		case 4:
			return joaat("vw_prop_chip_1kdollar_x1");
		case 5:
			return joaat("vw_prop_chip_5kdollar_x1");
		case 6:
			return joaat("vw_prop_chip_10kdollar_x1");
		case 7:
			return joaat("vw_prop_chip_10dollar_st");
		case 8:
			return joaat("vw_prop_chip_50dollar_st");
		case 9:
			return joaat("vw_prop_chip_100dollar_st");
		case 10:
			return joaat("vw_prop_chip_500dollar_st");
		case 11:
			return joaat("vw_prop_chip_1kdollar_st");
		case 12:
			return joaat("vw_prop_chip_5kdollar_st");
		case 13:
			return joaat("vw_prop_chip_10kdollar_st");
		case 14:
			return joaat("vw_prop_plaq_5kdollar_x1");
		case 15:
			return joaat("vw_prop_plaq_5kdollar_st");
		case 16:
			return joaat("vw_prop_plaq_10kdollar_x1");
		case 17:
			return joaat("vw_prop_plaq_10kdollar_st");
		default:
	}
	return 0;
}

int func_639()//Position - 0x1F0A8
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 1;
	}
	return 0;
}

int func_640(int iParam0, int iParam1, bool bParam2)//Position - 0x3986F
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return BitTest(Global_100493.f_1393[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (__LIB_0__.func_3() == 0)
		{
			return BitTest(__LIB_0__.func_534(func_432(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113386.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_641()//Position - 0x278EF
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("tonya3")) == 1 || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("tonya4")) == 1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_565[0 /*20*/], false) && !ENTITY::IS_ENTITY_DEAD(Local_565[0 /*20*/].f_6, false))
		{
			if (PED::IS_PED_IN_VEHICLE(Local_565[0 /*20*/], Local_565[0 /*20*/].f_6, false))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_642()//Position - 0x279C1
{
	if (((VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_674, 2, false) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_674, 3, false)) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_674, 1, false)) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_674, 0, false))
	{
		return 1;
	}
	if (((VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_674, 4, false) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_674, 5, false)) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_674, 1, false)) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_674, 0, false))
	{
		return 1;
	}
	if (((VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_674, 4, false) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_674, 5, false)) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_674, 2, false)) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_674, 3, false))
	{
		return 1;
	}
	return 0;
}

int func_643(var uParam0)//Position - 0x284EC
{
	switch (iLocal_453)
	{
		case 1:
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0 && !PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_214 = 0;
				return 1;
			}
			break;
		case 2:
			break;
		case 4:
			break;
		case 6:
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_DEAD(*uParam0, false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *uParam0, false))
				{
					iLocal_214 = 0;
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_644(var uParam0, var uParam1)//Position - 0x28ECE
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
	{
		if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID()))
		{
			PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID());
		}
		iLocal_453 = 1;
		return 1;
	}
	if ((ENTITY::DOES_ENTITY_EXIST((uParam0[0 /*20*/])->f_6) && !ENTITY::IS_ENTITY_DEAD((uParam0[0 /*20*/])->f_6, false)) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!bLocal_178)
		{
			if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY((uParam0[0 /*20*/])->f_6, PLAYER::PLAYER_PED_ID(), true) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT((uParam0[0 /*20*/])->f_6)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED((uParam0[0 /*20*/])->f_6))
			{
				iLocal_453 = 2;
				return 1;
			}
		}
	}
	if ((ENTITY::DOES_ENTITY_EXIST((*uParam0)[0 /*20*/]) && !ENTITY::IS_ENTITY_DEAD((*uParam0)[0 /*20*/], false)) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(PLAYER::PLAYER_PED_ID(), (*uParam0)[0 /*20*/], true))
		{
			iLocal_453 = 4;
			return 1;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_DEAD(*uParam1, false))
	{
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *uParam1, false))
		{
			iLocal_453 = 6;
			return 1;
		}
	}
	return 0;
}

void func_645()//Position - 0x29D08
{
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 76 /*INPUT_VEH_HANDBRAKE*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 73 /*INPUT_VEH_DUCK*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 59 /*INPUT_VEH_MOVE_LR*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 60 /*INPUT_VEH_MOVE_UD*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 74 /*INPUT_VEH_HEADLIGHT*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 86 /*INPUT_VEH_HORN*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 81 /*INPUT_VEH_NEXT_RADIO*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 82 /*INPUT_VEH_PREV_RADIO*/, true);
}

void func_646()//Position - 0x2B05F
{
	Global_113386.f_19973.f_3++;
	Global_113386.f_19973.f_2 = iLocal_171;
	switch (iLocal_171)
	{
		case 2:
			Global_113386.f_19973.f_4++;
			break;
		case 3:
			Global_113386.f_19973.f_7++;
			break;
		case 0:
			Global_113386.f_19973.f_6++;
			break;
		case 1:
			Global_113386.f_19973.f_5++;
			break;
		case 4:
			Global_113386.f_19973.f_8++;
			break;
	}
}

void func_647()//Position - 0x2B279
{
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 76 /*INPUT_VEH_HANDBRAKE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 73 /*INPUT_VEH_DUCK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 59 /*INPUT_VEH_MOVE_LR*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 60 /*INPUT_VEH_MOVE_UD*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 74 /*INPUT_VEH_HEADLIGHT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 86 /*INPUT_VEH_HORN*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 81 /*INPUT_VEH_NEXT_RADIO*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 82 /*INPUT_VEH_PREV_RADIO*/, true);
}

void func_648()//Position - 0x2B511
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_DEAD(iLocal_674, false))
	{
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_674, false))
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_559))
			{
				HUD::REMOVE_BLIP(&iLocal_559);
			}
			if (!HUD::DOES_BLIP_EXIST(iLocal_557))
			{
				iLocal_557 = HUD::ADD_BLIP_FOR_ENTITY(iLocal_674);
				HUD::SET_BLIP_COLOUR(iLocal_557, 3);
			}
		}
		else
		{
			if (!HUD::DOES_BLIP_EXIST(iLocal_559))
			{
				__LIB_30__.func_415(iLocal_559);
				iLocal_559 = HUD::ADD_BLIP_FOR_COORD(406.3804f, -1635.8673f, 28.2928f);
				HUD::SET_BLIP_ROUTE(iLocal_559, true);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_557))
			{
				HUD::REMOVE_BLIP(&iLocal_557);
			}
		}
	}
}

void func_649()//Position - 0x2C1B4
{
	struct<3> Var0;
	int iVar1;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	}
	if (iLocal_171 == 0)
	{
		if (SYSTEM::VDIST2(Var0, Local_394[iLocal_451 /*23*/].f_1) > 22500f)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_565[0 /*20*/]) && !ENTITY::IS_ENTITY_DEAD(Local_565[0 /*20*/], false))
			{
				if (ENTITY::IS_ENTITY_OCCLUDED(Local_565[0 /*20*/]))
				{
					PED::DELETE_PED(&(Local_565[0 /*20*/]));
				}
				else
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_565[0 /*20*/]));
				}
			}
			STREAMING::REMOVE_ANIM_DICT("oddjobs@towing");
			STREAMING::REMOVE_ANIM_DICT("oddjobs@towingangryidle_a");
			STREAMING::REMOVE_ANIM_DICT("oddjobs@towingpleadingidle_b");
			STREAMING::REMOVE_ANIM_DICT("oddjobs@towingpleadingidle_a");
			STREAMING::REMOVE_ANIM_DICT("RANDOM@BICYCLE_THIEF@IDLE_A");
			STREAMING::REMOVE_ANIM_DICT("move_m@JOG@");
		}
	}
	else if (iLocal_171 == 1)
	{
		if (SYSTEM::VDIST2(Var0, Local_394[iLocal_451 /*23*/].f_1) > 22500f)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_555) && !ENTITY::IS_ENTITY_DEAD(iLocal_555, false))
			{
				if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_555))
				{
					PED::DELETE_PED(&iLocal_555);
				}
				else
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_555);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_565[0 /*20*/].f_7) && !ENTITY::IS_ENTITY_DEAD(Local_565[0 /*20*/].f_7, false))
			{
				if (ENTITY::IS_ENTITY_OCCLUDED(Local_565[0 /*20*/].f_7))
				{
					VEHICLE::DELETE_MISSION_TRAIN(&(Local_565[0 /*20*/].f_7));
				}
				else
				{
					VEHICLE::SET_VEHICLE_STAYS_FROZEN_WHEN_CLEANED_UP(Local_565[0 /*20*/].f_7, true);
					VEHICLE::SET_MISSION_TRAIN_AS_NO_LONGER_NEEDED(&(Local_565[0 /*20*/].f_7), false);
				}
			}
		}
	}
	else if (iLocal_171 == 4)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_565[0 /*20*/].f_2[iVar1]) && !ENTITY::IS_ENTITY_DEAD(Local_565[0 /*20*/].f_2[iVar1], false))
			{
				if (ENTITY::IS_ENTITY_OCCLUDED(Local_565[0 /*20*/].f_2[iVar1]))
				{
					PED::DELETE_PED(&(Local_565[0 /*20*/].f_2[iVar1]));
				}
				else
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_565[0 /*20*/].f_2[iVar1]));
				}
			}
			iVar1++;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_676))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_676);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_675))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_675);
		}
		STREAMING::REMOVE_ANIM_DICT("REACTION@MALE_STAND@BIG_VARIATIONS@A");
		STREAMING::REMOVE_ANIM_DICT("move_m@JOG@");
	}
}

int func_650()//Position - 0x2C64C
{
	if (bLocal_505)
	{
		if (bLocal_449)
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

void func_651(int iParam0, var uParam1)//Position - 0x2CB6F
{
	if (__LIB_0__.func_86(Local_46[0 /*3*/]))
	{
	}
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -230.85141f, -1181.0723f, 21.06031f };
			uParam1->f_3 = { -230.46584f, -1163.1604f, 28.996408f };
			uParam1->f_6 = 22.25f;
			uParam1->f_17 = { Local_46[0 /*3*/] };
			break;
		case 1:
			*uParam1 = { -204.06029f, -1390.0239f, 30.253416f };
			uParam1->f_3 = { -207.56654f, -1382.5823f, 33.469368f };
			uParam1->f_6 = 17f;
			uParam1->f_17 = { Local_46[1 /*3*/] };
			break;
		case 2:
			*uParam1 = { -204.06029f, -1390.0239f, 30.253416f };
			uParam1->f_3 = { -207.56654f, -1382.5823f, 33.469368f };
			uParam1->f_6 = 17f;
			uParam1->f_17 = { Local_46[2 /*3*/] };
			break;
		case 3:
			*uParam1 = { 538.747f, -177.535f, 74.484f };
			uParam1->f_3 = { 528.747f, -177.535f, 34.484f };
			uParam1->f_6 = 28f;
			uParam1->f_17 = { Local_46[3 /*3*/] };
			break;
		case 4:
			*uParam1 = { 1158.944f, -776.686f, 77.608f };
			uParam1->f_3 = { 1118.944f, -776.686f, 37.608f };
			uParam1->f_6 = 10f;
			uParam1->f_17 = { Local_46[4 /*3*/] };
			break;
		case 5:
			*uParam1 = { 798.455f, -821.201f, 46.186f };
			uParam1->f_3 = { 813.455f, -821.201f, 6.186f };
			uParam1->f_6 = 20f;
			uParam1->f_17 = { Local_46[5 /*3*/] };
			break;
		case 6:
			*uParam1 = { 2504.934f, 4085.125f, 58.636f };
			uParam1->f_3 = { 2500.285f, 4075.156f, 18.636f };
			uParam1->f_6 = 12f;
			uParam1->f_17 = { Local_46[6 /*3*/] };
			break;
		case 7:
			*uParam1 = { 256.56226f, 2600.4578f, 43.3306f };
			uParam1->f_3 = { 268.67007f, 2602.716f, 46.74961f };
			uParam1->f_6 = 5f;
			uParam1->f_17 = { Local_46[7 /*3*/] };
			break;
		case 8:
			*uParam1 = { 398.74713f, -1650.8059f, 27.293236f };
			uParam1->f_3 = { 434.1311f, -1610.0115f, 33.342937f };
			uParam1->f_6 = 40.5f;
			uParam1->f_14 = { 400.28537f, -1632.597f, 28.29278f };
			uParam1->f_17 = { Local_47[0 /*3*/] };
			uParam1->f_7 = { 396.83475f, -1639.0447f, 27.292776f };
			uParam1->f_10 = { 408.0073f, -1625.6083f, 33.292774f };
			uParam1->f_13 = 10f;
			break;
	}
}

void func_652()//Position - 0x2CE4F
{
	struct<3> Var0;
	struct<3> Var1;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_565[0 /*20*/].f_6, false))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(Local_565[0 /*20*/].f_6, true) };
	}
	if (SYSTEM::VDIST2(Var0, Var1) < 100f)
	{
		if (!iLocal_553)
		{
			if (HUD::DOES_BLIP_EXIST(Local_565[0 /*20*/].f_8))
			{
				HUD::REMOVE_BLIP(&(Local_565[0 /*20*/].f_8));
				iLocal_553 = 1;
			}
		}
		if (!HUD::DOES_BLIP_EXIST(Local_565[0 /*20*/].f_8))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_565[0 /*20*/].f_6))
			{
				Local_565[0 /*20*/].f_8 = HUD::ADD_BLIP_FOR_ENTITY(Local_565[0 /*20*/].f_6);
				HUD::SET_BLIP_COLOUR(Local_565[0 /*20*/].f_8, 3);
				HUD::SET_BLIP_ROUTE(Local_565[0 /*20*/].f_8, true);
			}
		}
	}
}

void func_653(int iParam0)//Position - 0x2D6FC
{
	int iVar0;
	bLocal_504 = true;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (iVar0 != iParam0)
		{
			if (HUD::DOES_BLIP_EXIST(Local_565[iVar0 /*20*/].f_8))
			{
				HUD::REMOVE_BLIP(&(Local_565[iVar0 /*20*/].f_8));
			}
		}
		iVar0++;
	}
}

int func_654()//Position - 0x2D73E
{
	float fVar0;
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_674, false) && !ENTITY::IS_ENTITY_DEAD(Local_565[0 /*20*/].f_6, false))
	{
		if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_674, Local_565[0 /*20*/].f_6))
		{
			fVar0 = ENTITY::GET_ENTITY_SPEED(iLocal_674);
			if (fVar0 > 1f)
			{
				if (!iLocal_550)
				{
					__LIB_0__.func_151("TOWT_HELP_SL", -1);
					iLocal_550 = 1;
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_655(var uParam0, struct<3> Param1, float fParam2)//Position - 0x2D8EB
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	iVar1 = 0;
	fVar2 = 1E+09f;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!__LIB_0__.func_86(*(uParam0[iVar0 /*3*/])))
		{
			fVar3 = SYSTEM::VDIST2(*(uParam0[iVar0 /*3*/]), Param1);
			if (fVar3 < fVar2 && fVar3 > fParam2)
			{
				fVar2 = fVar3;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 == -1)
	{
	}
	return iVar1;
}

int func_656(int iParam0)//Position - 0x2E022
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if ((iParam0[iVar0 /*20*/])->f_6 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_657(int iParam0, var uParam1, var uParam2)//Position - 0x2E04E
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		*uParam1 = ENTITY::GET_ENTITY_HEALTH(iParam0);
		*uParam2 = *uParam1;
	}
}

void func_658(var uParam0, char* sParam1, int iParam2, bool bParam3)//Position - 0x2E74A
{
	var uVar0;
	if (bParam3)
	{
		MISC::SET_BIT(&uVar0, 26);
	}
	__LIB_10__.func_592(uParam0, 8, iParam2, sParam1, uVar0);
}

void func_659()//Position - 0x2E88A
{
	if (iLocal_171 == 2)
	{
		STREAMING::REQUEST_MODEL(joaat("primo"));
	}
	else if (iLocal_171 == 0)
	{
		STREAMING::REQUEST_MODEL(joaat("landstalker"));
		STREAMING::REQUEST_MODEL(joaat("A_M_M_GenFat_01"));
	}
	else if (iLocal_171 == 1)
	{
		STREAMING::REQUEST_MODEL(joaat("schwarzer"));
		STREAMING::REQUEST_MODEL(joaat("A_M_M_BevHills_02"));
	}
	else if (iLocal_171 == 3)
	{
		STREAMING::REQUEST_MODEL(joaat("tailgater"));
		STREAMING::REQUEST_MODEL(joaat("A_M_M_Tourist_01"));
	}
	else if (iLocal_171 == 4)
	{
		STREAMING::REQUEST_MODEL(joaat("intruder"));
		STREAMING::REQUEST_MODEL(joaat("S_M_M_Paramedic_01"));
		STREAMING::REQUEST_MODEL(joaat("A_M_Y_GenStreet_02"));
		STREAMING::REQUEST_MODEL(joaat("A_M_M_BevHills_02"));
	}
	if (iLocal_171 == 2)
	{
		while (!STREAMING::HAS_MODEL_LOADED(joaat("primo")))
		{
			SYSTEM::WAIT(0);
		}
	}
	else if (iLocal_171 == 0)
	{
		while (!STREAMING::HAS_MODEL_LOADED(joaat("landstalker")) || !STREAMING::HAS_MODEL_LOADED(joaat("A_M_M_GenFat_01")))
		{
			SYSTEM::WAIT(0);
		}
	}
	else if (iLocal_171 == 1)
	{
		while (!STREAMING::HAS_MODEL_LOADED(joaat("schwarzer")) || !STREAMING::HAS_MODEL_LOADED(joaat("A_M_M_BevHills_02")))
		{
			SYSTEM::WAIT(0);
		}
	}
	else if (iLocal_171 == 3)
	{
		while (!STREAMING::HAS_MODEL_LOADED(joaat("tailgater")) || !STREAMING::HAS_MODEL_LOADED(joaat("A_M_M_Tourist_01")))
		{
			SYSTEM::WAIT(0);
		}
	}
	else if (iLocal_171 == 4)
	{
		while (((!STREAMING::HAS_MODEL_LOADED(joaat("intruder")) || !STREAMING::HAS_MODEL_LOADED(joaat("S_M_M_Paramedic_01"))) || !STREAMING::HAS_MODEL_LOADED(joaat("A_M_Y_GenStreet_02"))) || !STREAMING::HAS_MODEL_LOADED(joaat("A_M_M_BevHills_02")))
		{
			SYSTEM::WAIT(0);
		}
	}
}

int func_660(var uParam0, float* fParam1, var* uParam2, var uParam3)//Position - 0x354C3
{
	struct<3> Var0;
	var uVar1;
	var uVar2;
	struct<3> Var3;
	float fVar4;
	float fVar5;
	int iVar6;
	fVar4 = 0f;
	fVar5 = 0f;
	iVar6 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 3999) / 1000);
	if (iVar6 == 0)
	{
		fVar4 = -MISC::GET_RANDOM_FLOAT_IN_RANGE(450f, 700f);
		fVar5 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-100f, 100f);
	}
	else if (iVar6 == 1)
	{
		fVar4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(450f, 700f);
		fVar5 = MISC::GET_RANDOM_FLOAT_IN_RANGE(100f, 100f);
	}
	else if (iVar6 == 2)
	{
		fVar5 = MISC::GET_RANDOM_FLOAT_IN_RANGE(450f, 700f);
		fVar4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-100f, 100f);
	}
	else
	{
		fVar5 = -MISC::GET_RANDOM_FLOAT_IN_RANGE(450f, 700f);
		fVar4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-100f, 100f);
	}
	Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), fVar4, fVar5, 0f) };
	if (!PATHFIND::GET_RANDOM_VEHICLE_NODE(Var0, 10f, true, true, true, &Var3, &uVar2))
	{
		return 0;
	}
	PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(Var3, 2, uParam2, fParam1, &uVar1, 1, 3f, 0f);
	*uParam0 = { Var3 };
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("tonya4")) == 1)
	{
		*uParam0 = { -476.1537f, 132.6556f, 62.9586f };
		*fParam1 = 87.951f;
	}
	if (__LIB_0__.func_78(*uParam0, 0f, 0f, 0f, 0))
	{
		return 0;
	}
	return 1;
}

void func_661()//Position - 0x3B7A0
{
	VEHICLE::SET_RANDOM_TRAINS(false);
	__LIB_0__.func_62(0, 0);
	__LIB_0__.func_62(1, 0);
	__LIB_0__.func_62(2, 0);
	__LIB_0__.func_62(3, 0);
	__LIB_0__.func_62(4, 0);
	__LIB_0__.func_62(5, 0);
	__LIB_0__.func_62(6, 0);
	__LIB_0__.func_62(7, 0);
	__LIB_0__.func_62(8, 0);
	__LIB_0__.func_62(9, 0);
	__LIB_0__.func_62(10, 0);
	__LIB_0__.func_62(11, 0);
}

int func_662(bool bParam0)//Position - 0x3CB79
{
	if (bLocal_216 || iLocal_215)
	{
		return 0;
	}
	if (bParam0)
	{
		if (bLocal_217)
		{
			return 0;
		}
	}
	return 1;
}

int func_663()//Position - 0x3DDD7
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_565[0 /*20*/], false))
	{
		if (bLocal_178)
		{
			switch (iLocal_601)
			{
				case 0:
					if (TASK::GET_SEQUENCE_PROGRESS(Local_565[0 /*20*/]) == 1)
					{
						iLocal_601 = 1;
					}
					break;
				case 1:
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_565[0 /*20*/], "oddjobs@towingpleadingidle_b", "idle_d", 3))
					{
						iLocal_601 = 2;
					}
					break;
				case 2:
					return 1;
					break;
				}
			}
	}
	return 0;
}

void func_664(int iParam0)//Position - 0x3DE4A
{
	iParam0->f_1 = 0;
	CAM::DESTROY_CAM(*iParam0, false);
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
}

void func_665(var uParam0)//Position - 0x3E427
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED((*uParam0)[iVar0], false);
			(*uParam0)[iVar0] = 0;
		}
		iVar0++;
	}
}

void func_666(var uParam0, int iParam1)//Position - 0x3E45E
{
	(*uParam0)[0] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_ojtt_train_sparks", iParam1, -0.771f, 6.515f, -1.507f, 0f, 0f, -20f, 1.15f, true, false, false);
	(*uParam0)[1] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_ojtt_train_sparks", iParam1, 0.771f, 6.515f, -1.507f, 0f, 0f, 20f, 1.15f, false, false, false);
	(*uParam0)[2] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_ojtt_train_sparks", iParam1, -0.771f, 3.781f, -1.507f, 0f, 0f, -20f, 1.15f, true, false, false);
	(*uParam0)[3] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_ojtt_train_sparks", iParam1, 0.771f, 3.781f, -1.507f, 0f, 0f, 20f, 1.15f, false, false, false);
	(*uParam0)[4] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_ojtt_train_sparks", iParam1, -0.771f, -3.743f, -1.507f, 0f, 0f, -20f, 1.15f, true, false, false);
	(*uParam0)[5] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_ojtt_train_sparks", iParam1, 0.7711f, -3.743f, -1.507f, 0f, 0f, 20f, 1.15f, false, false, false);
	(*uParam0)[6] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_ojtt_train_sparks", iParam1, -0.771f, -6.537f, -1.507f, 0f, 0f, -20f, 1.15f, true, false, false);
	(*uParam0)[7] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_ojtt_train_sparks", iParam1, 0.771f, -6.537f, -1.507f, 0f, 0f, 20f, 1.15f, false, false, false);
}

void func_667()//Position - 0x3E65B
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_565[0 /*20*/].f_7, false) && !ENTITY::IS_ENTITY_DEAD(Local_565[0 /*20*/].f_6, false))
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_565[0 /*20*/].f_7, Local_565[0 /*20*/].f_6))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_674, false) && !ENTITY::IS_ENTITY_DEAD(Local_565[0 /*20*/].f_6, false))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_674, Local_565[0 /*20*/].f_6))
				{
					VEHICLE::DETACH_VEHICLE_FROM_TOW_TRUCK(iLocal_674, Local_565[0 /*20*/].f_6);
				}
			}
			VEHICLE::EXPLODE_VEHICLE(Local_565[0 /*20*/].f_6, true, false);
		}
	}
}

void func_668(struct<165> Param0, char* sParam1, char* sParam2, bool bParam3)//Position - 0x3F0B5
{
	if (bParam3)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	StringCopy(&cLocal_64, sParam1, 16);
	StringCopy(&cLocal_67, sParam2, 16);
	Local_52 = { Param0 };
}

int func_669(int iParam0, int iParam1, int iParam2)//Position - 0x3F260
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Local_70[iVar0 /*3*/] == iParam0 && !HUD::DOES_BLIP_EXIST(Local_70[iVar0 /*3*/].f_1))
		{
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (!HUD::DOES_BLIP_EXIST(Local_70[iVar0 /*3*/].f_1))
		{
			Local_70[iVar0 /*3*/] = iParam0;
			Local_70[iVar0 /*3*/].f_1 = iParam1;
			Local_70[iVar0 /*3*/].f_2 = iParam2;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_670(int iParam0)//Position - 0x3F2E3
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			PED::SET_PED_COMBAT_ABILITY(iParam0, 1);
			PED::SET_PED_COMBAT_RANGE(iParam0, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 23, false);
			PED::SET_PED_COMBAT_MOVEMENT(iParam0, 2);
			WEAPON::GIVE_WEAPON_TO_PED(iParam0, joaat("WEAPON_MICROSMG"), 1000, true, true);
			PED::SET_PED_SHOOT_RATE(iParam0, 500);
		}
	}
}

void func_671(char* sParam0)//Position - 0x3FA64
{
	SYSTEM::SETTIMERA(0);
	__LIB_0__.func_151(sParam0, -1);
}

void func_672(struct<7> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, int iParam15)//Position - 0x3FA78
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam14) || !ENTITY::DOES_ENTITY_EXIST(iParam15))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam14, false) || ENTITY::IS_ENTITY_DEAD(iParam15, false))
	{
		return;
	}
	if (!__LIB_0__.func_86(Param0.f_14))
	{
		Var0 = { Param0.f_7 };
		Var1 = { Param0.f_10 };
		fVar2 = Param0.f_13;
	}
	else
	{
		Var0 = { Param0 };
		Var1 = { Param0.f_3 };
		fVar2 = Param0.f_6;
	}
	if (!iLocal_194)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam15, Var0, Var1, fVar2, false, true, 0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam14, false) && !ENTITY::IS_ENTITY_DEAD(iParam15, false))
			{
				if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iParam14, iParam15))
				{
					HUD::CLEAR_HELP(true);
					HUD::CLEAR_PRINTS();
					iLocal_448 = 12;
					iLocal_194 = 1;
				}
			}
		}
	}
}

void func_673()//Position - 0x3FD1F
{
	if (iLocal_681 < 16)
	{
		switch (iLocal_625)
		{
			case 2:
				sLocal_455 = "TOW_FAIL_05";
				break;
			case 0:
				sLocal_455 = "TOW_FAIL_10";
				break;
			case 6:
				sLocal_455 = "DTRSHRD_FAIL_03";
				break;
			case 1:
				sLocal_455 = "TOW_FAIL_08";
				break;
			case 10:
				sLocal_455 = "TOW_FAIL_17";
				break;
			case 11:
				sLocal_455 = "TOW_FAIL_08";
				break;
			case 12:
				sLocal_455 = "TOW_FAIL_08a";
				break;
			case 13:
				sLocal_455 = "TOW_FAIL_16";
				break;
			case 4:
				sLocal_455 = "TOW_FAIL_12";
				break;
			case 5:
				sLocal_455 = "TOW_FAIL_01";
				break;
			case 3:
				sLocal_455 = "TOW_FAIL_03a";
				break;
			case 8:
				sLocal_455 = "TOW_FAIL_04";
				break;
			case 9:
				sLocal_455 = "TOW_FAIL_04a";
				break;
			case 14:
				sLocal_455 = "TOW_FAIL_06";
				break;
			case 15:
				sLocal_455 = "TOW_FAIL_07";
				break;
			case 16:
				sLocal_455 = "TOW_FAIL_09";
				break;
			case 17:
				sLocal_455 = "TOW_FAIL_09a";
				break;
			case 18:
				sLocal_455 = "TOW_FAIL_02";
				break;
			case 19:
				sLocal_455 = "TOW_FAIL_02b";
				break;
			case 20:
				sLocal_455 = "TOW_FAIL_02b";
				break;
			case 21:
				sLocal_455 = "TOW_FAIL_11";
				break;
			case 22:
				sLocal_455 = "TOW_FAIL_13";
				break;
			case 23:
				sLocal_455 = "TOW_FAIL_14";
				break;
		}
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			sLocal_455 = "TOW_FAIL_15";
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_455))
		{
			__LIB_0__.func_324(sLocal_455);
		}
		bLocal_480 = true;
	}
}

int func_674(var uParam0)//Position - 0x40580
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false) != *uParam0)
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

void func_675(var uParam0)//Position - 0x405D5
{
	if (*uParam0 != 0)
	{
		if (!uParam0->f_7)
		{
			if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(*uParam0))
			{
				OBJECT::REMOVE_DOOR_FROM_SYSTEM(*uParam0, 0);
			}
		}
	}
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0f;
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
	uParam0->f_7 = 0;
}

void func_676(var uParam0, bool bParam1, float fParam2, int iParam3)//Position - 0x4062E
{
	if (*uParam0 != 0)
	{
		if (iParam3 <= 0)
		{
			if (fParam2 != 99.9f)
			{
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(*uParam0, fParam2, false, true);
			}
			if (bParam1)
			{
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(*uParam0, 1, false, true);
			}
			else
			{
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(*uParam0, 0, false, true);
			}
			uParam0->f_6 = 0;
			uParam0->f_5 = 0;
		}
		else if (fParam2 != 99.9f)
		{
			uParam0->f_1 = 1;
			uParam0->f_4 = bParam1;
			uParam0->f_2 = fParam2;
			uParam0->f_6 = MISC::GET_GAME_TIMER();
			uParam0->f_5 = iParam3;
			uParam0->f_3 = OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(*uParam0);
		}
	}
}

void func_677()//Position - 0x406BA
{
	switch (iLocal_171)
	{
		case 2:
			if ((Global_113386.f_19973.f_4 % 2) == 0)
			{
				sLocal_459 = "TOWABDBITCHM";
				iLocal_599 = 2;
			}
			else
			{
				sLocal_459 = "TOWABDATTACKM";
				iLocal_599 = 2;
			}
			break;
		case 4:
			break;
		case 3:
			sLocal_459 = "TOWBREAKDOWN1";
			iLocal_599 = 3;
			break;
		case 0:
			sLocal_459 = "TOWHANDIBEGM";
			iLocal_599 = 5;
			break;
		case 1:
			sLocal_459 = "TOWTRAINM";
			iLocal_599 = 3;
			break;
	}
}

int func_678()//Position - 0x40743
{
	return Local_394[iLocal_451 /*23*/].f_22;
}

void func_679()//Position - 0x408D6
{
	Local_46[0 /*3*/] = { -227.6f, -1172.1f, 21.8963f };
	Local_46[1 /*3*/] = { -205.6866f, -1384.3333f, 30.2585f };
	Local_46[2 /*3*/] = { -205.6866f, -1384.3333f, 30.2585f };
	Local_46[3 /*3*/] = { 532.4957f, -172.2088f, 53.6835f };
	Local_46[4 /*3*/] = { 1151.5066f, -773.4066f, 56.61f };
	Local_46[5 /*3*/] = { 808.4329f, -822.9456f, 25.1821f };
	Local_46[6 /*3*/] = { 2502.613f, 4080.141f, 37.6307f };
	Local_46[7 /*3*/] = { 263.4725f, 2601.8423f, 43.8197f };
	Local_47[0 /*3*/] = { 401.6046f, -1632.7806f, 28.2928f };
}

void func_680(var uParam0)//Position - 0x409A4
{
	*(uParam0[0 /*28*/][0 /*3*/]) = { 568.8983f, -1698.723f, 28.2631f };
	*(uParam0[0 /*28*/][1 /*3*/]) = { 575.1474f, -1697.5486f, 28.2631f };
	*(uParam0[0 /*28*/][2 /*3*/]) = { 584.8786f, -1703.8748f, 28.2631f };
	(uParam0[0 /*28*/])->f_27 = 3;
	(uParam0[0 /*28*/])->f_23 = { 565.9069f, -1702.8134f, 28.2227f };
	(uParam0[0 /*28*/])->f_26 = 58.4094f;
	(uParam0[0 /*28*/])->f_17 = { 564.5385f, -1689.7069f, 38.2854f };
	(uParam0[0 /*28*/])->f_20 = { 605.4141f, -1715.2214f, 18.0923f };
	*(uParam0[1 /*28*/][0 /*3*/]) = { 240.0033f, -1141.4331f, 28.3033f };
	*(uParam0[1 /*28*/][1 /*3*/]) = { 240.5303f, -1137.7504f, 28.3091f };
	*(uParam0[1 /*28*/][2 /*3*/]) = { 229.8743f, -1145.7627f, 28.3013f };
	(uParam0[1 /*28*/])->f_27 = 3;
	(uParam0[1 /*28*/])->f_23 = { 239.0778f, -1134.1409f, 28.2367f };
	(uParam0[1 /*28*/])->f_26 = 266.7983f;
	(uParam0[1 /*28*/])->f_17 = { 242.7403f, -1124.7528f, 38.3223f };
	(uParam0[1 /*28*/])->f_20 = { 225.7671f, -1152.415f, 18.2047f };
	(uParam0[1 /*28*/])->f_10[0 /*3*/] = { 232.3824f, -1137.8553f, 28.1944f };
	(uParam0[1 /*28*/])->f_10[1 /*3*/] = { 230.8579f, -1136.2522f, 28.0348f };
	*(uParam0[2 /*28*/][0 /*3*/]) = { -95.1473f, -1716.6565f, 28.4491f };
	*(uParam0[2 /*28*/][1 /*3*/]) = { -93.1677f, -1717.8398f, 28.4239f };
	(uParam0[2 /*28*/])->f_27 = 2;
	(uParam0[2 /*28*/])->f_23 = { -102.9092f, -1729.668f, 28.7511f };
	(uParam0[2 /*28*/])->f_26 = 105.1153f;
	(uParam0[2 /*28*/])->f_10[0 /*3*/] = { -99.8953f, -1726.702f, 28.4622f };
	(uParam0[2 /*28*/])->f_10[1 /*3*/] = { -101.1025f, -1728.6892f, 28.6286f };
	*(uParam0[3 /*28*/][0 /*3*/]) = { -117.7085f, -1321.0688f, 28.2857f };
	*(uParam0[3 /*28*/][1 /*3*/]) = { -116.6308f, -1325.3618f, 28.3192f };
	(uParam0[3 /*28*/])->f_27 = 2;
	(uParam0[3 /*28*/])->f_23 = { -112.3024f, -1329.2186f, 28.2685f };
	(uParam0[3 /*28*/])->f_26 = 179.9845f;
	(uParam0[3 /*28*/])->f_10[0 /*3*/] = { -113.1683f, -1319.4591f, 28.2125f };
	(uParam0[3 /*28*/])->f_10[1 /*3*/] = { -112.2886f, -1322.4221f, 28.2633f };
	*(uParam0[4 /*28*/][0 /*3*/]) = { 308.2367f, -1706.0255f, 28.3827f };
	*(uParam0[4 /*28*/][1 /*3*/]) = { 298.1392f, -1700.7681f, 28.3234f };
	(uParam0[4 /*28*/])->f_27 = 2;
	(uParam0[4 /*28*/])->f_23 = { 314.1078f, -1704.3053f, 28.3111f };
	(uParam0[4 /*28*/])->f_26 = 227.316f;
	(uParam0[4 /*28*/])->f_10[0 /*3*/] = { 304.5671f, -1697.5216f, 28.2629f };
	(uParam0[4 /*28*/])->f_10[1 /*3*/] = { 308.3995f, -1699.6951f, 28.3051f };
	*(uParam0[5 /*28*/][0 /*3*/]) = { 776.3322f, -2046.0779f, 28.2818f };
	*(uParam0[5 /*28*/][1 /*3*/]) = { 776.0253f, -2048.3916f, 28.2653f };
	(uParam0[5 /*28*/])->f_27 = 2;
	(uParam0[5 /*28*/])->f_23 = { 787.8897f, -2034.5416f, 28.2393f };
	(uParam0[5 /*28*/])->f_26 = 348.1702f;
	(uParam0[5 /*28*/])->f_10[0 /*3*/] = { 782.5989f, -2047.4797f, 28.159f };
	(uParam0[5 /*28*/])->f_10[1 /*3*/] = { 783.3265f, -2051.1829f, 28.1589f };
	*(uParam0[6 /*28*/][0 /*3*/]) = { 28.2787f, -986.7457f, 28.5094f };
	*(uParam0[6 /*28*/][1 /*3*/]) = { 35.6153f, -988.3468f, 28.4971f };
	*(uParam0[6 /*28*/][2 /*3*/]) = { 38.553f, -985.1667f, 28.5576f };
	(uParam0[6 /*28*/])->f_27 = 3;
	(uParam0[6 /*28*/])->f_23 = { 43.6799f, -982.0863f, 28.4103f };
	(uParam0[6 /*28*/])->f_26 = 251.1427f;
	(uParam0[6 /*28*/])->f_10[0 /*3*/] = { 30.5244f, -980.0237f, 28.4037f };
	(uParam0[6 /*28*/])->f_10[1 /*3*/] = { 34.0509f, -979.3044f, 28.4079f };
	*(uParam0[7 /*28*/][0 /*3*/]) = { 99.1579f, -1521.9631f, 28.3247f };
	*(uParam0[7 /*28*/][1 /*3*/]) = { 105.699f, -1527.331f, 28.3186f };
	(uParam0[7 /*28*/])->f_27 = 2;
	(uParam0[7 /*28*/])->f_23 = { 95.4077f, -1529.4733f, 28.3325f };
	(uParam0[7 /*28*/])->f_26 = 51.3731f;
	(uParam0[7 /*28*/])->f_10[0 /*3*/] = { 100.3829f, -1529.7828f, 28.2238f };
	(uParam0[7 /*28*/])->f_10[1 /*3*/] = { 97.5322f, -1531.5796f, 28.3374f };
	*(uParam0[8 /*28*/][0 /*3*/]) = { 370.2508f, -871.9623f, 28.2916f };
	*(uParam0[8 /*28*/][1 /*3*/]) = { 364.377f, -872.4929f, 28.2916f };
	(uParam0[8 /*28*/])->f_27 = 2;
	(uParam0[8 /*28*/])->f_23 = { 370.0709f, -865.2366f, 28.2507f };
	(uParam0[8 /*28*/])->f_26 = 271.3831f;
	(uParam0[8 /*28*/])->f_10[0 /*3*/] = { 363.9474f, -865.3307f, 28.2621f };
	(uParam0[8 /*28*/])->f_10[1 /*3*/] = { 361.2415f, -866.9158f, 28.1908f };
	*(uParam0[9 /*28*/][0 /*3*/]) = { 258.1324f, -2035.0984f, 17.2524f };
	*(uParam0[9 /*28*/][1 /*3*/]) = { 263.1343f, -2026.3652f, 17.7171f };
	(uParam0[9 /*28*/])->f_27 = 2;
	(uParam0[9 /*28*/])->f_23 = { 260.0068f, -2041.8058f, 16.9454f };
	(uParam0[9 /*28*/])->f_26 = 140.9065f;
	(uParam0[9 /*28*/])->f_10[0 /*3*/] = { 264.5263f, -2036.1978f, 17.2682f };
	(uParam0[9 /*28*/])->f_10[1 /*3*/] = { 264.3815f, -2032.3785f, 17.329f };
	*(uParam0[10 /*28*/][0 /*3*/]) = { 411.4076f, -1869.4333f, 25.5691f };
	*(uParam0[10 /*28*/][1 /*3*/]) = { 416.1884f, -1862.589f, 26.0458f };
	(uParam0[10 /*28*/])->f_27 = 2;
	(uParam0[10 /*28*/])->f_23 = { 412.9648f, -1876.9008f, 25.3104f };
	(uParam0[10 /*28*/])->f_26 = 135.5291f;
	(uParam0[10 /*28*/])->f_10[0 /*3*/] = { 418.299f, -1872.5396f, 25.6552f };
	(uParam0[10 /*28*/])->f_10[1 /*3*/] = { 419.0923f, -1869.0394f, 25.6907f };
	*(uParam0[11 /*28*/][0 /*3*/]) = { 500.9577f, -1664.8811f, 28.7134f };
	*(uParam0[11 /*28*/][1 /*3*/]) = { 501.1261f, -1668.809f, 28.7152f };
	(uParam0[11 /*28*/])->f_27 = 2;
	(uParam0[11 /*28*/])->f_23 = { 503.8388f, -1661.2373f, 28.4841f };
	(uParam0[11 /*28*/])->f_26 = 50.8842f;
	(uParam0[11 /*28*/])->f_10[0 /*3*/] = { 507.0525f, -1670.2535f, 28.7152f };
	(uParam0[11 /*28*/])->f_10[1 /*3*/] = { 507.7841f, -1665.1162f, 28.4902f };
	*(uParam0[12 /*28*/][0 /*3*/]) = { -208.9247f, -660.1125f, 32.629f };
	*(uParam0[12 /*28*/][1 /*3*/]) = { -204.0615f, -660.8978f, 32.7011f };
	*(uParam0[12 /*28*/][2 /*3*/]) = { -198.1905f, -664.2867f, 32.8159f };
	(uParam0[12 /*28*/])->f_27 = 3;
	(uParam0[12 /*28*/])->f_23 = { -213.0429f, -666.7334f, 32.6039f };
	(uParam0[12 /*28*/])->f_26 = 70.1131f;
	(uParam0[12 /*28*/])->f_10[0 /*3*/] = { -210.6179f, -667.8796f, 32.6494f };
	(uParam0[12 /*28*/])->f_10[1 /*3*/] = { -204.9018f, -667.8836f, 32.6425f };
	*(uParam0[13 /*28*/][0 /*3*/]) = { -310.1606f, -869.7873f, 30.6891f };
	*(uParam0[13 /*28*/][1 /*3*/]) = { -315.0338f, -869.8134f, 30.6555f };
	*(uParam0[13 /*28*/][2 /*3*/]) = { -319.5981f, -868.6276f, 30.6449f };
	(uParam0[13 /*28*/])->f_27 = 3;
	(uParam0[13 /*28*/])->f_23 = { -309.987f, -864.1183f, 30.6228f };
	(uParam0[13 /*28*/])->f_26 = 261.3995f;
	(uParam0[13 /*28*/])->f_10[0 /*3*/] = { -316.0121f, -862.7733f, 30.6267f };
	(uParam0[13 /*28*/])->f_10[1 /*3*/] = { -317.526f, -863.8655f, 30.5453f };
	*(uParam0[14 /*28*/][0 /*3*/]) = { 407.2907f, -1479.6372f, 28.2895f };
	*(uParam0[14 /*28*/][1 /*3*/]) = { 404.6483f, -1483.5702f, 28.2895f };
	(uParam0[14 /*28*/])->f_27 = 2;
	(uParam0[14 /*28*/])->f_23 = { 403.5326f, -1475.1968f, 28.2951f };
	(uParam0[14 /*28*/])->f_26 = 301.9695f;
	(uParam0[14 /*28*/])->f_10[0 /*3*/] = { 399.232f, -1477.7832f, 28.2928f };
	(uParam0[14 /*28*/])->f_10[1 /*3*/] = { 401.2551f, -1479.7366f, 28.1369f };
	*(uParam0[15 /*28*/][0 /*3*/]) = { -686.6597f, -851.2509f, 22.9054f };
	*(uParam0[15 /*28*/][1 /*3*/]) = { -696.9954f, -852.1266f, 22.6746f };
	(uParam0[15 /*28*/])->f_27 = 2;
	(uParam0[15 /*28*/])->f_23 = { -674.3848f, -844.9825f, 23.1517f };
	(uParam0[15 /*28*/])->f_26 = 269.1391f;
	(uParam0[15 /*28*/])->f_10[0 /*3*/] = { -692.3451f, -845.8392f, 22.7217f };
	(uParam0[15 /*28*/])->f_10[1 /*3*/] = { -692.3451f, -845.8392f, 22.7217f };
}

void func_681(var uParam0)//Position - 0x413CD
{
	(uParam0[0 /*23*/])->f_1 = { 123.999f, -1081.6178f, 28.1919f };
	(uParam0[0 /*23*/])->f_4 = 180.477f;
	(uParam0[0 /*23*/])->f_6 = { 97.7377f, -1072.4927f, 28.2717f };
	(uParam0[0 /*23*/])->f_9 = 253.9961f;
	(*uParam0)[0 /*23*/] = 0;
	(uParam0[1 /*23*/])->f_1 = { 123.999f, -1081.6178f, 28.1919f };
	(uParam0[1 /*23*/])->f_4 = 180.477f;
	(uParam0[1 /*23*/])->f_6 = { 97.7377f, -1072.4927f, 28.2717f };
	(uParam0[1 /*23*/])->f_9 = 253.9961f;
	(*uParam0)[1 /*23*/] = 0;
	(uParam0[2 /*23*/])->f_1 = { -301.9741f, -898.8075f, 30.0813f };
	(uParam0[2 /*23*/])->f_4 = 168.6079f;
	(uParam0[2 /*23*/])->f_6 = { -301.0894f, -934.515f, 30.0813f };
	(uParam0[2 /*23*/])->f_9 = 66.2119f;
	(*uParam0)[2 /*23*/] = 0;
	(uParam0[3 /*23*/])->f_1 = { -359.0859f, -965.5469f, 30.0701f };
	(uParam0[3 /*23*/])->f_4 = 145.3635f;
	(*uParam0)[3 /*23*/] = 2;
	(uParam0[4 /*23*/])->f_1 = { 4.5819f, -1762.4952f, 28.2918f };
	(uParam0[4 /*23*/])->f_4 = 51.8577f;
	(*uParam0)[4 /*23*/] = 2;
	(uParam0[5 /*23*/])->f_1 = { 260.5293f, -1872.3273f, 25.8171f };
	(uParam0[5 /*23*/])->f_4 = 55f;
	(*uParam0)[5 /*23*/] = 1;
	(uParam0[5 /*23*/])->f_6 = { 209.1288f, -2149.0547f, 13.3765f };
	(uParam0[5 /*23*/])->f_5 = 1;
	(uParam0[5 /*23*/])->f_13 = { 331.456f, -1789.7f, 26.817f };
	(uParam0[5 /*23*/])->f_16 = { 190.235f, -1957.1f, 26.816f };
	(uParam0[5 /*23*/])->f_19 = 7.2f;
	(uParam0[6 /*23*/])->f_1 = { 967.3045f, -1873.7893f, 30.1425f };
	(uParam0[6 /*23*/])->f_4 = 41.1599f;
	(*uParam0)[6 /*23*/] = 2;
	(uParam0[7 /*23*/])->f_1 = { -607.5065f, -1216.3397f, 13.4082f };
	(uParam0[7 /*23*/])->f_4 = 131.5235f;
	(*uParam0)[7 /*23*/] = 2;
	(uParam0[8 /*23*/])->f_1 = { 432.3639f, -619.0512f, 27.5112f };
	(uParam0[8 /*23*/])->f_4 = 263.5155f;
	(uParam0[8 /*23*/])->f_6 = { 435.9689f, -662.4229f, 27.8383f };
	(uParam0[8 /*23*/])->f_9 = 62.5486f;
	(*uParam0)[8 /*23*/] = 0;
	(uParam0[9 /*23*/])->f_1 = { -136.0945f, -785.4554f, 31.4112f };
	(uParam0[9 /*23*/])->f_4 = 276.5309f;
	(*uParam0)[9 /*23*/] = 2;
	(uParam0[10 /*23*/])->f_1 = { -32.488f, -1354.8672f, 28.1676f };
	(uParam0[10 /*23*/])->f_4 = 90.8486f;
	(*uParam0)[10 /*23*/] = 2;
	(uParam0[11 /*23*/])->f_1 = { -33.8858f, -1602.9177f, 28.2902f };
	(uParam0[11 /*23*/])->f_4 = 142.2298f;
	(*uParam0)[11 /*23*/] = 1;
	(uParam0[11 /*23*/])->f_6 = { 216.8692f, -1814.2551f, 24.6812f };
	(uParam0[11 /*23*/])->f_5 = 0;
	(uParam0[11 /*23*/])->f_13 = { -111.725f, -1538.781f, -29.292f };
	(uParam0[11 /*23*/])->f_16 = { 41.484f, -1667.339f, 29.292f };
	(uParam0[11 /*23*/])->f_19 = 7.8f;
	(uParam0[12 /*23*/])->f_1 = { 220.6214f, -852.1f, 29.1084f };
	(uParam0[12 /*23*/])->f_4 = 249.5924f;
	(*uParam0)[12 /*23*/] = 2;
	(uParam0[13 /*23*/])->f_1 = { 337.0184f, -1156.9297f, 28.2919f };
	(uParam0[13 /*23*/])->f_4 = 270.3139f;
	(*uParam0)[13 /*23*/] = 2;
	(uParam0[14 /*23*/])->f_1 = { 953.1846f, -2113.2559f, 29.5516f };
	(uParam0[14 /*23*/])->f_4 = 265.591f;
	(*uParam0)[14 /*23*/] = 2;
	(uParam0[15 /*23*/])->f_1 = { -88.9769f, -2003.448f, 17.0168f };
	(uParam0[15 /*23*/])->f_4 = 352.601f;
	(*uParam0)[15 /*23*/] = 2;
	(uParam0[16 /*23*/])->f_1 = { 211.0682f, -791.7485f, 29.9f };
	(uParam0[16 /*23*/])->f_4 = 68.5508f;
	(*uParam0)[16 /*23*/] = 2;
	(uParam0[17 /*23*/])->f_1 = { -327.4179f, -1529.1274f, 26.5696f };
	(uParam0[17 /*23*/])->f_4 = 179.9431f;
	(*uParam0)[17 /*23*/] = 2;
	(uParam0[18 /*23*/])->f_1 = { -596.5739f, -889.578f, 24.4759f };
	(uParam0[18 /*23*/])->f_4 = 269.5022f;
	(uParam0[18 /*23*/])->f_6 = { -584.4996f, -872.2784f, 24.8909f };
	(uParam0[18 /*23*/])->f_9 = 83.1267f;
	(*uParam0)[18 /*23*/] = 0;
	(uParam0[19 /*23*/])->f_1 = { 408.6235f, -989.5519f, 28.2665f };
	(uParam0[19 /*23*/])->f_4 = 233.0824f;
	(*uParam0)[19 /*23*/] = 2;
	(uParam0[20 /*23*/])->f_1 = { -33.8858f, -1602.9177f, 28.2902f };
	(uParam0[20 /*23*/])->f_4 = 142.2298f;
	(*uParam0)[20 /*23*/] = 1;
	(uParam0[20 /*23*/])->f_6 = { 216.8692f, -1814.2551f, 24.6812f };
	(uParam0[20 /*23*/])->f_5 = 0;
	(uParam0[20 /*23*/])->f_13 = { -111.725f, -1538.781f, -29.292f };
	(uParam0[20 /*23*/])->f_16 = { 41.484f, -1667.339f, 29.292f };
	(uParam0[20 /*23*/])->f_19 = 7.8f;
	(uParam0[21 /*23*/])->f_1 = { 432.3639f, -619.0512f, 27.5112f };
	(uParam0[21 /*23*/])->f_4 = 263.5155f;
	(uParam0[21 /*23*/])->f_6 = { 435.9689f, -662.4229f, 27.8383f };
	(uParam0[21 /*23*/])->f_9 = 62.5486f;
	(*uParam0)[21 /*23*/] = 0;
	(uParam0[22 /*23*/])->f_1 = { -310.2984f, -686.4995f, 32.1219f };
	(uParam0[22 /*23*/])->f_4 = 269.6159f;
	(uParam0[22 /*23*/])->f_6 = { -373.468f, -672.849f, 30.4925f };
	(uParam0[22 /*23*/])->f_9 = 274.2857f;
	(*uParam0)[22 /*23*/] = 0;
	(uParam0[23 /*23*/])->f_1 = { -316.4254f, -895.1236f, 30.0701f };
	(uParam0[23 /*23*/])->f_4 = 347.1421f;
	(*uParam0)[23 /*23*/] = 2;
	(uParam0[24 /*23*/])->f_1 = { 53.578f, -1417.2264f, 28.3517f };
	(uParam0[24 /*23*/])->f_4 = 224.8985f;
	(*uParam0)[24 /*23*/] = 2;
	(uParam0[25 /*23*/])->f_1 = { 401.6395f, -2054.6584f, 20.575f };
	(uParam0[25 /*23*/])->f_4 = 168.9083f;
	(*uParam0)[25 /*23*/] = 2;
	(uParam0[26 /*23*/])->f_1 = { 146.2919f, -2051.0713f, 17.3217f };
	(uParam0[26 /*23*/])->f_4 = 265.1393f;
	(*uParam0)[26 /*23*/] = 1;
	(uParam0[26 /*23*/])->f_6 = { 339.577f, -1779.0023f, 28.1454f };
	(uParam0[26 /*23*/])->f_5 = 0;
	(uParam0[26 /*23*/])->f_13 = { 149.063f, -2005.992f, -18.327f };
	(uParam0[26 /*23*/])->f_16 = { 144.98f, -2095.9f, 18.327f };
	(uParam0[26 /*23*/])->f_19 = 8.5f;
	(uParam0[27 /*23*/])->f_1 = { 363.1678f, -1749.9573f, 28.2073f };
	(uParam0[27 /*23*/])->f_4 = 229.6858f;
	(*uParam0)[27 /*23*/] = 1;
	(uParam0[27 /*23*/])->f_6 = { 150.5184f, -2010.4971f, 17.7098f };
	(uParam0[27 /*23*/])->f_5 = 1;
	(uParam0[27 /*23*/])->f_13 = { 428.271f, -1674.163f, -29.211f };
	(uParam0[27 /*23*/])->f_16 = { 299.18f, -1826.923f, 29.211f };
	(uParam0[27 /*23*/])->f_19 = 9f;
	(uParam0[28 /*23*/])->f_1 = { 171.3444f, -1776.831f, 28.0622f };
	(uParam0[28 /*23*/])->f_4 = 321.1031f;
	(*uParam0)[28 /*23*/] = 1;
	(uParam0[28 /*23*/])->f_6 = { -92.782f, -1554.6067f, 32.2626f };
	(uParam0[28 /*23*/])->f_5 = 1;
	(uParam0[28 /*23*/])->f_13 = { 94.446f, -1712.766f, -29.071f };
	(uParam0[28 /*23*/])->f_16 = { 248.549f, -1840.251f, 29.211f };
	(uParam0[28 /*23*/])->f_19 = 8f;
	(uParam0[29 /*23*/])->f_1 = { 421.2757f, -1277.6182f, 29.2671f };
	(uParam0[29 /*23*/])->f_4 = 359.101f;
	(uParam0[29 /*23*/])->f_6 = { 455.9831f, -1267.6547f, 29.0609f };
	(uParam0[29 /*23*/])->f_9 = 97.7539f;
	(*uParam0)[29 /*23*/] = 0;
	(uParam0[30 /*23*/])->f_1 = { 211.0559f, -1371.6879f, 29.5776f };
	(uParam0[30 /*23*/])->f_4 = 52.932f;
	(uParam0[30 /*23*/])->f_6 = { 209.6618f, -1406.5208f, 28.2921f };
	(uParam0[30 /*23*/])->f_9 = 263.4376f;
	(*uParam0)[30 /*23*/] = 0;
	(uParam0[31 /*23*/])->f_1 = { -219.3074f, -1491.8456f, 30.2593f };
	(uParam0[31 /*23*/])->f_4 = 322.6262f;
	(*uParam0)[31 /*23*/] = 0;
	(uParam0[31 /*23*/])->f_6 = { -177.2324f, -1506.01f, 31.6696f };
	(uParam0[32 /*23*/])->f_1 = { 538.7713f, -1524.8258f, 28.168f };
	(uParam0[32 /*23*/])->f_4 = 50.4239f;
	(*uParam0)[32 /*23*/] = 1;
	(uParam0[32 /*23*/])->f_6 = { 535.2374f, -1093.3301f, 27.4652f };
	(uParam0[32 /*23*/])->f_5 = 0;
	(uParam0[32 /*23*/])->f_13 = { 557.229f, -1501.367f, -29.273f };
	(uParam0[32 /*23*/])->f_16 = { 518.983f, -1547.597f, 29.273f };
	(uParam0[32 /*23*/])->f_19 = 8.2f;
	(uParam0[33 /*23*/])->f_1 = { 497.2474f, -1199.3268f, 28.3046f };
	(uParam0[33 /*23*/])->f_4 = 212.2787f;
	(*uParam0)[33 /*23*/] = 1;
	(uParam0[33 /*23*/])->f_6 = { 516.6573f, -926.7039f, 14.6979f };
	(uParam0[33 /*23*/])->f_5 = 0;
	(uParam0[33 /*23*/])->f_13 = { 512.849f, -1198.747f, -29.311f };
	(uParam0[33 /*23*/])->f_16 = { 483.086f, -1202.507f, 29.311f };
	(uParam0[33 /*23*/])->f_19 = 8f;
	(uParam0[34 /*23*/])->f_1 = { 576.4442f, -1705.2592f, 28.0895f };
	(uParam0[34 /*23*/])->f_4 = 43.2791f;
	(*uParam0)[34 /*23*/] = 4;
	(uParam0[34 /*23*/])->f_20 = joaat("tailgater");
	(uParam0[34 /*23*/])->f_21 = 0;
	(uParam0[34 /*23*/])->f_22 = 0;
	(uParam0[34 /*23*/])->f_10 = { 585.9758f, -1707.7788f, 28.2677f };
	(uParam0[35 /*23*/])->f_1 = { 233.0704f, -1138.8818f, 28.2302f };
	(uParam0[35 /*23*/])->f_4 = 311.5479f;
	(*uParam0)[35 /*23*/] = 4;
	(uParam0[35 /*23*/])->f_20 = joaat("emperor");
	(uParam0[35 /*23*/])->f_21 = 0;
	(uParam0[35 /*23*/])->f_22 = 1;
	(uParam0[36 /*23*/])->f_1 = { -100.5493f, -1724.9733f, 28.3857f };
	(uParam0[36 /*23*/])->f_4 = 81.5938f;
	(*uParam0)[36 /*23*/] = 4;
	(uParam0[36 /*23*/])->f_20 = joaat("intruder");
	(uParam0[36 /*23*/])->f_21 = 1;
	(uParam0[36 /*23*/])->f_22 = 2;
	(uParam0[36 /*23*/])->f_10 = { -92.7179f, -1721.0925f, 28.3288f };
	(uParam0[37 /*23*/])->f_1 = { -114.5507f, -1318.9116f, 28.1481f };
	(uParam0[37 /*23*/])->f_4 = 157.6585f;
	(*uParam0)[37 /*23*/] = 4;
	(uParam0[37 /*23*/])->f_20 = joaat("asterope");
	(uParam0[37 /*23*/])->f_21 = 0;
	(uParam0[37 /*23*/])->f_22 = 3;
	(uParam0[37 /*23*/])->f_10 = { -111.4177f, -1293.5677f, 28.2889f };
	(uParam0[38 /*23*/])->f_1 = { 303.2563f, -1699.0979f, 28.1861f };
	(uParam0[38 /*23*/])->f_4 = 213.8354f;
	(*uParam0)[38 /*23*/] = 4;
	(uParam0[38 /*23*/])->f_20 = joaat("emperor2");
	(uParam0[38 /*23*/])->f_21 = 0;
	(uParam0[38 /*23*/])->f_22 = 4;
	(uParam0[38 /*23*/])->f_10 = { 284.1822f, -1679.6572f, 28.3083f };
	(uParam0[39 /*23*/])->f_1 = { 784.1456f, -2046.7025f, 28.1368f };
	(uParam0[39 /*23*/])->f_4 = 12.6961f;
	(*uParam0)[39 /*23*/] = 4;
	(uParam0[39 /*23*/])->f_20 = joaat("blista");
	(uParam0[39 /*23*/])->f_21 = 1;
	(uParam0[39 /*23*/])->f_22 = 5;
	(uParam0[39 /*23*/])->f_10 = { 784.365f, -2070.9988f, 28.3414f };
	(uParam0[40 /*23*/])->f_1 = { 29.4785f, -980.7521f, 28.4051f };
	(uParam0[40 /*23*/])->f_4 = 221.9553f;
	(*uParam0)[40 /*23*/] = 4;
	(uParam0[40 /*23*/])->f_20 = joaat("emperor");
	(uParam0[40 /*23*/])->f_21 = 0;
	(uParam0[40 /*23*/])->f_22 = 6;
	(uParam0[40 /*23*/])->f_10 = { 10.3525f, -970.0844f, 28.4022f };
	(uParam0[41 /*23*/])->f_1 = { 101.5021f, -1529.5457f, 28.2147f };
	(uParam0[41 /*23*/])->f_4 = 31.1362f;
	(*uParam0)[41 /*23*/] = 4;
	(uParam0[41 /*23*/])->f_20 = joaat("premier");
	(uParam0[41 /*23*/])->f_21 = 1;
	(uParam0[41 /*23*/])->f_22 = 7;
	(uParam0[41 /*23*/])->f_10 = { 117.6439f, -1547.8854f, 28.2914f };
	(uParam0[42 /*23*/])->f_1 = { 360.6348f, -867.98f, 28.1345f };
	(uParam0[42 /*23*/])->f_4 = 249.799f;
	(*uParam0)[42 /*23*/] = 4;
	(uParam0[42 /*23*/])->f_20 = joaat("buffalo");
	(uParam0[42 /*23*/])->f_21 = 0;
	(uParam0[42 /*23*/])->f_22 = 8;
	(uParam0[42 /*23*/])->f_10 = { 324.7404f, -864.9786f, 28.2923f };
	(uParam0[43 /*23*/])->f_1 = { 261.1898f, -2035.0508f, 17.2895f };
	(uParam0[43 /*23*/])->f_4 = 339.6013f;
	(*uParam0)[43 /*23*/] = 4;
	(uParam0[43 /*23*/])->f_20 = joaat("premier");
	(uParam0[43 /*23*/])->f_21 = 1;
	(uParam0[43 /*23*/])->f_22 = 9;
	(uParam0[43 /*23*/])->f_10 = { 279.2888f, -2017.8461f, 18.4895f };
	(uParam0[44 /*23*/])->f_1 = { 418.623f, -1867.9032f, 25.6724f };
	(uParam0[44 /*23*/])->f_4 = 103.9975f;
	(*uParam0)[44 /*23*/] = 4;
	(uParam0[44 /*23*/])->f_20 = joaat("intruder");
	(uParam0[44 /*23*/])->f_21 = 0;
	(uParam0[44 /*23*/])->f_22 = 10;
	(uParam0[44 /*23*/])->f_10 = { 443.8106f, -1847.2933f, 26.8106f };
	(uParam0[45 /*23*/])->f_1 = { 507.4709f, -1668.5927f, 28.6539f };
	(uParam0[45 /*23*/])->f_4 = 78.9463f;
	(*uParam0)[45 /*23*/] = 4;
	(uParam0[45 /*23*/])->f_20 = joaat("tailgater");
	(uParam0[45 /*23*/])->f_21 = 1;
	(uParam0[45 /*23*/])->f_22 = 11;
	(uParam0[45 /*23*/])->f_10 = { 525.0562f, -1678.7812f, 28.4452f };
	(uParam0[46 /*23*/])->f_1 = { -203.7249f, -667.237f, 32.6054f };
	(uParam0[46 /*23*/])->f_4 = 34.4328f;
	(*uParam0)[46 /*23*/] = 4;
	(uParam0[46 /*23*/])->f_20 = joaat("asterope");
	(uParam0[46 /*23*/])->f_21 = 0;
	(uParam0[46 /*23*/])->f_22 = 12;
	(uParam0[46 /*23*/])->f_10 = { -179.7505f, -678.1224f, 33.1625f };
	(uParam0[47 /*23*/])->f_1 = { -318.031f, -865.0022f, 30.482f };
	(uParam0[47 /*23*/])->f_4 = 238.9396f;
	(*uParam0)[47 /*23*/] = 4;
	(uParam0[47 /*23*/])->f_20 = joaat("emperor2");
	(uParam0[47 /*23*/])->f_21 = 0;
	(uParam0[47 /*23*/])->f_22 = 13;
	(uParam0[47 /*23*/])->f_10 = { -338.2523f, -859.7131f, 30.5587f };
	(uParam0[48 /*23*/])->f_1 = { 401.2838f, -1480.8701f, 28.3058f };
	(uParam0[48 /*23*/])->f_4 = 281.6565f;
	(*uParam0)[48 /*23*/] = 4;
	(uParam0[48 /*23*/])->f_20 = joaat("blista");
	(uParam0[48 /*23*/])->f_21 = 2;
	(uParam0[48 /*23*/])->f_22 = 14;
	(uParam0[48 /*23*/])->f_10 = { 369.6188f, -1495.7296f, 28.2385f };
	(uParam0[49 /*23*/])->f_1 = { 2912.9065f, 4410.6245f, 47.9319f };
	(uParam0[49 /*23*/])->f_4 = 51.9751f;
	(*uParam0)[49 /*23*/] = 4;
	(uParam0[49 /*23*/])->f_20 = joaat("emperor2");
	(uParam0[49 /*23*/])->f_21 = 0;
	(uParam0[49 /*23*/])->f_22 = 15;
	(uParam0[49 /*23*/])->f_10 = { 2929.2373f, 4389.6006f, 49.1801f };
	(uParam0[50 /*23*/])->f_1 = { 1684.6714f, 4789.85f, 40.9384f };
	(uParam0[50 /*23*/])->f_4 = 337.6293f;
	(*uParam0)[50 /*23*/] = 4;
	(uParam0[50 /*23*/])->f_20 = joaat("tailgater");
	(uParam0[50 /*23*/])->f_21 = 1;
	(uParam0[50 /*23*/])->f_22 = 16;
	(uParam0[50 /*23*/])->f_10 = { 1677.4445f, 4772.6963f, 40.9936f };
	(uParam0[51 /*23*/])->f_1 = { 217.386f, -2545.0613f, 5.1932f };
	(uParam0[51 /*23*/])->f_4 = 95.5124f;
	(*uParam0)[51 /*23*/] = 1;
	(uParam0[51 /*23*/])->f_6 = { 150.731f, -2066.6626f, 17.2342f };
	(uParam0[51 /*23*/])->f_5 = 0;
	(uParam0[51 /*23*/])->f_13 = { 217.88295f, -2593.5479f, 4.174078f };
	(uParam0[51 /*23*/])->f_16 = { 217.1816f, -2499.7786f, 12.43667f };
	(uParam0[51 /*23*/])->f_19 = 8f;
	(uParam0[52 /*23*/])->f_1 = { -692.027f, -847.6826f, 22.6477f };
	(uParam0[52 /*23*/])->f_4 = 245.055f;
	(*uParam0)[52 /*23*/] = 4;
	(uParam0[52 /*23*/])->f_20 = joaat("tailgater");
	(uParam0[52 /*23*/])->f_21 = 0;
	(uParam0[52 /*23*/])->f_22 = 15;
	(uParam0[52 /*23*/])->f_10 = { -723.7541f, -844.7679f, 21.9551f };
}

int func_682(int* iParam0, bool bParam1, int iParam2)//Position - 0x42A2B
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("towtruck") || ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("towtruck2"))
				{
					if (bParam1)
					{
						if ((ENTITY::DOES_ENTITY_EXIST(iParam2) && !ENTITY::IS_ENTITY_DEAD(iParam2, false)) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
						{
							if (PED::IS_PED_IN_VEHICLE(iParam2, iVar0, false) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false))
							{
								if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
								{
									if (ENTITY::IS_ENTITY_OCCLUDED(*iParam0))
									{
										VEHICLE::DELETE_VEHICLE(iParam0);
									}
									else
									{
										ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
									}
								}
								*iParam0 = iVar0;
								return 1;
							}
						}
					}
					else
					{
						if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
						{
							if (ENTITY::IS_ENTITY_OCCLUDED(*iParam0))
							{
								VEHICLE::DELETE_VEHICLE(iParam0);
							}
							else
							{
								ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
							}
						}
						*iParam0 = iVar0;
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_683()//Position - 0x42D57
{
	int iVar0;
	if (!bLocal_1001)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if ((!ENTITY::IS_ENTITY_DEAD(iLocal_556, false) && ENTITY::DOES_ENTITY_EXIST(iLocal_674)) && !ENTITY::IS_ENTITY_DEAD(iLocal_674, false))
				{
					if (PED::IS_PED_IN_GROUP(iLocal_556))
					{
						PED::REMOVE_PED_FROM_GROUP(iLocal_556);
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_556, false))
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
					}
					TASK::TASK_ENTER_VEHICLE(0, iLocal_674, -1, 0, 1f, 1, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_556, iVar0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					bLocal_1001 = true;
				}
			}
		}
	}
	if (bLocal_1001)
	{
		if (!PED::IS_PED_INJURED(iLocal_556) && !ENTITY::IS_ENTITY_DEAD(iLocal_674, false))
		{
			if (!PED::IS_PED_IN_VEHICLE(iLocal_556, iLocal_674, false))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_556, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_556, joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1)
				{
					TASK::TASK_ENTER_VEHICLE(iLocal_556, iLocal_674, 20000, 0, 1f, 1, 0);
				}
			}
		}
	}
}

void func_684(var uParam0, int iParam1, float fParam2)//Position - 0x4335E
{
	int iVar0;
	if (*uParam0 != 0)
	{
		*fParam2 = OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(*uParam0);
		iVar0 = OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(*uParam0);
		if ((iVar0 == 1 || iVar0 == 4) || iVar0 == 2)
		{
			*iParam1 = 1;
		}
		else
		{
			*iParam1 = 0;
		}
	}
}

void func_685(var uParam0, int iParam1, struct<3> Param2, int iParam3, bool bParam4)//Position - 0x433A6
{
	var uVar0;
	*uParam0 = iParam1;
	if (*uParam0 != 0)
	{
		if (!OBJECT::DOOR_SYSTEM_FIND_EXISTING_DOOR(Param2, iParam3, &uVar0))
		{
			if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(*uParam0))
			{
				OBJECT::ADD_DOOR_TO_SYSTEM(*uParam0, iParam3, Param2, false, true, false);
			}
		}
		else
		{
			*uParam0 = uVar0;
			uParam0->f_7 = 1;
		}
		if (bParam4)
		{
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(*uParam0, 0f, false, true);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(*uParam0, 6, true, false);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(*uParam0, 4, true, false);
		}
	}
}

void func_686()//Position - 0x44723
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	if (iLocal_982 < 3)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_556, false))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(iLocal_556, true) };
		}
		fVar2 = SYSTEM::VDIST(Var0, Var1);
		if (fVar2 < 3f)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_556, -1, 0, 4);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_556, 0);
			}
		}
	}
}

void func_687()//Position - 0x46B3F
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_556) && !ENTITY::IS_ENTITY_DEAD(iLocal_556, false))
	{
		if (PED::IS_PED_IN_GROUP(iLocal_556))
		{
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
		}
	}
}

void func_688()//Position - 0x46B71
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_556) && !ENTITY::IS_ENTITY_DEAD(iLocal_556, false))
	{
		PED::SET_PED_RESET_FLAG(iLocal_556, 328, true);
	}
}

void func_689()//Position - 0x46B9C
{
	struct<3> Var0;
	struct<3> Var1;
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_556))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_556, false))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(iLocal_556, true) };
	}
	if (SYSTEM::VDIST2(Var0, Var1) < 25f)
	{
		PED::SET_FORCE_FOOTSTEP_UPDATE(iLocal_556, true);
	}
	else
	{
		PED::SET_FORCE_FOOTSTEP_UPDATE(iLocal_556, false);
	}
}

void func_690(bool bParam0)//Position - 0x47E00
{
	if (bLocal_511)
	{
		bLocal_511 = false;
		if (HUD::DOES_BLIP_EXIST(iLocal_176))
		{
			HUD::REMOVE_BLIP(&iLocal_176);
		}
		if (!HUD::DOES_BLIP_EXIST(iLocal_557))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_674) && !ENTITY::IS_ENTITY_DEAD(iLocal_674, false))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_674, false))
				{
					iLocal_557 = HUD::ADD_BLIP_FOR_ENTITY(iLocal_674);
					if (iLocal_681 == 1)
					{
						HUD::SET_BLIP_COLOUR(iLocal_557, 3);
						HUD::SET_BLIP_ROUTE(iLocal_557, true);
					}
				}
			}
		}
		if (bParam0)
		{
			if (!HUD::DOES_BLIP_EXIST(Local_565[0 /*20*/].f_8))
			{
				if (!__LIB_0__.func_86(Local_460[0 /*3*/]))
				{
					Local_565[0 /*20*/].f_8 = HUD::ADD_BLIP_FOR_COORD(Local_460[0 /*3*/]);
					if (bLocal_217)
					{
						HUD::SET_BLIP_COLOUR(Local_565[0 /*20*/].f_8, 5);
						HUD::SET_BLIP_ROUTE(Local_565[0 /*20*/].f_8, true);
						HUD::SET_BLIP_ROUTE_COLOUR(Local_565[0 /*20*/].f_8, 5);
					}
					else
					{
						HUD::SET_BLIP_COLOUR(Local_565[0 /*20*/].f_8, 3);
						HUD::SET_BLIP_ROUTE(Local_565[0 /*20*/].f_8, true);
						HUD::SET_BLIP_ROUTE_COLOUR(Local_565[0 /*20*/].f_8, 3);
					}
				}
			}
		}
	}
}

int func_691()//Position - 0x27826
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("tonya3")) == 1 || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("tonya4")) == 1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_605[0 /*20*/], false) && !ENTITY::IS_ENTITY_DEAD(Local_605[0 /*20*/].f_6, false))
		{
			if (PED::IS_PED_IN_VEHICLE(Local_605[0 /*20*/], Local_605[0 /*20*/].f_6, false))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_692()//Position - 0x278F8
{
	if (((VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_714, 2, false) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_714, 3, false)) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_714, 1, false)) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_714, 0, false))
	{
		return 1;
	}
	if (((VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_714, 4, false) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_714, 5, false)) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_714, 1, false)) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_714, 0, false))
	{
		return 1;
	}
	if (((VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_714, 4, false) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_714, 5, false)) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_714, 2, false)) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_714, 3, false))
	{
		return 1;
	}
	return 0;
}

int func_693(var uParam0)//Position - 0x28424
{
	switch (iLocal_493)
	{
		case 1:
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0 && !PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_254 = 0;
				return 1;
			}
			break;
		case 2:
			break;
		case 4:
			break;
		case 6:
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_DEAD(*uParam0, false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *uParam0, false))
				{
					iLocal_254 = 0;
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_694(var uParam0, var uParam1)//Position - 0x28E06
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
	{
		if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID()))
		{
			PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID());
		}
		iLocal_493 = 1;
		return 1;
	}
	if ((ENTITY::DOES_ENTITY_EXIST((uParam0[0 /*20*/])->f_6) && !ENTITY::IS_ENTITY_DEAD((uParam0[0 /*20*/])->f_6, false)) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!bLocal_218)
		{
			if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY((uParam0[0 /*20*/])->f_6, PLAYER::PLAYER_PED_ID(), true) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT((uParam0[0 /*20*/])->f_6)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED((uParam0[0 /*20*/])->f_6))
			{
				iLocal_493 = 2;
				return 1;
			}
		}
	}
	if ((ENTITY::DOES_ENTITY_EXIST((*uParam0)[0 /*20*/]) && !ENTITY::IS_ENTITY_DEAD((*uParam0)[0 /*20*/], false)) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(PLAYER::PLAYER_PED_ID(), (*uParam0)[0 /*20*/], true))
		{
			iLocal_493 = 4;
			return 1;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_DEAD(*uParam1, false))
	{
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *uParam1, false))
		{
			iLocal_493 = 6;
			return 1;
		}
	}
	return 0;
}

void func_695()//Position - 0x2AF97
{
	Global_113386.f_19973.f_3++;
	Global_113386.f_19973.f_2 = iLocal_211;
	switch (iLocal_211)
	{
		case 2:
			Global_113386.f_19973.f_4++;
			break;
		case 3:
			Global_113386.f_19973.f_7++;
			break;
		case 0:
			Global_113386.f_19973.f_6++;
			break;
		case 1:
			Global_113386.f_19973.f_5++;
			break;
		case 4:
			Global_113386.f_19973.f_8++;
			break;
	}
}

void func_696()//Position - 0x2B449
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_DEAD(iLocal_714, false))
	{
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_714, false))
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_599))
			{
				HUD::REMOVE_BLIP(&iLocal_599);
			}
			if (!HUD::DOES_BLIP_EXIST(iLocal_597))
			{
				iLocal_597 = HUD::ADD_BLIP_FOR_ENTITY(iLocal_714);
				HUD::SET_BLIP_COLOUR(iLocal_597, 3);
			}
		}
		else
		{
			if (!HUD::DOES_BLIP_EXIST(iLocal_599))
			{
				__LIB_30__.func_415(iLocal_599);
				iLocal_599 = HUD::ADD_BLIP_FOR_COORD(406.3804f, -1635.8673f, 28.2928f);
				HUD::SET_BLIP_ROUTE(iLocal_599, true);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_597))
			{
				HUD::REMOVE_BLIP(&iLocal_597);
			}
		}
	}
}

void func_697()//Position - 0x2C0ED
{
	struct<3> Var0;
	int iVar1;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	}
	if (iLocal_211 == 0)
	{
		if (SYSTEM::VDIST2(Var0, Local_434[iLocal_491 /*23*/].f_1) > 22500f)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_605[0 /*20*/]) && !ENTITY::IS_ENTITY_DEAD(Local_605[0 /*20*/], false))
			{
				if (ENTITY::IS_ENTITY_OCCLUDED(Local_605[0 /*20*/]))
				{
					PED::DELETE_PED(&(Local_605[0 /*20*/]));
				}
				else
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_605[0 /*20*/]));
				}
			}
			STREAMING::REMOVE_ANIM_DICT("oddjobs@towing");
			STREAMING::REMOVE_ANIM_DICT("oddjobs@towingangryidle_a");
			STREAMING::REMOVE_ANIM_DICT("oddjobs@towingpleadingidle_b");
			STREAMING::REMOVE_ANIM_DICT("oddjobs@towingpleadingidle_a");
			STREAMING::REMOVE_ANIM_DICT("RANDOM@BICYCLE_THIEF@IDLE_A");
			STREAMING::REMOVE_ANIM_DICT("move_m@JOG@");
		}
	}
	else if (iLocal_211 == 1)
	{
		if (SYSTEM::VDIST2(Var0, Local_434[iLocal_491 /*23*/].f_1) > 22500f)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_595) && !ENTITY::IS_ENTITY_DEAD(iLocal_595, false))
			{
				if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_595))
				{
					PED::DELETE_PED(&iLocal_595);
				}
				else
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_595);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_605[0 /*20*/].f_7) && !ENTITY::IS_ENTITY_DEAD(Local_605[0 /*20*/].f_7, false))
			{
				if (ENTITY::IS_ENTITY_OCCLUDED(Local_605[0 /*20*/].f_7))
				{
					VEHICLE::DELETE_MISSION_TRAIN(&(Local_605[0 /*20*/].f_7));
				}
				else
				{
					VEHICLE::SET_VEHICLE_STAYS_FROZEN_WHEN_CLEANED_UP(Local_605[0 /*20*/].f_7, true);
					VEHICLE::SET_MISSION_TRAIN_AS_NO_LONGER_NEEDED(&(Local_605[0 /*20*/].f_7), false);
				}
			}
		}
	}
	else if (iLocal_211 == 4)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_605[0 /*20*/].f_2[iVar1]) && !ENTITY::IS_ENTITY_DEAD(Local_605[0 /*20*/].f_2[iVar1], false))
			{
				if (ENTITY::IS_ENTITY_OCCLUDED(Local_605[0 /*20*/].f_2[iVar1]))
				{
					PED::DELETE_PED(&(Local_605[0 /*20*/].f_2[iVar1]));
				}
				else
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_605[0 /*20*/].f_2[iVar1]));
				}
			}
			iVar1++;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_716))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_716);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_715))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_715);
		}
		STREAMING::REMOVE_ANIM_DICT("REACTION@MALE_STAND@BIG_VARIATIONS@A");
		STREAMING::REMOVE_ANIM_DICT("move_m@JOG@");
	}
}

int func_698()//Position - 0x2C585
{
	if (bLocal_545)
	{
		if (bLocal_489)
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

void func_699(int iParam0, var uParam1)//Position - 0x2CAA8
{
	if (__LIB_0__.func_86(Local_86[0 /*3*/]))
	{
	}
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -230.85141f, -1181.0723f, 21.06031f };
			uParam1->f_3 = { -230.46584f, -1163.1604f, 28.996408f };
			uParam1->f_6 = 22.25f;
			uParam1->f_17 = { Local_86[0 /*3*/] };
			break;
		case 1:
			*uParam1 = { -204.06029f, -1390.0239f, 30.253416f };
			uParam1->f_3 = { -207.56654f, -1382.5823f, 33.469368f };
			uParam1->f_6 = 17f;
			uParam1->f_17 = { Local_86[1 /*3*/] };
			break;
		case 2:
			*uParam1 = { -204.06029f, -1390.0239f, 30.253416f };
			uParam1->f_3 = { -207.56654f, -1382.5823f, 33.469368f };
			uParam1->f_6 = 17f;
			uParam1->f_17 = { Local_86[2 /*3*/] };
			break;
		case 3:
			*uParam1 = { 538.747f, -177.535f, 74.484f };
			uParam1->f_3 = { 528.747f, -177.535f, 34.484f };
			uParam1->f_6 = 28f;
			uParam1->f_17 = { Local_86[3 /*3*/] };
			break;
		case 4:
			*uParam1 = { 1158.944f, -776.686f, 77.608f };
			uParam1->f_3 = { 1118.944f, -776.686f, 37.608f };
			uParam1->f_6 = 10f;
			uParam1->f_17 = { Local_86[4 /*3*/] };
			break;
		case 5:
			*uParam1 = { 798.455f, -821.201f, 46.186f };
			uParam1->f_3 = { 813.455f, -821.201f, 6.186f };
			uParam1->f_6 = 20f;
			uParam1->f_17 = { Local_86[5 /*3*/] };
			break;
		case 6:
			*uParam1 = { 2504.934f, 4085.125f, 58.636f };
			uParam1->f_3 = { 2500.285f, 4075.156f, 18.636f };
			uParam1->f_6 = 12f;
			uParam1->f_17 = { Local_86[6 /*3*/] };
			break;
		case 7:
			*uParam1 = { 256.56226f, 2600.4578f, 43.3306f };
			uParam1->f_3 = { 268.67007f, 2602.716f, 46.74961f };
			uParam1->f_6 = 5f;
			uParam1->f_17 = { Local_86[7 /*3*/] };
			break;
		case 8:
			*uParam1 = { 398.74713f, -1650.8059f, 27.293236f };
			uParam1->f_3 = { 434.1311f, -1610.0115f, 33.342937f };
			uParam1->f_6 = 40.5f;
			uParam1->f_14 = { 400.28537f, -1632.597f, 28.29278f };
			uParam1->f_17 = { Local_87[0 /*3*/] };
			uParam1->f_7 = { 396.83475f, -1639.0447f, 27.292776f };
			uParam1->f_10 = { 408.0073f, -1625.6083f, 33.292774f };
			uParam1->f_13 = 10f;
			break;
	}
}

void func_700()//Position - 0x2CD88
{
	struct<3> Var0;
	struct<3> Var1;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_605[0 /*20*/].f_6, false))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(Local_605[0 /*20*/].f_6, true) };
	}
	if (SYSTEM::VDIST2(Var0, Var1) < 100f)
	{
		if (!iLocal_593)
		{
			if (HUD::DOES_BLIP_EXIST(Local_605[0 /*20*/].f_8))
			{
				HUD::REMOVE_BLIP(&(Local_605[0 /*20*/].f_8));
				iLocal_593 = 1;
			}
		}
		if (!HUD::DOES_BLIP_EXIST(Local_605[0 /*20*/].f_8))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_605[0 /*20*/].f_6))
			{
				Local_605[0 /*20*/].f_8 = HUD::ADD_BLIP_FOR_ENTITY(Local_605[0 /*20*/].f_6);
				HUD::SET_BLIP_COLOUR(Local_605[0 /*20*/].f_8, 3);
				HUD::SET_BLIP_ROUTE(Local_605[0 /*20*/].f_8, true);
			}
		}
	}
}

void func_701(int iParam0)//Position - 0x2D635
{
	int iVar0;
	bLocal_544 = true;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (iVar0 != iParam0)
		{
			if (HUD::DOES_BLIP_EXIST(Local_605[iVar0 /*20*/].f_8))
			{
				HUD::REMOVE_BLIP(&(Local_605[iVar0 /*20*/].f_8));
			}
		}
		iVar0++;
	}
}

int func_702()//Position - 0x2D677
{
	float fVar0;
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_714, false) && !ENTITY::IS_ENTITY_DEAD(Local_605[0 /*20*/].f_6, false))
	{
		if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_714, Local_605[0 /*20*/].f_6))
		{
			fVar0 = ENTITY::GET_ENTITY_SPEED(iLocal_714);
			if (fVar0 > 1f)
			{
				if (!iLocal_590)
				{
					__LIB_0__.func_151("TOWT_HELP_SL", -1);
					iLocal_590 = 1;
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_703()//Position - 0x2E7C3
{
	if (iLocal_211 == 2)
	{
		STREAMING::REQUEST_MODEL(joaat("primo"));
	}
	else if (iLocal_211 == 0)
	{
		STREAMING::REQUEST_MODEL(joaat("landstalker"));
		STREAMING::REQUEST_MODEL(joaat("A_M_M_GenFat_01"));
	}
	else if (iLocal_211 == 1)
	{
		STREAMING::REQUEST_MODEL(joaat("schwarzer"));
		STREAMING::REQUEST_MODEL(joaat("A_M_M_BevHills_02"));
	}
	else if (iLocal_211 == 3)
	{
		STREAMING::REQUEST_MODEL(joaat("tailgater"));
		STREAMING::REQUEST_MODEL(joaat("A_M_M_Tourist_01"));
	}
	else if (iLocal_211 == 4)
	{
		STREAMING::REQUEST_MODEL(joaat("intruder"));
		STREAMING::REQUEST_MODEL(joaat("S_M_M_Paramedic_01"));
		STREAMING::REQUEST_MODEL(joaat("A_M_Y_GenStreet_02"));
		STREAMING::REQUEST_MODEL(joaat("A_M_M_BevHills_02"));
	}
	if (iLocal_211 == 2)
	{
		while (!STREAMING::HAS_MODEL_LOADED(joaat("primo")))
		{
			SYSTEM::WAIT(0);
		}
	}
	else if (iLocal_211 == 0)
	{
		while (!STREAMING::HAS_MODEL_LOADED(joaat("landstalker")) || !STREAMING::HAS_MODEL_LOADED(joaat("A_M_M_GenFat_01")))
		{
			SYSTEM::WAIT(0);
		}
	}
	else if (iLocal_211 == 1)
	{
		while (!STREAMING::HAS_MODEL_LOADED(joaat("schwarzer")) || !STREAMING::HAS_MODEL_LOADED(joaat("A_M_M_BevHills_02")))
		{
			SYSTEM::WAIT(0);
		}
	}
	else if (iLocal_211 == 3)
	{
		while (!STREAMING::HAS_MODEL_LOADED(joaat("tailgater")) || !STREAMING::HAS_MODEL_LOADED(joaat("A_M_M_Tourist_01")))
		{
			SYSTEM::WAIT(0);
		}
	}
	else if (iLocal_211 == 4)
	{
		while (((!STREAMING::HAS_MODEL_LOADED(joaat("intruder")) || !STREAMING::HAS_MODEL_LOADED(joaat("S_M_M_Paramedic_01"))) || !STREAMING::HAS_MODEL_LOADED(joaat("A_M_Y_GenStreet_02"))) || !STREAMING::HAS_MODEL_LOADED(joaat("A_M_M_BevHills_02")))
		{
			SYSTEM::WAIT(0);
		}
	}
}

int func_704(bool bParam0)//Position - 0x3CAF2
{
	if (bLocal_256 || iLocal_255)
	{
		return 0;
	}
	if (bParam0)
	{
		if (bLocal_257)
		{
			return 0;
		}
	}
	return 1;
}

int func_705()//Position - 0x3DD50
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_605[0 /*20*/], false))
	{
		if (bLocal_218)
		{
			switch (iLocal_641)
			{
				case 0:
					if (TASK::GET_SEQUENCE_PROGRESS(Local_605[0 /*20*/]) == 1)
					{
						iLocal_641 = 1;
					}
					break;
				case 1:
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_605[0 /*20*/], "oddjobs@towingpleadingidle_b", "idle_d", 3))
					{
						iLocal_641 = 2;
					}
					break;
				case 2:
					return 1;
					break;
				}
			}
	}
	return 0;
}

void func_706()//Position - 0x3E5D4
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_605[0 /*20*/].f_7, false) && !ENTITY::IS_ENTITY_DEAD(Local_605[0 /*20*/].f_6, false))
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_605[0 /*20*/].f_7, Local_605[0 /*20*/].f_6))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_714, false) && !ENTITY::IS_ENTITY_DEAD(Local_605[0 /*20*/].f_6, false))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_714, Local_605[0 /*20*/].f_6))
				{
					VEHICLE::DETACH_VEHICLE_FROM_TOW_TRUCK(iLocal_714, Local_605[0 /*20*/].f_6);
				}
			}
			VEHICLE::EXPLODE_VEHICLE(Local_605[0 /*20*/].f_6, true, false);
		}
	}
}

void func_707(struct<165> Param0, char* sParam1, char* sParam2, bool bParam3)//Position - 0x3F02E
{
	if (bParam3)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	StringCopy(&cLocal_104, sParam1, 16);
	StringCopy(&cLocal_107, sParam2, 16);
	Local_92 = { Param0 };
}

int func_708(int iParam0, int iParam1, int iParam2)//Position - 0x3F1D9
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Local_110[iVar0 /*3*/] == iParam0 && !HUD::DOES_BLIP_EXIST(Local_110[iVar0 /*3*/].f_1))
		{
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (!HUD::DOES_BLIP_EXIST(Local_110[iVar0 /*3*/].f_1))
		{
			Local_110[iVar0 /*3*/] = iParam0;
			Local_110[iVar0 /*3*/].f_1 = iParam1;
			Local_110[iVar0 /*3*/].f_2 = iParam2;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_709(struct<7> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, int iParam15)//Position - 0x3F9F1
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam14) || !ENTITY::DOES_ENTITY_EXIST(iParam15))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam14, false) || ENTITY::IS_ENTITY_DEAD(iParam15, false))
	{
		return;
	}
	if (!__LIB_0__.func_86(Param0.f_14))
	{
		Var0 = { Param0.f_7 };
		Var1 = { Param0.f_10 };
		fVar2 = Param0.f_13;
	}
	else
	{
		Var0 = { Param0 };
		Var1 = { Param0.f_3 };
		fVar2 = Param0.f_6;
	}
	if (!iLocal_234)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam15, Var0, Var1, fVar2, false, true, 0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam14, false) && !ENTITY::IS_ENTITY_DEAD(iParam15, false))
			{
				if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iParam14, iParam15))
				{
					HUD::CLEAR_HELP(true);
					HUD::CLEAR_PRINTS();
					iLocal_488 = 12;
					iLocal_234 = 1;
				}
			}
		}
	}
}

void func_710()//Position - 0x3FC98
{
	if (iLocal_721 < 16)
	{
		switch (iLocal_665)
		{
			case 2:
				sLocal_495 = "TOW_FAIL_05";
				break;
			case 0:
				sLocal_495 = "TOW_FAIL_10";
				break;
			case 6:
				sLocal_495 = "DTRSHRD_FAIL_03";
				break;
			case 1:
				sLocal_495 = "TOW_FAIL_08";
				break;
			case 10:
				sLocal_495 = "TOW_FAIL_17";
				break;
			case 11:
				sLocal_495 = "TOW_FAIL_08";
				break;
			case 12:
				sLocal_495 = "TOW_FAIL_08a";
				break;
			case 13:
				sLocal_495 = "TOW_FAIL_16";
				break;
			case 4:
				sLocal_495 = "TOW_FAIL_12";
				break;
			case 5:
				sLocal_495 = "TOW_FAIL_01";
				break;
			case 3:
				sLocal_495 = "TOW_FAIL_03a";
				break;
			case 8:
				sLocal_495 = "TOW_FAIL_04";
				break;
			case 9:
				sLocal_495 = "TOW_FAIL_04a";
				break;
			case 14:
				sLocal_495 = "TOW_FAIL_06";
				break;
			case 15:
				sLocal_495 = "TOW_FAIL_07";
				break;
			case 16:
				sLocal_495 = "TOW_FAIL_09";
				break;
			case 17:
				sLocal_495 = "TOW_FAIL_09a";
				break;
			case 18:
				sLocal_495 = "TOW_FAIL_02";
				break;
			case 19:
				sLocal_495 = "TOW_FAIL_02b";
				break;
			case 20:
				sLocal_495 = "TOW_FAIL_02b";
				break;
			case 21:
				sLocal_495 = "TOW_FAIL_11";
				break;
			case 22:
				sLocal_495 = "TOW_FAIL_13";
				break;
			case 23:
				sLocal_495 = "TOW_FAIL_14";
				break;
		}
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			sLocal_495 = "TOW_FAIL_15";
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_495))
		{
			__LIB_0__.func_324(sLocal_495);
		}
		bLocal_520 = true;
	}
}

void func_711()//Position - 0x40633
{
	switch (iLocal_211)
	{
		case 2:
			if ((Global_113386.f_19973.f_4 % 2) == 0)
			{
				sLocal_499 = "TOWABDBITCHM";
				iLocal_639 = 2;
			}
			else
			{
				sLocal_499 = "TOWABDATTACKM";
				iLocal_639 = 2;
			}
			break;
		case 4:
			break;
		case 3:
			sLocal_499 = "TOWBREAKDOWN1";
			iLocal_639 = 3;
			break;
		case 0:
			sLocal_499 = "TOWHANDIBEGM";
			iLocal_639 = 5;
			break;
		case 1:
			sLocal_499 = "TOWTRAINM";
			iLocal_639 = 3;
			break;
	}
}

int func_712()//Position - 0x406BC
{
	return Local_434[iLocal_491 /*23*/].f_22;
}

void func_713()//Position - 0x4084F
{
	Local_86[0 /*3*/] = { -227.6f, -1172.1f, 21.8963f };
	Local_86[1 /*3*/] = { -205.6866f, -1384.3333f, 30.2585f };
	Local_86[2 /*3*/] = { -205.6866f, -1384.3333f, 30.2585f };
	Local_86[3 /*3*/] = { 532.4957f, -172.2088f, 53.6835f };
	Local_86[4 /*3*/] = { 1151.5066f, -773.4066f, 56.61f };
	Local_86[5 /*3*/] = { 808.4329f, -822.9456f, 25.1821f };
	Local_86[6 /*3*/] = { 2502.613f, 4080.141f, 37.6307f };
	Local_86[7 /*3*/] = { 263.4725f, 2601.8423f, 43.8197f };
	Local_87[0 /*3*/] = { 401.6046f, -1632.7806f, 28.2928f };
}

int func_714()//Position - 0x44F2E
{
	if (iLocal_1021 != 4)
	{
		if (bLocal_520)
		{
			sLocal_1024 = sLocal_495;
			return 1;
		}
	}
	return 0;
}

int func_715(int iParam0, int iParam1, bool bParam2)//Position - 0x394A3
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return BitTest(Global_100493.f_1393[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (__LIB_0__.func_3() == 0)
		{
			return BitTest(__LIB_0__.func_534(func_425(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113386.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_716(int iParam0)//Position - 0x465AE
{
	if (!__LIB_0__.func_114() && func_623(iParam0))
	{
		return 1;
	}
	return 0;
}

float func_717(bool bParam0)//Position - 0xF28
{
	if (bParam0)
	{
		return -1f;
	}
	else
	{
		return 1f;
	}
	return 1f;
}

void func_718(var uParam0, char* sParam1, char* sParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)//Position - 0x7391
{
	int iVar0;
	if (*uParam0 == 0)
	{
		*uParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE_INSTANCE("instructional_buttons");
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		uParam0->f_11[iVar0] = 0;
		uParam0->f_77[iVar0] = "";
		uParam0->f_44[iVar0] = 363;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		uParam0->f_2[iVar0] = "";
		iVar0++;
	}
	uParam0->f_2[0] = sParam1;
	uParam0->f_11[0] = sParam2;
	uParam0->f_44[0] = iParam6;
	uParam0->f_1 = 0;
	if (bParam3)
	{
		__LIB_0__.func_712(&(uParam0->f_1), 32);
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		__LIB_0__.func_712(&(uParam0->f_1), 1);
		if (bParam4)
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_TO_USE_SYSTEM_TIME(*uParam0, true);
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		uParam0->f_111 = iParam5;
	}
}

int func_719()//Position - 0x1179A
{
	if (CLOCK::GET_CLOCK_HOURS() >= 20 || CLOCK::GET_CLOCK_HOURS() < 6)
	{
		return 1;
	}
	return 0;
}

int func_720(int iParam0)//Position - 0x14F1B
{
	CAM::DO_SCREEN_FADE_IN(iParam0);
	while (!CAM::IS_SCREEN_FADED_IN())
	{
		SYSTEM::WAIT(0);
	}
	return 1;
}

int func_721()//Position - 0x18C86
{
	int iVar0;
	iVar0 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 3);
	switch (iVar0)
	{
		case 0:
			return joaat("bison");
			break;
		case 1:
			return joaat("dloader");
			break;
		case 2:
			return joaat("rebel");
			break;
		default:
			return joaat("bison");
			break;
	}
	return joaat("bison");
}

void func_722()//Position - 0x1A7
{
	VEHICLE::SET_RANDOM_TRAINS(true);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_723()//Position - 0x98E03
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 22)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_161[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_161[iVar0], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_161[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_161[iVar0]);
				}
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_161[iVar0], -1, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						PED::DELETE_PED(&iVar1);
					}
				}
			}
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_161[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_161[iVar0]));
			}
		}
		iLocal_106[iVar0] = 0;
		if (!bLocal_40 && !bLocal_53)
		{
			if (iLocal_105[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_105[iVar0], &cLocal_142);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 22)
	{
		if (!iLocal_154[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_154[iVar0]);
		}
		iVar0++;
	}
}

int func_724(int iParam0)//Position - 0x99F1F
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (bLocal_54)
	{
		iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (!ENTITY::IS_ENTITY_DEAD(iVar1, false))
		{
			iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
			if (iVar2 == joaat("phantom"))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iVar1))
				{
					if (VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(iVar1, &iVar0))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar0, iParam0))
							{
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_725(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x9CF87
{
	int iVar0[16];
	int iVar1;
	iVar1 = 0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		PED::GET_PED_NEARBY_PEDS(iParam0, &iVar0, -1);
		iVar1 = 0;
		while (iVar1 <= (iVar0 - 1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0[iVar1]))
			{
				if (!PED::IS_PED_INJURED(iVar0[iVar1]))
				{
					if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0[iVar1]) == iParam1)
					{
						if (iParam2 <= 0)
						{
							if (iParam3 == 1)
							{
								if (ENTITY::IS_ENTITY_ON_SCREEN(iVar0[iVar1]))
								{
									return iVar0[iVar1];
								}
							}
							else
							{
								return iVar0[iVar1];
							}
						}
						else if (iVar1 + iParam2) <= (iVar0 - 1)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iVar0[(iVar1 + iParam2)]))
							{
								if (!PED::IS_PED_INJURED(iVar0[(iVar1 + iParam2)]))
								{
									if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0[(iVar1 + iParam2)]) == iParam1)
									{
										if (iParam3 == 1)
										{
											if (ENTITY::IS_ENTITY_ON_SCREEN(iVar0[(iVar1 + iParam2)]))
											{
												return iVar0[(iVar1 + iParam2)];
											}
											return iVar0[(iVar1 + iParam2)];
										}
									}
								}
							}
						}
					}
				}
			}
			iVar1++;
		}
	}
	return 0;
}

void func_726(int iParam0, int iParam1, bool bParam2)//Position - 0x77F50
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
		{
			if (bParam2)
			{
				VEHICLE::DELETE_VEHICLE(&iParam0);
			}
			else
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iParam0);
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam1);
		}
	}
}

void func_727(int* iParam0, int iParam1, int iParam2)//Position - 0x78710
{
	if (iParam1 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (iParam2 == 1)
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false) || ENTITY::IS_ENTITY_DEAD(*iParam0, false))
				{
					VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(*iParam0);
					VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(*iParam0);
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(*iParam0, 0f);
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
				}
				if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
				{
					HUD::REMOVE_BLIP(&(iParam0->f_1));
				}
			}
			else if (iParam2 == 0)
			{
				if (!ENTITY::IS_ENTITY_DEAD(*iParam0, false))
				{
					VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(*iParam0);
					VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(*iParam0);
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(*iParam0, 0f);
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
				}
				if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
				{
					HUD::REMOVE_BLIP(&(iParam0->f_1));
				}
			}
		}
	}
	else if (iParam1 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
			{
				if (ENTITY::IS_ENTITY_DEAD(*iParam0, false) || !ENTITY::IS_ENTITY_DEAD(*iParam0, false))
				{
					VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(*iParam0);
					VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(*iParam0);
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(*iParam0, 0f);
					VEHICLE::DELETE_VEHICLE(iParam0);
				}
			}
		}
		if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
		{
			HUD::REMOVE_BLIP(&(iParam0->f_1));
		}
		iParam0->f_7 = 0;
		iParam0->f_16 = 0;
		iParam0->f_17 = 0;
		iParam0->f_18 = 0;
	}
}

int func_728(bool bParam0)//Position - 0x7B557
{
	if (!__LIB_0__.func_75())
	{
		if (bParam0)
		{
			return 1;
		}
		else if (!HUD::IS_MESSAGE_BEING_DISPLAYED() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			return 1;
		}
	}
	return 0;
}

float func_729(float fParam0, float fParam1, float fParam2)//Position - 0xB0A8
{
	if (fParam0 < fParam1)
	{
		return fParam1;
	}
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	return fParam0;
}

int func_730()//Position - 0xB720
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar1 = -1;
	TASK::TASK_PLAY_ANIM(0, "misschinese2_bank1", "reaction_forward_big_intro_a", 4f, -2f, 1400, 0, 0f, false, false, false);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
		iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(1100, 1800);
		iVar4 = (iVar4 + iVar3);
		if (iVar2 == iVar1)
		{
			iVar2++;
			if (iVar2 > 2)
			{
				iVar2 = 0;
			}
		}
		iVar1 = iVar2;
		switch (iVar2)
		{
			case 0:
				iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
				switch (iVar2)
				{
					case 0:
						TASK::TASK_PLAY_ANIM(0, "reaction@male_stand@big_intro@left", "reaction_left_big_intro_a", 4f, -2f, iVar3, 0, 0f, false, false, false);
						break;
					case 1:
						TASK::TASK_PLAY_ANIM(0, "reaction@male_stand@big_intro@left", "reaction_left_big_intro_b", 4f, -2f, iVar3, 0, 0f, false, false, false);
						break;
					case 2:
						TASK::TASK_PLAY_ANIM(0, "reaction@male_stand@big_intro@left", "reaction_left_big_intro_c", 4f, -2f, iVar3, 0, 0f, false, false, false);
						break;
				}
				break;
			case 1:
				iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
				switch (iVar2)
				{
					case 0:
						TASK::TASK_PLAY_ANIM(0, "reaction@male_stand@big_intro@right", "reaction_right_big_intro_a", 4f, -2f, iVar3, 0, 0f, false, false, false);
						break;
					case 1:
						TASK::TASK_PLAY_ANIM(0, "reaction@male_stand@big_intro@right", "reaction_right_big_intro_b", 4f, -2f, iVar3, 0, 0f, false, false, false);
						break;
					case 2:
						TASK::TASK_PLAY_ANIM(0, "reaction@male_stand@big_intro@right", "reaction_right_big_intro_c", 4f, -2f, iVar3, 0, 0f, false, false, false);
						break;
				}
				break;
			case 2:
				iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
				switch (iVar2)
				{
					case 0:
						TASK::TASK_PLAY_ANIM(0, "reaction@male_stand@big_intro@backward", "reaction_backward_big_intro_a", 4f, -2f, iVar3, 0, 0f, false, false, false);
						break;
					case 1:
						TASK::TASK_PLAY_ANIM(0, "reaction@male_stand@big_intro@backward", "reaction_backward_big_intro_b", 4f, -2f, iVar3, 0, 0f, false, false, false);
						break;
					case 2:
						TASK::TASK_PLAY_ANIM(0, "reaction@male_stand@big_intro@backward", "reaction_backward_big_intro_c", 4f, -2f, iVar3, 0, 0f, false, false, false);
						break;
				}
				break;
		}
		iVar0++;
	}
	return iVar4;
}

int func_731(int iParam0)//Position - 0xC203
{
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "misschinese2_bank1", "alert_gunshot", 3))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "misschinese2_bank1", "buddy_shot_b", 3))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "misschinese2_bank1", "reaction_forward_big_intro_a", 3))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "misschinese2_bank1", "alert_body", 3))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "misschinese2_bank1", "react_forward_small_intro_a", 3))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "misschinese2_bank1", "react_backward_small_intro_a", 3))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "misschinese2_bank1", "react_left_small_intro_a", 3))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "misschinese2_bank1", "react_right_small_intro_a", 3))
	{
		return 1;
	}
	return 0;
}

int func_732(int iParam0)//Position - 0x3A2ED
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			return 1;
		}
	}
	return 0;
}

int func_733(int iParam0)//Position - 0x48EAB
{
	if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("taxi")))
	{
		return 1;
	}
	return 0;
}

var func_734()//Position - 0x4BB76
{
	return Global_106934.f_2884.f_3;
}

void func_735()//Position - 0x580F4
{
	EVENT::UNBLOCK_DECISION_MAKER_EVENT(joaat("DEFAULT"), 31 /*EVENT_INJURED_CRY_FOR_HELP*/);
}

void func_736(var uParam0, char* sParam1, int iParam2, char* sParam3)//Position - 0x583FC
{
	*uParam0 = sParam3;
	uParam0->f_1 = sParam1;
	uParam0->f_2 = iParam2;
}

void func_737(bool bParam0, int iParam1)//Position - 0x1665
{
	int iVar0;
	int iVar1;
	var uVar2;
	if (!Global_63156)
	{
		Global_63156 = iParam1;
	}
	if (bParam0)
	{
		if ((__LIB_0__.func_2(0) && Global_78565.f_1 == 1) && func_37(Global_78565))
		{
		}
		else
		{
			Global_63154 = 1;
		}
	}
	if (Global_113386.f_9085 || __LIB_0__.func_2(0))
	{
		iVar0 = __LIB_0__.func_323();
		iVar1 = Global_91193[iVar0 /*5*/];
		uVar2 = Global_78588.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_113386.f_9085)
			{
			}
			return;
		}
		if (BitTest(Global_91193[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (BitTest(Global_91193[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 4);
		MISC::SET_BIT(&Global_78567, 1);
		Global_78583 = uVar2;
		Global_78584 = MISC::GET_GAME_TIMER();
	}
}

int func_738(int* iParam0)//Position - 0x6513A
{
	return iParam0->f_7;
}

void func_739(var uParam0, int iParam1, int iParam2)//Position - 0x7BC59
{
	if (__LIB_0__.func_736(&(uParam0->f_1)))
	{
		__LIB_0__.func_735(&(uParam0->f_1));
	}
	if (__LIB_0__.func_736(&(uParam0->f_4)))
	{
		__LIB_0__.func_735(&(uParam0->f_4));
	}
	__LIB_1__.func_899(&(uParam0->f_10));
	uParam0->f_134 = iParam1;
	uParam0->f_135 = iParam2;
	uParam0->f_137 = 1;
	uParam0->f_136 = 0;
	*uParam0 = 0;
}

void func_740(var uParam0)//Position - 0x7C387
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_8))
	{
		if (uParam0->f_8 != PLAYER::PLAYER_PED_ID())
		{
			PED::DELETE_PED(&(uParam0->f_8));
		}
	}
}

void func_741(var uParam0, int iParam1, char* sParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7)//Position - 0x88694
{
	uParam0->f_549 = iParam1;
	StringCopy(&(uParam0->f_550), sParam2, 16);
	StringCopy(&(uParam0->f_554), "", 16);
	uParam0->f_558 = uParam3;
	uParam0->f_559 = uParam4;
	uParam0->f_560 = iParam5;
	uParam0->f_561 = iParam6;
	uParam0->f_580 = iParam7;
}

void func_742(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)//Position - 0x93DE6
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1285.2881f, -2039.9432f, 1.60045f };
					*uParam3 = { 4f, 10.2f, 10f };
					*uParam4 = 2.3168f;
					break;
				case 1:
					*uParam2 = { -1268.6672f, -2024.7797f, 1.5678f };
					*uParam3 = { 4f, 10.2f, 10f };
					*uParam4 = 2.4f;
					break;
				case 2:
					*uParam2 = { -1227.0847f, -2053.458f, 12.98837f };
					*uParam3 = { 5f, 14f, 10f };
					*uParam4 = 2.6f;
					break;
				case 3:
					*uParam2 = { -1210.865f, -2052.2888f, 13f };
					*uParam3 = { 1.96f, 3f, 10f };
					*uParam4 = 2.865f;
					break;
				case 4:
					*uParam2 = { -1215.4523f, -2065.881f, 13f };
					*uParam3 = { 1.63f, 2.9f, 10f };
					*uParam4 = 2.685f;
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 2384.317f, 4268.876f, 30.44363f };
					*uParam3 = { 4f, 10f, 10f };
					*uParam4 = 6.047f;
					break;
				case 1:
					*uParam2 = { 2384.9753f, 4289.719f, 30.32816f };
					*uParam3 = { 4f, 10f, 10f };
					*uParam4 = 3.238f;
					break;
				case 2:
					*uParam2 = { 2436.907f, 4282.8496f, 35.5872f };
					*uParam3 = { 4.5f, 13f, 10f };
					*uParam4 = 3.019f;
					break;
				case 3:
					*uParam2 = { 2411.2502f, 4298.0063f, 34.98311f };
					*uParam3 = { 2.1f, 3.2f, 10f };
					*uParam4 = 1.19f;
					break;
				case 4:
					*uParam2 = { 0f, 0f, 0f };
					*uParam3 = { 1.63f, 2.9f, 0f };
					*uParam4 = 2.685f;
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 1568.879f, 3829.782f, 30.95098f };
					*uParam3 = { 4f, 9.9f, 10f };
					*uParam4 = 2.107f;
					break;
				case 1:
					*uParam2 = { 1586.192f, 3842.765f, 30.538f };
					*uParam3 = { 4f, 9.9f, 10f };
					*uParam4 = 2.295f;
					break;
				case 2:
					*uParam2 = { 1594.0022f, 3810.7175f, 33.55904f };
					*uParam3 = { 4f, 12f, 10f };
					*uParam4 = 2.251f;
					break;
				case 3:
					*uParam2 = { 1604.679f, 3828.3079f, 33.82485f };
					*uParam3 = { 1.96f, 3f, 10f };
					*uParam4 = 0.876f;
					break;
				case 4:
					*uParam2 = { 1607.1351f, 3824.388f, 33.06039f };
					*uParam3 = { 1.63f, 2.9f, 0f };
					*uParam4 = 0f;
					break;
			}
			break;
	}
}

int func_743(int iParam0, bool bParam1)//Position - 0xBBA
{
	if (bParam1)
	{
		return Global_262145.f_31029 /* Tunable: TUNER_ROBBERY_GOON_CASH_REWARD */;
	}
	if (iParam0 <= -1 || iParam0 >= 8)
	{
		return 0;
	}
	return Global_262145.f_31030[iParam0];
}

void func_744(var uParam0)//Position - 0x13CC
{
	uParam0->f_726.f_5 = 1;
}

void func_745(var uParam0, int iParam1)//Position - 0x13DC
{
	if (uParam0->f_820 != iParam1)
	{
	}
	uParam0->f_820 = iParam1;
}

int func_746(var uParam0)//Position - 0x1D50
{
	switch (uParam0->f_1082)
	{
		case 0:
		case 1:
			return 1;
		default:
	}
	return 0;
}

int func_747()//Position - 0x2015
{
	if (__LIB_0__.func_1("H4PREP_UNVLB" /* GXT: Freemode Prep mission currently unavailable. Please wait or look for rival crews transporting the Heist Prep Equipment ~HUD_COLOUR_GREEN~~BLIP_ISLAND_HEIST_PREP~~s~ to steal from instead. */))
	{
		return 1;
	}
	return 0;
}

void func_748()//Position - 0x6B76
{
	MISC::SET_BIT(&(Global_1888862[PLAYER::PLAYER_ID() /*120*/].f_29), 28);
}

void func_749()//Position - 0x6B90
{
	MISC::SET_BIT(&(Global_2714762.f_3), 13);
}

void func_750()//Position - 0x6BA4
{
	MISC::SET_BIT(&(Global_1888862[PLAYER::PLAYER_ID() /*120*/].f_29), 27);
}

void func_751()//Position - 0x6BBE
{
	MISC::SET_BIT(&(Global_2714762.f_3), 11);
}

void func_752(var uParam0)//Position - 0x9563
{
	MISC::CLEAR_BIT(&(uParam0->f_726.f_4), uParam0->f_726.f_1);
}

void func_753(var uParam0)//Position - 0x96B4
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_712))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_712));
	}
}

void func_754(var uParam0, int iParam1)//Position - 0x96D1
{
	if (uParam0->f_704 != iParam1)
	{
	}
	uParam0->f_704 = iParam1;
}

bool func_755(var uParam0)//Position - 0x974C
{
	return !BitTest(uParam0->f_726.f_4, uParam0->f_726.f_1);
}

void func_756(var uParam0)//Position - 0x9848
{
	int iVar0;
	uParam0->f_726.f_1 = uParam0->f_726;
	MISC::SET_BIT(&(uParam0->f_726.f_4), uParam0->f_726.f_1);
	MISC::CLEAR_BIT(&(uParam0->f_726.f_3), uParam0->f_726.f_1);
	iVar0 = uParam0->f_726;
	iVar0 = (iVar0 - 1);
	uParam0->f_726 = iVar0;
	if (uParam0->f_726 == 0)
	{
		uParam0->f_726 = 1;
	}
}

void func_757()//Position - 0x98F0
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)))
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (iVar1 != __LIB_0__.func_160() && iVar1 != PLAYER::PLAYER_ID())
			{
				NETWORK::SET_PLAYER_INVISIBLE_LOCALLY(iVar1, false);
			}
		}
		iVar0++;
	}
}

void func_758(var uParam0)//Position - 0xA6AC
{
	uParam0->f_726.f_5 = 0;
}

var func_759(var uParam0)//Position - 0xA6BC
{
	return uParam0->f_820;
}

int func_760(var uParam0, int iParam1, bool bParam2)//Position - 0xA835
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	switch (iParam1)
	{
		case 0:
			iVar1 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/) * 127f));
			iVar2 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/) * 127f));
			switch (bParam2)
			{
				case 0:
					if (iVar2 <= -110)
					{
						if (!BitTest(uParam0->f_820.f_1, bParam2))
						{
							iVar0 = 1;
							MISC::SET_BIT(&(uParam0->f_820.f_1), bParam2);
						}
					}
					else
					{
						MISC::CLEAR_BIT(&(uParam0->f_820.f_1), bParam2);
					}
					break;
				case 1:
					if (iVar2 >= 110)
					{
						if (!BitTest(uParam0->f_820.f_1, bParam2))
						{
							iVar0 = 1;
							MISC::SET_BIT(&(uParam0->f_820.f_1), bParam2);
						}
					}
					else
					{
						MISC::CLEAR_BIT(&(uParam0->f_820.f_1), bParam2);
					}
					break;
				case 2:
					if (iVar1 <= -110)
					{
						if (!BitTest(uParam0->f_820.f_1, bParam2))
						{
							iVar0 = 1;
							MISC::SET_BIT(&(uParam0->f_820.f_1), bParam2);
						}
					}
					else
					{
						MISC::CLEAR_BIT(&(uParam0->f_820.f_1), bParam2);
					}
					break;
				case 3:
					if (iVar1 >= 110)
					{
						if (!BitTest(uParam0->f_820.f_1, bParam2))
						{
							iVar0 = 1;
							MISC::SET_BIT(&(uParam0->f_820.f_1), bParam2);
						}
					}
					else
					{
						MISC::CLEAR_BIT(&(uParam0->f_820.f_1), bParam2);
					}
					break;
			}
			break;
		case 1:
			iVar1 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 220 /*INPUT_SCRIPT_RIGHT_AXIS_X*/) * 127f));
			iVar2 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 221 /*INPUT_SCRIPT_RIGHT_AXIS_Y*/) * 127f));
			switch (bParam2)
			{
				case 0:
					if (iVar2 <= -110)
					{
						if (!BitTest(uParam0->f_820.f_2, bParam2))
						{
							iVar0 = 1;
							MISC::SET_BIT(&(uParam0->f_820.f_2), bParam2);
						}
					}
					else
					{
						MISC::CLEAR_BIT(&(uParam0->f_820.f_2), bParam2);
					}
					break;
				case 1:
					if (iVar2 >= 110)
					{
						if (!BitTest(uParam0->f_820.f_2, bParam2))
						{
							iVar0 = 1;
							MISC::SET_BIT(&(uParam0->f_820.f_2), bParam2);
						}
					}
					else
					{
						MISC::CLEAR_BIT(&(uParam0->f_820.f_2), bParam2);
					}
					break;
				case 2:
					if (iVar1 <= -110)
					{
						if (!BitTest(uParam0->f_820.f_2, bParam2))
						{
							iVar0 = 1;
							MISC::SET_BIT(&(uParam0->f_820.f_2), bParam2);
						}
					}
					else
					{
						MISC::CLEAR_BIT(&(uParam0->f_820.f_2), bParam2);
					}
					break;
				case 3:
					if (iVar1 >= 110)
					{
						if (!BitTest(uParam0->f_820.f_2, bParam2))
						{
							iVar0 = 1;
							MISC::SET_BIT(&(uParam0->f_820.f_2), bParam2);
						}
					}
					else
					{
						MISC::CLEAR_BIT(&(uParam0->f_820.f_2), bParam2);
					}
					break;
			}
			break;
	}
	return iVar0;
}

void func_761(var uParam0, var uParam1)//Position - 0xB495
{
	uParam0->f_741.f_1.f_7 = uParam1;
	uParam0->f_741.f_1.f_20 = 15;
	uParam0->f_741.f_1.f_21 = 10;
	uParam0->f_741.f_1.f_22 = 1;
	uParam0->f_741.f_1.f_19 = 10f;
}

void func_762(var uParam0, var uParam1)//Position - 0xB581
{
	uParam0->f_741.f_32 = uParam1;
}

bool func_763(var uParam0)//Position - 0xB6FE
{
	return uParam0->f_726.f_5;
}

void func_764(var uParam0, int iParam1)//Position - 0xC0BD
{
	if (uParam0->f_707 != iParam1)
	{
	}
	uParam0->f_707 = iParam1;
}

bool func_765(var uParam0)//Position - 0xC1EF
{
	return uParam0->f_704;
}

bool func_766(var uParam0)//Position - 0xC2DC
{
	return uParam0->f_702;
}

int func_767(var uParam0)//Position - 0xC2F7
{
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_711))
	{
		return 0;
	}
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_712))
	{
		return 0;
	}
	return 1;
}

void func_768(var uParam0)//Position - 0xC322
{
	int iVar0;
	uParam0->f_726.f_1 = uParam0->f_726;
	MISC::SET_BIT(&(uParam0->f_726.f_4), uParam0->f_726.f_1);
	MISC::CLEAR_BIT(&(uParam0->f_726.f_3), uParam0->f_726.f_1);
	iVar0 = uParam0->f_726;
	iVar0++;
	uParam0->f_726 = iVar0;
	if (uParam0->f_726 == 7)
	{
		uParam0->f_726 = 5;
	}
}

void func_769(var uParam0)//Position - 0xC37D
{
	MISC::SET_BIT(&(uParam0->f_726.f_3), uParam0->f_726);
}

void func_770(var uParam0, int iParam1)//Position - 0xC5CF
{
	uParam0->f_741.f_33 = iParam1;
}

bool func_771(var uParam0)//Position - 0xC649
{
	return BitTest(uParam0->f_726.f_3, uParam0->f_726);
}

char* func_772(var uParam0)//Position - 0xD03F
{
	return "TUN_SESSANTA";
}

void func_773(var uParam0, int iParam1)//Position - 0x16E44
{
	if (uParam0->f_726 != iParam1)
	{
		uParam0->f_726.f_1 = uParam0->f_726;
		MISC::SET_BIT(&(uParam0->f_726.f_4), uParam0->f_726.f_1);
		MISC::CLEAR_BIT(&(uParam0->f_726.f_3), uParam0->f_726.f_1);
		uParam0->f_726 = iParam1;
		if (uParam0->f_726 == 7)
		{
			uParam0->f_726 = 5;
		}
	}
}

int func_774()//Position - 0x16E9C
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 1;
	}
	if (__LIB_0__.func_739() && __LIB_0__.func_922() == 1)
	{
		return 1;
	}
	if (Global_1973321.f_1095)
	{
		return 1;
	}
	return 0;
}

void func_775(var uParam0)//Position - 0x17042
{
	struct<65> Var0;
	Var0.f_63 = 500;
	Var0.f_64 = 2;
	*uParam0 = { Var0 };
}

void func_776(var uParam0)//Position - 0x17087
{
	struct<726> Var0;
	Var0.f_1 = 12;
	Var0.f_699 = 1065353216;
	Var0.f_701 = 1;
	Var0.f_702 = 1;
	*uParam0 = { Var0 };
}

void func_777(var uParam0)//Position - 0x170F3
{
	if (uParam0->f_1080)
	{
		if (uParam0->f_1080.f_1 != -1)
		{
			AUDIO::STOP_SOUND(uParam0->f_1080.f_1);
			AUDIO::RELEASE_SOUND_ID(uParam0->f_1080.f_1);
			uParam0->f_1080.f_1 = -1;
			uParam0->f_1080 = 0;
		}
	}
}

bool func_778(int iParam0, int iParam1)//Position - 0xB9B
{
	return __LIB_0__.func_287(&(Local_198.f_38.f_1[iParam0 /*21*/]), iParam1);
}

bool func_779(int iParam0)//Position - 0x11AD
{
	return __LIB_0__.func_287(&(Local_198.f_16), iParam0);
}

var func_780(int iParam0)//Position - 0x28E5
{
	return Local_198.f_38.f_23[Local_198.f_38.f_1[iParam0 /*21*/].f_14 /*5*/];
}

bool func_781(int iParam0, int iParam1)//Position - 0x31C2
{
	return __LIB_0__.func_287(&(Local_198.f_85.f_1[iParam0 /*12*/]), iParam1);
}

bool func_782(int iParam0, int iParam1)//Position - 0x36B2
{
	return __LIB_0__.func_287(&(Local_198.f_67.f_1[iParam0 /*15*/]), iParam1);
}

int func_783(int iParam0, int iParam1)//Position - 0x3DE7
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
		if (BitTest(Local_198.f_67.f_1[iParam0 /*15*/].f_10, (iVar0 + iVar1)))
		{
			return iVar1;
		}
		iVar1++;
	}
	return -1;
}

void func_784(int iParam0, int iParam1)//Position - 0x4030
{
	if (Local_198.f_67.f_1[iParam0 /*15*/].f_8 != -1)
	{
		VEHICLE::SET_VEHICLE_COLOURS(iParam1, Local_198.f_67.f_1[iParam0 /*15*/].f_8, Local_198.f_67.f_1[iParam0 /*15*/].f_8);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam1, Local_198.f_67.f_1[iParam0 /*15*/].f_8, Local_198.f_67.f_1[iParam0 /*15*/].f_8);
	}
}

bool func_785(int iParam0, int iParam1)//Position - 0x2152B
{
	return __LIB_0__.func_287(&(Local_198.f_19.f_5[iParam0 /*13*/]), iParam1);
}

int func_786()//Position - 0x21F05
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		iVar0++;
		iVar1++;
	}
	return iVar0;
}

void func_787(int iParam0, int iParam1)//Position - 0x23325
{
	struct<3> Var0;
	if (iParam0 == 0)
	{
		return;
	}
	Var0.f_2 = -1;
	Var0.f_0 = 500306788;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam1;
	SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, iParam0);
}

bool func_788(bool bParam0)//Position - 0x2DAF7
{
	return Global_1892703[bParam0 /*599*/].f_10.f_58 != __LIB_0__.func_160();
}

void func_789(int iParam0, int iParam1, int iParam2)//Position - 0x3288C
{
	int iVar0;
	iVar0 = Global_262145.f_31112 /* Tunable: CAR_MEET_PRIZE_VEHICLE_CHALLENGE_PARAM_TWO */;
	if (iParam0 == 7)
	{
		iVar0 = Global_262145.f_31111 /* Tunable: CAR_MEET_PRIZE_VEHICLE_CHALLENGE_PARAM_ONE */;
	}
	STATS::PLAYSTATS_CARCLUB_CHALLENGE(iParam0, iParam1, iVar0, iParam2);
}

int func_790(int iParam0)//Position - 0x3578F
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 1;
		default:
	}
	return 0;
}

void func_791(var uParam0, int iParam1, int iParam2)//Position - 0x35CC6
{
	int iVar0;
	if (iParam1 == -1)
	{
		iParam1 = *uParam0;
	}
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		(*uParam0)[iVar0] = iParam2;
		iVar0++;
	}
}

int func_792()//Position - 0x38ECC
{
	int iVar0;
	iVar0 = __LIB_1__.func_911(PLAYER::PLAYER_ID());
	if (__LIB_0__.func_630(Global_1852994.f_19, -1))
	{
		if (iVar0 == 293)
		{
			return 1;
		}
	}
	return 0;
}

int func_793()//Position - 0xBE06C
{
	if (Local_199.f_15.f_18.f_5 != 0)
	{
		Call_Loc(Local_199.f_15.f_18.f_5);
		return StackVal;
	}
	return 0;
}

int func_794()//Position - 0xBE08F
{
	if (Local_199.f_15.f_18.f_4 != 0)
	{
		Call_Loc(Local_199.f_15.f_18.f_4);
		return StackVal;
	}
	return 0;
}

int func_795()//Position - 0xBE34D
{
	if (Local_199.f_15.f_2 != 0)
	{
		Call_Loc(Local_199.f_15.f_2);
		return StackVal;
	}
	return 3;
}

int func_796()//Position - 0xBE435
{
	if (Local_199.f_15.f_13.f_4 != 0)
	{
		Call_Loc(Local_199.f_15.f_13.f_4);
		return StackVal;
	}
	return 0;
}

int func_797()//Position - 0xBE544
{
	if (Local_199.f_15.f_13.f_2 != 0)
	{
		Call_Loc(Local_199.f_15.f_13.f_2);
		return StackVal;
	}
	return 0;
}

float func_798()//Position - 0xBE7C0
{
	if (Local_199.f_15.f_13.f_1 != 0)
	{
		Call_Loc(Local_199.f_15.f_13.f_1);
		return StackVal;
	}
	return 5f;
}

Vector3 func_799()//Position - 0xBE8BF
{
	if (Local_199.f_15.f_6.f_6 != 0)
	{
		Call_Loc(Local_199.f_15.f_6.f_6);
		return StackVal, StackVal, StackVal;
	}
	return 0f, 0f, 0f;
}

int func_800()//Position - 0xBE8E4
{
	if (Local_199.f_15.f_6.f_5 != 0)
	{
		Call_Loc(Local_199.f_15.f_6.f_5);
		return StackVal;
	}
	return 0;
}

float func_801()//Position - 0xBE907
{
	if (Local_199.f_15.f_6.f_4 != 0)
	{
		Call_Loc(Local_199.f_15.f_6.f_4);
		return StackVal;
	}
	return 0.3f;
}

int func_802()//Position - 0xBE965
{
	if (Local_199.f_15.f_6.f_2 != 0)
	{
		Call_Loc(Local_199.f_15.f_6.f_2);
		return StackVal;
	}
	return 0;
}

int func_803()//Position - 0xBE988
{
	if (Local_199.f_15.f_6.f_1 != 0)
	{
		Call_Loc(Local_199.f_15.f_6.f_1);
		return StackVal;
	}
	return 0;
}

int func_804()//Position - 0xBE9AB
{
	if (Local_199.f_15.f_6 != 0)
	{
		Call_Loc(Local_199.f_15.f_6);
		return StackVal;
	}
	return 0;
}

int func_805(int iParam0)//Position - 0xC4DC4
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 6;
		default:
	}
	return 1;
}

void func_806(int iParam0, char* sParam1)//Position - 0xC5654
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	HUD::GET_HUD_COLOUR(18, &iVar0, &iVar1, &iVar2, &uVar3);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_MESSAGE");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_807(int iParam0)//Position - 0xC9B74
{
	return Local_198.f_38.f_23[Local_198.f_38.f_1[iParam0 /*21*/].f_14 /*5*/].f_3;
}

void func_808(int iParam0, int iParam1)//Position - 0xCAB6E
{
	if (__LIB_11__.func_631(&(Local_205[iParam0 /*19*/]), iParam1))
	{
	}
}

void func_809(int iParam0, int iParam1)//Position - 0xCAB86
{
	if (__LIB_1__.func_101(&(Local_205[iParam0 /*19*/]), iParam1))
	{
	}
}

Vector3 func_810(int iParam0)//Position - 0xD5A19
{
	struct<3> Var0;
	Var0 = { Local_198.f_67.f_1[Local_198.f_38.f_1[iParam0 /*21*/].f_8 /*15*/].f_4 };
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

void func_811(int iParam0, int iParam1)//Position - 0xD9D31
{
	Local_205[iParam0 /*19*/].f_10[Local_205[iParam0 /*19*/].f_16] = iParam1;
	Local_205[iParam0 /*19*/].f_16++;
}

int func_812(int iParam0)//Position - 0xDD08A
{
	if (iParam0 == __LIB_0__.func_160())
	{
		return 0;
	}
	return Global_1853348[iParam0 /*834*/].f_267.f_476.f_1;
}

int func_813(int iParam0)//Position - 0xDFF63
{
	if (__LIB_1__.func_911(PLAYER::PLAYER_ID()) == 238 || __LIB_1__.func_911(PLAYER::PLAYER_ID()) == 249)
	{
		return Global_1892703[iParam0 /*599*/].f_10.f_477;
	}
	return -1;
}

int func_814(int iParam0)//Position - 0xDFF9C
{
	if (__LIB_1__.func_911(PLAYER::PLAYER_ID()) == 237 || __LIB_1__.func_911(PLAYER::PLAYER_ID()) == 250)
	{
		return Global_1892703[iParam0 /*599*/].f_10.f_476;
	}
	return -1;
}

void func_815(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)//Position - 0x1509
{
	fParam2 = ((fParam2 - fParam3) / (fParam4 - fParam3));
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_ALT_FOV_HEADING");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam5);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_816(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x153E
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_WEAPON_VALUES");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_817(int iParam0, bool bParam1)//Position - 0x1566
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_ZOOM_VISIBLE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_818(bool bParam0)//Position - 0x1E34
{
	if (bParam0)
	{
		if (!BitTest(Global_1958711.f_2, 4))
		{
			Global_1958711.f_2 = 0;
			MISC::SET_BIT(&(Global_1958711.f_2), 4);
		}
	}
	else if (BitTest(Global_1958711.f_2, 4))
	{
		MISC::CLEAR_BIT(&(Global_1958711.f_2), 4);
	}
}

int func_819()//Position - 0x4424
{
	if (((MISC::IS_NEXT_WEATHER_TYPE("RAIN") || MISC::IS_NEXT_WEATHER_TYPE("THUNDER")) || MISC::IS_PREV_WEATHER_TYPE("RAIN")) || MISC::IS_PREV_WEATHER_TYPE("THUNDER"))
	{
		return 1;
	}
	return 0;
}

void func_820(bool bParam0)//Position - 0x3C7
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_113386.f_10016.f_25), 22);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_113386.f_10016.f_25), 22);
	}
}

int func_821(int iParam0, int iParam1)//Position - 0x4F2
{
	int iVar0;
	if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 36 /*INPUT_DUCK*/))
	{
		MISC::SET_BIT(&(Global_113386.f_10016.f_25), 22);
	}
	iVar0 = BitTest(Global_113386.f_10016.f_25, 22);
	if (iParam0 && iVar0)
	{
		MISC::CLEAR_BIT(&(Global_113386.f_10016.f_25), 22);
	}
	iParam1 = iParam1;
	return iVar0;
}

int func_822(var uParam0, int iParam1, int iParam2)//Position - 0x560
{
	return SYSTEM::SHIFT_RIGHT((uParam0 && iParam1), iParam2);
}

int func_823(int iParam0, int iParam1, int iParam2)//Position - 0x27C50
{
	int iVar0;
	int iVar1;
	if (iParam2 < 1)
	{
		return 0;
	}
	if (Global_54979 == 8)
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_53557[iVar1 /*203*/].f_2 == iParam0)
		{
			if (Global_53557[iVar1 /*203*/].f_1 > 0)
			{
				iVar0 = Global_53557[iVar1 /*203*/].f_1;
			}
		}
		iVar1++;
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (Global_54980[iVar1 /*53*/].f_52 == 0)
		{
			Global_54980[iVar1 /*53*/].f_52 = iVar0;
			Global_54980[iVar1 /*53*/] = iParam0;
			Global_54980[iVar1 /*53*/].f_1 = iParam1;
			Global_54980[iVar1 /*53*/].f_2 = iParam2;
			Global_113386.f_21037.f_310++;
			if (Global_113386.f_21037.f_310 == 0)
			{
				Global_113386.f_21037.f_310 = 1;
			}
			Global_54980[iVar1 /*53*/].f_10 = 0;
			Global_54980[iVar1 /*53*/].f_3 = Global_113386.f_21037.f_310;
			Global_54980[iVar1 /*53*/].f_4 = 1;
			Global_54979++;
			return Global_54980[iVar1 /*53*/].f_3;
		}
		iVar1++;
	}
	return 0;
}

int func_824(int iParam0)//Position - 0x2BE95
{
	switch (iParam0)
	{
		case 17:
			return joaat("U_M_Y_Cyclist_01");
		case 49:
			return joaat("dune");
		default:
	}
	return 0;
}

bool func_825(bool bParam0)//Position - 0x2C00B
{
	if (bParam0)
	{
		return Global_110134.f_2 > 0.5f;
	}
	return Global_110134.f_2 >= 255f;
}

void func_826(int iParam0)//Position - 0x2C367
{
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 1, 0.431f, 0.667f, 179.593f, 0.889f, 2, 0f, "BasicSlash");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 1, 0.556f, 0.292f, 161.805f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 1, 0.708f, 0.688f, 167.897f, 0f, 1, 0f, "ShotgunLargeMonolithic");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 2, 0.472f, 0.347f, 146.133f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 2, 0.799f, 0.451f, 158.294f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 0, 0.681f, 0.507f, 158.707f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 0, 0.819f, 0.813f, 174.811f, 0.056f, 1, 0f, "ShotgunLargeMonolithic");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 0, 0.174f, 0.438f, 211.521f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 0, 0.174f, 0.486f, 213.237f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 0, 0.174f, 0.542f, 215.168f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 0, 0.236f, 0.542f, 213.752f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 0, 0.278f, 0.542f, 212.851f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 0, 0.313f, 0.542f, 212.127f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 5, 0.639f, 0.313f, 149.248f, 1f, 1, 0f, "stab");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 5, 0.792f, 0.424f, 182.625f, 1f, 1, 0f, "stab");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 5, 0.792f, 0.424f, 182.625f, 1f, 1, 0f, "BasicSlash");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 3, 0.618f, 0.451f, 204.207f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 3, 0.785f, 0.597f, 206.103f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 4, 0.688f, 0.438f, 202.91f, 1f, 1, 0f, "BasicSlash");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 4, 0.688f, 0.424f, 202.492f, 1f, 1, 0f, "BasicSlash");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 4, 0.688f, 0.347f, 200.181f, 1f, 1, 0f, "BasicSlash");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 4, 0.688f, 0.278f, 198.043f, 1f, 1, 0f, "BasicSlash");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 4, 0.688f, 0.222f, 196.275f, 1f, 1, 0f, "BasicSlash");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 4, 0.653f, 0.222f, 196.609f, 1f, 3, 0f, "BasicSlash");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 4, 0.75f, 0.222f, 195.716f, 1f, 2, 0f, "BasicSlash");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 4, 1f, 0.326f, 196.621f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 4, 0.93f, 0.451f, 200.584f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 4, 0.618f, 0.451f, 204.207f, 1f, 0, 0f, "ShotgunLargeMonolithic");
}

void func_827()//Position - 0x2DBA8
{
	if (Global_110134.f_3 == MISC::GET_FRAME_COUNT())
	{
		return;
	}
	Global_110134.f_3 = MISC::GET_FRAME_COUNT();
	if (Global_110134.f_2 == 0f && Global_110134.f_1 == 0f)
	{
		return;
	}
	if (Global_110134.f_2 != Global_110134.f_1)
	{
		Global_110134.f_2 = (Global_110134.f_2 + Global_110134);
		if (Global_110134 <= 0f)
		{
			if (Global_110134.f_2 < Global_110134.f_1)
			{
				Global_110134.f_2 = Global_110134.f_1;
			}
		}
		else if (Global_110134.f_2 > Global_110134.f_1)
		{
			Global_110134.f_2 = Global_110134.f_1;
		}
	}
	GRAPHICS::DRAW_RECT(0.5f, 0.5f, 1f, 1f, 255, 255, 255, SYSTEM::ROUND(Global_110134.f_2), false);
}

void func_828(int iParam0, int iParam1)//Position - 0x2DC69
{
	float fVar0;
	float fVar1;
	float fVar2;
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	if (iParam1 <= 0)
	{
		Global_110134 = 0f;
		Global_110134.f_1 = fVar0;
		Global_110134.f_2 = fVar0;
	}
	else
	{
		fVar1 = (fVar0 - Global_110134.f_2);
		fVar2 = (SYSTEM::TO_FLOAT(iParam1) / (MISC::GET_FRAME_TIME() * 1000f));
		Global_110134 = (fVar1 / fVar2);
		Global_110134.f_1 = fVar0;
	}
}

void func_829(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2DCE2
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam2));
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, iParam3));
}

var func_830()//Position - 0x30D8A
{
	return Global_77137.f_138;
}

void func_831()//Position - 0x8A8
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
}

int func_832(int iParam0)//Position - 0x116D
{
	switch (iParam0)
	{
		case joaat("akula"):
		case joaat("annihilator2"):
			return 1;
		default:
	}
	return 0;
}

bool func_833(int iParam0)//Position - 0x1337
{
	return (iParam0 != -1 && BitTest(Global_1853348[iParam0 /*834*/].f_809, 1));
}

int func_834(var uParam0, int iParam1, var uParam2)//Position - 0x359CC
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (iParam1 == 1)
	{
		__LIB_11__.func_404(&uVar0, &iVar1);
		iVar2 = uVar0;
		while (iVar2 <= iVar1)
		{
			if (__LIB_11__.func_427(uParam0, Global_4538470[iVar2]))
			{
				*uParam2 = iVar2;
				return 1;
			}
			iVar2++;
		}
	}
	else
	{
		iVar3 = 0;
		while (iVar3 <= (uParam0->f_252 - 1))
		{
			if (iVar3 < 125 && (*uParam0)[iVar3] != -99)
			{
				*uParam2 = iVar3;
				return 1;
			}
			iVar3++;
		}
	}
	return 0;
}

void func_835(int* iParam0, int* iParam1, int* iParam2, int iParam3, int iParam4)//Position - 0x183706
{
	Global_23150.f_8783 = iParam4;
	Global_23150.f_8779 = iParam0;
	Global_23150.f_8780 = iParam1;
	Global_23150.f_8781 = iParam2;
	Global_23150.f_8782 = iParam3;
}

void func_836(int iParam0)//Position - 0x183B75
{
	Global_23150.f_8806 = iParam0;
}

void func_837(int* iParam0, int* iParam1, int* iParam2, int iParam3, int iParam4)//Position - 0x183B85
{
	Global_23150.f_8793 = iParam4;
	Global_23150.f_8789 = iParam0;
	Global_23150.f_8790 = iParam1;
	Global_23150.f_8791 = iParam2;
	Global_23150.f_8792 = iParam3;
}

Vector3 func_838(int iParam0)//Position - 0x18620C
{
	switch (iParam0)
	{
		case 0:
			return -811.8961f, 175.2218f, 76.7308f;
			break;
		case 1:
			return 1969.4883f, 3815.0303f, 33.4337f;
			break;
		case 2:
			return 1969.4883f, 3815.0303f, 33.4337f;
			break;
		case 3:
			return -1150.4913f, -1513.347f, 10.6394f;
			break;
		case 4:
			return 105.3011f, -1303.3383f, 27.7688f;
			break;
		case 5:
			return -17.9973f, -1438.911f, 31.1065f;
			break;
		case 6:
			return 9.0157f, 528.7267f, 170.6221f;
			break;
		case 7:
			return 259.791f, -1004.398f, -100.004f;
			break;
	}
	return 0f, 0f, 0f;
}

var func_839(var uParam0, int iParam1, int iParam2)//Position - 0x1D7D8A
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = Global_4536982[iParam2];
	iVar1 = (iParam1 - 1);
	iVar2 = iParam1;
	while (iVar2 <= (iParam2 - 1))
	{
		if (Global_4536982[iVar2] <= iVar0)
		{
			iVar1++;
			__LIB_11__.func_437(uParam0, iVar1, iVar2);
		}
		iVar2++;
	}
	__LIB_11__.func_437(uParam0, iVar1 + 1, iParam2);
	return iVar1 + 1;
}

void func_840(var uParam0)//Position - 0x2879
{
	if (STREAMING::IS_MODEL_IN_CDIMAGE(uParam0->f_38))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_38);
	}
	if (STREAMING::IS_MODEL_IN_CDIMAGE(uParam0->f_39))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_39);
	}
}

void func_841()//Position - 0x4F48C
{
	if (iLocal_110)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_109))
		{
			GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sLocal_109);
		}
		iLocal_110 = 0;
	}
}

int func_842(int iParam0, int iParam1, int iParam2)//Position - 0x5D306
{
	switch (iParam0)
	{
		case joaat("MP_M_Freemode_01"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 >= 131 && iParam2 <= 138) || (iParam2 >= 147 && iParam2 <= 154))
					{
						return 1;
					}
					break;
			}
			break;
		case joaat("MP_F_Freemode_01"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 >= 131 && iParam2 <= 138) || (iParam2 >= 147 && iParam2 <= 154))
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

void func_843(var uParam0)//Position - 0x61050
{
	if (uParam0->f_5.f_23.f_2 < uParam0->f_197)
	{
		uParam0->f_5.f_23.f_2 = uParam0->f_197;
	}
	if (uParam0->f_5.f_23.f_2 > uParam0->f_198)
	{
		uParam0->f_5.f_23.f_2 = uParam0->f_198;
	}
}

void func_844(var uParam0)//Position - 0x61956
{
	switch (uParam0->f_5.f_11)
	{
		case 0:
		case 7:
			uParam0->f_5.f_27 = { 0.1198f, 2.2929f, 0.3112f };
			uParam0->f_5.f_26 = 33f;
			uParam0->f_5.f_30 = 51.60055f;
			uParam0->f_5.f_31 = -0.1f;
			break;
		case 1:
			uParam0->f_5.f_27 = { 0.0948f, 1.8239f, 0.2271f };
			uParam0->f_5.f_26 = 25f;
			uParam0->f_5.f_30 = 62.94939f;
			uParam0->f_5.f_31 = -0.1f;
			break;
		case 3:
			uParam0->f_5.f_27 = { 0.1198f, 2.2929f, 0.3112f };
			uParam0->f_5.f_26 = 33f;
			uParam0->f_5.f_30 = 51.60055f;
			uParam0->f_5.f_31 = -0.1f;
			break;
		case 2:
			uParam0->f_5.f_27 = { 0.0948f, 1.8239f, 0.2271f };
			uParam0->f_5.f_26 = 25f;
			uParam0->f_5.f_30 = 62.94939f;
			uParam0->f_5.f_31 = -0.1f;
			break;
		case 4:
			uParam0->f_5.f_27 = { 0.1198f, 2.2929f, 0.3112f };
			uParam0->f_5.f_26 = 33f;
			uParam0->f_5.f_30 = 51.60055f;
			uParam0->f_5.f_31 = -0.1f;
			break;
		case 5:
			uParam0->f_5.f_27 = { 0.1198f, 2.2929f, 0.3112f };
			uParam0->f_5.f_26 = 30f;
			uParam0->f_5.f_30 = 51.60055f;
			uParam0->f_5.f_31 = -0.1f;
			break;
		case 6:
			uParam0->f_5.f_27 = { 0.1198f, 2.2929f, 0.3112f };
			uParam0->f_5.f_26 = 33f;
			uParam0->f_5.f_30 = 51.60055f;
			uParam0->f_5.f_31 = -0.1f;
			break;
	}
}

void func_845(var uParam0)//Position - 0x61B36
{
	switch (uParam0->f_5.f_11)
	{
		case 0:
		case 7:
			uParam0->f_5.f_27 = { 0.0377f, 0.8535f, 0.6971f };
			uParam0->f_5.f_26 = 45f;
			uParam0->f_5.f_30 = 43.63401f;
			uParam0->f_5.f_31 = 0.6f;
			break;
		case 1:
			uParam0->f_5.f_27 = { 0.0377f, 0.8035f, 0.6971f };
			uParam0->f_5.f_26 = 45f;
			uParam0->f_5.f_30 = 43.43401f;
			uParam0->f_5.f_31 = 0.6f;
			break;
		case 3:
			uParam0->f_5.f_27 = { 0.0377f, 0.8035f, 0.6971f };
			uParam0->f_5.f_26 = 45f;
			uParam0->f_5.f_30 = 43.43401f;
			uParam0->f_5.f_31 = 0.6f;
			break;
		case 2:
			uParam0->f_5.f_27 = { 0.0377f, 0.8035f, 0.6971f };
			uParam0->f_5.f_26 = 40f;
			uParam0->f_5.f_30 = 43.43401f;
			uParam0->f_5.f_31 = 0.6f;
			break;
		case 4:
			uParam0->f_5.f_27 = { 0.0377f, 0.8035f, 0.6971f };
			uParam0->f_5.f_26 = 45f;
			uParam0->f_5.f_30 = 43.43401f;
			uParam0->f_5.f_31 = 0.6f;
			break;
		case 5:
			uParam0->f_5.f_27 = { 0.0377f, 0.8035f, 0.6971f };
			uParam0->f_5.f_26 = 30f;
			uParam0->f_5.f_30 = 43.43401f;
			uParam0->f_5.f_31 = 0.6f;
			break;
		case 6:
			uParam0->f_5.f_27 = { 0.0377f, 0.8035f, 0.6971f };
			uParam0->f_5.f_26 = 45f;
			uParam0->f_5.f_30 = 43.43401f;
			uParam0->f_5.f_31 = 0.6f;
			break;
	}
}

void func_846(var uParam0)//Position - 0x61E6F
{
	uParam0->f_5.f_31 = 0.25f;
	switch (uParam0->f_5.f_11)
	{
		case 0:
		case 7:
			uParam0->f_5.f_27 = { 0.076f, 1.6244f, -0.0675f };
			uParam0->f_5.f_26 = 45f;
			uParam0->f_5.f_30 = 43.43401f;
			uParam0->f_5.f_31 = -0.5f;
			break;
		case 1:
			uParam0->f_5.f_27 = { 0.076f, 1.6244f, -0.0675f };
			uParam0->f_5.f_26 = 45f;
			uParam0->f_5.f_30 = 43.43401f;
			uParam0->f_5.f_31 = -0.5f;
			break;
		case 3:
			uParam0->f_5.f_27 = { 0.076f, 1.6244f, -0.0675f };
			uParam0->f_5.f_26 = 45f;
			uParam0->f_5.f_30 = 43.43401f;
			uParam0->f_5.f_31 = -0.5f;
			break;
		case 2:
			uParam0->f_5.f_27 = { 0.076f, 1.6244f, -0.0675f };
			uParam0->f_5.f_26 = 35f;
			uParam0->f_5.f_30 = 43.43401f;
			uParam0->f_5.f_31 = -0.5f;
			break;
		case 4:
			uParam0->f_5.f_27 = { 0.076f, 1.6244f, -0.0675f };
			uParam0->f_5.f_26 = 45f;
			uParam0->f_5.f_30 = 43.43401f;
			uParam0->f_5.f_31 = -0.5f;
			break;
		case 5:
			uParam0->f_5.f_27 = { 0.076f, 1.6244f, -0.0675f };
			uParam0->f_5.f_26 = 28f;
			uParam0->f_5.f_30 = 43.43401f;
			uParam0->f_5.f_31 = -0.5f;
			break;
		case 6:
			uParam0->f_5.f_27 = { 0.076f, 1.6244f, -0.0675f };
			uParam0->f_5.f_26 = 45f;
			uParam0->f_5.f_30 = 43.43401f;
			uParam0->f_5.f_31 = -0.5f;
			break;
	}
}

void func_847(var uParam0)//Position - 0x62101
{
	switch (uParam0->f_5.f_11)
	{
		case 0:
		case 7:
			uParam0->f_5.f_27 = { 0.077f, 1.6468f, -0.5692f };
			uParam0->f_5.f_26 = 45f;
			uParam0->f_5.f_30 = 43.43401f;
			uParam0->f_5.f_31 = -0.5f;
			break;
		case 1:
			uParam0->f_5.f_27 = { 0.076f, 1.6244f, -0.0675f };
			uParam0->f_5.f_26 = 35f;
			uParam0->f_5.f_30 = 43.43401f;
			uParam0->f_5.f_31 = -0.5f;
			break;
		case 3:
			uParam0->f_5.f_27 = { -0.2476f, 1.4693f, -0.5625f };
			uParam0->f_5.f_26 = 45f;
			uParam0->f_5.f_30 = 47.679413f;
			uParam0->f_5.f_31 = -0.5f;
			break;
		case 2:
			uParam0->f_5.f_27 = { 0.076f, 1.6244f, -0.0675f };
			uParam0->f_5.f_26 = 35f;
			uParam0->f_5.f_30 = 43.43401f;
			uParam0->f_5.f_31 = -0.5f;
			break;
		case 4:
			uParam0->f_5.f_27 = { 0.077f, 1.6468f, -0.5692f };
			uParam0->f_5.f_26 = 45f;
			uParam0->f_5.f_30 = 43.43401f;
			uParam0->f_5.f_31 = -0.5f;
			break;
		case 5:
			uParam0->f_5.f_27 = { 0.5624f, 1.162f, -0.5542f };
			uParam0->f_5.f_26 = 28f;
			uParam0->f_5.f_30 = 52.507298f;
			uParam0->f_5.f_31 = -0.5f;
			break;
		case 6:
			uParam0->f_5.f_27 = { 0.077f, 1.6468f, -0.5692f };
			uParam0->f_5.f_26 = 45f;
			uParam0->f_5.f_30 = 43.43401f;
			uParam0->f_5.f_31 = -0.5f;
			break;
	}
}

void func_848(var uParam0)//Position - 0x624C4
{
	switch (uParam0->f_5.f_11)
	{
		case 0:
		case 7:
			uParam0->f_5.f_27 = { 0.0784f, 1.6781f, 0.2271f };
			uParam0->f_5.f_26 = 45f;
			uParam0->f_5.f_30 = 43.43401f;
			uParam0->f_5.f_31 = 0.25f;
			break;
		case 1:
			uParam0->f_5.f_27 = { 0.0784f, 1.6781f, 0.2271f };
			uParam0->f_5.f_26 = 45f;
			uParam0->f_5.f_30 = 43.43401f;
			uParam0->f_5.f_31 = 0.25f;
			break;
		case 3:
			uParam0->f_5.f_27 = { 0.0784f, 1.6781f, 0.2271f };
			uParam0->f_5.f_26 = 45f;
			uParam0->f_5.f_30 = 43.43401f;
			uParam0->f_5.f_31 = 0.25f;
			break;
		case 2:
			uParam0->f_5.f_27 = { 0.0784f, 1.6781f, 0.2271f };
			uParam0->f_5.f_26 = 40f;
			uParam0->f_5.f_30 = 43.43401f;
			uParam0->f_5.f_31 = 0.25f;
			break;
		case 4:
			uParam0->f_5.f_27 = { 0.0784f, 1.6781f, 0.2271f };
			uParam0->f_5.f_26 = 45f;
			uParam0->f_5.f_30 = 43.43401f;
			uParam0->f_5.f_31 = 0.25f;
			break;
		case 5:
			uParam0->f_5.f_27 = { 0.0784f, 1.6781f, 0.2271f };
			uParam0->f_5.f_26 = 28f;
			uParam0->f_5.f_30 = 43.43401f;
			uParam0->f_5.f_31 = 0.25f;
			break;
		case 6:
			uParam0->f_5.f_27 = { 0.0784f, 1.6781f, 0.2271f };
			uParam0->f_5.f_26 = 45f;
			uParam0->f_5.f_30 = 43.43401f;
			uParam0->f_5.f_31 = 0.25f;
			break;
	}
}

bool func_849()//Position - 0x18EF8B
{
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 984.617f, 60.0772f, 116.9142f, true) < 2f;
}

bool func_850()//Position - 0x18EFB2
{
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 976.412f, 64.7793f, 116.9141f, true) < 2f;
}

int func_851(var uParam0)//Position - 0x190314
{
	STREAMING::REQUEST_MODEL(uParam0->f_38);
	STREAMING::REQUEST_MODEL(uParam0->f_39);
	if (STREAMING::HAS_MODEL_LOADED(uParam0->f_38) && STREAMING::HAS_MODEL_LOADED(uParam0->f_39))
	{
		return 1;
	}
	return 0;
}

void func_852(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)//Position - 0x195536
{
	Global_23150.f_8778 = iParam4;
	Global_23150.f_8774 = uParam0;
	Global_23150.f_8775 = uParam1;
	Global_23150.f_8776 = uParam2;
	Global_23150.f_8777 = iParam3;
}

int func_853()//Position - 0x195F6B
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_109))
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sLocal_109, false);
		iLocal_110 = 1;
		return GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sLocal_109);
	}
	return 1;
}

int func_854(var uParam0)//Position - 0x197297
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("armenian1")) > 0)
	{
		uParam0->f_201 = 1;
		uParam0->f_202 = 0;
		uParam0->f_203 = { 0f, 0f, 0f };
	}
	else if (uParam0->f_201)
	{
		if (__LIB_0__.func_78(uParam0->f_203, 0f, 0f, 0f, 0))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				uParam0->f_203 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			}
		}
		if (Global_78579)
		{
			uParam0->f_202 = 1;
		}
		else if (uParam0->f_202)
		{
			if (ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), uParam0->f_203 - Vector(3f, 0.75f, 0.75f), uParam0->f_203 + Vector(3f, 0.75f, 0.75f), false, true, 0))
			{
				return 1;
			}
			else
			{
				uParam0->f_201 = 0;
			}
		}
	}
	return 0;
}

int func_855(int iParam0, int iParam1)//Position - 0x1CC82A
{
	int iVar0;
	if (iParam0 == 153)
	{
		if ((((((((((((((((((__LIB_0__.func_137(110, -1) || __LIB_0__.func_137(111, -1)) || __LIB_0__.func_137(112, -1)) || __LIB_0__.func_137(25022, -1)) || __LIB_0__.func_137(25023, -1)) || __LIB_0__.func_137(25024, -1)) || __LIB_0__.func_137(25025, -1)) || __LIB_0__.func_137(25026, -1)) || __LIB_0__.func_137(25027, -1)) || __LIB_0__.func_137(25028, -1)) || __LIB_0__.func_137(25019, -1)) || __LIB_0__.func_137(25029, -1)) || __LIB_0__.func_137(25021, -1)) || __LIB_0__.func_137(25018, -1)) || __LIB_0__.func_137(25020, -1)) || __LIB_0__.func_137(25030, -1)) || __LIB_0__.func_137(25031, -1)) || __LIB_0__.func_137(32307, -1)) || __LIB_0__.func_137(32308, -1))
		{
			iVar0 = 1;
		}
	}
	if (iParam1 == joaat("MP_M_Freemode_01"))
	{
		switch (iParam0)
		{
			case 5:
			case 7:
			case 8:
			case 10:
			case 11:
			case 12:
			case 13:
			case 14:
			case 15:
			case 16:
			case 17:
			case 23:
			case 25:
			case 26:
			case 27:
			case 28:
			case 29:
			case 30:
			case 31:
			case 34:
			case 35:
			case 36:
			case 37:
			case 41:
			case 44:
			case 46:
			case 47:
			case 48:
			case 49:
			case 52:
			case 53:
			case 54:
			case 55:
			case 58:
			case 59:
			case 62:
			case 63:
			case 64:
			case 65:
			case 66:
			case 68:
			case 69:
			case 70:
			case 71:
			case 74:
			case 75:
			case 76:
			case 77:
			case 78:
			case 80:
			case 81:
			case 82:
			case 83:
			case 84:
			case 85:
			case 86:
			case 89:
			case 88:
			case 91:
			case 92:
			case 98:
			case 95:
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
			case 135:
			case 136:
			case 137:
			case 138:
			case 139:
			case 140:
			case 141:
			case 142:
			case 143:
			case 144:
			case 145:
			case 146:
			case 147:
			case 148:
			case 149:
			case 150:
			case 151:
			case 152:
			case 158:
			case 159:
			case 160:
			case 166:
			case 161:
			case 167:
			case 168:
			case 169:
			case 170:
			case 171:
			case 172:
			case 174:
			case 175:
			case 179:
			case 181:
			case 182:
			case 183:
			case 184:
			case 188:
			case 189:
			case 190:
			case 191:
			case 192:
			case 193:
			case 195:
			case 196:
			case 197:
			case 198:
			case 199:
			case 200:
			case 201:
			case 202:
			case 203:
			case 204:
			case 205:
			case 206:
			case 207:
			case 165:
			case 209:
			case 208:
			case 210:
			case 213:
			case 214:
			case 215:
			case 217:
			case 218:
			case 219:
			case 220:
			case 222:
			case 223:
			case 224:
			case 226:
			case 227:
			case 228:
			case 229:
			case 230:
			case 231:
			case 232:
			case 234:
			case 235:
			case 236:
			case 237:
			case 238:
			case 239:
				return 1;
				break;
			case 177:
			case 178:
				if (Global_262145.f_13393 /* Tunable: TURN_ON_VALENTINE_2016_CLOTHING */)
				{
					return 1;
				}
				break;
			case 153:
				if (!Global_262145.f_9396 /* Tunable: DISABLE_CHRISTMAS_CLOTHING */ || iVar0)
				{
					return 1;
				}
				break;
			case 154:
			case 155:
			case 156:
			case 157:
				if (!Global_262145.f_9396 /* Tunable: DISABLE_CHRISTMAS_CLOTHING */)
				{
					return 1;
				}
				break;
			case 176:
				if (Global_262145.f_12709 /* Tunable: XMAS2015_COSTUME */)
				{
					return 1;
				}
				break;
			case 211:
				if (Global_262145.f_19302 /* Tunable: ENABLE_2016_OUTFITS */)
				{
					return 1;
				}
				break;
			case 212:
				return 1;
				break;
			case 67:
			case 73:
			case 216:
			case 221:
				return 1;
				break;
		}
		switch (iParam0)
		{
			case 247:
			case 248:
			case 249:
			case 250:
			case 251:
			case 252:
			case 253:
			case 254:
			case 255:
			case 163:
			case 164:
			case 240:
			case 241:
			case 242:
			case 243:
			case 162:
			case 256:
			case 257:
			case 246:
			case 245:
			case 244:
			case 258:
			case 259:
			case 260:
			case 261:
			case 262:
			case 265:
			case 266:
			case 267:
			case 268:
			case 269:
			case 271:
			case 270:
				return 1;
				break;
		}
	}
	else if (iParam1 == joaat("MP_F_Freemode_01"))
	{
		switch (iParam0)
		{
			case 5:
			case 7:
			case 8:
			case 9:
			case 10:
			case 11:
			case 12:
			case 13:
			case 14:
			case 16:
			case 17:
			case 19:
			case 20:
			case 21:
			case 22:
			case 23:
			case 27:
			case 25:
			case 26:
			case 28:
			case 30:
			case 31:
			case 34:
			case 36:
			case 37:
			case 39:
			case 40:
			case 41:
			case 43:
			case 42:
			case 44:
			case 45:
			case 46:
			case 47:
			case 48:
			case 49:
			case 54:
			case 55:
			case 57:
			case 59:
			case 60:
			case 58:
			case 52:
			case 62:
			case 63:
			case 64:
			case 65:
			case 66:
			case 68:
			case 67:
			case 70:
			case 71:
			case 72:
			case 73:
			case 75:
			case 76:
			case 77:
			case 78:
			case 80:
			case 81:
			case 82:
			case 83:
			case 84:
			case 85:
			case 86:
			case 89:
			case 90:
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 98:
			case 88:
			case 111:
			case 112:
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
			case 103:
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
			case 135:
			case 136:
			case 137:
			case 138:
			case 139:
			case 140:
			case 141:
			case 142:
			case 143:
			case 144:
			case 145:
			case 146:
			case 147:
			case 148:
			case 149:
			case 150:
			case 151:
			case 152:
			case 158:
			case 159:
			case 160:
			case 161:
			case 165:
			case 166:
			case 168:
			case 169:
			case 170:
			case 171:
			case 172:
			case 173:
			case 167:
			case 174:
			case 175:
			case 185:
			case 180:
			case 186:
			case 187:
			case 181:
			case 182:
			case 183:
			case 184:
			case 188:
			case 189:
			case 190:
			case 191:
			case 192:
			case 193:
			case 194:
			case 197:
			case 198:
			case 199:
			case 200:
			case 201:
			case 202:
			case 203:
			case 204:
			case 205:
			case 206:
			case 207:
			case 74:
			case 209:
			case 195:
			case 208:
			case 210:
			case 69:
			case 213:
			case 214:
			case 215:
			case 216:
			case 217:
			case 218:
			case 219:
			case 221:
			case 222:
			case 223:
			case 224:
			case 225:
			case 226:
			case 227:
			case 228:
			case 229:
			case 230:
				return 1;
				break;
			case 177:
			case 178:
				if (Global_262145.f_13393 /* Tunable: TURN_ON_VALENTINE_2016_CLOTHING */)
				{
					return 1;
				}
				break;
			case 153:
				if (!Global_262145.f_9396 /* Tunable: DISABLE_CHRISTMAS_CLOTHING */ || iVar0)
				{
					return 1;
				}
				break;
			case 154:
			case 155:
			case 156:
			case 157:
				if (!Global_262145.f_9396 /* Tunable: DISABLE_CHRISTMAS_CLOTHING */)
				{
					return 1;
				}
				break;
			case 176:
				if (Global_262145.f_12709 /* Tunable: XMAS2015_COSTUME */)
				{
					return 1;
				}
				break;
			case 211:
				if (Global_262145.f_19302 /* Tunable: ENABLE_2016_OUTFITS */)
				{
					return 1;
				}
				break;
			case 212:
				return 1;
				break;
		}
		switch (iParam0)
		{
			case 231:
			case 232:
			case 233:
			case 234:
			case 235:
			case 236:
			case 237:
			case 238:
			case 239:
			case 247:
			case 248:
			case 249:
			case 250:
			case 251:
			case 252:
			case 253:
			case 254:
			case 255:
			case 163:
			case 164:
			case 240:
			case 241:
			case 242:
			case 243:
			case 162:
			case 256:
			case 257:
			case 246:
			case 245:
			case 244:
			case 258:
			case 259:
			case 260:
			case 261:
			case 262:
			case 265:
			case 266:
			case 267:
			case 268:
			case 269:
			case 271:
			case 270:
			case 272:
				return 1;
				break;
			}
	}
	return 0;
}

void func_856(var uParam0)//Position - 0x1CD5AF
{
	if (uParam0->f_5)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam0->f_4, 1000)))
			{
				PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/);
			}
			else
			{
				uParam0->f_5 = 0;
			}
		}
		else if ((MISC::GET_GAME_TIMER() - uParam0->f_3) < 1000)
		{
			PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/);
		}
		else
		{
			uParam0->f_5 = 0;
		}
	}
}

void func_857(var uParam0)//Position - 0x1CDA64
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (uParam0->f_228)
			{
				if (uParam0->f_5.f_7 != 2 || uParam0->f_46.f_9 > 2)
				{
					if (PED::HAS_PED_HEAD_BLEND_FINISHED(PLAYER::PLAYER_PED_ID()))
					{
						if (PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
						{
							PED::FINALIZE_HEAD_BLEND(PLAYER::PLAYER_PED_ID());
							uParam0->f_228 = 0;
						}
					}
				}
			}
			else if (uParam0->f_5.f_7 == 2 && uParam0->f_46.f_9 <= 2)
			{
				uParam0->f_228 = 1;
			}
		}
	}
	else
	{
		uParam0->f_228 = 0;
	}
}

void func_858(char* sParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, struct<4> Param11)//Position - 0x6688E
{
	int iVar0;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	iVar0 = SYSTEM::ROUND((fParam3 * IntToFloat(iLocal_133)));
	fParam3 = (SYSTEM::TO_FLOAT(iVar0) * (1f / IntToFloat(iLocal_133)));
	iVar0 = SYSTEM::ROUND(((fParam5 * IntToFloat(iLocal_133)) / 4f)) * 4;
	fParam5 = (SYSTEM::TO_FLOAT(iVar0) * (1f / IntToFloat(iLocal_133)));
	GRAPHICS::DRAW_SPRITE_ARX_WITH_UV(sParam0, sParam1, __LIB_11__.func_635(fParam2), fParam3, (fParam4 * fLocal_131), fParam5, fParam6, fParam7, fParam8, fParam9, fParam10, Param11.f_0, Param11.f_1, Param11.f_2, Param11.f_3, 1);
}

struct<2> func_859(struct<2> Param0, struct<2> Param1, float fParam2)//Position - 0x787F0
{
	return __LIB_3__.func_989(__LIB_11__.func_639(Param0, (1f - fParam2)), __LIB_11__.func_639(Param1, fParam2));
}

int func_860(int iParam0, int iParam1)//Position - 0x63C27
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 1)
		{
			if (iParam1 < 2)
			{
				return 1;
			}
			if (TASK::GET_SEQUENCE_PROGRESS(iParam0) == (iParam1 - 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_861(var uParam0)//Position - 0x63EB6
{
	char* sVar0;
	int iVar1;
	if (!PED::IS_PED_INJURED(*uParam0))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, "start_to_a1", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, "a1_pose", 3))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, "start_to_a1", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, uParam0->f_11, "start_to_a1") <= 0.4f)
			{
				sVar0 = "midway_fail_from_a1_to_start";
			}
			else
			{
				sVar0 = "a1_fail_to_start";
			}
		}
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, "a1_to_a2", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, "a2_pose", 3))
		{
			sVar0 = "a2_fail_to_start";
		}
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, "a2_to_a3", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, "a3_pose", 3))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, "a2_to_a3", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, uParam0->f_11, "a2_to_a3") <= 0.55f)
			{
				sVar0 = "a2_fail_to_start";
			}
			else
			{
				sVar0 = "a3_fail_to_start";
			}
		}
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, "a3_to_b4", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, "b4_pose", 3))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, "a3_to_b4", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, uParam0->f_11, "a3_to_b4") <= 0.625f)
			{
				sVar0 = "midway_fail_from_a3_to_start";
			}
			else
			{
				sVar0 = "b4_fail_to_start";
			}
		}
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, "start_to_c1", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, "c1_pose", 3))
		{
			sVar0 = "c1_fail_to_start";
		}
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, "c1_to_c2", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, "c2_pose", 3))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, "c1_to_c2", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, uParam0->f_11, "c1_to_c2") <= 0.45f)
			{
				sVar0 = "c1_fail_to_start";
			}
			else
			{
				sVar0 = "c2_fail_to_start";
			}
		}
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, "c2_to_c3", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, "c3_pose", 3))
		{
			sVar0 = "c3_fail_to_start";
		}
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, "c3_to_c4", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, "c4_pose", 3))
		{
			sVar0 = "c4_fail_to_start";
		}
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, "c4_to_c5", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, "c5_pose", 3))
		{
			sVar0 = "c5_fail_to_start";
		}
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, "c5_to_c6", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, "c6_pose", 3))
		{
			sVar0 = "c6_fail_to_start";
		}
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, "c6_to_c7", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, "c7_pose", 3))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, "c6_to_c7", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, uParam0->f_11, "c6_to_c7") <= 0.65f)
			{
				sVar0 = "c6_fail_to_start";
			}
			else
			{
				sVar0 = "c2_fail_to_start";
			}
		}
		TASK::CLEAR_SEQUENCE_TASK(&iVar1);
		TASK::OPEN_SEQUENCE_TASK(&iVar1);
		TASK::TASK_PLAY_ANIM_ADVANCED(0, uParam0->f_11, sVar0, uParam0->f_1, uParam0->f_4, 4f, -4f, -1, 528384, 0f, 2, 1);
		TASK::TASK_PLAY_ANIM_ADVANCED(0, uParam0->f_11, "start_pose", uParam0->f_1, uParam0->f_4, 4f, -8f, -1, 528385, 0f, 2, 1);
		TASK::CLOSE_SEQUENCE_TASK(iVar1);
		TASK::TASK_PERFORM_SEQUENCE(*uParam0, iVar1);
		TASK::CLEAR_SEQUENCE_TASK(&iVar1);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(*uParam0, false, false);
	}
}

void func_862(var uParam0)//Position - 0x642CB
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

void func_863(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x644CD
{
	if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 228 /*INPUT_SCRIPT_LT*/))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, "BUTTON_PRESSED");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(5);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, "BUTTON_DEPRESSED");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(5);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 229 /*INPUT_SCRIPT_RT*/))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, "BUTTON_PRESSED");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(7);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, "BUTTON_DEPRESSED");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(7);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, "SET_BUTTON_TARGET");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(5);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(uParam0->f_34);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(50);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, "SET_BUTTON_TARGET");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(7);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(uParam0->f_34);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(50);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_864(int iParam0)//Position - 0x645BD
{
	GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(*iParam0, "ADD_BUTTON_TO_LIST", SYSTEM::TO_FLOAT(5), -1f, -1f, -1f, -1f);
	GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(*iParam0, "ADD_BUTTON_TO_LIST", SYSTEM::TO_FLOAT(7), -1f, -1f, -1f, -1f);
	GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(*iParam0, "DRAW_BUTTONS");
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_PLAYER_INPUT_COLOUR");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(5);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_PLAYER_INPUT_COLOUR");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(7);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_865(int iParam0, int iParam1, int iParam2)//Position - 0x65421
{
	if (iParam0 >= iParam1 && iParam0 <= iParam2)
	{
		return 1;
	}
	return 0;
}

int func_866(int iParam0)//Position - 0x65469
{
	return SYSTEM::CEIL(((100f / 255f) * SYSTEM::TO_FLOAT(iParam0)));
}

float func_867(float fParam0, float fParam1)//Position - 0x656A7
{
	if (fParam0 == fParam1)
	{
		return fParam0;
	}
	else if (fParam0 > fParam1)
	{
		return fParam1;
	}
	else if (fParam0 < fParam1)
	{
		return fParam0;
	}
	return fParam0;
}

void func_868(var uParam0, int iParam1)//Position - 0x65D19
{
	int iVar0;
	if (!PED::IS_PED_INJURED(*uParam0))
	{
		if (!ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, "start_pose", 3))
		{
			if (iParam1 == 0)
			{
				TASK::TASK_PLAY_ANIM(*uParam0, uParam0->f_11, "start_pose", 4f, -8f, -1, 1, 0f, false, true, false);
			}
			else
			{
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
				{
					case 0:
						TASK::TASK_PLAY_ANIM_ADVANCED(0, uParam0->f_11, "fail_to_start_a", uParam0->f_1, uParam0->f_4, 1000f, -4f, -1, 528384, 0f, 2, 1);
						break;
					case 1:
						TASK::TASK_PLAY_ANIM_ADVANCED(0, uParam0->f_11, "fail_to_start_b", uParam0->f_1, uParam0->f_4, 1000f, -4f, -1, 528384, 0f, 2, 1);
						break;
					case 2:
						TASK::TASK_PLAY_ANIM_ADVANCED(0, uParam0->f_11, "fail_to_start_c", uParam0->f_1, uParam0->f_4, 1000f, -4f, -1, 528384, 0f, 2, 1);
						break;
				}
				TASK::TASK_PLAY_ANIM_ADVANCED(0, uParam0->f_11, "start_pose", uParam0->f_1, uParam0->f_4, 4f, -8f, -1, 528385, 0f, 2, 1);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(*uParam0, iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(*uParam0);
				PED::PLAY_FACIAL_ANIM(*uParam0, "fail_face", uParam0->f_11);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(*uParam0, false, false);
			}
		}
	}
}

void func_869(var uParam0)//Position - 0x67BDB
{
	if (!PED::IS_PED_INJURED(*uParam0))
	{
		if (uParam0->f_52 == 1)
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, "A1_POSE", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, "C1_POSE", 3))
			{
				PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(*uParam0, "A1ANDC1_FACE", uParam0->f_11);
				uParam0->f_52 = 0;
			}
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, "A2_POSE", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, "C2_POSE", 3))
			{
				PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(*uParam0, "A2ANDC2_FACE", uParam0->f_11);
				uParam0->f_52 = 0;
			}
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, "A3_POSE", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, "C3_POSE", 3))
			{
				PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(*uParam0, "A3ANDC3_FACE", uParam0->f_11);
				uParam0->f_52 = 0;
			}
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, "B4_POSE", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, "C4_POSE", 3))
			{
				PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(*uParam0, "B4ANDC4_FACE", uParam0->f_11);
				uParam0->f_52 = 0;
			}
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, "C5_POSE", 3))
			{
				PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(*uParam0, "C5_FACE", uParam0->f_11);
				uParam0->f_52 = 0;
			}
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, "C6_POSE", 3))
			{
				PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(*uParam0, "C6_FACE", uParam0->f_11);
				uParam0->f_52 = 0;
			}
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, "C7_POSE", 3))
			{
				PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(*uParam0, "C7_FACE", uParam0->f_11);
				uParam0->f_52 = 0;
			}
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, "C8_POSE", 3))
			{
				PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(*uParam0, "C8_FACE", uParam0->f_11);
				uParam0->f_52 = 0;
			}
		}
	}
}

int func_870()//Position - 0x6B2C9
{
	STREAMING::REQUEST_ANIM_DICT("missfam5_yoga");
	HUD::REQUEST_ADDITIONAL_TEXT("YOGA", 3);
	if (((STREAMING::HAS_ANIM_DICT_LOADED("missfam5_yoga") && HUD::HAS_ADDITIONAL_TEXT_LOADED(3)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FAM5_YOGA_01", false, -1)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FAM5_YOGA_02", false, -1))
	{
		return 1;
	}
	return 0;
}

int func_871(int iParam0)//Position - 0x7305A
{
	if ((((((((((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)) || __LIB_6__.func_769(iParam0, 0, 0)) || __LIB_6__.func_769(iParam0, 1, 0)) || __LIB_6__.func_769(iParam0, 2, 0)) || __LIB_0__.func_119(iParam0) != 145) || __LIB_0__.func_118(iParam0)) || __LIB_0__.func_117(iParam0)) || __LIB_0__.func_108(iParam0)) || __LIB_18__.func_175(iParam0)) || !__LIB_19__.func_956(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (__LIB_0__.func_117(iParam0))
		{
		}
		if (__LIB_0__.func_117(iParam0))
		{
		}
		if (__LIB_6__.func_769(iParam0, 0, 0))
		{
		}
		if (__LIB_6__.func_769(iParam0, 1, 0))
		{
		}
		if (__LIB_6__.func_769(iParam0, 2, 0))
		{
		}
		if (__LIB_0__.func_119(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_872(int iParam0, int iParam1)//Position - 0x6FD2B
{
	if (__LIB_0__.func_39(14) && !__LIB_0__.func_146(iParam0))
	{
		return 0;
	}
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_32209 != 0 && !Global_78319)
	{
		return 0;
	}
	if (__LIB_0__.func_145(&Global_4541529))
	{
		if (__LIB_6__.func_822(&Global_4541529, iParam0))
		{
			return 0;
		}
		if (__LIB_24__.func_935(&Global_4541529, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!PLAYER::GIVE_ACHIEVEMENT_TO_PLAYER(iParam0))
		{
			return 0;
		}
		if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_873(int iParam0, bool bParam1)//Position - 0x72852
{
	bool bVar0;
	bool bVar1;
	if (!iParam0->f_39)
	{
		iParam0->f_7 = 4;
		iParam0->f_39 = 1;
	}
	if ((bParam1 != 0 && bParam1 != 2) && bParam1 != 1)
	{
	}
	else
	{
		bVar0 = iParam0->f_34[bParam1] == 2;
		if (__LIB_0__.func_386(__LIB_24__.func_941()) != bParam1 || bVar0)
		{
			bVar1 = false;
			if ((bVar0 || iParam0->f_24[bParam1] != 0) || ((__LIB_6__.func_832(bParam1) && __LIB_18__.func_194(bParam1)) && !iParam0->f_18[bParam1]))
			{
				if (!iParam0->f_23)
				{
					if (!PED::IS_PED_INJURED((*iParam0)[bParam1]) || bVar0)
					{
						if (iParam0->f_34[bParam1] != 1 && iParam0->f_34[bParam1] != 3)
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
			else if (!((BitTest(Global_113386.f_9085.f_2[27 /*3*/], 1) && !Global_3) && !__LIB_0__.func_2(0)))
			{
				if (iParam0->f_23)
				{
					bVar1 = true;
				}
			}
			if (bVar1)
			{
				iParam0->f_7 = bParam1;
				return 1;
			}
		}
	}
	iParam0->f_39 = 0;
	return 0;
}

void func_874(struct<3> Param0, struct<3> Param1, float fParam2, struct<3> Param3, float fParam4, struct<3> Param5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)//Position - 0x995FD
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	int iVar7;
	int iVar8;
	int iVar9;
	if (bParam7)
	{
		bParam7 = false;
	}
	bVar2 = true;
	iVar3 = 0;
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, false);
			iVar3 = 1;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
		{
			if (bParam10)
			{
				__LIB_0__.func_89(iVar0);
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, Param0, Param1, fParam2, false, true, 0))
			{
				bVar1 = true;
			}
			else
			{
				Var6 = { ENTITY::GET_ENTITY_COORDS(iVar0, true) };
				if ((Var6.f_2 > Param0.f_2 && Var6.f_2 < Param1.f_2) || (Var6.f_2 > Param1.f_2 && Var6.f_2 < Param0.f_2))
				{
					if (__LIB_6__.func_824(iVar0, Param0, Param1, fParam2))
					{
						bVar1 = true;
					}
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("taxi")))
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) != PLAYER::PLAYER_PED_ID() && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) != 0)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0 + Param1 / Vector(2f, 2f, 2f), ENTITY::GET_ENTITY_COORDS(iVar0, true), true) < 20f)
						{
							bVar1 = true;
							bVar2 = false;
						}
					}
				}
			}
			if (bParam8)
			{
				if (__LIB_6__.func_836(iVar0, __LIB_24__.func_941(), 1))
				{
					bVar1 = false;
				}
			}
			if (bVar1)
			{
				if (!__LIB_0__.func_86(Param5))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
					{
						iVar7 = ENTITY::GET_ENTITY_MODEL(iVar0);
						VEHICLE::GET_VEHICLE_SIZE(iVar0, &Var4, &Var5);
						if (VEHICLE::IS_THIS_MODEL_A_HELI(iVar7))
						{
							Param5.f_0 = (Param5.f_0 + 3f);
							Param5.f_1 = (Param5.f_1 + 3f);
						}
						if (((iVar7 == joaat("zentorno") || iVar7 == joaat("btype")) || iVar7 == joaat("dubsta3")) || iVar7 == joaat("monster"))
						{
							Param5 = { Param5 * Vector(1.1f, 1.1f, 1.1f) };
						}
						else if (iVar7 == joaat("t20") || iVar7 == joaat("virgo"))
						{
							Param5 = { Param5 * Vector(1.2f, 1.2f, 1.2f) };
						}
						if ((Var5.f_0 - Var4.f_0) > Param5.f_0)
						{
							bVar2 = false;
						}
						else if ((Var5.f_1 - Var4.f_1) > Param5.f_1)
						{
							bVar2 = false;
						}
						else if ((Var5.f_2 - Var4.f_2) > Param5.f_2)
						{
							bVar2 = false;
						}
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
				{
					if (bVar2)
					{
						MISC::CLEAR_AREA_OF_VEHICLES(Param3, 5f, false, false, false, false, false, false, 0);
						ENTITY::SET_ENTITY_HEADING(iVar0, fParam4);
						ENTITY::SET_ENTITY_COORDS(iVar0, Param3, true, false, false, true);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 5f);
						if (bParam9)
						{
							VEHICLE::SET_VEHICLE_ENGINE_ON(iVar0, false, true, false);
							VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar0, true);
						}
					}
					else
					{
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0) || !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, true))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
						}
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false))
						{
							ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iVar0, true), true, false, false, true);
						}
						VEHICLE::DELETE_VEHICLE(&iVar0);
					}
				}
			}
			if (bParam6)
			{
				MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(Param0, Param1, fParam2, false, false, false, false, false, 0, 0);
			}
			if (iVar3 == 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar0);
					}
				}
			}
		}
		else
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, false);
			}
			iVar8 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar8) && !PED::IS_PED_INJURED(iVar8))
			{
				ENTITY::SET_ENTITY_COORDS(iVar8, ENTITY::GET_ENTITY_COORDS(iVar8, true), true, false, false, true);
			}
			iVar9 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iVar0));
			if (iVar9 <= 2)
			{
				iVar8 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar8) && !PED::IS_PED_INJURED(iVar8))
				{
					ENTITY::SET_ENTITY_COORDS(iVar8, ENTITY::GET_ENTITY_COORDS(iVar8, true), true, false, false, true);
				}
			}
			if (iVar9 <= 4)
			{
				iVar8 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 1, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar8) && !PED::IS_PED_INJURED(iVar8))
				{
					ENTITY::SET_ENTITY_COORDS(iVar8, ENTITY::GET_ENTITY_COORDS(iVar8, true), true, false, false, true);
				}
				iVar8 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 2, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar8) && !PED::IS_PED_INJURED(iVar8))
				{
					ENTITY::SET_ENTITY_COORDS(iVar8, ENTITY::GET_ENTITY_COORDS(iVar8, true), true, false, false, true);
				}
			}
			VEHICLE::DELETE_VEHICLE(&iVar0);
		}
	}
}

int func_875(int iParam0)//Position - 0x9FD52
{
	if (__LIB_0__.func_279(PLAYER::PLAYER_ID()) || __LIB_0__.func_278(PLAYER::PLAYER_ID()))
	{
		if (__LIB_24__.func_933(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_876(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int* iParam5, char* sParam6, char* sParam7)//Position - 0x35F1
{
	int iVar0;
	__LIB_0__.func_538(0);
	if (*uParam0)
	{
		switch (*iParam4)
		{
			case 0:
				*iParam5 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("MIDSIZED_MESSAGE");
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam5))
				{
					iVar0 = AUDIO::GET_SOUND_ID();
					if (iParam3 == 6)
					{
						AUDIO::PLAY_SOUND_FRONTEND(iVar0, "PEYOTE_COMPLETED", "HUD_AWARDS", true);
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(iVar0, "COLLECTED", "HUD_AWARDS", true);
					}
					*iParam4++;
				}
				break;
			case 1:
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam5, "SHOW_SHARD_MIDSIZED_MESSAGE");
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam6);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam7);
				HUD::ADD_TEXT_COMPONENT_INTEGER(__LIB_18__.func_209(iParam3));
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				*uParam2 = MISC::GET_GAME_TIMER();
				*iParam4++;
				break;
			case 2:
				if ((MISC::GET_GAME_TIMER() - *uParam2) > 7000)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam5, "SHARD_ANIM_OUT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0.33f);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					*iParam4++;
				}
				else if (!__LIB_0__.func_511())
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam5))
					{
						__LIB_0__.func_538(1);
						GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*iParam5, 100, 100, 100, 255, 0);
					}
				}
				break;
			case 3:
				if ((MISC::GET_GAME_TIMER() - *uParam2) > 7500)
				{
					*iParam4++;
				}
				else if (!__LIB_0__.func_511())
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam5))
					{
						__LIB_0__.func_538(1);
						GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*iParam5, 100, 100, 100, 255, 0);
					}
				}
				break;
			case 4:
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam5))
				{
					GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam5);
				}
				__LIB_0__.func_538(0);
				*uParam1 = 0;
				*uParam0 = 0;
				*iParam4 = 0;
				break;
			}
	}
}

void func_877(var uParam0, var uParam1, int iParam2)//Position - 0x3B3D
{
	int iVar0;
	iVar0 = (__LIB_0__.func_535(*uParam0) + iParam2);
	__LIB_0__.func_539(&((uParam1[iParam2 /*11*/])->f_1));
	__LIB_0__.func_523(&((uParam1[iParam2 /*11*/])->f_2));
	(uParam1[iParam2 /*11*/])->f_1 = 0;
	(uParam1[iParam2 /*11*/])->f_10 = 0;
	__LIB_0__.func_543(&(uParam0->f_1), iParam2, 1);
	if (*uParam0 == 1 || *uParam0 == 0)
	{
		__LIB_0__.func_542(*uParam0, iParam2, 1);
	}
	PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 200, 250);
	STATS::STAT_INCREMENT(uParam0->f_6, 1f);
	if (bLocal_41)
	{
		__LIB_18__.func_212(&(uParam0->f_1), iParam2);
	}
	else
	{
		__LIB_18__.func_211(&(uParam0->f_1));
	}
	__LIB_18__.func_210();
	STATS::PLAYSTATS_ACQUIRED_HIDDEN_PACKAGE(iVar0);
	__LIB_0__.func_540(1, 0);
	__LIB_0__.func_533();
	uParam0->f_11 = 1;
}

int func_878(char* sParam0, int iParam1, bool bParam2)//Position - 0xB6A7
{
	Global_21606 = 0;
	if (Global_21605 == 0 || Global_21607 == 2)
	{
		if (Global_21605 != 0)
		{
			if (iParam1 > Global_21607)
			{
				if (Global_21612 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_20266.f_1 = 3;
					Global_21605 = 0;
					Global_21606 = 1;
					Global_21658 = 0;
					Global_21601 = 0;
					Global_21602 = 0;
					Global_21616 = 0;
					Global_21615 = 0;
					Global_20265 = 0;
				}
				else
				{
					__LIB_0__.func_74();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			return 0;
		}
		if (__LIB_0__.func_191(8, -1))
		{
			return 0;
		}
		Global_21681 = { Global_21675 };
		__LIB_0__.func_209();
		Global_20894 = { Global_21059 };
		Global_21611 = Global_21612;
		Global_21618 = Global_21619;
		Global_2883586 = Global_2883585;
		Global_21620 = { Global_21636 };
		Global_21613 = Global_21614;
		Global_22595 = Global_22596;
		Global_22603 = { Global_22609 };
		Global_22597 = Global_22598;
		Global_22599 = Global_22600;
		Global_22601 = Global_22602;
		Global_21224.f_370 = Global_22594;
		Global_21224.f_368 = Global_22592;
		Global_21224.f_369 = Global_22593;
		Global_21601 = Global_21602;
		if (Global_21611)
		{
			MISC::CLEAR_BIT(&Global_8136, 20);
			MISC::CLEAR_BIT(&Global_8137, 17);
			MISC::CLEAR_BIT(&Global_8138, 0);
			if (bParam2)
			{
				__LIB_24__.func_942();
				if (Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_20266.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_20232 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (__LIB_0__.func_208())
				{
					return 0;
				}
				if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE")))
				{
					return 0;
				}
				if (!Global_78319)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
					if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
					{
						return 0;
					}
				}
			}
			if (__LIB_0__.func_73())
			{
				return 0;
			}
			else
			{
				switch (Global_20266.f_1)
				{
					case 7:
						return 0;
						break;
					case 8:
						return 0;
						break;
					case 9:
						break;
					case 10:
						break;
					default:
						break;
				}
				if (BitTest(Global_8136, 9))
				{
					return 0;
				}
			}
			__LIB_0__.func_207();
			Global_21615 = bParam2;
		}
		Global_21607 = iParam1;
		StringCopy(&Global_21224, sParam0, 24);
		Global_20471 = 0;
		__LIB_0__.func_206();
		__LIB_7__.func_265();
		return 1;
	}
	if (Global_21605 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_21607 || iParam1 == Global_21607)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		__LIB_0__.func_74();
	}
	return 0;
}

void func_879(var uParam0)//Position - 0x40884
{
	struct<2> Var0;
	struct<2> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	__LIB_0__.func_985(uParam0);
	__LIB_0__.func_471(&iVar2, &iVar3, &iVar4, &iVar5, 0);
	Var0.f_0 = (SYSTEM::TO_FLOAT(iVar2) / 128f);
	Var0.f_1 = (SYSTEM::TO_FLOAT(iVar3) / -128f);
	Var1.f_0 = (SYSTEM::TO_FLOAT(iVar4) / 128f);
	Var1.f_1 = (SYSTEM::TO_FLOAT(iVar5) / -128f);
	__LIB_18__.func_232(uParam0, Var0.f_0, Var0.f_1);
	__LIB_18__.func_231(uParam0, Var1.f_0, Var1.f_1);
	__LIB_0__.func_980(uParam0);
	if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 204 /*INPUT_FRONTEND_Y*/))
	{
		__LIB_0__.func_979(uParam0, 3, 1);
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 203 /*INPUT_FRONTEND_X*/))
	{
		__LIB_0__.func_979(uParam0, 2, 1);
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
	{
		__LIB_0__.func_979(uParam0, 2, 1);
	}
}

Vector3 func_880(var uParam0, bool bParam1, bool bParam2)//Position - 0x41436
{
	struct<3> Var0;
	Var0 = { __LIB_0__.func_998(bParam2, 0.22f, 0.676f, 0.533f, 0.22f, 0.5f, 1.066f) };
	if (bParam1)
	{
		Var0 = { 0.06f, 0.516f, 0.533f };
	}
	else
	{
		Var0 = { 0.22f, 0.676f, 0.533f };
		Var0.f_0 = (Var0.f_0 * -1f);
		Var0.f_1 = (Var0.f_1 * -1f);
	}
	return __LIB_18__.func_235(uParam0, Var0);
}

int func_881(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0xD9B
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	bVar0 = false;
	if (!__LIB_0__.func_112())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(__LIB_0__.func_5()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4535607 = 1;
			return 0;
		}
		if (Global_2726699)
		{
			if (iParam3 == joaat("CATEGORY_WEAPON_AMMO") || iParam3 == joaat("CATEGORY_MART"))
			{
				Global_4535608 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		if (Global_4534105[iVar2 /*85*/].f_66.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 15;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_BEGIN_SERVICE(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar4))
		{
			*uParam0 = __LIB_18__.func_241(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4534105[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4534105[*uParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4535592 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4535606 = 1;
			Global_4535609 = iParam4;
			Global_4535611 = iParam3;
			Global_4535612 = 1;
			Global_4535610 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4535609 = iParam4;
			Global_4535611 = iParam3;
			Global_4535612 = 1;
			Global_4535610 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			__LIB_0__.func_677(1, iParam4);
			Global_4535606 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			__LIB_24__.func_952(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

Vector3 func_882(int iParam0, bool bParam1)//Position - 0x4810
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
			break;
		case 0:
			return -821.9946f, -187.1776f, 36.5689f;
			break;
		case 1:
			return 133.5702f, -1710.918f, 28.2916f;
			break;
		case 2:
			return -1287.0822f, -1116.5576f, 5.9901f;
			break;
		case 3:
			return 1933.1191f, 3726.079f, 31.8444f;
			break;
		case 4:
			return 1208.3335f, -470.917f, 65.208f;
			break;
		case 5:
			return -30.7448f, -148.4921f, 56.0765f;
			break;
		case 6:
			return -280.8165f, 6231.7705f, 30.6955f;
			break;
		case 7:
			return 80.665f, -1391.6694f, 28.3761f;
			break;
		case 8:
			return 1687.8812f, 4820.55f, 41.0096f;
			break;
		case 9:
			return 419.531f, -807.5787f, 28.4896f;
			break;
		case 10:
			return -1094.0487f, 2704.1707f, 18.0873f;
			break;
		case 11:
			return 1197.9722f, 2704.2205f, 37.1572f;
			break;
		case 12:
			return -818.6218f, -1077.533f, 10.3282f;
			break;
		case 13:
			return -0.2361f, 6516.0454f, 30.8684f;
			break;
		case 14:
			return -1199.8092f, -776.6886f, 16.3237f;
			break;
		case 15:
			return 618.1857f, 2752.5667f, 41.0881f;
			break;
		case 16:
			return 126.6853f, -212.5027f, 53.5578f;
			break;
		case 17:
			return -3168.9663f, 1055.2869f, 19.8632f;
			break;
		case 18:
			return -715.3598f, -155.7742f, 36.4105f;
			break;
		case 19:
			return -158.2199f, -304.9663f, 38.735f;
			break;
		case 20:
			return -1455.0045f, -233.1862f, 48.7936f;
			break;
		case 21:
			return -1335.973f, -1278.5549f, 3.8598f;
			break;
		case 22:
			return 321.6098f, 179.4165f, 102.5865f;
			break;
		case 23:
			return 1861.6853f, 3750.0798f, 32.0318f;
			break;
		case 24:
			return -290.1603f, 6199.0947f, 30.4871f;
			break;
		case 25:
			return -1153.9481f, -1425.0186f, 3.9544f;
			break;
		case 26:
			return 1322.4547f, -1651.1252f, 51.1885f;
			break;
		case 27:
			return -3169.4204f, 1074.7272f, 19.8343f;
			break;
		case 28:
			return 17.6804f, -1114.288f, 28.797f;
			break;
		case 29:
			return 1697.9788f, 3753.2002f, 33.7053f;
			break;
		case 30:
			return 245.2711f, -45.8126f, 68.941f;
			break;
		case 31:
			return 844.1248f, -1025.5707f, 27.1948f;
			break;
		case 32:
			return -325.8904f, 6077.0264f, 30.4548f;
			break;
		case 33:
			return -664.2178f, -943.3646f, 20.8292f;
			break;
		case 34:
			return -1313.9485f, -390.9637f, 35.592f;
			break;
		case 35:
			return -1111.2375f, 2688.4626f, 17.6131f;
			break;
		case 36:
			return -3165.2307f, 1082.8551f, 19.8438f;
			break;
		case 37:
			return 2569.6116f, 302.576f, 107.7349f;
			break;
		case 38:
			return 811.8699f, -2149.1016f, 28.6363f;
			break;
		case 39:
			return -1147.3138f, -1992.4344f, 12.1803f;
			break;
		case 40:
			return 724.524f, -1089.081f, 21.1692f;
			break;
		case 41:
			return -354.5272f, -135.4011f, 38.185f;
			break;
		case 42:
			return 113.2615f, 6624.2803f, 30.7871f;
			break;
		case 43:
			return 1174.7074f, 2644.4497f, 36.7552f;
			break;
		case 44:
			if (bParam1)
			{
				return -211.5f, -1324.2f, 30.296f;
			}
			else
			{
				return -205.6654f, -1311.1127f, 30.296f;
			}
			break;
		case 45:
			return __LIB_18__.func_182(Global_102568);
			break;
		case 46:
			if (Global_1853185 != __LIB_0__.func_160())
			{
				if (__LIB_0__.func_337(Global_1853185))
				{
					return __LIB_24__.func_950(2, 2);
				}
				else if (__LIB_0__.func_333(Global_1853185))
				{
					return __LIB_24__.func_950(45, 3);
				}
				else
				{
					return 1000000f, 1000000f, 1000000f;
				}
			}
			else
			{
				return 1000000f, 1000000f, 1000000f;
			}
			break;
		case 47:
			return 510.1f, 4749.5f, -69f;
			break;
		case 48:
			return -1422.1969f, -3015.8027f, -79.1603f;
			break;
		case 49:
			return 203.0799f, 5200.189f, -89.6f;
			break;
		case 52:
			return 2714.5466f, -354.2701f, -55.1867f;
			break;
		case 50:
			return Global_1966112;
			break;
		case 51:
			return 1100f, 220f, -50f;
			break;
		case 53:
			return 1560f, 400f, -50f;
			break;
		case 54:
			return -2159.901f, 1075.2125f, -25.361736f;
			break;
		case 55:
			return -2194.1226f, 1103.8047f, -24.2451f;
			break;
		case 56:
			switch (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_6)
			{
				case 155:
					return 379.4285f, -53.6067f, 111.7088f;
					break;
				case 156:
					return -1029.1659f, -426.3766f, 72.2069f;
					break;
				case 157:
					return -581.9924f, -721.3945f, 121.3509f;
					break;
				case 158:
					return -1013.7179f, -768.3539f, 69.4942f;
					break;
			}
			return 1000000f, 1000000f, 1000000f;
			break;
		case 57:
			return -1010f, -70f, -100f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_883(int iParam0)//Position - 0xE12
{
	int iVar0;
	if (__LIB_0__.func_527())
	{
		iVar0 = 0;
		while (iVar0 < 58)
		{
			if (__LIB_0__.func_299(iVar0) == iParam0)
			{
				if (__LIB_20__.func_674(iVar0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_884(struct<3> Param0, float fParam1, float fParam2)//Position - 0xC18D
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	fVar4 = 99999.9f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar3 = iVar0;
		if (__LIB_24__.func_958(iVar3))
		{
			Var1 = { __LIB_0__.func_85(iVar3) };
			fVar5 = SYSTEM::VDIST(Param0, Var1);
			if (fVar5 < fParam1)
			{
				if (fVar5 < fVar4)
				{
					fVar4 = fVar5;
				}
				iVar2++;
			}
		}
		iVar0++;
	}
	*fParam2 = fVar4;
	return iVar2;
}

int func_885(struct<3> Param0, var uParam1)//Position - 0xEB9D
{
	int iVar0;
	int iVar1;
	int iVar2;
	*uParam1 = -1;
	iVar2 = __LIB_7__.func_135(Param0, 0);
	if (!iVar2 == -1)
	{
		iVar0 = 83;
		while (iVar0 <= 87)
		{
			iVar1 = iVar0;
			if (__LIB_19__.func_459(iVar1))
			{
				if (__LIB_7__.func_135(Global_1946250.f_533[iVar0 /*3*/], 0) == iVar2)
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

int func_886(struct<12> Param0)//Position - 0x12DF2
{
	struct<12> Var0[1];
	int iVar1;
	Var0[0 /*12*/] = { Param0 };
	Var0[0 /*12*/].f_9 = 1;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (Global_2667225.f_45[iVar1 /*12*/].f_9 == 1)
		{
			if (!__LIB_18__.func_317(Global_2667225.f_45[iVar1 /*12*/], &Var0))
			{
				return 0;
			}
		}
		iVar1++;
	}
	return 1;
}

int func_887(int iParam0)//Position - 0x27389
{
	int iVar0;
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		iVar0 = Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28;
		if (iVar0 != -1 && iVar0 < 4)
		{
			if (__LIB_24__.func_938(iVar0) != -1 && __LIB_24__.func_938(iVar0) != 0)
			{
				return 1;
			}
		}
	}
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_M_Freemode_01"))
		{
			if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11) == 15)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_888(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x77D5C
{
	struct<3> Var0;
	int iVar1;
	struct<3> Var2;
	float fVar3;
	float fVar4;
	char cVar5[128];
	struct<2> Var6;
	struct<3> Var7;
	if (!MISC::IS_PS3_VERSION() && !MISC::IS_XBOX360_VERSION())
	{
		return;
	}
	Var0 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
	if (MISC::ABSF(Var0.f_0) >= 45f)
	{
		return;
	}
	if (!(iParam2 > 2 && iParam2 < 5))
	{
		return;
	}
	if (iParam3 == 0)
	{
		return;
	}
	fVar3 = -1f;
	fVar4 = -1f;
	iVar1 = 0;
	while (iVar1 < 8)
	{
		__LIB_0__.func_823(&Var7, 3);
		Var7.f_0 = 1;
		switch (iVar1)
		{
			case 0:
				Var7.f_1 = 0.55f;
				Var7.f_2 = 0.55f;
				break;
			case 1:
				Var7.f_1 = 0.475f;
				Var7.f_2 = 0.475f;
				break;
			case 2:
				Var7.f_1 = 0.475f;
				Var7.f_2 = 0.475f;
				break;
			case 3:
				Var7.f_1 = 0.4f;
				Var7.f_2 = 0.4f;
				break;
			case 4:
				Var7.f_1 = 0.4f;
				Var7.f_2 = 0.4f;
				break;
			case 5:
				Var7.f_1 = 0.475f;
				Var7.f_2 = 0.475f;
				break;
			case 6:
				Var7.f_1 = 0.4f;
				Var7.f_2 = 0.4f;
				break;
			case 7:
				Var7.f_1 = 0.4f;
				Var7.f_2 = 0.4f;
				break;
		}
		cVar5 = { *(uParam1[iVar1 /*16*/]) };
		if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar1]))
		{
			if (!ENTITY::IS_ENTITY_DEAD((*uParam0)[iVar1], false))
			{
				Var2 = { PED::GET_PED_BONE_COORDS((*uParam0)[iVar1], 24818, 0f, 0f, 0f) };
				if (iVar1 == 5)
				{
					if (__LIB_7__.func_43((*uParam0)[iVar1]))
					{
						Var2.f_2 = (Var2.f_2 + 0.25f);
					}
					else
					{
						Var2.f_2 = (Var2.f_2 + 0.22f);
					}
				}
				else if (__LIB_7__.func_43((*uParam0)[iVar1]))
				{
					Var2.f_2 = (Var2.f_2 + 0.25f);
				}
				else
				{
					Var2.f_2 = (Var2.f_2 + 0.22f);
				}
				GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Var2, &fVar3, &fVar4);
				if (fVar3 != -1f && fVar4 != -1f)
				{
					Var6.f_0 = fVar3;
					Var6.f_1 = fVar4;
				}
				__LIB_18__.func_279(&Var6, &Var7, &cVar5, "", 1, 0);
			}
		}
		iVar1++;
	}
}

void func_889(int* iParam0, bool bParam1)//Position - 0x3146F
{
	if (__LIB_0__.func_919())
	{
		return;
	}
	if (!__LIB_0__.func_154(PLAYER::PLAYER_ID(), 1, 1))
	{
		bParam1 = false;
	}
	if (!Global_1574971)
	{
		if (bParam1)
		{
			if (!__LIB_0__.func_918(Global_4718592.f_168757))
			{
				if (GRAPHICS::GET_REQUESTINGNIGHTVISION() || GRAPHICS::GET_USINGNIGHTVISION())
				{
					__LIB_0__.func_917(1);
					__LIB_18__.func_775(1, 2);
				}
				__LIB_6__.func_885(&(iParam0->f_1203), &(iParam0->f_1200));
			}
		}
		Global_1574971 = 1;
	}
}

int func_890(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x480E2
{
	int iVar0;
	int iVar1;
	if (__LIB_6__.func_948(iParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4718592.f_111249[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((__LIB_6__.func_948(PLAYER::PLAYER_ID()) || (__LIB_0__.func_80() && __LIB_0__.func_728())) && !BitTest(Global_2815059.f_4660, 31)) && !bParam4)
	{
		iVar1 = __LIB_0__.func_727();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != -1)
				{
					if (__LIB_0__.func_154(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_4718592.f_111249[iParam1] != -1)
							{
								return __LIB_18__.func_275(iParam1, iParam0, 0);
							}
							else
							{
								return __LIB_24__.func_963(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return __LIB_24__.func_963(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_4718592.f_111249[iParam1] != -1)
				{
					return __LIB_18__.func_275(iParam1, iParam0, 0);
				}
				else
				{
					return __LIB_19__.func_520(0, -1, 0);
				}
			}
			else
			{
				return __LIB_19__.func_520(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_4718592.f_111249[iParam1] != -1)
		{
			return __LIB_18__.func_275(iParam1, iParam0, 0);
		}
		else
		{
			return __LIB_24__.func_963(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return __LIB_24__.func_963(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

void func_891(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x4EE80
{
	if (bParam1)
	{
		if (!__LIB_17__.func_527(iParam0))
		{
			__LIB_21__.func_639(iParam0, 1);
			if (bParam4 == 1 && Global_1931426 == 0)
			{
			}
		}
		if (bParam4)
		{
			if (__LIB_7__.func_74(iParam0) == 0)
			{
				__LIB_7__.func_69(iParam3, __LIB_1__.func_620(iParam0, iParam2), __LIB_1__.func_619(iParam0, 3, iParam2), __LIB_1__.func_618(iParam0, 3, iParam2), __LIB_1__.func_617(iParam0, 3, iParam2), __LIB_0__.func_238(iParam0, 3, iParam2), 0, 0, 0, -1, 0);
				__LIB_1__.func_626(iParam0, 1);
			}
		}
	}
	else
	{
		if (__LIB_17__.func_527(iParam0))
		{
			__LIB_21__.func_639(iParam0, 0);
			if (bParam4 == 1 && Global_1931426 == 0)
			{
			}
		}
		if (__LIB_7__.func_74(iParam0) == 1)
		{
			__LIB_1__.func_626(iParam0, 0);
		}
	}
}

void func_892(int iParam0)//Position - 0x52269
{
	int iVar0;
	if (__LIB_0__.func_154(PLAYER::PLAYER_ID(), 0, 1))
	{
		iVar0 = PLAYER::PLAYER_ID();
		if (__LIB_1__.func_556(1301, -1, 0) == 0)
		{
			Global_2689235[iVar0 /*453*/].f_257 = 2;
		}
		else
		{
			Global_2689235[iVar0 /*453*/].f_257 = __LIB_1__.func_556(1301, -1, 0);
		}
		Global_2689235[iVar0 /*453*/].f_258 = __LIB_1__.func_556(1302, -1, 0);
		Global_2689235[iVar0 /*453*/].f_260 = __LIB_1__.func_556(1880, -1, 0);
		Global_2689235[iVar0 /*453*/].f_261 = iParam0;
		Global_2689235[iVar0 /*453*/].f_259 = __LIB_18__.func_300();
	}
}

void func_893(struct<3> Param0, float fParam1, float fParam2, int iParam3, float fParam4, int iParam5, int iParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)//Position - 0x4A76
{
	struct<28> Var0;
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2676213.f_6))
	{
		if (!Global_2676213.f_6 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	if (SYSTEM::VMAG(Param0) == 0f)
	{
		return;
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(Global_2676213.f_6))
	{
		Global_2676213.f_6 = SCRIPT::GET_ID_OF_THIS_THREAD();
	}
	Var0.f_6 = Global_2676213.f_6;
	Var0 = { Param0 };
	Var0.f_5 = fParam1;
	Var0.f_4 = fParam2;
	Var0.f_7 = iParam3;
	Var0.f_3 = fParam4;
	Var0.f_8 = iParam6;
	Var0.f_9 = iParam5;
	Var0.f_10 = 0;
	Var0.f_11 = { 0f, 0f, 0f };
	Var0.f_14 = { 0f, 0f, 0f };
	Var0.f_17 = 0f;
	Var0.f_21 = fParam7;
	Var0.f_22 = iParam8;
	if (__LIB_8__.func_136(PLAYER::PLAYER_ID()))
	{
		if (iParam11 || iParam5)
		{
			Var0.f_23 = 1;
		}
		else
		{
			Var0.f_23 = 0;
		}
	}
	else
	{
		Var0.f_23 = 0;
	}
	if (Var0.f_21 < 1f)
	{
		Var0.f_21 = 1f;
	}
	Var0.f_24 = iParam9;
	Var0.f_26 = iParam10;
	Var0.f_27 = iParam12;
	Global_2676213 = { Var0 };
}

void func_894(int iParam0, struct<3> Param1, int iParam2, var* uParam3, float* fParam4, var uParam5, bool bParam6, int iParam7, int iParam8, float fParam9, float fParam10, bool bParam11)//Position - 0xA384
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		*iParam2 = MISC::GET_RANDOM_INT_IN_RANGE((1 + iParam0), (40 + iParam0));
		if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(Param1, *iParam2, uParam3, fParam4, &iParam7, iParam8, fParam9, fParam10))
		{
			if (SYSTEM::VMAG(*uParam3) > 0f)
			{
				*uParam3 = { __LIB_24__.func_992(*uParam3, fParam4, iParam7, uParam5->f_9, *uParam5, bParam6, uParam5->f_11, uParam5->f_34, &bParam11, 0, 0, uParam5->f_51, uParam5->f_60) };
				if (!__LIB_2__.func_38(*uParam3))
				{
					iVar0 = 999;
					return;
				}
			}
		}
		iVar0++;
	}
}

void func_895(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x63976
{
	if (Global_2703735.f_1571.f_703.f_16 != __LIB_0__.func_160())
	{
		if (BitTest(Global_2689235[Global_2703735.f_1571.f_703.f_16 /*453*/].f_416, 0) && __LIB_24__.func_995())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2674954 = 0;
	}
	Global_2667225.f_490 = iParam0;
	Global_2667225.f_490.f_1 = SCRIPT::GET_ID_OF_THIS_THREAD();
	Global_2667225.f_490.f_2 = iParam1;
	Global_2667225.f_490.f_3 = iParam2;
	Global_2667225.f_490.f_4 = iParam3;
	Global_2667225.f_490.f_5 = iParam4;
}

int func_896(int iParam0)//Position - 0x4A95
{
	switch (iParam0)
	{
		case 1:
			return 1000;
			break;
		case 10:
			return 5000;
			break;
		case 11:
			return 8000;
			break;
		case 8:
			return 1000;
			break;
		case 0:
			return 500;
			break;
		case 9:
			return 250;
			break;
		case 13:
			return 1000;
			break;
		case 12:
			return 7500;
			break;
		case 2:
			return 1000;
			break;
		case 14:
			return 500;
			break;
		case 20:
			if (__LIB_18__.func_332())
			{
				return 0;
			}
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 1)
			{
				return 200;
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 2)
			{
				return 400;
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 3)
			{
				return 600;
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 4)
			{
				return 800;
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 5)
			{
				return 1000;
			}
			break;
		case 6:
			return 500;
			break;
		case 22:
			return 200;
			break;
		case 23:
			return 400;
			break;
		case 24:
			return 700;
			break;
		case 25:
			return 100;
			break;
		case 26:
			return 1000;
			break;
		case 57:
			return 700;
			break;
		case 35:
			return 5000;
			break;
		case 15:
			return 0;
			break;
		case 17:
			return 0;
			break;
		case 18:
			return 0;
			break;
		case 19:
			return 0;
			break;
		case 21:
			return 0;
			break;
		case 36:
			return 0;
			break;
		case 39:
			return 200;
			break;
		case 40:
			return 1000;
		case 41:
			return 750;
		case 42:
			return 0;
	}
	return 0;
}

void func_897(int iParam0, int iParam1, int iParam2)//Position - 0x16877
{
	switch (iParam0)
	{
		case 2:
			__LIB_18__.func_350(iParam1, iParam2);
			break;
		case 11:
			__LIB_18__.func_428(iParam1, iParam2);
			break;
		case 8:
			__LIB_25__.func_5(iParam1, iParam2);
			break;
		case 9:
			__LIB_18__.func_348(iParam1, iParam2);
			break;
		case 3:
			__LIB_18__.func_347(iParam1, iParam2);
			break;
		case 4:
			__LIB_18__.func_346(iParam1, iParam2);
			break;
		case 6:
			__LIB_18__.func_345(iParam1, iParam2);
			break;
		case 1:
			__LIB_18__.func_344(iParam1, iParam2);
			break;
		case 7:
			__LIB_18__.func_343(iParam1, iParam2);
			break;
		case 10:
			__LIB_18__.func_342(iParam1, iParam2);
			break;
		case 14:
			__LIB_18__.func_341(iParam1, iParam2);
			break;
		case 12:
			__LIB_18__.func_340(iParam1, iParam2);
			break;
		case 5:
			__LIB_18__.func_339(iParam1, iParam2);
			break;
		case 0:
			__LIB_25__.func_4(iParam1, iParam2);
			break;
		case 13:
			__LIB_24__.func_956(iParam1);
			break;
	}
}

void func_898(int iParam0, int iParam1)//Position - 0x73429
{
	bool bVar0;
	bVar0 = false;
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Vehicle", 3))
		{
			if (!DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Vehicle") || (DECORATOR::DECOR_GET_INT(iParam0, "Player_Vehicle") != NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()) && DECORATOR::DECOR_GET_INT(iParam0, "Player_Vehicle") != -1))
			{
				DECORATOR::DECOR_SET_INT(iParam0, "Player_Vehicle", NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()));
				bVar0 = true;
			}
		}
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("PV_Slot", 3))
		{
			if (!DECORATOR::DECOR_EXIST_ON(iParam0, "PV_Slot") || !DECORATOR::DECOR_GET_INT(iParam0, "PV_Slot") == iParam1)
			{
				DECORATOR::DECOR_SET_INT(iParam0, "PV_Slot", iParam1);
				bVar0 = true;
			}
		}
		if (bVar0)
		{
			__LIB_19__.func_761(iParam1);
		}
	}
}

int func_899(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x3BC5
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	bVar0 = false;
	if (!__LIB_0__.func_112())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(__LIB_0__.func_5()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4535607 = 1;
			return 0;
		}
		if (Global_2726699)
		{
			if (iParam3 == joaat("CATEGORY_WEAPON_AMMO") || iParam3 == joaat("CATEGORY_MART"))
			{
				Global_4535608 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		if (Global_4534105[iVar2 /*85*/].f_66.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 15;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_BEGIN_SERVICE(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar4))
		{
			*uParam0 = __LIB_18__.func_262(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4534105[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4534105[*uParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4535592 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4535606 = 1;
			Global_4535609 = iParam4;
			Global_4535611 = iParam3;
			Global_4535612 = 1;
			Global_4535610 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4535609 = iParam4;
			Global_4535611 = iParam3;
			Global_4535612 = 1;
			Global_4535610 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			__LIB_0__.func_677(1, iParam4);
			Global_4535606 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			__LIB_24__.func_952(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_900(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x934A
{
	if (Global_2703735.f_1571.f_703.f_16 != __LIB_0__.func_160())
	{
		if (BitTest(Global_2689235[Global_2703735.f_1571.f_703.f_16 /*453*/].f_416, 0) && __LIB_24__.func_988())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2674954 = 0;
	}
	Global_2667225.f_490 = iParam0;
	Global_2667225.f_490.f_1 = SCRIPT::GET_ID_OF_THIS_THREAD();
	Global_2667225.f_490.f_2 = iParam1;
	Global_2667225.f_490.f_3 = iParam2;
	Global_2667225.f_490.f_4 = iParam3;
	Global_2667225.f_490.f_5 = iParam4;
}

int func_901(int iParam0, int iParam1, int iParam2)//Position - 0x1CC51
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
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	switch (iParam0)
	{
		case joaat("mpSum2_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Sum2_Tee_000_M"):
				case joaat("MP_Sum2_Tee_000_F"):
					if (__LIB_0__.func_137(34505, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Sum2_Tee_000_M"));
					break;
				case joaat("MP_Sum2_Tee_001_M"):
				case joaat("MP_Sum2_Tee_001_F"):
					if (__LIB_0__.func_137(34375, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Sum2_Tee_001_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpTuner_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Tuner_Tee_000_M"):
				case joaat("MP_Tuner_Tee_000_F"):
					if (__LIB_1__.func_596(116, -1) >= __LIB_0__.func_238(116, 5, 9) || __LIB_0__.func_137(31760, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_000_M"));
					break;
				case joaat("MP_Tuner_Tee_002_M"):
				case joaat("MP_Tuner_Tee_002_F"):
					if (__LIB_1__.func_595(123, -1) || __LIB_0__.func_137(31761, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_002_M"));
					break;
				case joaat("MP_Tuner_Tee_003_M"):
				case joaat("MP_Tuner_Tee_003_F"):
					if (__LIB_1__.func_595(124, -1) || __LIB_0__.func_137(31762, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_003_M"));
					break;
				case joaat("MP_Tuner_Tee_005_M"):
				case joaat("MP_Tuner_Tee_005_F"):
					if (__LIB_1__.func_595(125, -1) || __LIB_0__.func_137(31763, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_005_M"));
					break;
				case joaat("MP_Tuner_Tee_006_M"):
				case joaat("MP_Tuner_Tee_006_F"):
					if (__LIB_1__.func_595(126, -1) || __LIB_0__.func_137(31764, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_006_M"));
					break;
				case joaat("MP_Tuner_Tee_008_M"):
				case joaat("MP_Tuner_Tee_008_F"):
					if (__LIB_0__.func_137(31768, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_008_M"));
					break;
				case joaat("MP_Tuner_Tee_010_M"):
				case joaat("MP_Tuner_Tee_010_F"):
					if (__LIB_0__.func_137(31769, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_010_M"));
					break;
				case joaat("MP_Tuner_Tee_011_M"):
				case joaat("MP_Tuner_Tee_011_F"):
					if (__LIB_0__.func_137(31770, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_011_M"));
					break;
				case joaat("MP_Tuner_Tee_012_M"):
				case joaat("MP_Tuner_Tee_012_F"):
					if (__LIB_0__.func_137(31771, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_012_M"));
					break;
				case joaat("MP_Tuner_Tee_013_M"):
				case joaat("MP_Tuner_Tee_013_F"):
					if (__LIB_0__.func_137(31772, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_013_M"));
					break;
				case joaat("MP_Tuner_Tee_014_M"):
				case joaat("MP_Tuner_Tee_014_F"):
					if (__LIB_0__.func_137(31773, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_014_M"));
					break;
				case joaat("MP_Tuner_Tee_015_M"):
				case joaat("MP_Tuner_Tee_015_F"):
					if (__LIB_0__.func_137(31774, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_015_M"));
					break;
				case joaat("MP_Tuner_Tee_016_M"):
				case joaat("MP_Tuner_Tee_016_F"):
					if (__LIB_0__.func_137(31775, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_016_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist4_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Heist4_Tee_030_M"):
				case joaat("MP_Heist4_Tee_030_F"):
					if (__LIB_0__.func_137(30533, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_030_M"));
					break;
				case joaat("MP_Heist4_Tee_032_M"):
				case joaat("MP_Heist4_Tee_032_F"):
					if (__LIB_0__.func_137(30534, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_032_M"));
					break;
				case joaat("MP_Heist4_Tee_028_M"):
				case joaat("MP_Heist4_Tee_028_F"):
					if (__LIB_0__.func_137(30535, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_028_M"));
					break;
				case joaat("MP_Heist4_Tee_029_M"):
				case joaat("MP_Heist4_Tee_029_F"):
					if (__LIB_0__.func_137(30536, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_029_M"));
					break;
				case joaat("MP_Heist4_Tee_031_M"):
				case joaat("MP_Heist4_Tee_031_F"):
					if (__LIB_0__.func_137(30537, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_031_M"));
					break;
				case joaat("MP_Heist4_Tee_022_M"):
				case joaat("MP_Heist4_Tee_022_F"):
					if (__LIB_0__.func_137(30538, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_022_M"));
					break;
				case joaat("MP_Heist4_Tee_023_M"):
				case joaat("MP_Heist4_Tee_023_F"):
					if (__LIB_0__.func_137(30539, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_023_M"));
					break;
				case joaat("MP_Heist4_Tee_020_M"):
				case joaat("MP_Heist4_Tee_020_F"):
					if (__LIB_0__.func_137(30540, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_020_M"));
					break;
				case joaat("MP_Heist4_Tee_021_M"):
				case joaat("MP_Heist4_Tee_021_F"):
					if (__LIB_0__.func_137(30541, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_021_M"));
					break;
				case joaat("MP_Heist4_Tee_003_M"):
				case joaat("MP_Heist4_Tee_003_F"):
					if (__LIB_0__.func_137(30542, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_003_M"));
					break;
				case joaat("MP_Heist4_Tee_004_M"):
				case joaat("MP_Heist4_Tee_004_F"):
					if (__LIB_0__.func_137(30543, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_004_M"));
					break;
				case joaat("MP_Heist4_Tee_005_M"):
				case joaat("MP_Heist4_Tee_005_F"):
					if (__LIB_0__.func_137(30544, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_005_M"));
					break;
				case joaat("MP_Heist4_Tee_006_M"):
				case joaat("MP_Heist4_Tee_006_F"):
					if (__LIB_0__.func_137(30545, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_006_M"));
					break;
				case joaat("MP_Heist4_Tee_027_M"):
				case joaat("MP_Heist4_Tee_027_F"):
					if (__LIB_0__.func_137(30546, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_027_M"));
					break;
				case joaat("MP_Heist4_Tee_026_M"):
				case joaat("MP_Heist4_Tee_026_F"):
					if (__LIB_0__.func_137(30547, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_026_M"));
					break;
				case joaat("MP_Heist4_Tee_025_M"):
				case joaat("MP_Heist4_Tee_025_F"):
					if (__LIB_0__.func_137(30548, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_025_M"));
					break;
				case joaat("MP_Heist4_Tee_024_M"):
				case joaat("MP_Heist4_Tee_024_F"):
					if (__LIB_0__.func_137(30549, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_024_M"));
					break;
				case joaat("MP_Heist4_Tee_002_M"):
				case joaat("MP_Heist4_Tee_002_F"):
					if (__LIB_0__.func_137(30550, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_002_M"));
					break;
				case joaat("MP_Heist4_Tee_001_M"):
				case joaat("MP_Heist4_Tee_001_F"):
					if (__LIB_0__.func_137(30551, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_001_M"));
					break;
				case joaat("MP_Heist4_Tee_000_M"):
				case joaat("MP_Heist4_Tee_000_F"):
					if (__LIB_0__.func_137(30552, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_000_M"));
					break;
				case joaat("MP_Heist4_Tee_007_M"):
				case joaat("MP_Heist4_Tee_007_F"):
					if (__LIB_0__.func_137(30553, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_007_M"));
					break;
				case joaat("MP_Heist4_Tee_008_M"):
				case joaat("MP_Heist4_Tee_008_F"):
					if (__LIB_0__.func_137(30554, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_008_M"));
					break;
				case joaat("MP_Heist4_Tee_009_M"):
				case joaat("MP_Heist4_Tee_009_F"):
					if (__LIB_0__.func_137(30555, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_009_M"));
					break;
				case joaat("MP_Heist4_Tee_010_M"):
				case joaat("MP_Heist4_Tee_010_F"):
					if (__LIB_0__.func_137(30556, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_010_M"));
					break;
				case joaat("MP_Heist4_Tee_011_M"):
				case joaat("MP_Heist4_Tee_011_F"):
					if (__LIB_0__.func_137(30557, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_011_M"));
					break;
				case joaat("MP_Heist4_Tee_012_M"):
				case joaat("MP_Heist4_Tee_012_F"):
					if (__LIB_0__.func_137(30524, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_012_M"));
					break;
				case joaat("MP_Heist4_Tee_013_M"):
				case joaat("MP_Heist4_Tee_013_F"):
					if (__LIB_0__.func_137(30525, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_013_M"));
					break;
				case joaat("MP_Heist4_Tee_014_M"):
				case joaat("MP_Heist4_Tee_014_F"):
					if (__LIB_0__.func_137(30526, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_014_M"));
					break;
				case joaat("MP_Heist4_Tee_015_M"):
				case joaat("MP_Heist4_Tee_015_F"):
					if (__LIB_0__.func_137(30527, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_015_M"));
					break;
				case joaat("MP_Heist4_Tee_016_M"):
				case joaat("MP_Heist4_Tee_016_F"):
					if (__LIB_0__.func_137(30528, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_016_M"));
					break;
				case joaat("MP_Heist4_Tee_017_M"):
				case joaat("MP_Heist4_Tee_017_F"):
					if (__LIB_0__.func_137(30529, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_017_M"));
					break;
				case joaat("MP_Heist4_Tee_018_M"):
				case joaat("MP_Heist4_Tee_018_F"):
					if (__LIB_0__.func_137(30530, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_018_M"));
					break;
				case joaat("MP_Heist4_Tee_019_M"):
				case joaat("MP_Heist4_Tee_019_F"):
					if (__LIB_0__.func_137(30531, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_019_M"));
					break;
				case joaat("MP_Heist4_Tee_033_M"):
				case joaat("MP_Heist4_Tee_033_F"):
					if (__LIB_0__.func_137(30532, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_033_M"));
					break;
				case joaat("MP_Heist4_Tee_045_M"):
				case joaat("MP_Heist4_Tee_045_F"):
					if (__LIB_0__.func_137(30570, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_045_M"));
					break;
				case joaat("MP_Heist4_Tee_046_M"):
				case joaat("MP_Heist4_Tee_046_F"):
					if (__LIB_0__.func_137(30571, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_046_M"));
					break;
				case joaat("MP_Heist4_Tee_048_M"):
				case joaat("MP_Heist4_Tee_048_F"):
					if (__LIB_0__.func_137(30568, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_048_M"));
					break;
				case joaat("MP_Heist4_Tee_047_M"):
				case joaat("MP_Heist4_Tee_047_F"):
					if (__LIB_0__.func_137(30569, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_047_M"));
					break;
				case joaat("MP_Heist4_Tee_049_M"):
				case joaat("MP_Heist4_Tee_049_F"):
					if (__LIB_0__.func_137(30634, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_049_M"));
					break;
				case joaat("MP_Heist4_Tee_051_M"):
				case joaat("MP_Heist4_Tee_051_F"):
					if (__LIB_0__.func_137(30635, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_051_M"));
					break;
				case joaat("MP_Heist4_Tee_053_M"):
				case joaat("MP_Heist4_Tee_053_F"):
					if (__LIB_0__.func_137(30636, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_053_M"));
					break;
				case joaat("MP_Heist4_Tee_054_M"):
				case joaat("MP_Heist4_Tee_054_F"):
					if (__LIB_0__.func_137(30637, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_054_M"));
					break;
				case joaat("MP_Heist4_Tee_055_M"):
				case joaat("MP_Heist4_Tee_055_F"):
					if (__LIB_0__.func_137(30703, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_055_M"));
					break;
				case joaat("MP_Heist4_Tee_057_M"):
				case joaat("MP_Heist4_Tee_057_F"):
					if (__LIB_0__.func_137(30704, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_057_M"));
					break;
				case joaat("MP_Heist4_Tee_059_M"):
				case joaat("MP_Heist4_Tee_059_F"):
					if (__LIB_0__.func_137(30700, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_059_M"));
					break;
				case joaat("MP_Heist4_Tee_061_M"):
				case joaat("MP_Heist4_Tee_061_F"):
					if (__LIB_0__.func_137(30701, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_061_M"));
					break;
				case joaat("MP_Heist4_Tee_063_M"):
				case joaat("MP_Heist4_Tee_063_F"):
					if (__LIB_0__.func_137(30702, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_063_M"));
					break;
				case joaat("MP_Heist4_Tee_065_M"):
				case joaat("MP_Heist4_Tee_065_F"):
					if (__LIB_0__.func_137(30699, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_065_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpSum_overlays"):
			switch (iParam1)
			{
				case joaat("mpSum_Tee_000_M"):
				case joaat("mpSum_Tee_000_F"):
					if (__LIB_0__.func_137(30260, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_000_M"));
					break;
				case joaat("mpSum_Tee_001_M"):
				case joaat("mpSum_Tee_001_F"):
					if (__LIB_0__.func_137(30261, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_001_M"));
					break;
				case joaat("mpSum_Tee_002_M"):
				case joaat("mpSum_Tee_002_F"):
					if (__LIB_0__.func_137(30262, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_002_M"));
					break;
				case joaat("mpSum_Tee_003_M"):
				case joaat("mpSum_Tee_003_F"):
					if (__LIB_0__.func_137(30263, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_003_M"));
					break;
				case joaat("mpSum_Tee_004_M"):
				case joaat("mpSum_Tee_004_F"):
					if (__LIB_0__.func_137(30264, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_004_M"));
					break;
				case joaat("mpSum_Tee_005_M"):
				case joaat("mpSum_Tee_005_F"):
					if (__LIB_0__.func_137(30265, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_005_M"));
					break;
				case joaat("mpSum_Tee_006_M"):
				case joaat("mpSum_Tee_006_F"):
					if (__LIB_0__.func_137(30266, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_006_M"));
					break;
				case joaat("mpSum_Tee_007_M"):
				case joaat("mpSum_Tee_007_F"):
					if (__LIB_0__.func_137(30267, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_007_M"));
					break;
				case joaat("mpSum_Tee_008_M"):
				case joaat("mpSum_Tee_008_F"):
					if (__LIB_0__.func_137(30268, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_008_M"));
					break;
				case joaat("mpSum_Tee_009_M"):
				case joaat("mpSum_Tee_009_F"):
					if (__LIB_0__.func_137(30269, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_009_M"));
					break;
				case joaat("mpSum_Tee_010_M"):
				case joaat("mpSum_Tee_010_F"):
					if (__LIB_0__.func_137(30270, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_010_M"));
					break;
				case joaat("mpSum_Tee_011_M"):
				case joaat("mpSum_Tee_011_F"):
					if (__LIB_0__.func_137(30271, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_011_M"));
					break;
				case joaat("mpSum_Tee_012_M"):
				case joaat("mpSum_Tee_012_F"):
					if (__LIB_0__.func_137(30272, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_012_M"));
					break;
				case joaat("mpSum_Tee_013_M"):
				case joaat("mpSum_Tee_013_F"):
					if (__LIB_0__.func_137(30273, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_013_M"));
					break;
				case joaat("mpSum_Tee_014_M"):
				case joaat("mpSum_Tee_014_F"):
					if (__LIB_0__.func_137(30274, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_014_M"));
					break;
				case joaat("mpSum_Tee_015_M"):
				case joaat("mpSum_Tee_015_F"):
					if (__LIB_0__.func_137(30275, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_015_M"));
					break;
				case joaat("mpSum_Tee_016_M"):
				case joaat("mpSum_Tee_016_F"):
					if (__LIB_0__.func_137(30276, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_016_M"));
					break;
				case joaat("mpSum_Tee_017_M"):
				case joaat("mpSum_Tee_017_F"):
					if (__LIB_0__.func_137(30277, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_017_M"));
					break;
				case joaat("mpSum_Tee_018_M"):
				case joaat("mpSum_Tee_018_F"):
					if (__LIB_0__.func_137(30278, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_018_M"));
					break;
				case joaat("mpSum_Tee_019_M"):
				case joaat("mpSum_Tee_019_F"):
					if (__LIB_0__.func_137(30279, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_019_M"));
					break;
				case joaat("mpSum_Tee_020_M"):
				case joaat("mpSum_Tee_020_F"):
					if (__LIB_0__.func_137(30280, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_020_M"));
					break;
				case joaat("mpSum_Tee_021_M"):
				case joaat("mpSum_Tee_021_F"):
					if (__LIB_0__.func_137(30281, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_021_M"));
					break;
				case joaat("mpSum_Tee_022_M"):
				case joaat("mpSum_Tee_022_F"):
					if (__LIB_0__.func_137(30282, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_022_M"));
					break;
				case joaat("mpSum_Tee_023_M"):
				case joaat("mpSum_Tee_023_F"):
					if (__LIB_0__.func_137(30283, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_023_M"));
					break;
				case joaat("mpSum_Tee_024_M"):
				case joaat("mpSum_Tee_024_F"):
					if (__LIB_0__.func_137(30284, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_024_M"));
					break;
				case joaat("mpSum_Tee_025_M"):
				case joaat("mpSum_Tee_025_F"):
					if (__LIB_0__.func_137(30285, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_025_M"));
					break;
				case joaat("mpSum_Tee_026_M"):
				case joaat("mpSum_Tee_026_F"):
					if (__LIB_0__.func_137(30286, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_026_M"));
					break;
				case joaat("mpSum_Tee_027_M"):
				case joaat("mpSum_Tee_027_F"):
					if (__LIB_0__.func_137(30287, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_027_M"));
					break;
				case joaat("mpSum_Tee_028_M"):
				case joaat("mpSum_Tee_028_F"):
					if (__LIB_0__.func_137(30288, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_028_M"));
					break;
				case joaat("mpSum_Tee_029_M"):
				case joaat("mpSum_Tee_029_F"):
					if (__LIB_0__.func_137(30289, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_029_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpSum_overlays"):
			switch (iParam1)
			{
				case joaat("mpSum_Tee_030_M"):
				case joaat("mpSum_Tee_030_F"):
					if (__LIB_0__.func_137(28255, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_030_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpSum_overlays"):
			switch (iParam1)
			{
				case joaat("mpSum_Tee_031_M"):
				case joaat("mpSum_Tee_031_F"):
					if (__LIB_1__.func_595(89, -1) || __LIB_0__.func_137(30254, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_031_M"));
					break;
				case joaat("mpSum_Tee_032_M"):
				case joaat("mpSum_Tee_032_F"):
					if (__LIB_1__.func_595(90, -1) || __LIB_0__.func_137(30255, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_032_M"));
					break;
				case joaat("mpSum_Tee_033_M"):
				case joaat("mpSum_Tee_033_F"):
					if (__LIB_1__.func_595(92, -1) || __LIB_0__.func_137(30256, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_033_M"));
					break;
				case joaat("mpSum_Tee_034_M"):
				case joaat("mpSum_Tee_034_F"):
					if ((((__LIB_1__.func_595(89, -1) && __LIB_1__.func_595(90, -1)) && __LIB_1__.func_595(92, -1)) && __LIB_1__.func_595(91, -1)) || __LIB_0__.func_137(30257, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_034_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_001_F"):
				case joaat("mpHeist3_Tee_001_M"):
					if (__LIB_1__.func_595(78, -1) || __LIB_0__.func_137(28199, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_001_M"));
					break;
				case joaat("mpHeist3_Tee_000_F"):
				case joaat("mpHeist3_Tee_000_M"):
					if (((__LIB_1__.func_595(77, -1) && __LIB_1__.func_595(78, -1)) && __LIB_1__.func_596(92, -1) >= __LIB_0__.func_238(92, 5, 9)) || __LIB_0__.func_137(28200, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_000_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_007_F"):
				case joaat("mpHeist3_Tee_008_F"):
				case joaat("mpHeist3_Tee_009_F"):
				case joaat("mpHeist3_Tee_007_M"):
				case joaat("mpHeist3_Tee_008_M"):
				case joaat("mpHeist3_Tee_009_M"):
					if (((__LIB_1__.func_596(93, -1) >= __LIB_0__.func_238(93, 5, 9) && __LIB_1__.func_595(79, -1)) && __LIB_1__.func_595(80, -1)) || __LIB_0__.func_137(28204, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, ((iParam1 == joaat("mpHeist3_Tee_007_M") || iParam1 == joaat("mpHeist3_Tee_008_M")) || iParam1 == joaat("mpHeist3_Tee_009_M")));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_004_F"):
				case joaat("mpHeist3_Tee_004_M"):
					if (__LIB_1__.func_595(81, -1) || __LIB_0__.func_137(28206, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_004_M"));
					break;
				case joaat("mpHeist3_Tee_005_F"):
				case joaat("mpHeist3_Tee_005_M"):
					if (__LIB_1__.func_596(94, -1) >= __LIB_0__.func_238(94, 5, 9) || __LIB_0__.func_137(28207, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_005_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_006_F"):
				case joaat("mpHeist3_Tee_006_M"):
					if (((__LIB_1__.func_595(84, -1) && __LIB_1__.func_595(85, -1)) && __LIB_1__.func_596(97, -1) >= __LIB_0__.func_238(97, 5, 9)) || __LIB_0__.func_137(28212, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_006_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_002_F"):
				case joaat("mpHeist3_Tee_002_M"):
					if (__LIB_0__.func_137(28249, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_002_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_013_F"):
				case joaat("mpHeist3_Tee_013_M"):
					if (__LIB_0__.func_137(28183, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_013_M"));
					break;
				case joaat("mpHeist3_Tee_014_F"):
				case joaat("mpHeist3_Tee_014_M"):
					if (__LIB_0__.func_137(28182, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_014_M"));
					break;
				case joaat("mpHeist3_Tee_015_F"):
				case joaat("mpHeist3_Tee_015_M"):
					if (__LIB_0__.func_137(28184, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_015_M"));
					break;
				case joaat("mpHeist3_Tee_016_F"):
				case joaat("mpHeist3_Tee_016_M"):
					if (__LIB_0__.func_137(28181, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_016_M"));
					break;
				case joaat("mpHeist3_Tee_017_F"):
				case joaat("mpHeist3_Tee_017_M"):
					if (__LIB_0__.func_137(28178, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_017_M"));
					break;
				case joaat("mpHeist3_Tee_018_F"):
				case joaat("mpHeist3_Tee_018_M"):
					if (__LIB_0__.func_137(28177, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_018_M"));
					break;
				case joaat("mpHeist3_Tee_019_F"):
				case joaat("mpHeist3_Tee_019_M"):
					if (__LIB_0__.func_137(28176, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_019_M"));
					break;
				case joaat("mpHeist3_Tee_020_F"):
				case joaat("mpHeist3_Tee_020_M"):
					if (__LIB_0__.func_137(28180, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_020_M"));
					break;
				case joaat("mpHeist3_Tee_021_F"):
				case joaat("mpHeist3_Tee_021_M"):
					if (__LIB_0__.func_137(28179, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_021_M"));
					break;
				case joaat("mpHeist3_Tee_022_F"):
				case joaat("mpHeist3_Tee_022_M"):
					if (((((((((__LIB_0__.func_137(28176, -1) && __LIB_0__.func_137(28177, -1)) && __LIB_0__.func_137(28178, -1)) && __LIB_0__.func_137(28179, -1)) && __LIB_0__.func_137(28180, -1)) && __LIB_0__.func_137(28181, -1)) && __LIB_0__.func_137(28182, -1)) && __LIB_0__.func_137(28183, -1)) && __LIB_0__.func_137(28184, -1)) || __LIB_0__.func_137(28221, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_022_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_023_F"):
				case joaat("mpHeist3_Tee_023_M"):
					if (__LIB_0__.func_137(28191, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_023_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_011_F"):
				case joaat("mpHeist3_Tee_011_M"):
					if (__LIB_0__.func_137(28190, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_011_M"));
					break;
				case joaat("mpHeist3_Tee_012_F"):
				case joaat("mpHeist3_Tee_012_M"):
					if (__LIB_0__.func_137(28189, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_012_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_003_F"):
				case joaat("mpHeist3_Tee_003_M"):
					if (__LIB_6__.func_804(0, 1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_003_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_010_F"):
				case joaat("mpHeist3_Tee_010_M"):
					if ((((((((((((((((((__LIB_1__.func_595(77, -1) && __LIB_1__.func_595(78, -1)) && __LIB_1__.func_596(92, -1) >= __LIB_0__.func_238(92, 5, 9)) && __LIB_1__.func_596(93, -1) >= __LIB_0__.func_238(93, 5, 9)) && __LIB_1__.func_595(79, -1)) && __LIB_1__.func_595(80, -1)) && __LIB_1__.func_595(81, -1)) && __LIB_1__.func_596(94, -1) >= __LIB_0__.func_238(94, 5, 9)) && __LIB_1__.func_596(95, -1) >= __LIB_0__.func_238(95, 5, 9)) && __LIB_1__.func_595(82, -1)) && __LIB_1__.func_595(83, -1)) && __LIB_1__.func_596(96, -1) >= __LIB_0__.func_238(96, 5, 9)) && __LIB_1__.func_595(84, -1)) && __LIB_1__.func_595(85, -1)) && __LIB_1__.func_596(97, -1) >= __LIB_0__.func_238(97, 5, 9)) && __LIB_1__.func_595(86, -1)) && __LIB_1__.func_595(87, -1)) && __LIB_1__.func_595(88, -1)) || __LIB_0__.func_137(28222, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_010_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpVinewood_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Vinewood_Tat_023_M"):
				case joaat("MP_Vinewood_Tat_023_F"):
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Vinewood_Tat_023_M"));
					break;
				case joaat("MP_Vinewood_Tat_030_M"):
				case joaat("MP_Vinewood_Tat_030_F"):
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Vinewood_Tat_030_M"));
					break;
				case joaat("CasinoTop_M_21"):
				case joaat("CasinoTop_F_21"):
					if (__LIB_0__.func_137(27109, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_21"));
					break;
				case joaat("CasinoTop_M_23"):
				case joaat("CasinoTop_F_23"):
					if (__LIB_0__.func_137(27110, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_23"));
					break;
				case joaat("CasinoTop_M_2"):
				case joaat("CasinoTop_F_2"):
					if (__LIB_0__.func_137(27111, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_2"));
					break;
				case joaat("CasinoTop_M_4"):
				case joaat("CasinoTop_F_4"):
					if (__LIB_0__.func_137(27112, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_4"));
					break;
				case joaat("CasinoTop_M_6"):
				case joaat("CasinoTop_F_6"):
					if (__LIB_0__.func_137(27113, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_6"));
					break;
				case joaat("CasinoTop_M_10"):
				case joaat("CasinoTop_F_10"):
					if (__LIB_0__.func_137(27114, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_10"));
					break;
				case joaat("CasinoTop_M_22"):
				case joaat("CasinoTop_F_22"):
					if (__LIB_0__.func_137(27115, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_22"));
					break;
			}
			break;
		case joaat("mpChristmas2018_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Christmas2018_Tee_000_M"):
				case joaat("MP_Christmas2018_Tee_000_F"):
					if (__LIB_0__.func_137(25032, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_000_M"));
					break;
				case joaat("MP_Christmas2018_Tee_001_M"):
				case joaat("MP_Christmas2018_Tee_001_F"):
					if (__LIB_0__.func_137(25033, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_001_M"));
					break;
				case joaat("MP_Christmas2018_Tee_002_M"):
				case joaat("MP_Christmas2018_Tee_002_F"):
					if (__LIB_0__.func_137(25034, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_002_M"));
					break;
				case joaat("MP_Christmas2018_Tee_003_M"):
				case joaat("MP_Christmas2018_Tee_003_F"):
					if (__LIB_0__.func_137(25035, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_003_M"));
					break;
				case joaat("MP_Christmas2018_Tee_004_M"):
				case joaat("MP_Christmas2018_Tee_004_F"):
					if (__LIB_0__.func_137(25036, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_004_M"));
					break;
				case joaat("MP_Christmas2018_Tee_005_M"):
				case joaat("MP_Christmas2018_Tee_005_F"):
					if (__LIB_0__.func_137(25037, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_005_M"));
					break;
				case joaat("MP_Christmas2018_Tee_006_M"):
				case joaat("MP_Christmas2018_Tee_006_F"):
					if (__LIB_0__.func_137(25038, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_006_M"));
					break;
				case joaat("MP_Christmas2018_Tee_007_M"):
				case joaat("MP_Christmas2018_Tee_007_F"):
					if (__LIB_0__.func_137(25039, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_007_M"));
					break;
				case joaat("MP_Christmas2018_Tee_008_M"):
				case joaat("MP_Christmas2018_Tee_008_F"):
					if (__LIB_0__.func_137(25040, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_008_M"));
					break;
				case joaat("MP_Christmas2018_Tee_009_M"):
				case joaat("MP_Christmas2018_Tee_009_F"):
					if (__LIB_0__.func_137(25041, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_009_M"));
					break;
				case joaat("MP_Christmas2018_Tee_010_M"):
				case joaat("MP_Christmas2018_Tee_010_F"):
					if (__LIB_0__.func_137(25042, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_010_M"));
					break;
				case joaat("MP_Christmas2018_Tee_011_M"):
				case joaat("MP_Christmas2018_Tee_011_F"):
					if (__LIB_0__.func_137(25043, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_011_M"));
					break;
				case joaat("MP_Christmas2018_Tee_012_M"):
				case joaat("MP_Christmas2018_Tee_012_F"):
					if (__LIB_0__.func_137(25044, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_012_M"));
					break;
				case joaat("MP_Christmas2018_Tee_013_M"):
				case joaat("MP_Christmas2018_Tee_013_F"):
					if (__LIB_0__.func_137(25045, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_013_M"));
					break;
				case joaat("MP_Christmas2018_Tee_014_M"):
				case joaat("MP_Christmas2018_Tee_014_F"):
					if (__LIB_0__.func_137(25046, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_014_M"));
					break;
				case joaat("MP_Christmas2018_Tee_015_M"):
				case joaat("MP_Christmas2018_Tee_015_F"):
					if (__LIB_0__.func_137(25047, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_015_M"));
					break;
				case joaat("MP_Christmas2018_Tee_016_M"):
				case joaat("MP_Christmas2018_Tee_016_F"):
					if (__LIB_0__.func_137(25048, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_016_M"));
					break;
				case joaat("MP_Christmas2018_Tee_017_M"):
				case joaat("MP_Christmas2018_Tee_017_F"):
					if (__LIB_0__.func_137(25049, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_017_M"));
					break;
				case joaat("MP_Christmas2018_Tee_018_M"):
				case joaat("MP_Christmas2018_Tee_018_F"):
					if (__LIB_0__.func_137(25050, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_018_M"));
					break;
				case joaat("MP_Christmas2018_Tee_019_M"):
				case joaat("MP_Christmas2018_Tee_019_F"):
					if (__LIB_0__.func_137(25051, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_019_M"));
					break;
				case joaat("MP_Christmas2018_Tee_020_M"):
				case joaat("MP_Christmas2018_Tee_020_F"):
					if (__LIB_0__.func_137(25052, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_020_M"));
					break;
				case joaat("MP_Christmas2018_Tee_021_M"):
				case joaat("MP_Christmas2018_Tee_021_F"):
					if (__LIB_0__.func_137(25053, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_021_M"));
					break;
				case joaat("MP_Christmas2018_Tee_022_M"):
				case joaat("MP_Christmas2018_Tee_022_F"):
					if (__LIB_0__.func_137(25054, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_022_M"));
					break;
				case joaat("MP_Christmas2018_Tee_023_M"):
				case joaat("MP_Christmas2018_Tee_023_F"):
					if (__LIB_0__.func_137(25055, -1))
					{
						return 0;
					}
					if (__LIB_0__.func_137(27077, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_023_M"));
					break;
				case joaat("MP_Christmas2018_Tee_024_M"):
				case joaat("MP_Christmas2018_Tee_024_F"):
					if (__LIB_0__.func_137(25056, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_024_M"));
					break;
				case joaat("MP_Christmas2018_Tee_025_M"):
				case joaat("MP_Christmas2018_Tee_025_F"):
					if (__LIB_0__.func_137(25057, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_025_M"));
					break;
				case joaat("MP_Christmas2018_Tee_026_M"):
				case joaat("MP_Christmas2018_Tee_026_F"):
					if (__LIB_0__.func_137(25058, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_026_M"));
					break;
				case joaat("MP_Christmas2018_Tee_027_M"):
				case joaat("MP_Christmas2018_Tee_027_F"):
					if (__LIB_0__.func_137(25059, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_027_M"));
					break;
				case joaat("MP_Christmas2018_Tee_028_M"):
				case joaat("MP_Christmas2018_Tee_028_F"):
					if (__LIB_0__.func_137(25060, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_028_M"));
					break;
				case joaat("MP_Christmas2018_Tee_029_M"):
				case joaat("MP_Christmas2018_Tee_029_F"):
					if (__LIB_0__.func_137(25061, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_029_M"));
					break;
				case joaat("MP_Christmas2018_Tee_030_M"):
				case joaat("MP_Christmas2018_Tee_030_F"):
					if (__LIB_0__.func_137(25062, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_030_M"));
					break;
				case joaat("MP_Christmas2018_Tee_031_M"):
				case joaat("MP_Christmas2018_Tee_031_F"):
					if (__LIB_0__.func_137(25063, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_031_M"));
					break;
				case joaat("MP_Christmas2018_Tee_032_M"):
				case joaat("MP_Christmas2018_Tee_032_F"):
					if (__LIB_0__.func_137(25064, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_032_M"));
					break;
				case joaat("MP_Christmas2018_Tee_033_M"):
				case joaat("MP_Christmas2018_Tee_033_F"):
					if (__LIB_0__.func_137(25065, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_033_M"));
					break;
				case joaat("MP_Christmas2018_Tee_034_M"):
				case joaat("MP_Christmas2018_Tee_034_F"):
					if (__LIB_0__.func_137(25066, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_034_M"));
					break;
				case joaat("MP_Christmas2018_Tee_035_M"):
				case joaat("MP_Christmas2018_Tee_035_F"):
					if (__LIB_0__.func_137(25067, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_035_M"));
					break;
				case joaat("MP_Christmas2018_Tee_036_M"):
				case joaat("MP_Christmas2018_Tee_036_F"):
					if (__LIB_0__.func_137(25068, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_036_M"));
					break;
				case joaat("MP_Christmas2018_Tee_037_M"):
				case joaat("MP_Christmas2018_Tee_037_F"):
					if (__LIB_0__.func_137(25069, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_037_M"));
					break;
				case joaat("MP_Christmas2018_Tee_038_M"):
				case joaat("MP_Christmas2018_Tee_038_F"):
					if (__LIB_0__.func_137(25070, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_038_M"));
					break;
				case joaat("MP_Christmas2018_Tee_039_M"):
				case joaat("MP_Christmas2018_Tee_039_F"):
					if (__LIB_0__.func_137(25071, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_039_M"));
					break;
				case joaat("MP_Christmas2018_Tee_040_M"):
				case joaat("MP_Christmas2018_Tee_040_F"):
					if (__LIB_0__.func_137(25072, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_040_M"));
					break;
				case joaat("MP_Christmas2018_Tee_041_M"):
				case joaat("MP_Christmas2018_Tee_041_F"):
					if (__LIB_0__.func_137(25073, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_041_M"));
					break;
				case joaat("MP_Christmas2018_Tee_042_M"):
				case joaat("MP_Christmas2018_Tee_042_F"):
					if (__LIB_0__.func_137(25074, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_042_M"));
					break;
				case joaat("MP_Christmas2018_Tee_043_M"):
				case joaat("MP_Christmas2018_Tee_043_F"):
					if (__LIB_0__.func_137(25075, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_043_M"));
					break;
				case joaat("MP_Christmas2018_Tee_044_M"):
				case joaat("MP_Christmas2018_Tee_044_F"):
					if (__LIB_0__.func_137(25076, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_044_M"));
					break;
				case joaat("MP_Christmas2018_Tee_045_M"):
				case joaat("MP_Christmas2018_Tee_045_F"):
					if (__LIB_0__.func_137(25077, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_045_M"));
					break;
				case joaat("MP_Christmas2018_Tee_046_M"):
				case joaat("MP_Christmas2018_Tee_046_F"):
					if (__LIB_0__.func_137(25078, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_046_M"));
					break;
				case joaat("MP_Christmas2018_Tee_047_M"):
				case joaat("MP_Christmas2018_Tee_047_F"):
					if (__LIB_0__.func_137(25079, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_047_M"));
					break;
				case joaat("MP_Christmas2018_Tee_048_M"):
				case joaat("MP_Christmas2018_Tee_048_F"):
					if (__LIB_0__.func_137(25080, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_048_M"));
					break;
				case joaat("MP_Christmas2018_Tee_049_M"):
				case joaat("MP_Christmas2018_Tee_049_F"):
					if (__LIB_0__.func_137(25081, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_049_M"));
					break;
				case joaat("MP_Christmas2018_Tee_050_M"):
				case joaat("MP_Christmas2018_Tee_050_F"):
					if (__LIB_0__.func_137(25082, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_050_M"));
					break;
				case joaat("MP_Christmas2018_Tee_051_M"):
				case joaat("MP_Christmas2018_Tee_051_F"):
					if (__LIB_0__.func_137(25083, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_051_M"));
					break;
				case joaat("MP_Christmas2018_Tee_052_M"):
				case joaat("MP_Christmas2018_Tee_052_F"):
					if (__LIB_0__.func_137(25084, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_052_M"));
					break;
				case joaat("MP_Christmas2018_Tee_053_M"):
				case joaat("MP_Christmas2018_Tee_053_F"):
					if (__LIB_0__.func_137(25085, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_053_M"));
					break;
				case joaat("MP_Christmas2018_Tee_054_M"):
				case joaat("MP_Christmas2018_Tee_054_F"):
					if (__LIB_0__.func_137(25086, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_054_M"));
					break;
				case joaat("MP_Christmas2018_Tee_055_M"):
				case joaat("MP_Christmas2018_Tee_055_F"):
					if (__LIB_0__.func_137(25087, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_055_M"));
					break;
				case joaat("MP_Christmas2018_Tee_056_M"):
				case joaat("MP_Christmas2018_Tee_056_F"):
					if (__LIB_0__.func_137(25088, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_056_M"));
					break;
				case joaat("MP_Christmas2018_Tee_057_M"):
				case joaat("MP_Christmas2018_Tee_057_F"):
					if (__LIB_0__.func_137(25089, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_057_M"));
					break;
				case joaat("MP_Christmas2018_Tee_058_M"):
				case joaat("MP_Christmas2018_Tee_058_F"):
					if (__LIB_0__.func_137(25090, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_058_M"));
					break;
				case joaat("MP_Christmas2018_Tee_059_M"):
				case joaat("MP_Christmas2018_Tee_059_F"):
					if (__LIB_0__.func_137(25091, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_059_M"));
					break;
				case joaat("MP_Christmas2018_Tee_060_M"):
				case joaat("MP_Christmas2018_Tee_060_F"):
					if (__LIB_0__.func_137(25092, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_060_M"));
					break;
				case joaat("MP_Christmas2018_Tee_061_M"):
				case joaat("MP_Christmas2018_Tee_061_F"):
					if (__LIB_0__.func_137(25093, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_061_M"));
					break;
				case joaat("MP_Christmas2018_Tee_062_M"):
				case joaat("MP_Christmas2018_Tee_062_F"):
					if (__LIB_0__.func_137(25094, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_062_M"));
					break;
				case joaat("MP_Christmas2018_Tee_063_M"):
				case joaat("MP_Christmas2018_Tee_063_F"):
					if (__LIB_0__.func_137(25095, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_063_M"));
					break;
				case joaat("MP_Christmas2018_Tee_064_M"):
				case joaat("MP_Christmas2018_Tee_064_F"):
					if (__LIB_0__.func_137(25096, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_064_M"));
					break;
				case joaat("MP_Christmas2018_Tee_065_M"):
				case joaat("MP_Christmas2018_Tee_065_F"):
					if (__LIB_0__.func_137(25097, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_065_M"));
					break;
				case joaat("MP_Christmas2018_Tee_066_M"):
				case joaat("MP_Christmas2018_Tee_066_F"):
					if (__LIB_0__.func_137(25098, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_066_M"));
					break;
				case joaat("MP_Christmas2018_Tee_067_M"):
				case joaat("MP_Christmas2018_Tee_067_F"):
					if (__LIB_0__.func_137(25099, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_067_M"));
					break;
				case joaat("MP_Christmas2018_Tat_000_M"):
				case joaat("MP_Christmas2018_Tat_000_F"):
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tat_000_M"));
					break;
			}
			break;
		case joaat("mpBattle_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Battle_Clothing_000_M"):
				case joaat("MP_Battle_Clothing_000_F"):
					if (__LIB_0__.func_137(22108, -1) || __LIB_0__.func_137(25006, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_000_M"));
					break;
				case joaat("MP_Battle_Clothing_002_M"):
				case joaat("MP_Battle_Clothing_002_F"):
					if (__LIB_0__.func_137(9481, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_002_M"));
					break;
				case joaat("MP_Battle_Clothing_003_M"):
				case joaat("MP_Battle_Clothing_003_F"):
					if (__LIB_0__.func_137(9470, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_003_M"));
					break;
				case joaat("MP_Battle_Clothing_004_M"):
				case joaat("MP_Battle_Clothing_004_F"):
					if (__LIB_0__.func_137(9475, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_004_M"));
					break;
				case joaat("MP_Battle_Clothing_005_M"):
				case joaat("MP_Battle_Clothing_005_F"):
					if (__LIB_0__.func_137(9472, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_005_M"));
					break;
				case joaat("MP_Battle_Clothing_006_M"):
				case joaat("MP_Battle_Clothing_006_F"):
					if (__LIB_0__.func_137(9465, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_006_M"));
					break;
				case joaat("MP_Battle_Clothing_007_M"):
				case joaat("MP_Battle_Clothing_007_F"):
					if (__LIB_0__.func_137(9463, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_007_M"));
					break;
				case joaat("MP_Battle_Clothing_008_M"):
				case joaat("MP_Battle_Clothing_008_F"):
					if (__LIB_0__.func_137(9464, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_008_M"));
					break;
				case joaat("MP_Battle_Clothing_009_M"):
				case joaat("MP_Battle_Clothing_009_F"):
					if (__LIB_0__.func_137(9468, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_009_M"));
					break;
				case joaat("MP_Battle_Clothing_010_M"):
				case joaat("MP_Battle_Clothing_010_F"):
					if (__LIB_0__.func_137(9469, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_010_M"));
					break;
				case joaat("MP_Battle_Clothing_011_M"):
				case joaat("MP_Battle_Clothing_011_F"):
					if (__LIB_0__.func_137(9479, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_011_M"));
					break;
				case joaat("MP_Battle_Clothing_012_M"):
				case joaat("MP_Battle_Clothing_012_F"):
					if (__LIB_0__.func_137(9473, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_012_M"));
					break;
				case joaat("MP_Battle_Clothing_013_M"):
				case joaat("MP_Battle_Clothing_013_F"):
					if (__LIB_0__.func_137(9480, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_013_M"));
					break;
				case joaat("MP_Battle_Clothing_014_M"):
				case joaat("MP_Battle_Clothing_014_F"):
					if (__LIB_0__.func_137(9476, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_014_M"));
					break;
				case joaat("MP_Battle_Clothing_015_M"):
				case joaat("MP_Battle_Clothing_015_F"):
					if (__LIB_0__.func_137(9477, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_015_M"));
					break;
				case joaat("MP_Battle_Clothing_016_M"):
				case joaat("MP_Battle_Clothing_016_F"):
					if (__LIB_0__.func_137(9471, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_016_M"));
					break;
				case joaat("MP_Battle_Clothing_017_M"):
				case joaat("MP_Battle_Clothing_017_F"):
					if (__LIB_0__.func_137(9474, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_017_M"));
					break;
				case joaat("MP_Battle_Clothing_018_M"):
				case joaat("MP_Battle_Clothing_018_F"):
					if (__LIB_0__.func_137(9467, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_018_M"));
					break;
				case joaat("MP_Battle_Clothing_019_M"):
				case joaat("MP_Battle_Clothing_019_F"):
					if (__LIB_0__.func_137(9478, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_019_M"));
					break;
				case joaat("MP_Battle_Clothing_020_M"):
				case joaat("MP_Battle_Clothing_020_F"):
					if (__LIB_0__.func_137(9462, -1))
					{
						return 0;
					}
					if (iParam1 == joaat("MP_Battle_Clothing_020_M"))
					{
						if (__LIB_0__.func_137(27085, -1))
						{
							return 0;
						}
					}
					else if (__LIB_0__.func_137(27084, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_020_M"));
					break;
				case joaat("MP_Battle_Clothing_021_M"):
				case joaat("MP_Battle_Clothing_021_F"):
					if (__LIB_0__.func_137(9466, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_021_M"));
					break;
				case joaat("MP_Battle_Clothing_022_M"):
				case joaat("MP_Battle_Clothing_022_F"):
					if (__LIB_0__.func_137(22126, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_022_M"));
					break;
				case joaat("MP_Battle_Clothing_023_M"):
				case joaat("MP_Battle_Clothing_023_F"):
					if (__LIB_0__.func_137(22127, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_023_M"));
					break;
				case joaat("MP_Battle_Clothing_024_M"):
				case joaat("MP_Battle_Clothing_024_F"):
					if (__LIB_0__.func_137(22128, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_024_M"));
					break;
				case joaat("MP_Battle_Clothing_025_M"):
				case joaat("MP_Battle_Clothing_025_F"):
					if (__LIB_0__.func_137(22124, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_025_M"));
					break;
				case joaat("MP_Battle_Clothing_026_M"):
				case joaat("MP_Battle_Clothing_026_F"):
					if (__LIB_0__.func_137(22130, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_026_M"));
					break;
				case joaat("MP_Battle_Clothing_027_M"):
				case joaat("MP_Battle_Clothing_027_F"):
					if (__LIB_0__.func_137(22125, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_027_M"));
					break;
				case joaat("MP_Battle_Clothing_028_M"):
				case joaat("MP_Battle_Clothing_028_F"):
					if (__LIB_0__.func_137(22129, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_028_M"));
					break;
				case joaat("MP_Battle_Clothing_029_M"):
				case joaat("MP_Battle_Clothing_029_F"):
					if (__LIB_0__.func_137(22131, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_029_M"));
					break;
				case joaat("MP_Battle_Clothing_030_M"):
				case joaat("MP_Battle_Clothing_030_F"):
					if (__LIB_0__.func_137(22132, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_030_M"));
					break;
			}
			switch (iParam1)
			{
				case joaat("MP_Battle_Clothing_031_M"):
				case joaat("MP_Battle_Clothing_031_F"):
					if (__LIB_0__.func_137(22147, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_031_M"));
					break;
				case joaat("MP_Battle_Clothing_032_M"):
				case joaat("MP_Battle_Clothing_032_F"):
					if (__LIB_0__.func_137(22148, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_032_M"));
					break;
				case joaat("MP_Battle_Clothing_033_M"):
				case joaat("MP_Battle_Clothing_033_F"):
					if (__LIB_0__.func_137(22149, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_033_M"));
					break;
				case joaat("MP_Battle_Clothing_034_M"):
				case joaat("MP_Battle_Clothing_034_F"):
					if (__LIB_0__.func_137(22150, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_034_M"));
					break;
				case joaat("MP_Battle_Clothing_035_M"):
				case joaat("MP_Battle_Clothing_035_F"):
					if (__LIB_0__.func_137(22151, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_035_M"));
					break;
				case joaat("MP_Battle_Clothing_036_M"):
				case joaat("MP_Battle_Clothing_036_F"):
					if (__LIB_0__.func_137(22152, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_036_M"));
					break;
				case joaat("MP_Battle_Clothing_037_M"):
				case joaat("MP_Battle_Clothing_037_F"):
					if (__LIB_0__.func_137(22153, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_037_M"));
					break;
				case joaat("MP_Battle_Clothing_038_M"):
				case joaat("MP_Battle_Clothing_038_F"):
					if (__LIB_0__.func_137(22154, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_038_M"));
					break;
				case joaat("MP_Battle_Clothing_039_M"):
				case joaat("MP_Battle_Clothing_039_F"):
					if (__LIB_0__.func_137(22155, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_039_M"));
					break;
				case joaat("MP_Battle_Clothing_040_M"):
				case joaat("MP_Battle_Clothing_040_F"):
					if (__LIB_0__.func_137(22156, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_040_M"));
					break;
				case joaat("MP_Battle_Clothing_041_M"):
				case joaat("MP_Battle_Clothing_041_F"):
					if (__LIB_0__.func_137(22157, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_041_M"));
					break;
				case joaat("MP_Battle_Clothing_042_M"):
				case joaat("MP_Battle_Clothing_042_F"):
					if (__LIB_0__.func_137(22158, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_042_M"));
					break;
				case joaat("MP_Battle_Clothing_043_M"):
				case joaat("MP_Battle_Clothing_043_F"):
					if (__LIB_0__.func_137(22159, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_043_M"));
					break;
				case joaat("MP_Battle_Clothing_044_M"):
				case joaat("MP_Battle_Clothing_044_F"):
					if (__LIB_0__.func_137(22160, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_044_M"));
					break;
				case joaat("MP_Battle_Clothing_045_M"):
				case joaat("MP_Battle_Clothing_045_F"):
					if (__LIB_0__.func_137(22161, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_045_M"));
					break;
				case joaat("MP_Battle_Clothing_046_M"):
				case joaat("MP_Battle_Clothing_046_F"):
					if (__LIB_0__.func_137(22162, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_046_M"));
					break;
				case joaat("MP_Battle_Clothing_047_M"):
				case joaat("MP_Battle_Clothing_047_F"):
					if (__LIB_0__.func_137(22163, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_047_M"));
					break;
				case joaat("MP_Battle_Clothing_048_M"):
				case joaat("MP_Battle_Clothing_048_F"):
					if (__LIB_0__.func_137(22164, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_048_M"));
					break;
				case joaat("MP_Battle_Clothing_049_M"):
				case joaat("MP_Battle_Clothing_049_F"):
					if (__LIB_0__.func_137(22165, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_049_M"));
					break;
				case joaat("MP_Battle_Clothing_050_M"):
				case joaat("MP_Battle_Clothing_050_F"):
					if (__LIB_0__.func_137(22166, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_050_M"));
					break;
				case joaat("MP_Battle_Clothing_051_M"):
				case joaat("MP_Battle_Clothing_051_F"):
					if (__LIB_0__.func_137(22167, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_051_M"));
					break;
				case joaat("MP_Battle_Clothing_052_M"):
				case joaat("MP_Battle_Clothing_052_F"):
					if (__LIB_0__.func_137(22168, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_052_M"));
					break;
				case joaat("MP_Battle_Clothing_053_M"):
				case joaat("MP_Battle_Clothing_053_F"):
					if (__LIB_0__.func_137(22169, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_053_M"));
					break;
				case joaat("MP_Battle_Clothing_054_M"):
				case joaat("MP_Battle_Clothing_054_F"):
					if (__LIB_0__.func_137(22170, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_054_M"));
					break;
				case joaat("MP_Battle_Clothing_055_M"):
				case joaat("MP_Battle_Clothing_055_F"):
					if (__LIB_0__.func_137(22171, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_055_M"));
					break;
				case joaat("MP_Battle_Clothing_056_M"):
				case joaat("MP_Battle_Clothing_056_F"):
					if (__LIB_0__.func_137(22172, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_056_M"));
					break;
				case joaat("MP_Battle_Clothing_057_M"):
				case joaat("MP_Battle_Clothing_057_F"):
					if (__LIB_0__.func_137(22173, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_057_M"));
					break;
				case joaat("MP_Battle_Clothing_058_M"):
				case joaat("MP_Battle_Clothing_058_F"):
					if (__LIB_0__.func_137(22174, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_058_M"));
					break;
				case joaat("MP_Battle_Clothing_059_M"):
				case joaat("MP_Battle_Clothing_059_F"):
					if (__LIB_0__.func_137(22175, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_059_M"));
					break;
				case joaat("MP_Battle_Clothing_060_M"):
				case joaat("MP_Battle_Clothing_060_F"):
					if (__LIB_0__.func_137(22176, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_060_M"));
					break;
				case joaat("MP_Battle_Clothing_061_M"):
				case joaat("MP_Battle_Clothing_061_F"):
					if (__LIB_0__.func_137(22177, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_061_M"));
					break;
				case joaat("MP_Battle_Clothing_062_M"):
				case joaat("MP_Battle_Clothing_062_F"):
					if (__LIB_0__.func_137(22178, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_062_M"));
					break;
			}
			break;
		case joaat("mpGunrunning_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Gunrunning_Award_019_M"):
				case joaat("MP_Gunrunning_Award_025_F"):
					if (__LIB_0__.func_137(15426, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_019_M"));
					break;
				case joaat("MP_Gunrunning_Award_020_M"):
				case joaat("MP_Gunrunning_Award_020_F"):
					if (__LIB_0__.func_137(15422, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_020_M"));
					break;
				case joaat("MP_Gunrunning_Award_020_M_ALT"):
				case joaat("MP_Gunrunning_Award_020_F_ALT"):
					if (__LIB_0__.func_137(15423, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_020_M_ALT"));
					break;
				case joaat("MP_Gunrunning_Award_021_M"):
				case joaat("MP_Gunrunning_Award_021_F"):
					if (__LIB_0__.func_137(15421, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_021_M"));
					break;
				case joaat("MP_Gunrunning_Award_022_M"):
				case joaat("MP_Gunrunning_Award_026_F"):
					if (__LIB_0__.func_137(15427, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_022_M"));
					break;
				case joaat("MP_Gunrunning_Award_023_M"):
				case joaat("MP_Gunrunning_Award_023_F"):
					if (__LIB_0__.func_137(15419, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_023_M"));
					break;
				case joaat("MP_Gunrunning_Award_024_M"):
				case joaat("MP_Gunrunning_Award_024_F"):
					if (__LIB_0__.func_137(15420, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_024_M"));
					break;
			}
			switch (iParam1)
			{
				case joaat("MP_Gunrunning_Award_000_M"):
				case joaat("MP_Gunrunning_Award_000_F"):
					if (__LIB_0__.func_137(15394, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_000_M"));
					break;
				case joaat("MP_Gunrunning_Award_001_M"):
				case joaat("MP_Gunrunning_Award_001_F"):
					if (__LIB_1__.func_563(209, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_001_M"));
					break;
				case joaat("MP_Gunrunning_Award_002_M"):
				case joaat("MP_Gunrunning_Award_002_F"):
					if (__LIB_0__.func_137(15406, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_002_M"));
					break;
				case joaat("MP_Gunrunning_Award_003_M"):
				case joaat("MP_Gunrunning_Award_003_F"):
					if (__LIB_0__.func_137(15395, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_003_M"));
					break;
				case joaat("MP_Gunrunning_Award_004_M"):
				case joaat("MP_Gunrunning_Award_004_F"):
					if (__LIB_1__.func_563(209, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_004_M"));
					break;
				case joaat("MP_Gunrunning_Award_005_M"):
				case joaat("MP_Gunrunning_Award_005_F"):
					if (__LIB_0__.func_137(15410, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_005_M"));
					break;
				case joaat("MP_Gunrunning_Award_006_M"):
				case joaat("MP_Gunrunning_Award_006_F"):
					if (__LIB_0__.func_137(15407, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_006_M"));
					break;
				case joaat("MP_Gunrunning_Award_007_M"):
				case joaat("MP_Gunrunning_Award_007_F"):
					if (__LIB_1__.func_563(209, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_007_M"));
					break;
				case joaat("MP_Gunrunning_Award_008_M"):
				case joaat("MP_Gunrunning_Award_008_F"):
					if (__LIB_1__.func_563(209, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_008_M"));
					break;
				case joaat("MP_Gunrunning_Award_009_M"):
				case joaat("MP_Gunrunning_Award_009_F"):
					if (__LIB_0__.func_137(15414, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_009_M"));
					break;
				case joaat("MP_Gunrunning_Award_010_M"):
				case joaat("MP_Gunrunning_Award_010_F"):
					if (__LIB_0__.func_137(15415, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_010_M"));
					break;
				case joaat("MP_Gunrunning_Award_011_M"):
				case joaat("MP_Gunrunning_Award_011_F"):
					if (__LIB_0__.func_137(15399, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_011_M"));
					break;
				case joaat("MP_Gunrunning_Award_012_M"):
				case joaat("MP_Gunrunning_Award_012_F"):
					if (__LIB_0__.func_137(15404, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_012_M"));
					break;
				case joaat("MP_Gunrunning_Award_013_M"):
				case joaat("MP_Gunrunning_Award_013_F"):
					if (__LIB_1__.func_563(209, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_013_M"));
					break;
				case joaat("MP_Gunrunning_Award_014_M"):
				case joaat("MP_Gunrunning_Award_014_F"):
					if (__LIB_0__.func_137(15392, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_014_M"));
					break;
				case joaat("MP_Gunrunning_Award_015_M"):
				case joaat("MP_Gunrunning_Award_015_F"):
					if (__LIB_0__.func_137(15390, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_015_M"));
					break;
				case joaat("MP_Gunrunning_Award_016_M"):
				case joaat("MP_Gunrunning_Award_016_F"):
					if (__LIB_0__.func_137(15402, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_016_M"));
					break;
				case joaat("MP_Gunrunning_Award_017_M"):
				case joaat("MP_Gunrunning_Award_017_F"):
					if (__LIB_0__.func_137(15416, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_017_M"));
					break;
				case joaat("MP_Gunrunning_Award_018_M"):
				case joaat("MP_Gunrunning_Award_018_F"):
					if (__LIB_1__.func_563(209, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_018_M"));
					break;
			}
			break;
		case joaat("mpBiker_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Biker_Tee_022_M"):
				case joaat("MP_Biker_Tee_022_F"):
					if (__LIB_0__.func_137(9366, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_022_M"));
					break;
				case joaat("MP_Biker_Tee_023_M"):
				case joaat("MP_Biker_Tee_023_F"):
					if (__LIB_0__.func_137(9367, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_023_M"));
					break;
				case joaat("MP_Biker_Tee_024_M"):
				case joaat("MP_Biker_Tee_024_F"):
					if (__LIB_0__.func_137(9369, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_024_M"));
					break;
				case joaat("MP_Biker_Tee_025_M"):
				case joaat("MP_Biker_Tee_025_F"):
					if (__LIB_0__.func_137(9368, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_025_M"));
					break;
				case joaat("MP_Biker_Tee_047_M"):
				case joaat("MP_Biker_Tee_047_F"):
					if (__LIB_0__.func_137(9365, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_047_M"));
					break;
				case joaat("MP_Biker_Tee_048_M"):
				case joaat("MP_Biker_Tee_048_F"):
					if (__LIB_0__.func_137(9364, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_048_M"));
					break;
				case joaat("MP_Biker_Tee_049_M"):
				case joaat("MP_Biker_Tee_049_F"):
					if (__LIB_0__.func_137(27078, -1))
					{
						return 0;
					}
					if (__LIB_0__.func_137(9363, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_049_M"));
					break;
				case joaat("MP_Biker_Tee_050_M"):
				case joaat("MP_Biker_Tee_050_F"):
					if (__LIB_0__.func_137(9362, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_050_M"));
					break;
				case joaat("MP_Biker_Tee_051_M"):
				case joaat("MP_Biker_Tee_051_F"):
					if (__LIB_0__.func_137(9370, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_051_M"));
					break;
				case joaat("MP_Biker_Tee_052_M"):
				case joaat("MP_Biker_Tee_052_F"):
					if (__LIB_0__.func_137(9371, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_052_M"));
					break;
				case joaat("MP_Biker_Tee_053_M"):
				case joaat("MP_Biker_Tee_053_F"):
					if (__LIB_0__.func_137(9372, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_053_M"));
					break;
				case joaat("MP_Biker_Tee_054_M"):
				case joaat("MP_Biker_Tee_054_F"):
					if (__LIB_0__.func_137(9373, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_054_M"));
					break;
				case joaat("MP_Biker_Tee_055_M"):
				case joaat("MP_Biker_Tee_055_F"):
					if (__LIB_0__.func_137(9374, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_055_M"));
					break;
				case joaat("MP_Biker_Award_000_M"):
				case joaat("MP_Biker_Award_000_F"):
					if (__LIB_0__.func_137(9384, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Biker_Award_000_M"));
					break;
				case joaat("MP_Biker_Award_001_M"):
				case joaat("MP_Biker_Award_001_F"):
					if (__LIB_0__.func_137(9385, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_Biker_Award_001_M"));
					break;
			}
			break;
		case joaat("mpExecutive_overlays"):
			switch (iParam1)
			{
				case joaat("MP_exec_prizes_015_M"):
				case joaat("MP_exec_prizes_015_F"):
					if (__LIB_0__.func_137(7551, -1) || __LIB_1__.func_556(3792, -1, 0) >= Global_262145.f_16823 /* Tunable: DCTL_WIN_COUNT_REWARD */)
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_015_M"));
					break;
				case joaat("MP_exec_prizes_000_M"):
				case joaat("MP_exec_prizes_000_F"):
					if (__LIB_0__.func_137(7467, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_000_M"));
					break;
				case joaat("MP_exec_prizes_001_M"):
				case joaat("MP_exec_prizes_001_F"):
					if (__LIB_0__.func_137(7468, -1))
					{
						return 0;
					}
					if (iParam1 == joaat("MP_exec_prizes_001_M"))
					{
						if (__LIB_0__.func_137(27083, -1))
						{
							return 0;
						}
					}
					else if (__LIB_0__.func_137(27086, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_001_M"));
					break;
				case joaat("MP_exec_prizes_002_M"):
				case joaat("MP_exec_prizes_002_F"):
					if (__LIB_0__.func_137(7469, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_002_M"));
					break;
				case joaat("MP_exec_prizes_003_M"):
				case joaat("MP_exec_prizes_003_F"):
					if (__LIB_0__.func_137(7470, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_003_M"));
					break;
				case joaat("MP_exec_prizes_004_M"):
				case joaat("MP_exec_prizes_004_F"):
					if (__LIB_0__.func_137(7471, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_004_M"));
					break;
				case joaat("MP_exec_prizes_005_M"):
				case joaat("MP_exec_prizes_005_F"):
					if (__LIB_0__.func_137(7472, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_005_M"));
					break;
				case joaat("MP_exec_prizes_006_M"):
				case joaat("MP_exec_prizes_006_F"):
					if (__LIB_0__.func_137(7473, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_006_M"));
					break;
				case joaat("MP_exec_prizes_007_M"):
				case joaat("MP_exec_prizes_007_F"):
					if (__LIB_0__.func_137(7474, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_007_M"));
					break;
				case joaat("MP_exec_prizes_008_M"):
				case joaat("MP_exec_prizes_008_F"):
					if (__LIB_0__.func_137(7475, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_008_M"));
					break;
				case joaat("MP_exec_prizes_009_M"):
				case joaat("MP_exec_prizes_009_F"):
					if (__LIB_0__.func_137(7476, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_009_M"));
					break;
				case joaat("MP_exec_prizes_010_M"):
				case joaat("MP_exec_prizes_010_F"):
					if (__LIB_0__.func_137(7477, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_010_M"));
					break;
				case joaat("MP_exec_prizes_011_M"):
				case joaat("MP_exec_prizes_011_F"):
					if (__LIB_0__.func_137(7478, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_011_M"));
					break;
				case joaat("MP_exec_prizes_012_M"):
				case joaat("MP_exec_prizes_012_F"):
					if (__LIB_0__.func_137(7479, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_012_M"));
					break;
				case joaat("MP_exec_prizes_013_M"):
				case joaat("MP_exec_prizes_013_F"):
					if (__LIB_0__.func_137(7480, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_013_M"));
					break;
				case joaat("MP_exec_prizes_014_M"):
				case joaat("MP_exec_prizes_014_F"):
					if (__LIB_0__.func_137(7481, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_014_M"));
					break;
			}
			break;
		case joaat("mpHalloween_overlays"):
			switch (iParam1)
			{
				case joaat("HW_Tee_000_F"):
				case joaat("HW_Tee_000_M"):
					if (__LIB_0__.func_137(4260, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("HW_Tee_000_M"));
					break;
				case joaat("HW_Tee_001_F"):
				case joaat("HW_Tee_001_M"):
					if (__LIB_0__.func_137(4257, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("HW_Tee_001_M"));
					break;
				case joaat("HW_Tee_002_F"):
				case joaat("HW_Tee_002_M"):
					if (__LIB_0__.func_137(4269, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("HW_Tee_002_M"));
					break;
				case joaat("HW_Tee_003_F"):
				case joaat("HW_Tee_003_M"):
					if (__LIB_0__.func_137(4261, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("HW_Tee_003_M"));
					break;
				case joaat("HW_Tee_004_F"):
				case joaat("HW_Tee_004_M"):
					if (__LIB_0__.func_137(4259, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("HW_Tee_004_M"));
					break;
				case joaat("HW_Tee_005_F"):
				case joaat("HW_Tee_005_M"):
					if (__LIB_0__.func_137(4268, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("HW_Tee_005_M"));
					break;
				case joaat("HW_Tee_006_F"):
				case joaat("HW_Tee_006_M"):
					if (__LIB_0__.func_137(4265, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("HW_Tee_006_M"));
					break;
				case joaat("HW_Tee_007_F"):
				case joaat("HW_Tee_007_M"):
					if (__LIB_0__.func_137(4258, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("HW_Tee_007_M"));
					break;
				case joaat("HW_Tee_008_F"):
				case joaat("HW_Tee_008_M"):
					if (__LIB_0__.func_137(4264, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("HW_Tee_008_M"));
					break;
				case joaat("HW_Tee_009_F"):
				case joaat("HW_Tee_009_M"):
					if (__LIB_0__.func_137(4267, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("HW_Tee_009_M"));
					break;
				case joaat("HW_Tee_010_F"):
				case joaat("HW_Tee_010_M"):
					if (__LIB_0__.func_137(4262, -1))
					{
						return 0;
					}
					if (__LIB_0__.func_137(27079, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("HW_Tee_010_M"));
					break;
				case joaat("HW_Tee_011_F"):
				case joaat("HW_Tee_011_M"):
					if (__LIB_0__.func_137(4263, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("HW_Tee_011_M"));
					break;
				case joaat("HW_Tee_012_F"):
				case joaat("HW_Tee_012_M"):
					if (__LIB_0__.func_137(4266, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("HW_Tee_012_M"));
					break;
			}
			break;
		case joaat("mpLowrider_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Bennys_000_M"):
				case joaat("MP_Bennys_001_M"):
					if (__LIB_1__.func_556(2934, -1, 0) > 0)
					{
						return 0;
					}
					if (iParam1 == joaat("MP_Bennys_001_M"))
					{
						if (__LIB_0__.func_137(27068, -1))
						{
							return 0;
						}
					}
					return !__LIB_25__.func_17(iParam2, iParam1, 1);
					break;
				case joaat("MP_Bennys_000_F"):
				case joaat("MP_Bennys_001_F"):
					if (__LIB_1__.func_556(2934, -1, 0) > 0)
					{
						return 0;
					}
					if (iParam1 == joaat("MP_Bennys_001_F"))
					{
						if (__LIB_0__.func_137(27068, -1))
						{
							return 0;
						}
					}
					return !__LIB_25__.func_17(iParam2, iParam1, 0);
					break;
			}
			break;
		case joaat("mpxmas_604490_overlays"):
			switch (iParam1)
			{
				case joaat("MP_IHeartLC_000_M"):
				case joaat("MP_IHeartLC_001_F"):
					if (__LIB_0__.func_137(113, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_17(iParam2, iParam1, iParam1 == joaat("MP_IHeartLC_000_M"));
					break;
			}
			break;
		case joaat("mpHeist_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Award_M_Tshirt_004"):
				case joaat("MP_Award_M_Tshirt_005"):
				case joaat("MP_Award_M_Tshirt_006"):
				case joaat("MP_Award_M_Tshirt_007"):
				case joaat("MP_Award_M_Tshirt_008"):
				case joaat("MP_Award_M_Tshirt_009"):
				case joaat("MP_Award_M_Tshirt_010"):
				case joaat("MP_Award_M_Tshirt_011"):
				case joaat("MP_Award_M_Tshirt_012"):
				case joaat("MP_Award_M_Tshirt_013"):
					if (iParam1 == joaat("MP_Award_M_Tshirt_004"))
					{
						if (__LIB_0__.func_137(27082, -1))
						{
							return 0;
						}
						if (__LIB_0__.func_137(3770, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_005"))
					{
						if (__LIB_0__.func_137(3771, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_006"))
					{
						if (__LIB_0__.func_137(3772, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_007"))
					{
						if (__LIB_0__.func_137(3773, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_008"))
					{
						if (__LIB_0__.func_137(3774, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_009"))
					{
						if (__LIB_0__.func_137(3775, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_010"))
					{
						if (__LIB_0__.func_137(3776, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_011"))
					{
						if (__LIB_0__.func_137(3777, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_012"))
					{
						if (__LIB_0__.func_137(3778, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_013"))
					{
						if (__LIB_0__.func_137(3779, -1) || __LIB_0__.func_137(27084, -1))
						{
							return 0;
						}
					}
					return !__LIB_25__.func_17(iParam2, iParam1, 1);
					break;
				case joaat("MP_Award_F_Tshirt_004"):
				case joaat("MP_Award_F_Tshirt_005"):
				case joaat("MP_Award_F_Tshirt_006"):
				case joaat("MP_Award_F_Tshirt_007"):
				case joaat("MP_Award_F_Tshirt_008"):
				case joaat("MP_Award_F_Tshirt_009"):
				case joaat("MP_Award_F_Tshirt_010"):
				case joaat("MP_Award_F_Tshirt_011"):
				case joaat("MP_Award_F_Tshirt_012"):
				case joaat("MP_Award_F_Tshirt_013"):
					if (iParam1 == joaat("MP_Award_F_Tshirt_004"))
					{
						if (__LIB_0__.func_137(3770, -1))
						{
							return 0;
						}
						if (__LIB_0__.func_137(27082, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_005"))
					{
						if (__LIB_0__.func_137(3771, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_006"))
					{
						if (__LIB_0__.func_137(3772, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_007"))
					{
						if (__LIB_0__.func_137(3773, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_008"))
					{
						if (__LIB_0__.func_137(3774, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_009"))
					{
						if (__LIB_0__.func_137(3775, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_010"))
					{
						if (__LIB_0__.func_137(3776, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_011"))
					{
						if (__LIB_0__.func_137(3777, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_012"))
					{
						if (__LIB_0__.func_137(3778, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_013"))
					{
						if (__LIB_0__.func_137(3779, -1) || __LIB_0__.func_137(27083, -1))
						{
							return 0;
						}
					}
					return !__LIB_25__.func_17(iParam2, iParam1, 0);
					break;
				case joaat("MP_Elite_M_Tshirt"):
				case joaat("MP_Elite_M_Tshirt_1"):
				case joaat("MP_Elite_F_Tshirt"):
				case joaat("MP_Elite_F_Tshirt_1"):
					if ((((__LIB_0__.func_137(3765, -1) && __LIB_0__.func_137(3766, -1)) && __LIB_0__.func_137(3767, -1)) && __LIB_0__.func_137(3768, -1)) && __LIB_0__.func_137(3769, -1))
					{
						return 0;
					}
					return 1;
					break;
			}
			break;
		case joaat("mpIndependence_overlays"):
			switch (iParam1)
			{
				case joaat("FM_Ind_M_Award_000"):
				case joaat("FM_Ind_F_Award_000"):
					return !__LIB_0__.func_137(3593, -1);
					break;
			}
			if (!Global_262145.f_8258 /* Tunable: TOGGLE_ACTIVATE_INDEPENDENCE_PACK */ && !__LIB_25__.func_17(iParam2, iParam1, 0))
			{
				return 1;
			}
			break;
		case joaat("mpHipster_overlays"):
			switch (iParam1)
			{
				case 1443536758:
				case 1333229624:
				case -1665422117:
				case 1100930183:
				case -1595008258:
				case 94055115:
				case -627896761:
				case 1873477305:
					return 1;
					break;
				case joaat("MP_Award_M_Tshirt_000"):
				case joaat("MP_Award_M_Tshirt_001"):
				case joaat("MP_Award_F_Tshirt_000"):
				case joaat("MP_Award_F_Tshirt_001"):
					return 1;
					break;
				case 300677115:
				case 262692161:
				case -1684141219:
				case 390655118:
				case -479442624:
				case -542924311:
				case 1696910411:
				case -1259058037:
					return 1;
					break;
				case joaat("MP_Award_M_Tshirt_002"):
				case joaat("MP_Award_M_Tshirt_003"):
				case joaat("MP_Award_F_Tshirt_002"):
				case joaat("MP_Award_F_Tshirt_003"):
					return 1;
					break;
				case joaat("FM_Hip_M_Retro_010"):
				case joaat("FM_Hip_F_Retro_010"):
					return (!__LIB_1__.func_563(152, -1) && !__LIB_0__.func_137(9440, -1));
					break;
				case joaat("FM_Hip_M_Retro_003"):
				case joaat("FM_Hip_F_Retro_003"):
					return (!__LIB_1__.func_563(151, -1) && !__LIB_0__.func_137(9430, -1));
					break;
				case joaat("FM_Hip_M_Retro_000"):
				case joaat("FM_Hip_F_Retro_000"):
					return (!__LIB_24__.func_976(iParam2, -1) && !__LIB_0__.func_137(9426, -1));
					break;
				case joaat("FM_Hip_M_Retro_001"):
				case joaat("FM_Hip_F_Retro_001"):
					return (!__LIB_24__.func_976(iParam2, -1) && !__LIB_0__.func_137(9427, -1));
					break;
				case joaat("FM_Hip_M_Retro_002"):
				case joaat("FM_Hip_F_Retro_002"):
					return (!__LIB_24__.func_976(iParam2, -1) && !__LIB_0__.func_137(9428, -1));
					break;
				case joaat("FM_Hip_M_Retro_004"):
				case joaat("FM_Hip_F_Retro_004"):
					return (!__LIB_24__.func_976(iParam2, -1) && !__LIB_0__.func_137(9431, -1));
					break;
				case joaat("FM_Hip_M_Retro_005"):
				case joaat("FM_Hip_F_Retro_005"):
					return (!__LIB_24__.func_976(iParam2, -1) && !__LIB_0__.func_137(9432, -1));
					break;
				case joaat("FM_Hip_M_Retro_006"):
				case joaat("FM_Hip_F_Retro_006"):
					return (!__LIB_24__.func_976(iParam2, -1) && !__LIB_0__.func_137(9433, -1));
					break;
				case joaat("FM_Hip_M_Retro_007"):
				case joaat("FM_Hip_F_Retro_007"):
					return (!__LIB_24__.func_976(iParam2, -1) && !__LIB_0__.func_137(9439, -1));
					break;
				case joaat("FM_Hip_M_Retro_008"):
				case joaat("FM_Hip_F_Retro_008"):
					return (!__LIB_24__.func_976(iParam2, -1) && !__LIB_0__.func_137(9434, -1));
					break;
				case joaat("FM_Hip_M_Retro_009"):
				case joaat("FM_Hip_F_Retro_009"):
					return (!__LIB_24__.func_976(iParam2, -1) && !__LIB_0__.func_137(9435, -1));
					break;
				case joaat("FM_Hip_M_Retro_011"):
				case joaat("FM_Hip_F_Retro_011"):
					return (!__LIB_24__.func_976(iParam2, -1) && !__LIB_0__.func_137(9436, -1));
					break;
				case joaat("FM_Hip_M_Retro_012"):
				case joaat("FM_Hip_F_Retro_012"):
					return (!__LIB_24__.func_976(iParam2, -1) && !__LIB_0__.func_137(9429, -1));
					break;
				case joaat("FM_Hip_M_Retro_013"):
				case joaat("FM_Hip_F_Retro_013"):
					return (!__LIB_24__.func_976(iParam2, -1) && !__LIB_0__.func_137(9437, -1));
					break;
				case joaat("FM_Rstar_M_Tshirt_000"):
				case joaat("FM_Rstar_M_Tshirt_001"):
				case joaat("FM_Rstar_M_Tshirt_002"):
				case joaat("FM_Rstar_F_Tshirt_000"):
				case joaat("FM_Rstar_F_Tshirt_001"):
				case joaat("FM_Rstar_F_Tshirt_002"):
					return !__LIB_0__.func_236();
					break;
			}
			break;
		case joaat("mpValentines_overlays"):
			if ((!Global_262145.f_7058 /* Tunable: TURN_ON_VALENTINES_EVENT */ && !__LIB_24__.func_976(iParam2, -1)) && !Global_262145.f_12031 /* Tunable: TURN_ON_VALENTINE_CLOTHING */)
			{
				return 1;
			}
			break;
		case joaat("mpPilot_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Fli_M_Tshirt_000"):
				case joaat("MP_Fli_F_Tshirt_000"):
					return !__LIB_0__.func_137(3608, -1);
					break;
			}
			break;
		case joaat("mpLTS_overlays"):
			switch (iParam1)
			{
				case joaat("FM_LTS_M_Tshirt_000"):
				case joaat("FM_LTS_F_Tshirt_000"):
					return (!__LIB_0__.func_137(3615, -1) && !__LIB_0__.func_137(9438, -1));
					break;
			}
			break;
		case joaat("mpLuxe_overlays"):
			if (iParam1 == joaat("MP_LUXE_VDG_006_F"))
			{
				return 1;
			}
			switch (iParam1)
			{
				case joaat("MP_FAKE_DIS_000_M"):
				case joaat("MP_FAKE_DIS_000_F"):
					return !__LIB_0__.func_137(3783, -1);
					break;
				case joaat("MP_FAKE_DIS_001_M"):
				case joaat("MP_FAKE_DIS_001_F"):
					return !__LIB_0__.func_137(3784, -1);
					break;
				case joaat("MP_FAKE_DS_000_M"):
				case joaat("MP_FAKE_DS_000_F"):
					return !__LIB_0__.func_137(3785, -1);
					break;
				case joaat("MP_FAKE_ENEMA_000_M"):
				case joaat("MP_FAKE_ENEMA_000_F"):
					return !__LIB_0__.func_137(3786, -1);
					break;
				case joaat("MP_FAKE_LB_000_M"):
				case joaat("MP_FAKE_LB_000_F"):
					return !__LIB_0__.func_137(3787, -1);
					break;
				case joaat("MP_FAKE_LC_000_M"):
				case joaat("MP_FAKE_LC_000_F"):
					return !__LIB_0__.func_137(3788, -1);
					break;
				case joaat("MP_FAKE_SC_000_M"):
				case joaat("MP_FAKE_SC_000_F"):
					if (__LIB_0__.func_137(27081, -1))
					{
						return 0;
					}
					return !__LIB_0__.func_137(3789, -1);
					break;
				case joaat("MP_FAKE_Vap_000_M"):
				case joaat("MP_FAKE_Vap_000_F"):
					return !__LIB_0__.func_137(3790, -1);
					break;
				case joaat("MP_FAKE_Per_000_M"):
				case joaat("MP_FAKE_Per_000_F"):
					return !__LIB_0__.func_137(3791, -1);
					break;
				case joaat("MP_FAKE_SN_000_M"):
				case joaat("MP_FAKE_SN_000_F"):
					return !__LIB_0__.func_137(3792, -1);
					break;
				case joaat("MP_FILM_000_F"):
				case joaat("MP_FILM_000_M"):
					if (iParam1 == joaat("MP_FILM_000_F"))
					{
						iVar0 = __LIB_1__.func_556(2444, -1, 0);
						if (BitTest(iVar0, 0))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_000_M"))
					{
						iVar1 = __LIB_1__.func_556(2424, -1, 0);
						if (BitTest(iVar1, 18))
						{
							return 0;
						}
					}
					return !__LIB_0__.func_137(3793, -1);
					break;
				case joaat("MP_FILM_001_F"):
				case joaat("MP_FILM_001_M"):
					if (iParam1 == joaat("MP_FILM_001_F"))
					{
						iVar2 = __LIB_1__.func_556(2444, -1, 0);
						if (BitTest(iVar2, 1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_001_M"))
					{
						iVar3 = __LIB_1__.func_556(2424, -1, 0);
						if (BitTest(iVar3, 19))
						{
							return 0;
						}
					}
					return !__LIB_0__.func_137(3794, -1);
					break;
				case joaat("MP_FILM_002_F"):
				case joaat("MP_FILM_002_M"):
					if (iParam1 == joaat("MP_FILM_002_F"))
					{
						iVar4 = __LIB_1__.func_556(2444, -1, 0);
						if (BitTest(iVar4, 2))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_002_M"))
					{
						iVar5 = __LIB_1__.func_556(2424, -1, 0);
						if (BitTest(iVar5, 20))
						{
							return 0;
						}
					}
					return !__LIB_0__.func_137(3795, -1);
					break;
				case joaat("MP_FILM_003_F"):
				case joaat("MP_FILM_003_M"):
					if (iParam1 == joaat("MP_FILM_003_F"))
					{
						iVar6 = __LIB_1__.func_556(2444, -1, 0);
						if (BitTest(iVar6, 3))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_003_M"))
					{
						iVar7 = __LIB_1__.func_556(2424, -1, 0);
						if (BitTest(iVar7, 21))
						{
							return 0;
						}
					}
					return !__LIB_0__.func_137(3796, -1);
					break;
				case joaat("MP_FILM_004_F"):
				case joaat("MP_FILM_004_M"):
					if (iParam1 == joaat("MP_FILM_004_F"))
					{
						iVar8 = __LIB_1__.func_556(2444, -1, 0);
						if (BitTest(iVar8, 4))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_004_M"))
					{
						iVar9 = __LIB_1__.func_556(2424, -1, 0);
						if (BitTest(iVar9, 22))
						{
							return 0;
						}
					}
					return !__LIB_0__.func_137(3797, -1);
					break;
				case joaat("MP_FILM_005_F"):
				case joaat("MP_FILM_005_M"):
					if (iParam1 == joaat("MP_FILM_005_F"))
					{
						iVar10 = __LIB_1__.func_556(2444, -1, 0);
						if (BitTest(iVar10, 5))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_005_M"))
					{
						iVar11 = __LIB_1__.func_556(2424, -1, 0);
						if (BitTest(iVar11, 23))
						{
							return 0;
						}
					}
					return !__LIB_0__.func_137(3798, -1);
					break;
				case joaat("MP_FILM_006_F"):
				case joaat("MP_FILM_006_M"):
					if (iParam1 == joaat("MP_FILM_006_F"))
					{
						iVar12 = __LIB_1__.func_556(2444, -1, 0);
						if (BitTest(iVar12, 6))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_006_M"))
					{
						iVar13 = __LIB_1__.func_556(2424, -1, 0);
						if (BitTest(iVar13, 24))
						{
							return 0;
						}
					}
					return !__LIB_0__.func_137(3799, -1);
					break;
				case joaat("MP_FILM_007_F"):
				case joaat("MP_FILM_007_M"):
					if (iParam1 == joaat("MP_FILM_007_F"))
					{
						iVar14 = __LIB_1__.func_556(2444, -1, 0);
						if (BitTest(iVar14, 7))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_007_M"))
					{
						iVar15 = __LIB_1__.func_556(2424, -1, 0);
						if (BitTest(iVar15, 25))
						{
							return 0;
						}
					}
					return !__LIB_0__.func_137(3800, -1);
					break;
				case joaat("MP_FILM_008_F"):
				case joaat("MP_FILM_008_M"):
					if (iParam1 == joaat("MP_FILM_008_F"))
					{
						iVar16 = __LIB_1__.func_556(2444, -1, 0);
						if (BitTest(iVar16, 8))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_008_M"))
					{
						iVar17 = __LIB_1__.func_556(2424, -1, 0);
						if (BitTest(iVar17, 26))
						{
							return 0;
						}
					}
					return !__LIB_0__.func_137(3801, -1);
					break;
				case joaat("MP_FILM_009_F"):
				case joaat("MP_FILM_009_M"):
					if (iParam1 == joaat("MP_FILM_009_F"))
					{
						iVar18 = __LIB_1__.func_556(2444, -1, 0);
						if (BitTest(iVar18, 9))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_009_M"))
					{
						iVar19 = __LIB_1__.func_556(2424, -1, 0);
						if (BitTest(iVar19, 27))
						{
							return 0;
						}
					}
					return !__LIB_0__.func_137(3802, -1);
					break;
			}
			break;
		case joaat("mpLuxe2_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Luxe_Tat_030_M"):
				case joaat("MP_Luxe_Tat_031_M"):
					return 1;
					break;
				case joaat("MP_Luxe_Tat_030_F"):
				case joaat("MP_Luxe_Tat_031_F"):
					return 1;
					break;
			}
			break;
		case joaat("multiplayer_overlays"):
			switch (iParam1)
			{
				case joaat("MP_FM_OGA_000_m"):
				case joaat("MP_FM_OGA_001_m"):
				case joaat("MP_FM_OGA_002_m"):
				case joaat("MP_FM_OGA_003_m"):
				case joaat("MP_FM_OGA_000_f"):
				case joaat("MP_FM_OGA_001_f"):
				case joaat("MP_FM_OGA_002_f"):
				case joaat("MP_FM_OGA_003_f"):
					return !__LIB_0__.func_116();
					break;
			}
			break;
	}
	return 0;
}

void func_902(int iParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0x6D6E5
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (uParam1->f_66 != 0)
		{
		}
		if (!__LIB_18__.func_439(iParam0))
		{
			if (MISC::GET_HASH_KEY(&(uParam1->f_1)) != 0)
			{
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iParam0, &(uParam1->f_1));
			}
			if (*uParam1 >= 0 && *uParam1 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
			{
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0, *uParam1);
			}
		}
		if (uParam1->f_66 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_66 == joaat("casco"))
		{
			iVar0 = 1;
			if (BitTest(uParam1->f_77, __LIB_0__.func_110(iVar0 + 1)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), __LIB_0__.func_110(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (BitTest(uParam1->f_77, __LIB_0__.func_110(iVar1 + 1)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), __LIB_0__.func_110(iVar1 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("formula") || uParam1->f_66 == joaat("formula2"))
		{
			iVar2 = 1;
			while (iVar2 <= 9)
			{
				if (BitTest(uParam1->f_77, __LIB_0__.func_110(iVar2)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), __LIB_0__.func_110(iVar2));
				}
				iVar2++;
			}
		}
		else if (uParam1->f_66 == joaat("openwheel1"))
		{
			iVar3 = 1;
			while (iVar3 <= 6)
			{
				if (BitTest(uParam1->f_77, __LIB_0__.func_110(iVar3)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), __LIB_0__.func_110(iVar3));
				}
				iVar3++;
			}
		}
		else if (uParam1->f_66 == joaat("openwheel2"))
		{
			iVar4 = 1;
			while (iVar4 <= 11)
			{
				if (iVar4 != 9 && iVar4 != 10)
				{
					if (BitTest(uParam1->f_77, __LIB_0__.func_110(iVar4)))
					{
					}
					else
					{
						MISC::SET_BIT(&(uParam1->f_77), __LIB_0__.func_110(iVar4));
					}
				}
				iVar4++;
			}
		}
		else if (uParam1->f_66 == joaat("dinghy5"))
		{
			if (BitTest(uParam1->f_77, __LIB_0__.func_110(4)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), __LIB_0__.func_110(4));
			}
		}
		else if (uParam1->f_66 == joaat("coquette4"))
		{
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 10) != 0)
			{
				MISC::SET_BIT(&(uParam1->f_77), 0);
			}
		}
		else if (uParam1->f_66 == joaat("yosemite2"))
		{
			MISC::SET_BIT(&(uParam1->f_77), __LIB_0__.func_110(1));
		}
		else if (uParam1->f_66 == joaat("hotknife"))
		{
			iVar5 = 1;
			while (iVar5 <= 2)
			{
				if (BitTest(uParam1->f_77, __LIB_0__.func_110(iVar5)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), __LIB_0__.func_110(iVar5));
				}
				iVar5++;
			}
		}
		if (uParam1->f_66 == joaat("nightshark"))
		{
			VEHICLE::SET_DONT_PROCESS_VEHICLE_GLASS(iParam0, false);
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 5) != -1)
			{
				VEHICLE::SET_DONT_PROCESS_VEHICLE_GLASS(iParam0, true);
			}
		}
		if (BitTest(uParam1->f_77, 13))
		{
			VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			VEHICLE::CLEAR_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0);
		}
		if (BitTest(uParam1->f_77, 12))
		{
			VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			VEHICLE::CLEAR_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0);
		}
		if (uParam1->f_5 != -1 && uParam1->f_6 != -1)
		{
			if (__LIB_6__.func_820(uParam1->f_5) || __LIB_6__.func_820(uParam1->f_6))
			{
			}
			else
			{
				VEHICLE::SET_VEHICLE_COLOURS(iParam0, uParam1->f_5, uParam1->f_6);
			}
		}
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, uParam1->f_7, uParam1->f_8);
		if (((BitTest(uParam1->f_77, 15) || __LIB_0__.func_289(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && __LIB_0__.func_262())
		{
			uParam1->f_62 = 0;
			uParam1->f_63 = 0;
			uParam1->f_64 = 0;
		}
		else if ((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0)
		{
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
		}
		VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && !__LIB_0__.func_111(uParam1->f_66))
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, 0);
		}
		else
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, 0);
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, uParam1->f_65);
		}
		if (BitTest(uParam1->f_77, 9))
		{
			VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, false);
			VEHICLE::SET_DRIFT_TYRES(iParam0, false);
		}
		if (bParam2)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam0, uParam1->f_70);
		}
		VEHICLE::SET_VEHICLE_NEON_COLOUR(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		VEHICLE::SET_VEHICLE_NEON_ENABLED(iParam0, 2, BitTest(uParam1->f_77, 28));
		VEHICLE::SET_VEHICLE_NEON_ENABLED(iParam0, 3, BitTest(uParam1->f_77, 29));
		VEHICLE::SET_VEHICLE_NEON_ENABLED(iParam0, 0, BitTest(uParam1->f_77, 30));
		VEHICLE::SET_VEHICLE_NEON_ENABLED(iParam0, 1, BitTest(uParam1->f_77, 31));
		VEHICLE::SET_VEHICLE_IS_STOLEN(iParam0, BitTest(uParam1->f_77, 10));
		if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			VEHICLE::SET_VEHICLE_LIVERY(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						__LIB_0__.func_288(iParam0, uParam1->f_69);
					}
				}
				else
				{
					__LIB_0__.func_288(iParam0, uParam1->f_69);
				}
			}
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, false))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				VEHICLE::RAISE_CONVERTIBLE_ROOF(iParam0, true);
			}
			else
			{
				VEHICLE::LOWER_CONVERTIBLE_ROOF(iParam0, true);
			}
		}
		if (bParam3)
		{
			__LIB_18__.func_176(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!VEHICLE::IS_THIS_MODEL_A_HELI(uParam1->f_66) && !VEHICLE::IS_THIS_MODEL_A_BOAT(uParam1->f_66))
		{
			iVar6 = 0;
			while (iVar6 <= 11)
			{
				if (BitTest(uParam1->f_77, __LIB_0__.func_110(iVar6 + 1)))
				{
					if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar6 + 1))
					{
						VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar6 + 1, false);
					}
				}
				else if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar6 + 1))
				{
					VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar6 + 1, true);
				}
				iVar6++;
			}
		}
		if ((ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("sheava") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("omnis")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("le7b"))
		{
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 0) == -1)
			{
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 1, false);
			}
		}
		if (((__LIB_18__.func_419() && VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66)) && VEHICLE::GET_VEHICLE_HAS_LANDING_GEAR(iParam0)) && !VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("avenger")))
		{
			if (!BitTest(uParam1->f_77, 23))
			{
				if (BitTest(uParam1->f_77, 22))
				{
					VEHICLE::CONTROL_LANDING_GEAR(iParam0, 2);
				}
				else
				{
					VEHICLE::CONTROL_LANDING_GEAR(iParam0, 3);
				}
			}
			else
			{
				VEHICLE::CONTROL_LANDING_GEAR(iParam0, 4);
			}
		}
		if (BitTest(uParam1->f_77, 27))
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, "IgnoredByQuickSave", true);
		}
		else
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, "IgnoredByQuickSave", false);
		}
	}
}

int func_903(struct<2> Param0, var uParam1, bool bParam2, float fParam3)//Position - 0x7B705
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	iVar3 = 0;
	iVar0 = 83;
	while (iVar0 <= 84 + 1)
	{
		if (bParam2)
		{
			if (__LIB_25__.func_31(iVar0))
			{
				fVar1 = fParam3;
			}
			else
			{
				fVar1 = 0f;
			}
		}
		else
		{
			fVar1 = fParam3;
		}
		fVar2 = SYSTEM::VDIST(Param0.f_0, Param0.f_1, 0f, Global_1946250.f_533[iVar0 /*3*/], Global_1946250.f_533[iVar0 /*3*/].f_1, 0f);
		if (fVar2 < fVar1)
		{
			iVar3++;
		}
		iVar0++;
	}
	if (iVar3 > 0)
	{
		return 1;
	}
	return 0;
}

void func_904(int iParam0, var uParam1, var uParam2, int iParam3)//Position - 0x8E7F1
{
	int iVar0;
	struct<3> Var1;
	switch (__LIB_0__.func_170(iParam0))
	{
		case 1:
			if (__LIB_2__.func_236())
			{
				*uParam1 = { 959.5004f, -3005.1846f, -40.6349f };
				*uParam2 = 300.396f;
			}
			break;
		case 4:
			if (__LIB_1__.func_981(PLAYER::PLAYER_ID()))
			{
				*uParam1 = { 905.4745f, -3200.6997f, -98.2548f };
				*uParam2 = 188.8198f;
			}
			else
			{
				*uParam1 = { 886.6f, -3244.7f, -98.3f };
				*uParam2 = 85.45f;
			}
			break;
		case 7:
			if (__LIB_2__.func_274() && __LIB_2__.func_207(30))
			{
				*uParam1 = { -1237.2008f, -2984.7302f, -42.2636f };
				*uParam2 = 216.4375f;
			}
			break;
		case 9:
			if (__LIB_2__.func_273() && __LIB_2__.func_207(31))
			{
				__LIB_25__.func_22(9, uParam1, &Var1);
				*uParam2 = Var1.f_2;
			}
			break;
		case 11:
			if (__LIB_1__.func_340())
			{
				if (iParam3 == -1)
				{
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
				}
				else
				{
					iVar0 = iParam3;
				}
				*uParam1 = { __LIB_1__.func_980(iVar0) };
				*uParam2 = __LIB_1__.func_979(iVar0);
			}
			break;
		case 13:
			if (__LIB_2__.func_271())
			{
				*uParam1 = { 205.0234f, 5164.4077f, -86.5974f };
				*uParam2 = 358.1009f;
			}
			else if (Global_2715699.f_6602)
			{
				*uParam1 = { 215.3005f, 5195.07f, -89.6001f };
				*uParam2 = 168.5053f;
			}
			break;
		case 15:
			*uParam1 = { 973.9115f, 80.211235f, 115.1642f };
			*uParam2 = 320.4113f;
			break;
		case 17:
			*uParam1 = { 2723.13f, -369.1836f, -56.3809f };
			*uParam2 = 61.4249f;
			break;
		case 20:
			*uParam1 = { 1558.369f, 384.953f, -53.8531f };
			*uParam2 = 0f;
			break;
		case 23:
			*uParam1 = { -2220.2f, 1158.7f, -23.3f };
			*uParam2 = 177.9279f;
			break;
		case 22:
			if (__LIB_2__.func_77(PLAYER::PLAYER_ID()))
			{
				*uParam1 = { -1356.3967f, 162.3236f, -100.1943f };
				*uParam2 = 189.3496f;
			}
			break;
		case 24:
			if (__LIB_2__.func_270(PLAYER::PLAYER_ID()) && __LIB_1__.func_169())
			{
				switch (__LIB_0__.func_598(PLAYER::PLAYER_ID()))
				{
					case 1:
						*uParam1 = { 387.949f, -69.676f, 112f };
						*uParam2 = 26.279999f;
						break;
					case 2:
						*uParam1 = { -1011.61f, -431.12f, 72.4981f };
						*uParam2 = 73.229996f;
						break;
					case 3:
						*uParam1 = { -595.463f, -709.173f, 121.642f };
						*uParam2 = 226.13f;
						break;
					case 4:
						*uParam1 = { -996.574f, -753.597f, 70.5312f };
						*uParam2 = 136.28f;
						break;
					}
			}
			break;
	}
}

char* func_905(bool bParam0)//Position - 0x9E753
{
	char* sVar0;
	bool bVar1;
	if (bParam0 == PLAYER::PLAYER_ID())
	{
		sVar0 = __LIB_1__.func_192(&(Global_1892703[bParam0 /*599*/].f_10.f_105));
		return sVar0;
	}
	if (Global_1892703[bParam0 /*599*/].f_10.f_121 != Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_121)
	{
		sVar0 = __LIB_25__.func_14(bParam0, 0);
		return sVar0;
	}
	if (((__LIB_1__.func_424(bParam0, 28) || __LIB_1__.func_424(PLAYER::PLAYER_ID(), 28)) || __LIB_1__.func_574(bParam0)) && !__LIB_1__.func_573(bParam0))
	{
		return __LIB_25__.func_14(bParam0, 0);
	}
	bVar1 = __LIB_2__.func_191(bParam0);
	if (bVar1 != __LIB_0__.func_160())
	{
		if (bVar1 != PLAYER::PLAYER_ID())
		{
			if (!__LIB_0__.func_53() && !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true))
			{
				return __LIB_25__.func_14(bVar1, 0);
			}
		}
	}
	if (bVar1 != __LIB_0__.func_160())
	{
		sVar0 = __LIB_1__.func_192(&(Global_1892703[bVar1 /*599*/].f_10.f_105));
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			return __LIB_25__.func_14(bVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

void func_906(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)//Position - 0xA336A
{
	int iVar0;
	bool bVar1;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (__LIB_1__.func_264(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			bVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (!__LIB_6__.func_978(bVar1, 0))
			{
				if (__LIB_7__.func_258(bVar1) || __LIB_2__.func_201(bVar1, bParam4))
				{
					if (__LIB_6__.func_996(bVar1, bParam1, 0))
					{
						(*iParam0)[iVar0] = *iParam2;
						*iParam2++;
						*iParam3++;
					}
				}
			}
		}
		iVar0++;
	}
}

int func_907()//Position - 0xA4CB9
{
	if (__LIB_18__.func_425())
	{
		return 1;
	}
	if (__LIB_2__.func_197(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (__LIB_1__.func_516())
	{
		return 1;
	}
	if (__LIB_2__.func_7(PLAYER::PLAYER_ID()))
	{
		switch (__LIB_1__.func_182(PLAYER::PLAYER_ID()))
		{
			case 131:
			case 132:
			case 133:
			case 136:
			case 138:
			case 139:
			case 141:
			case 144:
			case 146:
				return 1;
				break;
			case 140:
				if (!__LIB_1__.func_338(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			case 129:
				if (!__LIB_1__.func_338(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			case 174:
				if (!__LIB_1__.func_338(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			case 175:
				return 1;
				break;
			}
	}
	return 0;
}

int func_908(struct<3> Param0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)//Position - 0xA69E9
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 57)
	{
		if (iParam1 == 6 || iParam1 == __LIB_0__.func_299(iVar0))
		{
			if (!bParam3 || __LIB_7__.func_232(iVar0))
			{
				fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, __LIB_31__.func_882(iVar0, 0), true);
				if (((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam2) || iParam2 == -1)) && (iParam4 || iVar0 != 21)) && iVar0 != iParam5)
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

int func_909(int iParam0, var* uParam1)//Position - 0x82F4
{
	int iVar0;
	bool bVar1;
	if (NETWORK::NETWORK_IS_HANDLE_VALID(uParam1, 13) && NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(uParam1))
	{
		iVar0 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uParam1);
	}
	else
	{
		iVar0 = __LIB_0__.func_160();
	}
	bVar1 = false;
	if (iVar0 == PLAYER::PLAYER_ID())
	{
		if (__LIB_25__.func_8(15, 0))
		{
			bVar1 = true;
		}
		else if (__LIB_18__.func_447(1))
		{
			bVar1 = true;
		}
	}
	else
	{
		bVar1 = true;
	}
	if (((((((!(ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0)) || !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true)) || !((NETWORK::NETWORK_IS_HANDLE_VALID(uParam1, 13) && NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()) && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam1))) || iVar0 == __LIB_0__.func_160()) || !__LIB_0__.func_154(iVar0, 0, 0)) || !bVar1) || __LIB_19__.func_457(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_910(int iParam0, int iParam1)//Position - 0x1F22D
{
	struct<10> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	bool bVar10;
	int iVar11;
	if (!PED::HAS_PED_HEAD_BLEND_FINISHED(iParam0))
	{
	}
	if (__LIB_0__.func_233())
	{
		return;
	}
	PED::GET_PED_HEAD_BLEND_DATA(iParam0, &Var0);
	iVar1 = __LIB_0__.func_534(2097, iParam1, 0);
	iVar2 = __LIB_0__.func_534(2098, iParam1, 0);
	iVar3 = __LIB_0__.func_534(2099, iParam1, 0);
	iVar4 = __LIB_0__.func_534(2100, iParam1, 0);
	iVar5 = __LIB_0__.func_534(2101, iParam1, 0);
	iVar6 = __LIB_0__.func_534(2102, iParam1, 0);
	fVar7 = __LIB_0__.func_424(134, iParam1);
	fVar8 = __LIB_0__.func_424(135, iParam1);
	fVar9 = __LIB_0__.func_424(136, iParam1);
	bVar10 = __LIB_0__.func_421(160, iParam1);
	if (((((((((Var0.f_0 != iVar1 || Var0.f_1 != iVar2) || Var0.f_2 != iVar3) || Var0.f_3 != iVar4) || Var0.f_4 != iVar5) || Var0.f_5 != iVar6) || Var0.f_6 != fVar7) || Var0.f_7 != fVar8) || Var0.f_8 != fVar9) || Var0.f_9 != bVar10)
	{
		PED::SET_PED_HEAD_BLEND_DATA(iParam0, iVar1, iVar2, iVar3, iVar4, iVar5, iVar6, fVar7, fVar8, fVar9, bVar10);
		iVar11 = __LIB_0__.func_534(2103, iParam1, 0);
		if (iVar11 > 0)
		{
			__LIB_24__.func_937(iParam0, iParam1, 0);
		}
	}
}

void func_911(int iParam0, int iParam1, int iParam2)//Position - 0x369D3
{
	switch (iParam0)
	{
		case 2:
			__LIB_18__.func_406(iParam1, iParam2);
			break;
		case 11:
			__LIB_24__.func_989(iParam1, iParam2);
			break;
		case 8:
			__LIB_25__.func_20(iParam1, iParam2);
			break;
		case 9:
			__LIB_18__.func_405(iParam1, iParam2);
			break;
		case 3:
			__LIB_18__.func_404(iParam1, iParam2);
			break;
		case 4:
			__LIB_18__.func_403(iParam1, iParam2);
			break;
		case 6:
			__LIB_18__.func_402(iParam1, iParam2);
			break;
		case 1:
			__LIB_18__.func_401(iParam1, iParam2);
			break;
		case 7:
			__LIB_18__.func_400(iParam1, iParam2);
			break;
		case 10:
			__LIB_18__.func_399(iParam1, iParam2);
			break;
		case 14:
			__LIB_18__.func_398(iParam1, iParam2);
			break;
		case 12:
			__LIB_18__.func_397(iParam1, iParam2);
			break;
		case 5:
			__LIB_18__.func_396(iParam1, iParam2);
			break;
		case 0:
			__LIB_25__.func_29(iParam1, iParam2);
			break;
		case 13:
			__LIB_25__.func_19(iParam1);
			break;
	}
}

void func_912(int iParam0, int iParam1, int iParam2)//Position - 0x4325B
{
	switch (iParam0)
	{
		case 2:
			__LIB_18__.func_417(iParam1, iParam2);
			break;
		case 11:
			__LIB_24__.func_991(iParam1, iParam2);
			break;
		case 8:
			__LIB_24__.func_990(iParam1, iParam2);
			break;
		case 9:
			__LIB_18__.func_416(iParam1, iParam2);
			break;
		case 3:
			__LIB_18__.func_415(iParam1, iParam2);
			break;
		case 4:
			__LIB_18__.func_414(iParam1, iParam2);
			break;
		case 6:
			__LIB_18__.func_434(iParam1, iParam2);
			break;
		case 1:
			__LIB_18__.func_413(iParam1, iParam2);
			break;
		case 7:
			__LIB_18__.func_412(iParam1, iParam2);
			break;
		case 10:
			__LIB_18__.func_411(iParam1, iParam2);
			break;
		case 14:
			__LIB_18__.func_410(iParam1, iParam2);
			break;
		case 12:
			__LIB_18__.func_409(iParam1, iParam2);
			break;
		case 5:
			__LIB_18__.func_408(iParam1, iParam2);
			break;
		case 0:
			__LIB_18__.func_407(iParam1, iParam2);
			break;
		case 13:
			__LIB_18__.func_375(iParam1);
			break;
	}
}

void func_913(int iParam0)//Position - 0x56852
{
	if (iParam0 < 136)
	{
		__LIB_21__.func_987(iParam0);
	}
	else
	{
		__LIB_21__.func_986(iParam0);
	}
	if (Global_78130[0 /*14*/].f_2 == -1)
	{
		__LIB_18__.func_374(3, iParam0, 242, -1);
	}
}

int func_914(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x7EDE0
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	iVar2 = __LIB_25__.func_24();
	if (__LIB_0__.func_786(sParam2))
	{
	}
	if (__LIB_0__.func_109())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = __LIB_6__.func_973(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1 /* Tunable: XP_MULTIPLIER */);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = __LIB_1__.func_275(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					__LIB_18__.func_387(0, &iVar1);
					break;
				case 3:
					__LIB_18__.func_387(1, &iVar1);
					break;
				case 1:
					__LIB_6__.func_954(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1957716)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			__LIB_6__.func_981(1165, iVar1, -1);
			if (iParam1 == 0)
			{
				__LIB_18__.func_258((__LIB_1__.func_555(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_2 != -1)
				{
					__LIB_6__.func_981(1166, iVar1, -1);
				}
				__LIB_6__.func_953(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				__LIB_6__.func_930((__LIB_6__.func_980(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				__LIB_6__.func_930((__LIB_6__.func_980(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
	}
	return iVar1;
}

int func_915(struct<3> Param0)//Position - 0x87062
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	struct<3> Var7;
	float fVar8;
	iVar0 = VEHICLE::GET_ALL_VEHICLES(&Global_1578027);
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar5 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::IS_ENTITY_DEAD(iVar5, false))
		{
			iVar6 = ENTITY::GET_ENTITY_MODEL(iVar5);
			Var7 = { ENTITY::GET_ENTITY_COORDS(iVar5, true) };
			fVar8 = ENTITY::GET_ENTITY_HEADING(iVar5);
		}
	}
	iVar4 = 0;
	while (iVar4 < iVar0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1578027[iVar4]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_1578027[iVar4], false) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_1578027[iVar4], false))
			{
			}
			else if (__LIB_1__.func_920(Global_1578027[iVar4]))
			{
			}
			else if (!__LIB_18__.func_390(Global_1578027[iVar4]))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(Global_1578027[iVar4], false) };
				fVar2 = ENTITY::GET_ENTITY_HEADING(Global_1578027[iVar4]);
				iVar3 = ENTITY::GET_ENTITY_MODEL(Global_1578027[iVar4]);
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (__LIB_25__.func_48(Var1, fVar2, iVar3, Var7, fVar8, iVar6, 0))
					{
						return 1;
					}
				}
				else if (__LIB_25__.func_26(Param0, Var1, fVar2, iVar3, 1036831949))
				{
					return 1;
				}
			}
		}
		iVar4++;
	}
	return 0;
}

int func_916(int iParam0)//Position - 0xC875C
{
	int iVar0;
	int iVar1;
	iVar0 = 2;
	iVar1 = __LIB_25__.func_33();
	if (Global_2726597 == 0)
	{
		return 0;
	}
	if (__LIB_1__.func_700())
	{
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || (__LIB_7__.func_229() || __LIB_18__.func_423()))
		{
			Global_2725407 = 1;
		}
	}
	Global_2726597 = 0;
	if (Global_1577884)
	{
		iVar0 = 1;
	}
	if (Global_2725407)
	{
		iVar0 = 1;
	}
	if (Global_2725406)
	{
		iVar0 = 1;
	}
	if (__LIB_0__.func_517(Global_112414.f_1, 32))
	{
		iVar0 = 1;
	}
	if (Global_2725346)
	{
		iVar0 = 1;
	}
	if (__LIB_1__.func_698(512))
	{
		iVar0 = 1;
	}
	if (__LIB_1__.func_697(128))
	{
		iVar0 = 1;
	}
	if (Global_1577908 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (__LIB_0__.func_155(0))
	{
		iVar0 = 0;
	}
	if (Global_2725901)
	{
		iVar0 = 2;
	}
	if (iParam0 == 0)
	{
		if (!__LIB_7__.func_83())
		{
			if (Global_4718592.f_117079 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (__LIB_6__.func_978(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = 0;
	}
	if (__LIB_18__.func_383())
	{
		iVar0 = 0;
	}
	if ((Global_2725407 || Global_2725406) || Global_1577884)
	{
		if (__LIB_18__.func_423())
		{
			iVar0 = 0;
		}
	}
	if (Global_1837301)
	{
		iVar0 = 2;
	}
	Global_2725901 = 0;
	Global_2725406 = 0;
	Global_2725407 = 0;
	Global_1577884 = 0;
	Global_2725346 = 0;
	__LIB_7__.func_204(&(Global_112414.f_1), 32);
	__LIB_1__.func_694(512);
	__LIB_1__.func_693(128);
	Global_1837301 = 0;
	return iVar0;
}

void func_917(char* sParam0)//Position - 0x2510C
{
	int iVar0;
	int iVar1;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1573885)
	{
		if (BitTest(Global_2621865[iVar1 /*26*/].f_12, 11))
		{
			if (__LIB_25__.func_55(&(Global_2621865[iVar1 /*26*/].f_15)) == iVar0)
			{
				if (!BitTest(Global_2621865[iVar1 /*26*/].f_13, 26))
				{
					MISC::SET_BIT(&(Global_2621865[iVar1 /*26*/].f_13), 26);
				}
				return;
			}
		}
		iVar1++;
	}
}

void func_918(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x8E5E
{
	if (Global_2703735.f_1571.f_703.f_16 != __LIB_0__.func_160())
	{
		if (BitTest(Global_2689235[Global_2703735.f_1571.f_703.f_16 /*453*/].f_416, 0) && __LIB_18__.func_454())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2674954 = 0;
	}
	Global_2667225.f_490 = iParam0;
	Global_2667225.f_490.f_1 = SCRIPT::GET_ID_OF_THIS_THREAD();
	Global_2667225.f_490.f_2 = iParam1;
	Global_2667225.f_490.f_3 = iParam2;
	Global_2667225.f_490.f_4 = iParam3;
	Global_2667225.f_490.f_5 = iParam4;
}

void func_919(char* sParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)//Position - 0xA9E1
{
	if (__LIB_25__.func_16(sParam0, PLAYER::GET_PLAYER_NAME(iParam1), sParam2, bParam5, iParam3))
	{
		Global_1574757 = 15;
		Global_1574757.f_56 = iParam3;
		Global_1574757.f_57 = iParam4;
		Global_1574757.f_54 = iParam1;
	}
}

int func_920(bool bParam0)//Position - 0x113D6
{
	int iVar0;
	iVar0 = __LIB_18__.func_372(bParam0);
	if (iVar0 == -1)
	{
		__LIB_25__.func_58(bParam0, 1);
		return 0;
	}
	Global_1660783[iVar0 /*5*/].f_4 = 1;
	return Global_1660783[iVar0 /*5*/].f_2;
}

char* func_921(var uParam0)//Position - 0x12396
{
	switch (uParam0->f_112)
	{
		case 0:
			return "GR_DPD_E" /* GXT: Steal Cargo */;
			break;
		case 1:
			return "GR_DPD_F" /* GXT: Sell Cargo */;
			break;
		case 2:
			return "GR_DPD_S" /* GXT: Business Setup */;
			break;
	}
	switch (uParam0->f_110)
	{
		case 0:
			return "GR_DPD_A" /* GXT: Business Setup */;
			break;
		case 1:
			return "GR_DPD_B" /* GXT: Steal Supplies */;
			break;
		case 2:
			return "GR_DPD_C" /* GXT: Sell Weapons */;
			break;
		case 3:
			return "GR_DPD_D" /* GXT: Defend Business */;
			break;
	}
	switch (__LIB_0__.func_396(PLAYER::PLAYER_ID()))
	{
		case 233:
			return "H2_DPAD_SET" /* GXT: Heist Prep */;
			break;
		case 180:
			return "GB_BIGUNLOAD_T" /* GXT: Gunrunning */;
			break;
		case 182:
			return "DEAL_DEALN" /* GXT: By the Pound */;
			break;
		case 194:
			return "PI_BIK_13_0" /* GXT: Rippin' it Up */;
			break;
		case 189:
			return "PI_BIK_4_1" /* GXT: Race to Point */;
			break;
		case 193:
			return "PI_BIK_13_1" /* GXT: Hit & Ride */;
			break;
		case 205:
			return "PI_BIK_13_3" /* GXT: Criminal Mischief */;
			break;
		case 186:
			return "CELL_BIKER_CK" /* GXT: Weapon of Choice */;
			break;
		case 207:
			return "DV_SH_TITLE" /* GXT: Fragile Goods */;
			break;
		case 208:
			return "BA_SH_TITLE" /* GXT: Torched */;
			break;
		case 209:
			return "SHU_SH_TITLE" /* GXT: Outrider */;
			break;
		case 210:
			return "PI_BIK_13_4" /* GXT: Wheelie Rider */;
			break;
		case 183:
			return "CELL_BIKER_RESC" /* GXT: P.O.W. */;
			break;
		case 199:
			return "CELL_BIKER_SEAR" /* GXT: Search and Destroy */;
			break;
		case 201:
			return "CELL_BIKER_STAN" /* GXT: Stand Your Ground */;
			break;
		case 142:
			return "PIM_MAGM210" /* GXT: Sightseer */;
			break;
		case 163:
			return "PIM_MAGM608" /* GXT: Auto Buyout */;
			break;
		case 160:
			return "PIM_MAGM604" /* GXT: Due Diligence */;
			break;
		case 154:
			return "PIM_MAGM602" /* GXT: Market Manipulation */;
			break;
		case 155:
			return "PIM_MAGM603" /* GXT: Courier Service */;
			break;
		case 148:
			if (__LIB_7__.func_184())
			{
				return "LBD_BKVBK" /* GXT: Deathmatch */;
			}
			return "PIM_MAGM201" /* GXT: Executive Deathmatch */;
			break;
		case 151:
			if (__LIB_18__.func_436(1))
			{
				return "GB_DPAD_BMFD" /* GXT: Marked For Death */;
			}
			return "PIM_MAGM202" /* GXT: Put Out a Hit */;
			break;
		case 152:
			return "PIM_MAGM204" /* GXT: Piracy Prevention */;
			break;
		case 153:
			if (__LIB_18__.func_436(1))
			{
				return "PI_BIK_3_2" /* GXT: On The Run */;
			}
			return "PIM_MAGM601" /* GXT: Most Wanted */;
			break;
		case 157:
			return "PIM_MAGM207" /* GXT: Asset Recovery */;
			break;
		case 159:
			return "PIM_MAGM206" /* GXT: Hostile Takeover */;
			break;
		case 162:
			return "PIM_MAGM607" /* GXT: Point to Point */;
			break;
		case 164:
			return "PIM_MAGM212" /* GXT: Executive Search */;
			break;
		case 166:
			return "GB_DPAD_HEAD" /* GXT: Headhunter */;
		case 167:
			return "GB_DPAD_BUY" /* GXT: Buy Special Cargo */;
		case 168:
			return "GB_DPAD_SELL" /* GXT: Sell Special Cargo */;
		case 169:
			return "GB_DPAD_DEF" /* GXT: Defend Special Cargo */;
		case 170:
			return "GB_DPAD_AIR" /* GXT: Airfreight */;
		case 171:
			return "GB_DPAD_CASH" /* GXT: Cashing Out */;
		case 172:
			return "GB_DPAD_SAL" /* GXT: Salvage */;
		case 173:
			return "GB_DPAD_FRA" /* GXT: Haulage */;
		case 178:
			return "VEX_TITLEa" /* GXT: Steal Vehicle */;
		case 188:
			return "VEX_TITLEb" /* GXT: Export Vehicle */;
		case 218:
			return "FRT_MODE" /* GXT: Fortified */;
		case 217:
			return "FRT_TRNS" /* GXT: Transporter */;
		case 214:
			return "MODE_PLW" /* GXT: Plowed */;
		case 215:
			return "MODE_FUL" /* GXT: Fully Loaded */;
		case 216:
			return "MODE_AA" /* GXT: Amphibious Assault */;
		case 219:
			return "MODE_VEL" /* GXT: Velocity */;
		case 220:
			return "MODE_RMP" /* GXT: Ramped Up */;
		case 221:
			return "MODE_STK" /* GXT: Stockpiling */;
		case 225:
			return "GR_TITLEL" /* GXT: Gunrunning */;
		case 226:
			return "GRS_TITLEL" /* GXT: Gunrunning Sell */;
		case 227:
			return "GRD_TITLEL" /* GXT: Gunrunning Defend */;
		case 195:
			return "GB_STEAL_T" /* GXT: Nine Tenths Of The Law */;
		case 198:
			return "SC_MENU_TITLE" /* GXT: Cracked */;
		case 190:
			return "GB_DPAD_BSEL" /* GXT: Biker Sell */;
		case 191:
			return "GB_DPAD_BDEF" /* GXT: Biker Defend */;
		case 185:
			return "GB_DPAD_GFH" /* GXT: Guns For Hire */;
		case 197:
			return "GB_DPAD_JB" /* GXT: Jailbreak */;
		case 179:
			return "CELL_JOUST" /* GXT: Joust */;
		case 200:
			return "CAG_BLIP" /* GXT: Caged In */;
		case 192:
			if (__LIB_1__.func_360(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_182))
			{
				return "GB_DPAD_BSET" /* GXT: Business Setup */;
			}
			return "GB_DPAD_BBUY" /* GXT: Resupply */;
			break;
	}
	return "";
}

int func_922()//Position - 0x13571
{
	if (__LIB_18__.func_425())
	{
		return 1;
	}
	if (__LIB_2__.func_197(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (__LIB_1__.func_516())
	{
		return 1;
	}
	if (__LIB_0__.func_738(PLAYER::PLAYER_ID()))
	{
		switch (__LIB_1__.func_182(PLAYER::PLAYER_ID()))
		{
			case 131:
			case 132:
			case 133:
			case 136:
			case 138:
			case 139:
			case 141:
			case 144:
			case 146:
				return 1;
				break;
			case 140:
				if (!__LIB_1__.func_338(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			case 129:
				if (!__LIB_1__.func_338(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			case 174:
				if (!__LIB_1__.func_338(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			case 175:
				return 1;
				break;
			}
	}
	return 0;
}

void func_923(int iParam0, bool bParam1, int iParam2)//Position - 0xEFD
{
	if (bParam1)
	{
		if (!__LIB_7__.func_91(iParam0, 0, 0))
		{
			if (iParam2 && Global_100493.f_18[iParam0])
			{
				if (__LIB_0__.func_299(iParam0) == 3 && !__LIB_18__.func_462(iParam0))
				{
					__LIB_18__.func_322(iParam0);
					__LIB_7__.func_261(iParam0, 0, 0);
					__LIB_12__.func_661(iParam0, 1, 0);
					__LIB_1__.func_285(iParam0);
				}
				else
				{
					__LIB_7__.func_261(iParam0, 1, 0);
					__LIB_1__.func_285(iParam0);
				}
			}
			else
			{
				__LIB_7__.func_261(iParam0, 0, 0);
				__LIB_12__.func_661(iParam0, 1, 0);
				__LIB_1__.func_285(iParam0);
			}
		}
		else
		{
			__LIB_12__.func_661(iParam0, 1, 0);
			__LIB_1__.func_285(iParam0);
		}
	}
	else if (__LIB_7__.func_91(iParam0, 0, 0))
	{
		__LIB_12__.func_661(iParam0, 0, 0);
		__LIB_12__.func_661(iParam0, 1, 0);
		__LIB_1__.func_285(iParam0);
	}
}

void func_924(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x218E
{
	int iVar0;
	__LIB_21__.func_590();
	__LIB_8__.func_770(1);
	__LIB_0__.func_731(1);
	__LIB_0__.func_730(12, 1, -1);
	__LIB_0__.func_130();
	AUDIO::SET_USER_RADIO_CONTROL_ENABLED(false);
	if (bParam0)
	{
		NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(PLAYER::PLAYER_ID(), bParam6);
	}
	if (bParam1)
	{
		iVar0 |= 8192;
	}
	if (bParam4)
	{
		iVar0 |= 4;
	}
	if (!bParam2)
	{
		iVar0 |= 16384;
	}
	if (bParam3)
	{
		iVar0 |= 32768;
	}
	__LIB_18__.func_465(PLAYER::PLAYER_ID(), 0, iVar0, 0);
	if (bParam5)
	{
		if (PED::IS_PED_DUCKING(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_DUCKING(PLAYER::PLAYER_PED_ID(), false);
		}
	}
}

int func_925(int iParam0, int iParam1, int iParam2)//Position - 0x82F8
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
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	switch (iParam0)
	{
		case joaat("mpSum2_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Sum2_Tee_000_M"):
				case joaat("MP_Sum2_Tee_000_F"):
					if (__LIB_0__.func_137(34505, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Sum2_Tee_000_M"));
					break;
				case joaat("MP_Sum2_Tee_001_M"):
				case joaat("MP_Sum2_Tee_001_F"):
					if (__LIB_0__.func_137(34375, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Sum2_Tee_001_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpTuner_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Tuner_Tee_000_M"):
				case joaat("MP_Tuner_Tee_000_F"):
					if (__LIB_0__.func_426(116, -1) >= __LIB_0__.func_238(116, 5, 9) || __LIB_0__.func_137(31760, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_000_M"));
					break;
				case joaat("MP_Tuner_Tee_002_M"):
				case joaat("MP_Tuner_Tee_002_F"):
					if (__LIB_0__.func_425(123, -1) || __LIB_0__.func_137(31761, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_002_M"));
					break;
				case joaat("MP_Tuner_Tee_003_M"):
				case joaat("MP_Tuner_Tee_003_F"):
					if (__LIB_0__.func_425(124, -1) || __LIB_0__.func_137(31762, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_003_M"));
					break;
				case joaat("MP_Tuner_Tee_005_M"):
				case joaat("MP_Tuner_Tee_005_F"):
					if (__LIB_0__.func_425(125, -1) || __LIB_0__.func_137(31763, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_005_M"));
					break;
				case joaat("MP_Tuner_Tee_006_M"):
				case joaat("MP_Tuner_Tee_006_F"):
					if (__LIB_0__.func_425(126, -1) || __LIB_0__.func_137(31764, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_006_M"));
					break;
				case joaat("MP_Tuner_Tee_008_M"):
				case joaat("MP_Tuner_Tee_008_F"):
					if (__LIB_0__.func_137(31768, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_008_M"));
					break;
				case joaat("MP_Tuner_Tee_010_M"):
				case joaat("MP_Tuner_Tee_010_F"):
					if (__LIB_0__.func_137(31769, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_010_M"));
					break;
				case joaat("MP_Tuner_Tee_011_M"):
				case joaat("MP_Tuner_Tee_011_F"):
					if (__LIB_0__.func_137(31770, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_011_M"));
					break;
				case joaat("MP_Tuner_Tee_012_M"):
				case joaat("MP_Tuner_Tee_012_F"):
					if (__LIB_0__.func_137(31771, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_012_M"));
					break;
				case joaat("MP_Tuner_Tee_013_M"):
				case joaat("MP_Tuner_Tee_013_F"):
					if (__LIB_0__.func_137(31772, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_013_M"));
					break;
				case joaat("MP_Tuner_Tee_014_M"):
				case joaat("MP_Tuner_Tee_014_F"):
					if (__LIB_0__.func_137(31773, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_014_M"));
					break;
				case joaat("MP_Tuner_Tee_015_M"):
				case joaat("MP_Tuner_Tee_015_F"):
					if (__LIB_0__.func_137(31774, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_015_M"));
					break;
				case joaat("MP_Tuner_Tee_016_M"):
				case joaat("MP_Tuner_Tee_016_F"):
					if (__LIB_0__.func_137(31775, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_016_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist4_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Heist4_Tee_030_M"):
				case joaat("MP_Heist4_Tee_030_F"):
					if (__LIB_0__.func_137(30533, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_030_M"));
					break;
				case joaat("MP_Heist4_Tee_032_M"):
				case joaat("MP_Heist4_Tee_032_F"):
					if (__LIB_0__.func_137(30534, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_032_M"));
					break;
				case joaat("MP_Heist4_Tee_028_M"):
				case joaat("MP_Heist4_Tee_028_F"):
					if (__LIB_0__.func_137(30535, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_028_M"));
					break;
				case joaat("MP_Heist4_Tee_029_M"):
				case joaat("MP_Heist4_Tee_029_F"):
					if (__LIB_0__.func_137(30536, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_029_M"));
					break;
				case joaat("MP_Heist4_Tee_031_M"):
				case joaat("MP_Heist4_Tee_031_F"):
					if (__LIB_0__.func_137(30537, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_031_M"));
					break;
				case joaat("MP_Heist4_Tee_022_M"):
				case joaat("MP_Heist4_Tee_022_F"):
					if (__LIB_0__.func_137(30538, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_022_M"));
					break;
				case joaat("MP_Heist4_Tee_023_M"):
				case joaat("MP_Heist4_Tee_023_F"):
					if (__LIB_0__.func_137(30539, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_023_M"));
					break;
				case joaat("MP_Heist4_Tee_020_M"):
				case joaat("MP_Heist4_Tee_020_F"):
					if (__LIB_0__.func_137(30540, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_020_M"));
					break;
				case joaat("MP_Heist4_Tee_021_M"):
				case joaat("MP_Heist4_Tee_021_F"):
					if (__LIB_0__.func_137(30541, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_021_M"));
					break;
				case joaat("MP_Heist4_Tee_003_M"):
				case joaat("MP_Heist4_Tee_003_F"):
					if (__LIB_0__.func_137(30542, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_003_M"));
					break;
				case joaat("MP_Heist4_Tee_004_M"):
				case joaat("MP_Heist4_Tee_004_F"):
					if (__LIB_0__.func_137(30543, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_004_M"));
					break;
				case joaat("MP_Heist4_Tee_005_M"):
				case joaat("MP_Heist4_Tee_005_F"):
					if (__LIB_0__.func_137(30544, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_005_M"));
					break;
				case joaat("MP_Heist4_Tee_006_M"):
				case joaat("MP_Heist4_Tee_006_F"):
					if (__LIB_0__.func_137(30545, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_006_M"));
					break;
				case joaat("MP_Heist4_Tee_027_M"):
				case joaat("MP_Heist4_Tee_027_F"):
					if (__LIB_0__.func_137(30546, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_027_M"));
					break;
				case joaat("MP_Heist4_Tee_026_M"):
				case joaat("MP_Heist4_Tee_026_F"):
					if (__LIB_0__.func_137(30547, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_026_M"));
					break;
				case joaat("MP_Heist4_Tee_025_M"):
				case joaat("MP_Heist4_Tee_025_F"):
					if (__LIB_0__.func_137(30548, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_025_M"));
					break;
				case joaat("MP_Heist4_Tee_024_M"):
				case joaat("MP_Heist4_Tee_024_F"):
					if (__LIB_0__.func_137(30549, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_024_M"));
					break;
				case joaat("MP_Heist4_Tee_002_M"):
				case joaat("MP_Heist4_Tee_002_F"):
					if (__LIB_0__.func_137(30550, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_002_M"));
					break;
				case joaat("MP_Heist4_Tee_001_M"):
				case joaat("MP_Heist4_Tee_001_F"):
					if (__LIB_0__.func_137(30551, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_001_M"));
					break;
				case joaat("MP_Heist4_Tee_000_M"):
				case joaat("MP_Heist4_Tee_000_F"):
					if (__LIB_0__.func_137(30552, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_000_M"));
					break;
				case joaat("MP_Heist4_Tee_007_M"):
				case joaat("MP_Heist4_Tee_007_F"):
					if (__LIB_0__.func_137(30553, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_007_M"));
					break;
				case joaat("MP_Heist4_Tee_008_M"):
				case joaat("MP_Heist4_Tee_008_F"):
					if (__LIB_0__.func_137(30554, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_008_M"));
					break;
				case joaat("MP_Heist4_Tee_009_M"):
				case joaat("MP_Heist4_Tee_009_F"):
					if (__LIB_0__.func_137(30555, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_009_M"));
					break;
				case joaat("MP_Heist4_Tee_010_M"):
				case joaat("MP_Heist4_Tee_010_F"):
					if (__LIB_0__.func_137(30556, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_010_M"));
					break;
				case joaat("MP_Heist4_Tee_011_M"):
				case joaat("MP_Heist4_Tee_011_F"):
					if (__LIB_0__.func_137(30557, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_011_M"));
					break;
				case joaat("MP_Heist4_Tee_012_M"):
				case joaat("MP_Heist4_Tee_012_F"):
					if (__LIB_0__.func_137(30524, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_012_M"));
					break;
				case joaat("MP_Heist4_Tee_013_M"):
				case joaat("MP_Heist4_Tee_013_F"):
					if (__LIB_0__.func_137(30525, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_013_M"));
					break;
				case joaat("MP_Heist4_Tee_014_M"):
				case joaat("MP_Heist4_Tee_014_F"):
					if (__LIB_0__.func_137(30526, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_014_M"));
					break;
				case joaat("MP_Heist4_Tee_015_M"):
				case joaat("MP_Heist4_Tee_015_F"):
					if (__LIB_0__.func_137(30527, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_015_M"));
					break;
				case joaat("MP_Heist4_Tee_016_M"):
				case joaat("MP_Heist4_Tee_016_F"):
					if (__LIB_0__.func_137(30528, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_016_M"));
					break;
				case joaat("MP_Heist4_Tee_017_M"):
				case joaat("MP_Heist4_Tee_017_F"):
					if (__LIB_0__.func_137(30529, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_017_M"));
					break;
				case joaat("MP_Heist4_Tee_018_M"):
				case joaat("MP_Heist4_Tee_018_F"):
					if (__LIB_0__.func_137(30530, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_018_M"));
					break;
				case joaat("MP_Heist4_Tee_019_M"):
				case joaat("MP_Heist4_Tee_019_F"):
					if (__LIB_0__.func_137(30531, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_019_M"));
					break;
				case joaat("MP_Heist4_Tee_033_M"):
				case joaat("MP_Heist4_Tee_033_F"):
					if (__LIB_0__.func_137(30532, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_033_M"));
					break;
				case joaat("MP_Heist4_Tee_045_M"):
				case joaat("MP_Heist4_Tee_045_F"):
					if (__LIB_0__.func_137(30570, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_045_M"));
					break;
				case joaat("MP_Heist4_Tee_046_M"):
				case joaat("MP_Heist4_Tee_046_F"):
					if (__LIB_0__.func_137(30571, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_046_M"));
					break;
				case joaat("MP_Heist4_Tee_048_M"):
				case joaat("MP_Heist4_Tee_048_F"):
					if (__LIB_0__.func_137(30568, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_048_M"));
					break;
				case joaat("MP_Heist4_Tee_047_M"):
				case joaat("MP_Heist4_Tee_047_F"):
					if (__LIB_0__.func_137(30569, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_047_M"));
					break;
				case joaat("MP_Heist4_Tee_049_M"):
				case joaat("MP_Heist4_Tee_049_F"):
					if (__LIB_0__.func_137(30634, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_049_M"));
					break;
				case joaat("MP_Heist4_Tee_051_M"):
				case joaat("MP_Heist4_Tee_051_F"):
					if (__LIB_0__.func_137(30635, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_051_M"));
					break;
				case joaat("MP_Heist4_Tee_053_M"):
				case joaat("MP_Heist4_Tee_053_F"):
					if (__LIB_0__.func_137(30636, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_053_M"));
					break;
				case joaat("MP_Heist4_Tee_054_M"):
				case joaat("MP_Heist4_Tee_054_F"):
					if (__LIB_0__.func_137(30637, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_054_M"));
					break;
				case joaat("MP_Heist4_Tee_055_M"):
				case joaat("MP_Heist4_Tee_055_F"):
					if (__LIB_0__.func_137(30703, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_055_M"));
					break;
				case joaat("MP_Heist4_Tee_057_M"):
				case joaat("MP_Heist4_Tee_057_F"):
					if (__LIB_0__.func_137(30704, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_057_M"));
					break;
				case joaat("MP_Heist4_Tee_059_M"):
				case joaat("MP_Heist4_Tee_059_F"):
					if (__LIB_0__.func_137(30700, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_059_M"));
					break;
				case joaat("MP_Heist4_Tee_061_M"):
				case joaat("MP_Heist4_Tee_061_F"):
					if (__LIB_0__.func_137(30701, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_061_M"));
					break;
				case joaat("MP_Heist4_Tee_063_M"):
				case joaat("MP_Heist4_Tee_063_F"):
					if (__LIB_0__.func_137(30702, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_063_M"));
					break;
				case joaat("MP_Heist4_Tee_065_M"):
				case joaat("MP_Heist4_Tee_065_F"):
					if (__LIB_0__.func_137(30699, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_065_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpSum_overlays"):
			switch (iParam1)
			{
				case joaat("mpSum_Tee_000_M"):
				case joaat("mpSum_Tee_000_F"):
					if (__LIB_0__.func_137(30260, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_000_M"));
					break;
				case joaat("mpSum_Tee_001_M"):
				case joaat("mpSum_Tee_001_F"):
					if (__LIB_0__.func_137(30261, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_001_M"));
					break;
				case joaat("mpSum_Tee_002_M"):
				case joaat("mpSum_Tee_002_F"):
					if (__LIB_0__.func_137(30262, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_002_M"));
					break;
				case joaat("mpSum_Tee_003_M"):
				case joaat("mpSum_Tee_003_F"):
					if (__LIB_0__.func_137(30263, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_003_M"));
					break;
				case joaat("mpSum_Tee_004_M"):
				case joaat("mpSum_Tee_004_F"):
					if (__LIB_0__.func_137(30264, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_004_M"));
					break;
				case joaat("mpSum_Tee_005_M"):
				case joaat("mpSum_Tee_005_F"):
					if (__LIB_0__.func_137(30265, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_005_M"));
					break;
				case joaat("mpSum_Tee_006_M"):
				case joaat("mpSum_Tee_006_F"):
					if (__LIB_0__.func_137(30266, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_006_M"));
					break;
				case joaat("mpSum_Tee_007_M"):
				case joaat("mpSum_Tee_007_F"):
					if (__LIB_0__.func_137(30267, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_007_M"));
					break;
				case joaat("mpSum_Tee_008_M"):
				case joaat("mpSum_Tee_008_F"):
					if (__LIB_0__.func_137(30268, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_008_M"));
					break;
				case joaat("mpSum_Tee_009_M"):
				case joaat("mpSum_Tee_009_F"):
					if (__LIB_0__.func_137(30269, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_009_M"));
					break;
				case joaat("mpSum_Tee_010_M"):
				case joaat("mpSum_Tee_010_F"):
					if (__LIB_0__.func_137(30270, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_010_M"));
					break;
				case joaat("mpSum_Tee_011_M"):
				case joaat("mpSum_Tee_011_F"):
					if (__LIB_0__.func_137(30271, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_011_M"));
					break;
				case joaat("mpSum_Tee_012_M"):
				case joaat("mpSum_Tee_012_F"):
					if (__LIB_0__.func_137(30272, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_012_M"));
					break;
				case joaat("mpSum_Tee_013_M"):
				case joaat("mpSum_Tee_013_F"):
					if (__LIB_0__.func_137(30273, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_013_M"));
					break;
				case joaat("mpSum_Tee_014_M"):
				case joaat("mpSum_Tee_014_F"):
					if (__LIB_0__.func_137(30274, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_014_M"));
					break;
				case joaat("mpSum_Tee_015_M"):
				case joaat("mpSum_Tee_015_F"):
					if (__LIB_0__.func_137(30275, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_015_M"));
					break;
				case joaat("mpSum_Tee_016_M"):
				case joaat("mpSum_Tee_016_F"):
					if (__LIB_0__.func_137(30276, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_016_M"));
					break;
				case joaat("mpSum_Tee_017_M"):
				case joaat("mpSum_Tee_017_F"):
					if (__LIB_0__.func_137(30277, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_017_M"));
					break;
				case joaat("mpSum_Tee_018_M"):
				case joaat("mpSum_Tee_018_F"):
					if (__LIB_0__.func_137(30278, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_018_M"));
					break;
				case joaat("mpSum_Tee_019_M"):
				case joaat("mpSum_Tee_019_F"):
					if (__LIB_0__.func_137(30279, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_019_M"));
					break;
				case joaat("mpSum_Tee_020_M"):
				case joaat("mpSum_Tee_020_F"):
					if (__LIB_0__.func_137(30280, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_020_M"));
					break;
				case joaat("mpSum_Tee_021_M"):
				case joaat("mpSum_Tee_021_F"):
					if (__LIB_0__.func_137(30281, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_021_M"));
					break;
				case joaat("mpSum_Tee_022_M"):
				case joaat("mpSum_Tee_022_F"):
					if (__LIB_0__.func_137(30282, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_022_M"));
					break;
				case joaat("mpSum_Tee_023_M"):
				case joaat("mpSum_Tee_023_F"):
					if (__LIB_0__.func_137(30283, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_023_M"));
					break;
				case joaat("mpSum_Tee_024_M"):
				case joaat("mpSum_Tee_024_F"):
					if (__LIB_0__.func_137(30284, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_024_M"));
					break;
				case joaat("mpSum_Tee_025_M"):
				case joaat("mpSum_Tee_025_F"):
					if (__LIB_0__.func_137(30285, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_025_M"));
					break;
				case joaat("mpSum_Tee_026_M"):
				case joaat("mpSum_Tee_026_F"):
					if (__LIB_0__.func_137(30286, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_026_M"));
					break;
				case joaat("mpSum_Tee_027_M"):
				case joaat("mpSum_Tee_027_F"):
					if (__LIB_0__.func_137(30287, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_027_M"));
					break;
				case joaat("mpSum_Tee_028_M"):
				case joaat("mpSum_Tee_028_F"):
					if (__LIB_0__.func_137(30288, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_028_M"));
					break;
				case joaat("mpSum_Tee_029_M"):
				case joaat("mpSum_Tee_029_F"):
					if (__LIB_0__.func_137(30289, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_029_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpSum_overlays"):
			switch (iParam1)
			{
				case joaat("mpSum_Tee_030_M"):
				case joaat("mpSum_Tee_030_F"):
					if (__LIB_0__.func_137(28255, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_030_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpSum_overlays"):
			switch (iParam1)
			{
				case joaat("mpSum_Tee_031_M"):
				case joaat("mpSum_Tee_031_F"):
					if (__LIB_0__.func_425(89, -1) || __LIB_0__.func_137(30254, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_031_M"));
					break;
				case joaat("mpSum_Tee_032_M"):
				case joaat("mpSum_Tee_032_F"):
					if (__LIB_0__.func_425(90, -1) || __LIB_0__.func_137(30255, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_032_M"));
					break;
				case joaat("mpSum_Tee_033_M"):
				case joaat("mpSum_Tee_033_F"):
					if (__LIB_0__.func_425(92, -1) || __LIB_0__.func_137(30256, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_033_M"));
					break;
				case joaat("mpSum_Tee_034_M"):
				case joaat("mpSum_Tee_034_F"):
					if ((((__LIB_0__.func_425(89, -1) && __LIB_0__.func_425(90, -1)) && __LIB_0__.func_425(92, -1)) && __LIB_0__.func_425(91, -1)) || __LIB_0__.func_137(30257, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_034_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_001_F"):
				case joaat("mpHeist3_Tee_001_M"):
					if (__LIB_0__.func_425(78, -1) || __LIB_0__.func_137(28199, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_001_M"));
					break;
				case joaat("mpHeist3_Tee_000_F"):
				case joaat("mpHeist3_Tee_000_M"):
					if (((__LIB_0__.func_425(77, -1) && __LIB_0__.func_425(78, -1)) && __LIB_0__.func_426(92, -1) >= __LIB_0__.func_238(92, 5, 9)) || __LIB_0__.func_137(28200, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_000_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_007_F"):
				case joaat("mpHeist3_Tee_008_F"):
				case joaat("mpHeist3_Tee_009_F"):
				case joaat("mpHeist3_Tee_007_M"):
				case joaat("mpHeist3_Tee_008_M"):
				case joaat("mpHeist3_Tee_009_M"):
					if (((__LIB_0__.func_426(93, -1) >= __LIB_0__.func_238(93, 5, 9) && __LIB_0__.func_425(79, -1)) && __LIB_0__.func_425(80, -1)) || __LIB_0__.func_137(28204, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, ((iParam1 == joaat("mpHeist3_Tee_007_M") || iParam1 == joaat("mpHeist3_Tee_008_M")) || iParam1 == joaat("mpHeist3_Tee_009_M")));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_004_F"):
				case joaat("mpHeist3_Tee_004_M"):
					if (__LIB_0__.func_425(81, -1) || __LIB_0__.func_137(28206, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_004_M"));
					break;
				case joaat("mpHeist3_Tee_005_F"):
				case joaat("mpHeist3_Tee_005_M"):
					if (__LIB_0__.func_426(94, -1) >= __LIB_0__.func_238(94, 5, 9) || __LIB_0__.func_137(28207, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_005_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_006_F"):
				case joaat("mpHeist3_Tee_006_M"):
					if (((__LIB_0__.func_425(84, -1) && __LIB_0__.func_425(85, -1)) && __LIB_0__.func_426(97, -1) >= __LIB_0__.func_238(97, 5, 9)) || __LIB_0__.func_137(28212, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_006_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_002_F"):
				case joaat("mpHeist3_Tee_002_M"):
					if (__LIB_0__.func_137(28249, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_002_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_013_F"):
				case joaat("mpHeist3_Tee_013_M"):
					if (__LIB_0__.func_137(28183, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_013_M"));
					break;
				case joaat("mpHeist3_Tee_014_F"):
				case joaat("mpHeist3_Tee_014_M"):
					if (__LIB_0__.func_137(28182, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_014_M"));
					break;
				case joaat("mpHeist3_Tee_015_F"):
				case joaat("mpHeist3_Tee_015_M"):
					if (__LIB_0__.func_137(28184, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_015_M"));
					break;
				case joaat("mpHeist3_Tee_016_F"):
				case joaat("mpHeist3_Tee_016_M"):
					if (__LIB_0__.func_137(28181, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_016_M"));
					break;
				case joaat("mpHeist3_Tee_017_F"):
				case joaat("mpHeist3_Tee_017_M"):
					if (__LIB_0__.func_137(28178, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_017_M"));
					break;
				case joaat("mpHeist3_Tee_018_F"):
				case joaat("mpHeist3_Tee_018_M"):
					if (__LIB_0__.func_137(28177, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_018_M"));
					break;
				case joaat("mpHeist3_Tee_019_F"):
				case joaat("mpHeist3_Tee_019_M"):
					if (__LIB_0__.func_137(28176, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_019_M"));
					break;
				case joaat("mpHeist3_Tee_020_F"):
				case joaat("mpHeist3_Tee_020_M"):
					if (__LIB_0__.func_137(28180, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_020_M"));
					break;
				case joaat("mpHeist3_Tee_021_F"):
				case joaat("mpHeist3_Tee_021_M"):
					if (__LIB_0__.func_137(28179, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_021_M"));
					break;
				case joaat("mpHeist3_Tee_022_F"):
				case joaat("mpHeist3_Tee_022_M"):
					if (((((((((__LIB_0__.func_137(28176, -1) && __LIB_0__.func_137(28177, -1)) && __LIB_0__.func_137(28178, -1)) && __LIB_0__.func_137(28179, -1)) && __LIB_0__.func_137(28180, -1)) && __LIB_0__.func_137(28181, -1)) && __LIB_0__.func_137(28182, -1)) && __LIB_0__.func_137(28183, -1)) && __LIB_0__.func_137(28184, -1)) || __LIB_0__.func_137(28221, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_022_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_023_F"):
				case joaat("mpHeist3_Tee_023_M"):
					if (__LIB_0__.func_137(28191, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_023_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_011_F"):
				case joaat("mpHeist3_Tee_011_M"):
					if (__LIB_0__.func_137(28190, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_011_M"));
					break;
				case joaat("mpHeist3_Tee_012_F"):
				case joaat("mpHeist3_Tee_012_M"):
					if (__LIB_0__.func_137(28189, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_012_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_003_F"):
				case joaat("mpHeist3_Tee_003_M"):
					if (__LIB_6__.func_804(0, 1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_003_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_010_F"):
				case joaat("mpHeist3_Tee_010_M"):
					if ((((((((((((((((((__LIB_0__.func_425(77, -1) && __LIB_0__.func_425(78, -1)) && __LIB_0__.func_426(92, -1) >= __LIB_0__.func_238(92, 5, 9)) && __LIB_0__.func_426(93, -1) >= __LIB_0__.func_238(93, 5, 9)) && __LIB_0__.func_425(79, -1)) && __LIB_0__.func_425(80, -1)) && __LIB_0__.func_425(81, -1)) && __LIB_0__.func_426(94, -1) >= __LIB_0__.func_238(94, 5, 9)) && __LIB_0__.func_426(95, -1) >= __LIB_0__.func_238(95, 5, 9)) && __LIB_0__.func_425(82, -1)) && __LIB_0__.func_425(83, -1)) && __LIB_0__.func_426(96, -1) >= __LIB_0__.func_238(96, 5, 9)) && __LIB_0__.func_425(84, -1)) && __LIB_0__.func_425(85, -1)) && __LIB_0__.func_426(97, -1) >= __LIB_0__.func_238(97, 5, 9)) && __LIB_0__.func_425(86, -1)) && __LIB_0__.func_425(87, -1)) && __LIB_0__.func_425(88, -1)) || __LIB_0__.func_137(28222, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_010_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpVinewood_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Vinewood_Tat_023_M"):
				case joaat("MP_Vinewood_Tat_023_F"):
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Vinewood_Tat_023_M"));
					break;
				case joaat("MP_Vinewood_Tat_030_M"):
				case joaat("MP_Vinewood_Tat_030_F"):
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Vinewood_Tat_030_M"));
					break;
				case joaat("CasinoTop_M_21"):
				case joaat("CasinoTop_F_21"):
					if (__LIB_0__.func_137(27109, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_21"));
					break;
				case joaat("CasinoTop_M_23"):
				case joaat("CasinoTop_F_23"):
					if (__LIB_0__.func_137(27110, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_23"));
					break;
				case joaat("CasinoTop_M_2"):
				case joaat("CasinoTop_F_2"):
					if (__LIB_0__.func_137(27111, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_2"));
					break;
				case joaat("CasinoTop_M_4"):
				case joaat("CasinoTop_F_4"):
					if (__LIB_0__.func_137(27112, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_4"));
					break;
				case joaat("CasinoTop_M_6"):
				case joaat("CasinoTop_F_6"):
					if (__LIB_0__.func_137(27113, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_6"));
					break;
				case joaat("CasinoTop_M_10"):
				case joaat("CasinoTop_F_10"):
					if (__LIB_0__.func_137(27114, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_10"));
					break;
				case joaat("CasinoTop_M_22"):
				case joaat("CasinoTop_F_22"):
					if (__LIB_0__.func_137(27115, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_22"));
					break;
			}
			break;
		case joaat("mpChristmas2018_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Christmas2018_Tee_000_M"):
				case joaat("MP_Christmas2018_Tee_000_F"):
					if (__LIB_0__.func_137(25032, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_000_M"));
					break;
				case joaat("MP_Christmas2018_Tee_001_M"):
				case joaat("MP_Christmas2018_Tee_001_F"):
					if (__LIB_0__.func_137(25033, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_001_M"));
					break;
				case joaat("MP_Christmas2018_Tee_002_M"):
				case joaat("MP_Christmas2018_Tee_002_F"):
					if (__LIB_0__.func_137(25034, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_002_M"));
					break;
				case joaat("MP_Christmas2018_Tee_003_M"):
				case joaat("MP_Christmas2018_Tee_003_F"):
					if (__LIB_0__.func_137(25035, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_003_M"));
					break;
				case joaat("MP_Christmas2018_Tee_004_M"):
				case joaat("MP_Christmas2018_Tee_004_F"):
					if (__LIB_0__.func_137(25036, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_004_M"));
					break;
				case joaat("MP_Christmas2018_Tee_005_M"):
				case joaat("MP_Christmas2018_Tee_005_F"):
					if (__LIB_0__.func_137(25037, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_005_M"));
					break;
				case joaat("MP_Christmas2018_Tee_006_M"):
				case joaat("MP_Christmas2018_Tee_006_F"):
					if (__LIB_0__.func_137(25038, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_006_M"));
					break;
				case joaat("MP_Christmas2018_Tee_007_M"):
				case joaat("MP_Christmas2018_Tee_007_F"):
					if (__LIB_0__.func_137(25039, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_007_M"));
					break;
				case joaat("MP_Christmas2018_Tee_008_M"):
				case joaat("MP_Christmas2018_Tee_008_F"):
					if (__LIB_0__.func_137(25040, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_008_M"));
					break;
				case joaat("MP_Christmas2018_Tee_009_M"):
				case joaat("MP_Christmas2018_Tee_009_F"):
					if (__LIB_0__.func_137(25041, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_009_M"));
					break;
				case joaat("MP_Christmas2018_Tee_010_M"):
				case joaat("MP_Christmas2018_Tee_010_F"):
					if (__LIB_0__.func_137(25042, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_010_M"));
					break;
				case joaat("MP_Christmas2018_Tee_011_M"):
				case joaat("MP_Christmas2018_Tee_011_F"):
					if (__LIB_0__.func_137(25043, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_011_M"));
					break;
				case joaat("MP_Christmas2018_Tee_012_M"):
				case joaat("MP_Christmas2018_Tee_012_F"):
					if (__LIB_0__.func_137(25044, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_012_M"));
					break;
				case joaat("MP_Christmas2018_Tee_013_M"):
				case joaat("MP_Christmas2018_Tee_013_F"):
					if (__LIB_0__.func_137(25045, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_013_M"));
					break;
				case joaat("MP_Christmas2018_Tee_014_M"):
				case joaat("MP_Christmas2018_Tee_014_F"):
					if (__LIB_0__.func_137(25046, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_014_M"));
					break;
				case joaat("MP_Christmas2018_Tee_015_M"):
				case joaat("MP_Christmas2018_Tee_015_F"):
					if (__LIB_0__.func_137(25047, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_015_M"));
					break;
				case joaat("MP_Christmas2018_Tee_016_M"):
				case joaat("MP_Christmas2018_Tee_016_F"):
					if (__LIB_0__.func_137(25048, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_016_M"));
					break;
				case joaat("MP_Christmas2018_Tee_017_M"):
				case joaat("MP_Christmas2018_Tee_017_F"):
					if (__LIB_0__.func_137(25049, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_017_M"));
					break;
				case joaat("MP_Christmas2018_Tee_018_M"):
				case joaat("MP_Christmas2018_Tee_018_F"):
					if (__LIB_0__.func_137(25050, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_018_M"));
					break;
				case joaat("MP_Christmas2018_Tee_019_M"):
				case joaat("MP_Christmas2018_Tee_019_F"):
					if (__LIB_0__.func_137(25051, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_019_M"));
					break;
				case joaat("MP_Christmas2018_Tee_020_M"):
				case joaat("MP_Christmas2018_Tee_020_F"):
					if (__LIB_0__.func_137(25052, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_020_M"));
					break;
				case joaat("MP_Christmas2018_Tee_021_M"):
				case joaat("MP_Christmas2018_Tee_021_F"):
					if (__LIB_0__.func_137(25053, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_021_M"));
					break;
				case joaat("MP_Christmas2018_Tee_022_M"):
				case joaat("MP_Christmas2018_Tee_022_F"):
					if (__LIB_0__.func_137(25054, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_022_M"));
					break;
				case joaat("MP_Christmas2018_Tee_023_M"):
				case joaat("MP_Christmas2018_Tee_023_F"):
					if (__LIB_0__.func_137(25055, -1))
					{
						return 0;
					}
					if (__LIB_0__.func_137(27077, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_023_M"));
					break;
				case joaat("MP_Christmas2018_Tee_024_M"):
				case joaat("MP_Christmas2018_Tee_024_F"):
					if (__LIB_0__.func_137(25056, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_024_M"));
					break;
				case joaat("MP_Christmas2018_Tee_025_M"):
				case joaat("MP_Christmas2018_Tee_025_F"):
					if (__LIB_0__.func_137(25057, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_025_M"));
					break;
				case joaat("MP_Christmas2018_Tee_026_M"):
				case joaat("MP_Christmas2018_Tee_026_F"):
					if (__LIB_0__.func_137(25058, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_026_M"));
					break;
				case joaat("MP_Christmas2018_Tee_027_M"):
				case joaat("MP_Christmas2018_Tee_027_F"):
					if (__LIB_0__.func_137(25059, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_027_M"));
					break;
				case joaat("MP_Christmas2018_Tee_028_M"):
				case joaat("MP_Christmas2018_Tee_028_F"):
					if (__LIB_0__.func_137(25060, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_028_M"));
					break;
				case joaat("MP_Christmas2018_Tee_029_M"):
				case joaat("MP_Christmas2018_Tee_029_F"):
					if (__LIB_0__.func_137(25061, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_029_M"));
					break;
				case joaat("MP_Christmas2018_Tee_030_M"):
				case joaat("MP_Christmas2018_Tee_030_F"):
					if (__LIB_0__.func_137(25062, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_030_M"));
					break;
				case joaat("MP_Christmas2018_Tee_031_M"):
				case joaat("MP_Christmas2018_Tee_031_F"):
					if (__LIB_0__.func_137(25063, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_031_M"));
					break;
				case joaat("MP_Christmas2018_Tee_032_M"):
				case joaat("MP_Christmas2018_Tee_032_F"):
					if (__LIB_0__.func_137(25064, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_032_M"));
					break;
				case joaat("MP_Christmas2018_Tee_033_M"):
				case joaat("MP_Christmas2018_Tee_033_F"):
					if (__LIB_0__.func_137(25065, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_033_M"));
					break;
				case joaat("MP_Christmas2018_Tee_034_M"):
				case joaat("MP_Christmas2018_Tee_034_F"):
					if (__LIB_0__.func_137(25066, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_034_M"));
					break;
				case joaat("MP_Christmas2018_Tee_035_M"):
				case joaat("MP_Christmas2018_Tee_035_F"):
					if (__LIB_0__.func_137(25067, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_035_M"));
					break;
				case joaat("MP_Christmas2018_Tee_036_M"):
				case joaat("MP_Christmas2018_Tee_036_F"):
					if (__LIB_0__.func_137(25068, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_036_M"));
					break;
				case joaat("MP_Christmas2018_Tee_037_M"):
				case joaat("MP_Christmas2018_Tee_037_F"):
					if (__LIB_0__.func_137(25069, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_037_M"));
					break;
				case joaat("MP_Christmas2018_Tee_038_M"):
				case joaat("MP_Christmas2018_Tee_038_F"):
					if (__LIB_0__.func_137(25070, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_038_M"));
					break;
				case joaat("MP_Christmas2018_Tee_039_M"):
				case joaat("MP_Christmas2018_Tee_039_F"):
					if (__LIB_0__.func_137(25071, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_039_M"));
					break;
				case joaat("MP_Christmas2018_Tee_040_M"):
				case joaat("MP_Christmas2018_Tee_040_F"):
					if (__LIB_0__.func_137(25072, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_040_M"));
					break;
				case joaat("MP_Christmas2018_Tee_041_M"):
				case joaat("MP_Christmas2018_Tee_041_F"):
					if (__LIB_0__.func_137(25073, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_041_M"));
					break;
				case joaat("MP_Christmas2018_Tee_042_M"):
				case joaat("MP_Christmas2018_Tee_042_F"):
					if (__LIB_0__.func_137(25074, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_042_M"));
					break;
				case joaat("MP_Christmas2018_Tee_043_M"):
				case joaat("MP_Christmas2018_Tee_043_F"):
					if (__LIB_0__.func_137(25075, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_043_M"));
					break;
				case joaat("MP_Christmas2018_Tee_044_M"):
				case joaat("MP_Christmas2018_Tee_044_F"):
					if (__LIB_0__.func_137(25076, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_044_M"));
					break;
				case joaat("MP_Christmas2018_Tee_045_M"):
				case joaat("MP_Christmas2018_Tee_045_F"):
					if (__LIB_0__.func_137(25077, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_045_M"));
					break;
				case joaat("MP_Christmas2018_Tee_046_M"):
				case joaat("MP_Christmas2018_Tee_046_F"):
					if (__LIB_0__.func_137(25078, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_046_M"));
					break;
				case joaat("MP_Christmas2018_Tee_047_M"):
				case joaat("MP_Christmas2018_Tee_047_F"):
					if (__LIB_0__.func_137(25079, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_047_M"));
					break;
				case joaat("MP_Christmas2018_Tee_048_M"):
				case joaat("MP_Christmas2018_Tee_048_F"):
					if (__LIB_0__.func_137(25080, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_048_M"));
					break;
				case joaat("MP_Christmas2018_Tee_049_M"):
				case joaat("MP_Christmas2018_Tee_049_F"):
					if (__LIB_0__.func_137(25081, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_049_M"));
					break;
				case joaat("MP_Christmas2018_Tee_050_M"):
				case joaat("MP_Christmas2018_Tee_050_F"):
					if (__LIB_0__.func_137(25082, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_050_M"));
					break;
				case joaat("MP_Christmas2018_Tee_051_M"):
				case joaat("MP_Christmas2018_Tee_051_F"):
					if (__LIB_0__.func_137(25083, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_051_M"));
					break;
				case joaat("MP_Christmas2018_Tee_052_M"):
				case joaat("MP_Christmas2018_Tee_052_F"):
					if (__LIB_0__.func_137(25084, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_052_M"));
					break;
				case joaat("MP_Christmas2018_Tee_053_M"):
				case joaat("MP_Christmas2018_Tee_053_F"):
					if (__LIB_0__.func_137(25085, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_053_M"));
					break;
				case joaat("MP_Christmas2018_Tee_054_M"):
				case joaat("MP_Christmas2018_Tee_054_F"):
					if (__LIB_0__.func_137(25086, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_054_M"));
					break;
				case joaat("MP_Christmas2018_Tee_055_M"):
				case joaat("MP_Christmas2018_Tee_055_F"):
					if (__LIB_0__.func_137(25087, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_055_M"));
					break;
				case joaat("MP_Christmas2018_Tee_056_M"):
				case joaat("MP_Christmas2018_Tee_056_F"):
					if (__LIB_0__.func_137(25088, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_056_M"));
					break;
				case joaat("MP_Christmas2018_Tee_057_M"):
				case joaat("MP_Christmas2018_Tee_057_F"):
					if (__LIB_0__.func_137(25089, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_057_M"));
					break;
				case joaat("MP_Christmas2018_Tee_058_M"):
				case joaat("MP_Christmas2018_Tee_058_F"):
					if (__LIB_0__.func_137(25090, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_058_M"));
					break;
				case joaat("MP_Christmas2018_Tee_059_M"):
				case joaat("MP_Christmas2018_Tee_059_F"):
					if (__LIB_0__.func_137(25091, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_059_M"));
					break;
				case joaat("MP_Christmas2018_Tee_060_M"):
				case joaat("MP_Christmas2018_Tee_060_F"):
					if (__LIB_0__.func_137(25092, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_060_M"));
					break;
				case joaat("MP_Christmas2018_Tee_061_M"):
				case joaat("MP_Christmas2018_Tee_061_F"):
					if (__LIB_0__.func_137(25093, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_061_M"));
					break;
				case joaat("MP_Christmas2018_Tee_062_M"):
				case joaat("MP_Christmas2018_Tee_062_F"):
					if (__LIB_0__.func_137(25094, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_062_M"));
					break;
				case joaat("MP_Christmas2018_Tee_063_M"):
				case joaat("MP_Christmas2018_Tee_063_F"):
					if (__LIB_0__.func_137(25095, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_063_M"));
					break;
				case joaat("MP_Christmas2018_Tee_064_M"):
				case joaat("MP_Christmas2018_Tee_064_F"):
					if (__LIB_0__.func_137(25096, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_064_M"));
					break;
				case joaat("MP_Christmas2018_Tee_065_M"):
				case joaat("MP_Christmas2018_Tee_065_F"):
					if (__LIB_0__.func_137(25097, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_065_M"));
					break;
				case joaat("MP_Christmas2018_Tee_066_M"):
				case joaat("MP_Christmas2018_Tee_066_F"):
					if (__LIB_0__.func_137(25098, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_066_M"));
					break;
				case joaat("MP_Christmas2018_Tee_067_M"):
				case joaat("MP_Christmas2018_Tee_067_F"):
					if (__LIB_0__.func_137(25099, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_067_M"));
					break;
				case joaat("MP_Christmas2018_Tat_000_M"):
				case joaat("MP_Christmas2018_Tat_000_F"):
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tat_000_M"));
					break;
			}
			break;
		case joaat("mpBattle_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Battle_Clothing_000_M"):
				case joaat("MP_Battle_Clothing_000_F"):
					if (__LIB_0__.func_137(22108, -1) || __LIB_0__.func_137(25006, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_000_M"));
					break;
				case joaat("MP_Battle_Clothing_002_M"):
				case joaat("MP_Battle_Clothing_002_F"):
					if (__LIB_0__.func_137(9481, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_002_M"));
					break;
				case joaat("MP_Battle_Clothing_003_M"):
				case joaat("MP_Battle_Clothing_003_F"):
					if (__LIB_0__.func_137(9470, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_003_M"));
					break;
				case joaat("MP_Battle_Clothing_004_M"):
				case joaat("MP_Battle_Clothing_004_F"):
					if (__LIB_0__.func_137(9475, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_004_M"));
					break;
				case joaat("MP_Battle_Clothing_005_M"):
				case joaat("MP_Battle_Clothing_005_F"):
					if (__LIB_0__.func_137(9472, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_005_M"));
					break;
				case joaat("MP_Battle_Clothing_006_M"):
				case joaat("MP_Battle_Clothing_006_F"):
					if (__LIB_0__.func_137(9465, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_006_M"));
					break;
				case joaat("MP_Battle_Clothing_007_M"):
				case joaat("MP_Battle_Clothing_007_F"):
					if (__LIB_0__.func_137(9463, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_007_M"));
					break;
				case joaat("MP_Battle_Clothing_008_M"):
				case joaat("MP_Battle_Clothing_008_F"):
					if (__LIB_0__.func_137(9464, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_008_M"));
					break;
				case joaat("MP_Battle_Clothing_009_M"):
				case joaat("MP_Battle_Clothing_009_F"):
					if (__LIB_0__.func_137(9468, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_009_M"));
					break;
				case joaat("MP_Battle_Clothing_010_M"):
				case joaat("MP_Battle_Clothing_010_F"):
					if (__LIB_0__.func_137(9469, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_010_M"));
					break;
				case joaat("MP_Battle_Clothing_011_M"):
				case joaat("MP_Battle_Clothing_011_F"):
					if (__LIB_0__.func_137(9479, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_011_M"));
					break;
				case joaat("MP_Battle_Clothing_012_M"):
				case joaat("MP_Battle_Clothing_012_F"):
					if (__LIB_0__.func_137(9473, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_012_M"));
					break;
				case joaat("MP_Battle_Clothing_013_M"):
				case joaat("MP_Battle_Clothing_013_F"):
					if (__LIB_0__.func_137(9480, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_013_M"));
					break;
				case joaat("MP_Battle_Clothing_014_M"):
				case joaat("MP_Battle_Clothing_014_F"):
					if (__LIB_0__.func_137(9476, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_014_M"));
					break;
				case joaat("MP_Battle_Clothing_015_M"):
				case joaat("MP_Battle_Clothing_015_F"):
					if (__LIB_0__.func_137(9477, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_015_M"));
					break;
				case joaat("MP_Battle_Clothing_016_M"):
				case joaat("MP_Battle_Clothing_016_F"):
					if (__LIB_0__.func_137(9471, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_016_M"));
					break;
				case joaat("MP_Battle_Clothing_017_M"):
				case joaat("MP_Battle_Clothing_017_F"):
					if (__LIB_0__.func_137(9474, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_017_M"));
					break;
				case joaat("MP_Battle_Clothing_018_M"):
				case joaat("MP_Battle_Clothing_018_F"):
					if (__LIB_0__.func_137(9467, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_018_M"));
					break;
				case joaat("MP_Battle_Clothing_019_M"):
				case joaat("MP_Battle_Clothing_019_F"):
					if (__LIB_0__.func_137(9478, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_019_M"));
					break;
				case joaat("MP_Battle_Clothing_020_M"):
				case joaat("MP_Battle_Clothing_020_F"):
					if (__LIB_0__.func_137(9462, -1))
					{
						return 0;
					}
					if (iParam1 == joaat("MP_Battle_Clothing_020_M"))
					{
						if (__LIB_0__.func_137(27085, -1))
						{
							return 0;
						}
					}
					else if (__LIB_0__.func_137(27084, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_020_M"));
					break;
				case joaat("MP_Battle_Clothing_021_M"):
				case joaat("MP_Battle_Clothing_021_F"):
					if (__LIB_0__.func_137(9466, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_021_M"));
					break;
				case joaat("MP_Battle_Clothing_022_M"):
				case joaat("MP_Battle_Clothing_022_F"):
					if (__LIB_0__.func_137(22126, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_022_M"));
					break;
				case joaat("MP_Battle_Clothing_023_M"):
				case joaat("MP_Battle_Clothing_023_F"):
					if (__LIB_0__.func_137(22127, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_023_M"));
					break;
				case joaat("MP_Battle_Clothing_024_M"):
				case joaat("MP_Battle_Clothing_024_F"):
					if (__LIB_0__.func_137(22128, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_024_M"));
					break;
				case joaat("MP_Battle_Clothing_025_M"):
				case joaat("MP_Battle_Clothing_025_F"):
					if (__LIB_0__.func_137(22124, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_025_M"));
					break;
				case joaat("MP_Battle_Clothing_026_M"):
				case joaat("MP_Battle_Clothing_026_F"):
					if (__LIB_0__.func_137(22130, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_026_M"));
					break;
				case joaat("MP_Battle_Clothing_027_M"):
				case joaat("MP_Battle_Clothing_027_F"):
					if (__LIB_0__.func_137(22125, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_027_M"));
					break;
				case joaat("MP_Battle_Clothing_028_M"):
				case joaat("MP_Battle_Clothing_028_F"):
					if (__LIB_0__.func_137(22129, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_028_M"));
					break;
				case joaat("MP_Battle_Clothing_029_M"):
				case joaat("MP_Battle_Clothing_029_F"):
					if (__LIB_0__.func_137(22131, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_029_M"));
					break;
				case joaat("MP_Battle_Clothing_030_M"):
				case joaat("MP_Battle_Clothing_030_F"):
					if (__LIB_0__.func_137(22132, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_030_M"));
					break;
			}
			switch (iParam1)
			{
				case joaat("MP_Battle_Clothing_031_M"):
				case joaat("MP_Battle_Clothing_031_F"):
					if (__LIB_0__.func_137(22147, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_031_M"));
					break;
				case joaat("MP_Battle_Clothing_032_M"):
				case joaat("MP_Battle_Clothing_032_F"):
					if (__LIB_0__.func_137(22148, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_032_M"));
					break;
				case joaat("MP_Battle_Clothing_033_M"):
				case joaat("MP_Battle_Clothing_033_F"):
					if (__LIB_0__.func_137(22149, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_033_M"));
					break;
				case joaat("MP_Battle_Clothing_034_M"):
				case joaat("MP_Battle_Clothing_034_F"):
					if (__LIB_0__.func_137(22150, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_034_M"));
					break;
				case joaat("MP_Battle_Clothing_035_M"):
				case joaat("MP_Battle_Clothing_035_F"):
					if (__LIB_0__.func_137(22151, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_035_M"));
					break;
				case joaat("MP_Battle_Clothing_036_M"):
				case joaat("MP_Battle_Clothing_036_F"):
					if (__LIB_0__.func_137(22152, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_036_M"));
					break;
				case joaat("MP_Battle_Clothing_037_M"):
				case joaat("MP_Battle_Clothing_037_F"):
					if (__LIB_0__.func_137(22153, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_037_M"));
					break;
				case joaat("MP_Battle_Clothing_038_M"):
				case joaat("MP_Battle_Clothing_038_F"):
					if (__LIB_0__.func_137(22154, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_038_M"));
					break;
				case joaat("MP_Battle_Clothing_039_M"):
				case joaat("MP_Battle_Clothing_039_F"):
					if (__LIB_0__.func_137(22155, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_039_M"));
					break;
				case joaat("MP_Battle_Clothing_040_M"):
				case joaat("MP_Battle_Clothing_040_F"):
					if (__LIB_0__.func_137(22156, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_040_M"));
					break;
				case joaat("MP_Battle_Clothing_041_M"):
				case joaat("MP_Battle_Clothing_041_F"):
					if (__LIB_0__.func_137(22157, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_041_M"));
					break;
				case joaat("MP_Battle_Clothing_042_M"):
				case joaat("MP_Battle_Clothing_042_F"):
					if (__LIB_0__.func_137(22158, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_042_M"));
					break;
				case joaat("MP_Battle_Clothing_043_M"):
				case joaat("MP_Battle_Clothing_043_F"):
					if (__LIB_0__.func_137(22159, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_043_M"));
					break;
				case joaat("MP_Battle_Clothing_044_M"):
				case joaat("MP_Battle_Clothing_044_F"):
					if (__LIB_0__.func_137(22160, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_044_M"));
					break;
				case joaat("MP_Battle_Clothing_045_M"):
				case joaat("MP_Battle_Clothing_045_F"):
					if (__LIB_0__.func_137(22161, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_045_M"));
					break;
				case joaat("MP_Battle_Clothing_046_M"):
				case joaat("MP_Battle_Clothing_046_F"):
					if (__LIB_0__.func_137(22162, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_046_M"));
					break;
				case joaat("MP_Battle_Clothing_047_M"):
				case joaat("MP_Battle_Clothing_047_F"):
					if (__LIB_0__.func_137(22163, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_047_M"));
					break;
				case joaat("MP_Battle_Clothing_048_M"):
				case joaat("MP_Battle_Clothing_048_F"):
					if (__LIB_0__.func_137(22164, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_048_M"));
					break;
				case joaat("MP_Battle_Clothing_049_M"):
				case joaat("MP_Battle_Clothing_049_F"):
					if (__LIB_0__.func_137(22165, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_049_M"));
					break;
				case joaat("MP_Battle_Clothing_050_M"):
				case joaat("MP_Battle_Clothing_050_F"):
					if (__LIB_0__.func_137(22166, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_050_M"));
					break;
				case joaat("MP_Battle_Clothing_051_M"):
				case joaat("MP_Battle_Clothing_051_F"):
					if (__LIB_0__.func_137(22167, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_051_M"));
					break;
				case joaat("MP_Battle_Clothing_052_M"):
				case joaat("MP_Battle_Clothing_052_F"):
					if (__LIB_0__.func_137(22168, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_052_M"));
					break;
				case joaat("MP_Battle_Clothing_053_M"):
				case joaat("MP_Battle_Clothing_053_F"):
					if (__LIB_0__.func_137(22169, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_053_M"));
					break;
				case joaat("MP_Battle_Clothing_054_M"):
				case joaat("MP_Battle_Clothing_054_F"):
					if (__LIB_0__.func_137(22170, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_054_M"));
					break;
				case joaat("MP_Battle_Clothing_055_M"):
				case joaat("MP_Battle_Clothing_055_F"):
					if (__LIB_0__.func_137(22171, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_055_M"));
					break;
				case joaat("MP_Battle_Clothing_056_M"):
				case joaat("MP_Battle_Clothing_056_F"):
					if (__LIB_0__.func_137(22172, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_056_M"));
					break;
				case joaat("MP_Battle_Clothing_057_M"):
				case joaat("MP_Battle_Clothing_057_F"):
					if (__LIB_0__.func_137(22173, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_057_M"));
					break;
				case joaat("MP_Battle_Clothing_058_M"):
				case joaat("MP_Battle_Clothing_058_F"):
					if (__LIB_0__.func_137(22174, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_058_M"));
					break;
				case joaat("MP_Battle_Clothing_059_M"):
				case joaat("MP_Battle_Clothing_059_F"):
					if (__LIB_0__.func_137(22175, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_059_M"));
					break;
				case joaat("MP_Battle_Clothing_060_M"):
				case joaat("MP_Battle_Clothing_060_F"):
					if (__LIB_0__.func_137(22176, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_060_M"));
					break;
				case joaat("MP_Battle_Clothing_061_M"):
				case joaat("MP_Battle_Clothing_061_F"):
					if (__LIB_0__.func_137(22177, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_061_M"));
					break;
				case joaat("MP_Battle_Clothing_062_M"):
				case joaat("MP_Battle_Clothing_062_F"):
					if (__LIB_0__.func_137(22178, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_062_M"));
					break;
			}
			break;
		case joaat("mpGunrunning_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Gunrunning_Award_019_M"):
				case joaat("MP_Gunrunning_Award_025_F"):
					if (__LIB_0__.func_137(15426, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_019_M"));
					break;
				case joaat("MP_Gunrunning_Award_020_M"):
				case joaat("MP_Gunrunning_Award_020_F"):
					if (__LIB_0__.func_137(15422, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_020_M"));
					break;
				case joaat("MP_Gunrunning_Award_020_M_ALT"):
				case joaat("MP_Gunrunning_Award_020_F_ALT"):
					if (__LIB_0__.func_137(15423, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_020_M_ALT"));
					break;
				case joaat("MP_Gunrunning_Award_021_M"):
				case joaat("MP_Gunrunning_Award_021_F"):
					if (__LIB_0__.func_137(15421, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_021_M"));
					break;
				case joaat("MP_Gunrunning_Award_022_M"):
				case joaat("MP_Gunrunning_Award_026_F"):
					if (__LIB_0__.func_137(15427, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_022_M"));
					break;
				case joaat("MP_Gunrunning_Award_023_M"):
				case joaat("MP_Gunrunning_Award_023_F"):
					if (__LIB_0__.func_137(15419, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_023_M"));
					break;
				case joaat("MP_Gunrunning_Award_024_M"):
				case joaat("MP_Gunrunning_Award_024_F"):
					if (__LIB_0__.func_137(15420, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_024_M"));
					break;
			}
			switch (iParam1)
			{
				case joaat("MP_Gunrunning_Award_000_M"):
				case joaat("MP_Gunrunning_Award_000_F"):
					if (__LIB_0__.func_137(15394, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_000_M"));
					break;
				case joaat("MP_Gunrunning_Award_001_M"):
				case joaat("MP_Gunrunning_Award_001_F"):
					if (__LIB_0__.func_421(209, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_001_M"));
					break;
				case joaat("MP_Gunrunning_Award_002_M"):
				case joaat("MP_Gunrunning_Award_002_F"):
					if (__LIB_0__.func_137(15406, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_002_M"));
					break;
				case joaat("MP_Gunrunning_Award_003_M"):
				case joaat("MP_Gunrunning_Award_003_F"):
					if (__LIB_0__.func_137(15395, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_003_M"));
					break;
				case joaat("MP_Gunrunning_Award_004_M"):
				case joaat("MP_Gunrunning_Award_004_F"):
					if (__LIB_0__.func_421(209, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_004_M"));
					break;
				case joaat("MP_Gunrunning_Award_005_M"):
				case joaat("MP_Gunrunning_Award_005_F"):
					if (__LIB_0__.func_137(15410, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_005_M"));
					break;
				case joaat("MP_Gunrunning_Award_006_M"):
				case joaat("MP_Gunrunning_Award_006_F"):
					if (__LIB_0__.func_137(15407, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_006_M"));
					break;
				case joaat("MP_Gunrunning_Award_007_M"):
				case joaat("MP_Gunrunning_Award_007_F"):
					if (__LIB_0__.func_421(209, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_007_M"));
					break;
				case joaat("MP_Gunrunning_Award_008_M"):
				case joaat("MP_Gunrunning_Award_008_F"):
					if (__LIB_0__.func_421(209, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_008_M"));
					break;
				case joaat("MP_Gunrunning_Award_009_M"):
				case joaat("MP_Gunrunning_Award_009_F"):
					if (__LIB_0__.func_137(15414, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_009_M"));
					break;
				case joaat("MP_Gunrunning_Award_010_M"):
				case joaat("MP_Gunrunning_Award_010_F"):
					if (__LIB_0__.func_137(15415, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_010_M"));
					break;
				case joaat("MP_Gunrunning_Award_011_M"):
				case joaat("MP_Gunrunning_Award_011_F"):
					if (__LIB_0__.func_137(15399, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_011_M"));
					break;
				case joaat("MP_Gunrunning_Award_012_M"):
				case joaat("MP_Gunrunning_Award_012_F"):
					if (__LIB_0__.func_137(15404, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_012_M"));
					break;
				case joaat("MP_Gunrunning_Award_013_M"):
				case joaat("MP_Gunrunning_Award_013_F"):
					if (__LIB_0__.func_421(209, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_013_M"));
					break;
				case joaat("MP_Gunrunning_Award_014_M"):
				case joaat("MP_Gunrunning_Award_014_F"):
					if (__LIB_0__.func_137(15392, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_014_M"));
					break;
				case joaat("MP_Gunrunning_Award_015_M"):
				case joaat("MP_Gunrunning_Award_015_F"):
					if (__LIB_0__.func_137(15390, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_015_M"));
					break;
				case joaat("MP_Gunrunning_Award_016_M"):
				case joaat("MP_Gunrunning_Award_016_F"):
					if (__LIB_0__.func_137(15402, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_016_M"));
					break;
				case joaat("MP_Gunrunning_Award_017_M"):
				case joaat("MP_Gunrunning_Award_017_F"):
					if (__LIB_0__.func_137(15416, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_017_M"));
					break;
				case joaat("MP_Gunrunning_Award_018_M"):
				case joaat("MP_Gunrunning_Award_018_F"):
					if (__LIB_0__.func_421(209, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_018_M"));
					break;
			}
			break;
		case joaat("mpBiker_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Biker_Tee_022_M"):
				case joaat("MP_Biker_Tee_022_F"):
					if (__LIB_0__.func_137(9366, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_022_M"));
					break;
				case joaat("MP_Biker_Tee_023_M"):
				case joaat("MP_Biker_Tee_023_F"):
					if (__LIB_0__.func_137(9367, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_023_M"));
					break;
				case joaat("MP_Biker_Tee_024_M"):
				case joaat("MP_Biker_Tee_024_F"):
					if (__LIB_0__.func_137(9369, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_024_M"));
					break;
				case joaat("MP_Biker_Tee_025_M"):
				case joaat("MP_Biker_Tee_025_F"):
					if (__LIB_0__.func_137(9368, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_025_M"));
					break;
				case joaat("MP_Biker_Tee_047_M"):
				case joaat("MP_Biker_Tee_047_F"):
					if (__LIB_0__.func_137(9365, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_047_M"));
					break;
				case joaat("MP_Biker_Tee_048_M"):
				case joaat("MP_Biker_Tee_048_F"):
					if (__LIB_0__.func_137(9364, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_048_M"));
					break;
				case joaat("MP_Biker_Tee_049_M"):
				case joaat("MP_Biker_Tee_049_F"):
					if (__LIB_0__.func_137(27078, -1))
					{
						return 0;
					}
					if (__LIB_0__.func_137(9363, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_049_M"));
					break;
				case joaat("MP_Biker_Tee_050_M"):
				case joaat("MP_Biker_Tee_050_F"):
					if (__LIB_0__.func_137(9362, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_050_M"));
					break;
				case joaat("MP_Biker_Tee_051_M"):
				case joaat("MP_Biker_Tee_051_F"):
					if (__LIB_0__.func_137(9370, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_051_M"));
					break;
				case joaat("MP_Biker_Tee_052_M"):
				case joaat("MP_Biker_Tee_052_F"):
					if (__LIB_0__.func_137(9371, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_052_M"));
					break;
				case joaat("MP_Biker_Tee_053_M"):
				case joaat("MP_Biker_Tee_053_F"):
					if (__LIB_0__.func_137(9372, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_053_M"));
					break;
				case joaat("MP_Biker_Tee_054_M"):
				case joaat("MP_Biker_Tee_054_F"):
					if (__LIB_0__.func_137(9373, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_054_M"));
					break;
				case joaat("MP_Biker_Tee_055_M"):
				case joaat("MP_Biker_Tee_055_F"):
					if (__LIB_0__.func_137(9374, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_055_M"));
					break;
				case joaat("MP_Biker_Award_000_M"):
				case joaat("MP_Biker_Award_000_F"):
					if (__LIB_0__.func_137(9384, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Biker_Award_000_M"));
					break;
				case joaat("MP_Biker_Award_001_M"):
				case joaat("MP_Biker_Award_001_F"):
					if (__LIB_0__.func_137(9385, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_Biker_Award_001_M"));
					break;
			}
			break;
		case joaat("mpExecutive_overlays"):
			switch (iParam1)
			{
				case joaat("MP_exec_prizes_015_M"):
				case joaat("MP_exec_prizes_015_F"):
					if (__LIB_0__.func_137(7551, -1) || __LIB_0__.func_534(3792, -1, 0) >= Global_262145.f_16823 /* Tunable: DCTL_WIN_COUNT_REWARD */)
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_015_M"));
					break;
				case joaat("MP_exec_prizes_000_M"):
				case joaat("MP_exec_prizes_000_F"):
					if (__LIB_0__.func_137(7467, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_000_M"));
					break;
				case joaat("MP_exec_prizes_001_M"):
				case joaat("MP_exec_prizes_001_F"):
					if (__LIB_0__.func_137(7468, -1))
					{
						return 0;
					}
					if (iParam1 == joaat("MP_exec_prizes_001_M"))
					{
						if (__LIB_0__.func_137(27083, -1))
						{
							return 0;
						}
					}
					else if (__LIB_0__.func_137(27086, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_001_M"));
					break;
				case joaat("MP_exec_prizes_002_M"):
				case joaat("MP_exec_prizes_002_F"):
					if (__LIB_0__.func_137(7469, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_002_M"));
					break;
				case joaat("MP_exec_prizes_003_M"):
				case joaat("MP_exec_prizes_003_F"):
					if (__LIB_0__.func_137(7470, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_003_M"));
					break;
				case joaat("MP_exec_prizes_004_M"):
				case joaat("MP_exec_prizes_004_F"):
					if (__LIB_0__.func_137(7471, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_004_M"));
					break;
				case joaat("MP_exec_prizes_005_M"):
				case joaat("MP_exec_prizes_005_F"):
					if (__LIB_0__.func_137(7472, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_005_M"));
					break;
				case joaat("MP_exec_prizes_006_M"):
				case joaat("MP_exec_prizes_006_F"):
					if (__LIB_0__.func_137(7473, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_006_M"));
					break;
				case joaat("MP_exec_prizes_007_M"):
				case joaat("MP_exec_prizes_007_F"):
					if (__LIB_0__.func_137(7474, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_007_M"));
					break;
				case joaat("MP_exec_prizes_008_M"):
				case joaat("MP_exec_prizes_008_F"):
					if (__LIB_0__.func_137(7475, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_008_M"));
					break;
				case joaat("MP_exec_prizes_009_M"):
				case joaat("MP_exec_prizes_009_F"):
					if (__LIB_0__.func_137(7476, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_009_M"));
					break;
				case joaat("MP_exec_prizes_010_M"):
				case joaat("MP_exec_prizes_010_F"):
					if (__LIB_0__.func_137(7477, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_010_M"));
					break;
				case joaat("MP_exec_prizes_011_M"):
				case joaat("MP_exec_prizes_011_F"):
					if (__LIB_0__.func_137(7478, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_011_M"));
					break;
				case joaat("MP_exec_prizes_012_M"):
				case joaat("MP_exec_prizes_012_F"):
					if (__LIB_0__.func_137(7479, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_012_M"));
					break;
				case joaat("MP_exec_prizes_013_M"):
				case joaat("MP_exec_prizes_013_F"):
					if (__LIB_0__.func_137(7480, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_013_M"));
					break;
				case joaat("MP_exec_prizes_014_M"):
				case joaat("MP_exec_prizes_014_F"):
					if (__LIB_0__.func_137(7481, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_014_M"));
					break;
			}
			break;
		case joaat("mpHalloween_overlays"):
			switch (iParam1)
			{
				case joaat("HW_Tee_000_F"):
				case joaat("HW_Tee_000_M"):
					if (__LIB_0__.func_137(4260, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("HW_Tee_000_M"));
					break;
				case joaat("HW_Tee_001_F"):
				case joaat("HW_Tee_001_M"):
					if (__LIB_0__.func_137(4257, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("HW_Tee_001_M"));
					break;
				case joaat("HW_Tee_002_F"):
				case joaat("HW_Tee_002_M"):
					if (__LIB_0__.func_137(4269, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("HW_Tee_002_M"));
					break;
				case joaat("HW_Tee_003_F"):
				case joaat("HW_Tee_003_M"):
					if (__LIB_0__.func_137(4261, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("HW_Tee_003_M"));
					break;
				case joaat("HW_Tee_004_F"):
				case joaat("HW_Tee_004_M"):
					if (__LIB_0__.func_137(4259, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("HW_Tee_004_M"));
					break;
				case joaat("HW_Tee_005_F"):
				case joaat("HW_Tee_005_M"):
					if (__LIB_0__.func_137(4268, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("HW_Tee_005_M"));
					break;
				case joaat("HW_Tee_006_F"):
				case joaat("HW_Tee_006_M"):
					if (__LIB_0__.func_137(4265, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("HW_Tee_006_M"));
					break;
				case joaat("HW_Tee_007_F"):
				case joaat("HW_Tee_007_M"):
					if (__LIB_0__.func_137(4258, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("HW_Tee_007_M"));
					break;
				case joaat("HW_Tee_008_F"):
				case joaat("HW_Tee_008_M"):
					if (__LIB_0__.func_137(4264, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("HW_Tee_008_M"));
					break;
				case joaat("HW_Tee_009_F"):
				case joaat("HW_Tee_009_M"):
					if (__LIB_0__.func_137(4267, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("HW_Tee_009_M"));
					break;
				case joaat("HW_Tee_010_F"):
				case joaat("HW_Tee_010_M"):
					if (__LIB_0__.func_137(4262, -1))
					{
						return 0;
					}
					if (__LIB_0__.func_137(27079, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("HW_Tee_010_M"));
					break;
				case joaat("HW_Tee_011_F"):
				case joaat("HW_Tee_011_M"):
					if (__LIB_0__.func_137(4263, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("HW_Tee_011_M"));
					break;
				case joaat("HW_Tee_012_F"):
				case joaat("HW_Tee_012_M"):
					if (__LIB_0__.func_137(4266, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("HW_Tee_012_M"));
					break;
			}
			break;
		case joaat("mpLowrider_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Bennys_000_M"):
				case joaat("MP_Bennys_001_M"):
					if (__LIB_0__.func_534(2934, -1, 0) > 0)
					{
						return 0;
					}
					if (iParam1 == joaat("MP_Bennys_001_M"))
					{
						if (__LIB_0__.func_137(27068, -1))
						{
							return 0;
						}
					}
					return !__LIB_25__.func_41(iParam2, iParam1, 1);
					break;
				case joaat("MP_Bennys_000_F"):
				case joaat("MP_Bennys_001_F"):
					if (__LIB_0__.func_534(2934, -1, 0) > 0)
					{
						return 0;
					}
					if (iParam1 == joaat("MP_Bennys_001_F"))
					{
						if (__LIB_0__.func_137(27068, -1))
						{
							return 0;
						}
					}
					return !__LIB_25__.func_41(iParam2, iParam1, 0);
					break;
			}
			break;
		case joaat("mpxmas_604490_overlays"):
			switch (iParam1)
			{
				case joaat("MP_IHeartLC_000_M"):
				case joaat("MP_IHeartLC_001_F"):
					if (__LIB_0__.func_137(113, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_41(iParam2, iParam1, iParam1 == joaat("MP_IHeartLC_000_M"));
					break;
			}
			break;
		case joaat("mpHeist_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Award_M_Tshirt_004"):
				case joaat("MP_Award_M_Tshirt_005"):
				case joaat("MP_Award_M_Tshirt_006"):
				case joaat("MP_Award_M_Tshirt_007"):
				case joaat("MP_Award_M_Tshirt_008"):
				case joaat("MP_Award_M_Tshirt_009"):
				case joaat("MP_Award_M_Tshirt_010"):
				case joaat("MP_Award_M_Tshirt_011"):
				case joaat("MP_Award_M_Tshirt_012"):
				case joaat("MP_Award_M_Tshirt_013"):
					if (iParam1 == joaat("MP_Award_M_Tshirt_004"))
					{
						if (__LIB_0__.func_137(27082, -1))
						{
							return 0;
						}
						if (__LIB_0__.func_137(3770, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_005"))
					{
						if (__LIB_0__.func_137(3771, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_006"))
					{
						if (__LIB_0__.func_137(3772, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_007"))
					{
						if (__LIB_0__.func_137(3773, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_008"))
					{
						if (__LIB_0__.func_137(3774, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_009"))
					{
						if (__LIB_0__.func_137(3775, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_010"))
					{
						if (__LIB_0__.func_137(3776, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_011"))
					{
						if (__LIB_0__.func_137(3777, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_012"))
					{
						if (__LIB_0__.func_137(3778, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_013"))
					{
						if (__LIB_0__.func_137(3779, -1) || __LIB_0__.func_137(27084, -1))
						{
							return 0;
						}
					}
					return !__LIB_25__.func_41(iParam2, iParam1, 1);
					break;
				case joaat("MP_Award_F_Tshirt_004"):
				case joaat("MP_Award_F_Tshirt_005"):
				case joaat("MP_Award_F_Tshirt_006"):
				case joaat("MP_Award_F_Tshirt_007"):
				case joaat("MP_Award_F_Tshirt_008"):
				case joaat("MP_Award_F_Tshirt_009"):
				case joaat("MP_Award_F_Tshirt_010"):
				case joaat("MP_Award_F_Tshirt_011"):
				case joaat("MP_Award_F_Tshirt_012"):
				case joaat("MP_Award_F_Tshirt_013"):
					if (iParam1 == joaat("MP_Award_F_Tshirt_004"))
					{
						if (__LIB_0__.func_137(3770, -1))
						{
							return 0;
						}
						if (__LIB_0__.func_137(27082, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_005"))
					{
						if (__LIB_0__.func_137(3771, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_006"))
					{
						if (__LIB_0__.func_137(3772, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_007"))
					{
						if (__LIB_0__.func_137(3773, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_008"))
					{
						if (__LIB_0__.func_137(3774, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_009"))
					{
						if (__LIB_0__.func_137(3775, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_010"))
					{
						if (__LIB_0__.func_137(3776, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_011"))
					{
						if (__LIB_0__.func_137(3777, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_012"))
					{
						if (__LIB_0__.func_137(3778, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_013"))
					{
						if (__LIB_0__.func_137(3779, -1) || __LIB_0__.func_137(27083, -1))
						{
							return 0;
						}
					}
					return !__LIB_25__.func_41(iParam2, iParam1, 0);
					break;
				case joaat("MP_Elite_M_Tshirt"):
				case joaat("MP_Elite_M_Tshirt_1"):
				case joaat("MP_Elite_F_Tshirt"):
				case joaat("MP_Elite_F_Tshirt_1"):
					if ((((__LIB_0__.func_137(3765, -1) && __LIB_0__.func_137(3766, -1)) && __LIB_0__.func_137(3767, -1)) && __LIB_0__.func_137(3768, -1)) && __LIB_0__.func_137(3769, -1))
					{
						return 0;
					}
					return 1;
					break;
			}
			break;
		case joaat("mpIndependence_overlays"):
			switch (iParam1)
			{
				case joaat("FM_Ind_M_Award_000"):
				case joaat("FM_Ind_F_Award_000"):
					return !__LIB_0__.func_137(3593, -1);
					break;
			}
			if (!Global_262145.f_8258 /* Tunable: TOGGLE_ACTIVATE_INDEPENDENCE_PACK */ && !__LIB_25__.func_41(iParam2, iParam1, 0))
			{
				return 1;
			}
			break;
		case joaat("mpHipster_overlays"):
			switch (iParam1)
			{
				case 1443536758:
				case 1333229624:
				case -1665422117:
				case 1100930183:
				case -1595008258:
				case 94055115:
				case -627896761:
				case 1873477305:
					return 1;
					break;
				case joaat("MP_Award_M_Tshirt_000"):
				case joaat("MP_Award_M_Tshirt_001"):
				case joaat("MP_Award_F_Tshirt_000"):
				case joaat("MP_Award_F_Tshirt_001"):
					return 1;
					break;
				case 300677115:
				case 262692161:
				case -1684141219:
				case 390655118:
				case -479442624:
				case -542924311:
				case 1696910411:
				case -1259058037:
					return 1;
					break;
				case joaat("MP_Award_M_Tshirt_002"):
				case joaat("MP_Award_M_Tshirt_003"):
				case joaat("MP_Award_F_Tshirt_002"):
				case joaat("MP_Award_F_Tshirt_003"):
					return 1;
					break;
				case joaat("FM_Hip_M_Retro_010"):
				case joaat("FM_Hip_F_Retro_010"):
					return (!__LIB_0__.func_421(152, -1) && !__LIB_0__.func_137(9440, -1));
					break;
				case joaat("FM_Hip_M_Retro_003"):
				case joaat("FM_Hip_F_Retro_003"):
					return (!__LIB_0__.func_421(151, -1) && !__LIB_0__.func_137(9430, -1));
					break;
				case joaat("FM_Hip_M_Retro_000"):
				case joaat("FM_Hip_F_Retro_000"):
					return (!__LIB_18__.func_349(iParam2, -1) && !__LIB_0__.func_137(9426, -1));
					break;
				case joaat("FM_Hip_M_Retro_001"):
				case joaat("FM_Hip_F_Retro_001"):
					return (!__LIB_18__.func_349(iParam2, -1) && !__LIB_0__.func_137(9427, -1));
					break;
				case joaat("FM_Hip_M_Retro_002"):
				case joaat("FM_Hip_F_Retro_002"):
					return (!__LIB_18__.func_349(iParam2, -1) && !__LIB_0__.func_137(9428, -1));
					break;
				case joaat("FM_Hip_M_Retro_004"):
				case joaat("FM_Hip_F_Retro_004"):
					return (!__LIB_18__.func_349(iParam2, -1) && !__LIB_0__.func_137(9431, -1));
					break;
				case joaat("FM_Hip_M_Retro_005"):
				case joaat("FM_Hip_F_Retro_005"):
					return (!__LIB_18__.func_349(iParam2, -1) && !__LIB_0__.func_137(9432, -1));
					break;
				case joaat("FM_Hip_M_Retro_006"):
				case joaat("FM_Hip_F_Retro_006"):
					return (!__LIB_18__.func_349(iParam2, -1) && !__LIB_0__.func_137(9433, -1));
					break;
				case joaat("FM_Hip_M_Retro_007"):
				case joaat("FM_Hip_F_Retro_007"):
					return (!__LIB_18__.func_349(iParam2, -1) && !__LIB_0__.func_137(9439, -1));
					break;
				case joaat("FM_Hip_M_Retro_008"):
				case joaat("FM_Hip_F_Retro_008"):
					return (!__LIB_18__.func_349(iParam2, -1) && !__LIB_0__.func_137(9434, -1));
					break;
				case joaat("FM_Hip_M_Retro_009"):
				case joaat("FM_Hip_F_Retro_009"):
					return (!__LIB_18__.func_349(iParam2, -1) && !__LIB_0__.func_137(9435, -1));
					break;
				case joaat("FM_Hip_M_Retro_011"):
				case joaat("FM_Hip_F_Retro_011"):
					return (!__LIB_18__.func_349(iParam2, -1) && !__LIB_0__.func_137(9436, -1));
					break;
				case joaat("FM_Hip_M_Retro_012"):
				case joaat("FM_Hip_F_Retro_012"):
					return (!__LIB_18__.func_349(iParam2, -1) && !__LIB_0__.func_137(9429, -1));
					break;
				case joaat("FM_Hip_M_Retro_013"):
				case joaat("FM_Hip_F_Retro_013"):
					return (!__LIB_18__.func_349(iParam2, -1) && !__LIB_0__.func_137(9437, -1));
					break;
				case joaat("FM_Rstar_M_Tshirt_000"):
				case joaat("FM_Rstar_M_Tshirt_001"):
				case joaat("FM_Rstar_M_Tshirt_002"):
				case joaat("FM_Rstar_F_Tshirt_000"):
				case joaat("FM_Rstar_F_Tshirt_001"):
				case joaat("FM_Rstar_F_Tshirt_002"):
					return !__LIB_0__.func_236();
					break;
			}
			break;
		case joaat("mpValentines_overlays"):
			if ((!Global_262145.f_7058 /* Tunable: TURN_ON_VALENTINES_EVENT */ && !__LIB_18__.func_349(iParam2, -1)) && !Global_262145.f_12031 /* Tunable: TURN_ON_VALENTINE_CLOTHING */)
			{
				return 1;
			}
			break;
		case joaat("mpPilot_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Fli_M_Tshirt_000"):
				case joaat("MP_Fli_F_Tshirt_000"):
					return !__LIB_0__.func_137(3608, -1);
					break;
			}
			break;
		case joaat("mpLTS_overlays"):
			switch (iParam1)
			{
				case joaat("FM_LTS_M_Tshirt_000"):
				case joaat("FM_LTS_F_Tshirt_000"):
					return (!__LIB_0__.func_137(3615, -1) && !__LIB_0__.func_137(9438, -1));
					break;
			}
			break;
		case joaat("mpLuxe_overlays"):
			if (iParam1 == joaat("MP_LUXE_VDG_006_F"))
			{
				return 1;
			}
			switch (iParam1)
			{
				case joaat("MP_FAKE_DIS_000_M"):
				case joaat("MP_FAKE_DIS_000_F"):
					return !__LIB_0__.func_137(3783, -1);
					break;
				case joaat("MP_FAKE_DIS_001_M"):
				case joaat("MP_FAKE_DIS_001_F"):
					return !__LIB_0__.func_137(3784, -1);
					break;
				case joaat("MP_FAKE_DS_000_M"):
				case joaat("MP_FAKE_DS_000_F"):
					return !__LIB_0__.func_137(3785, -1);
					break;
				case joaat("MP_FAKE_ENEMA_000_M"):
				case joaat("MP_FAKE_ENEMA_000_F"):
					return !__LIB_0__.func_137(3786, -1);
					break;
				case joaat("MP_FAKE_LB_000_M"):
				case joaat("MP_FAKE_LB_000_F"):
					return !__LIB_0__.func_137(3787, -1);
					break;
				case joaat("MP_FAKE_LC_000_M"):
				case joaat("MP_FAKE_LC_000_F"):
					return !__LIB_0__.func_137(3788, -1);
					break;
				case joaat("MP_FAKE_SC_000_M"):
				case joaat("MP_FAKE_SC_000_F"):
					if (__LIB_0__.func_137(27081, -1))
					{
						return 0;
					}
					return !__LIB_0__.func_137(3789, -1);
					break;
				case joaat("MP_FAKE_Vap_000_M"):
				case joaat("MP_FAKE_Vap_000_F"):
					return !__LIB_0__.func_137(3790, -1);
					break;
				case joaat("MP_FAKE_Per_000_M"):
				case joaat("MP_FAKE_Per_000_F"):
					return !__LIB_0__.func_137(3791, -1);
					break;
				case joaat("MP_FAKE_SN_000_M"):
				case joaat("MP_FAKE_SN_000_F"):
					return !__LIB_0__.func_137(3792, -1);
					break;
				case joaat("MP_FILM_000_F"):
				case joaat("MP_FILM_000_M"):
					if (iParam1 == joaat("MP_FILM_000_F"))
					{
						iVar0 = __LIB_0__.func_534(2444, -1, 0);
						if (BitTest(iVar0, 0))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_000_M"))
					{
						iVar1 = __LIB_0__.func_534(2424, -1, 0);
						if (BitTest(iVar1, 18))
						{
							return 0;
						}
					}
					return !__LIB_0__.func_137(3793, -1);
					break;
				case joaat("MP_FILM_001_F"):
				case joaat("MP_FILM_001_M"):
					if (iParam1 == joaat("MP_FILM_001_F"))
					{
						iVar2 = __LIB_0__.func_534(2444, -1, 0);
						if (BitTest(iVar2, 1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_001_M"))
					{
						iVar3 = __LIB_0__.func_534(2424, -1, 0);
						if (BitTest(iVar3, 19))
						{
							return 0;
						}
					}
					return !__LIB_0__.func_137(3794, -1);
					break;
				case joaat("MP_FILM_002_F"):
				case joaat("MP_FILM_002_M"):
					if (iParam1 == joaat("MP_FILM_002_F"))
					{
						iVar4 = __LIB_0__.func_534(2444, -1, 0);
						if (BitTest(iVar4, 2))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_002_M"))
					{
						iVar5 = __LIB_0__.func_534(2424, -1, 0);
						if (BitTest(iVar5, 20))
						{
							return 0;
						}
					}
					return !__LIB_0__.func_137(3795, -1);
					break;
				case joaat("MP_FILM_003_F"):
				case joaat("MP_FILM_003_M"):
					if (iParam1 == joaat("MP_FILM_003_F"))
					{
						iVar6 = __LIB_0__.func_534(2444, -1, 0);
						if (BitTest(iVar6, 3))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_003_M"))
					{
						iVar7 = __LIB_0__.func_534(2424, -1, 0);
						if (BitTest(iVar7, 21))
						{
							return 0;
						}
					}
					return !__LIB_0__.func_137(3796, -1);
					break;
				case joaat("MP_FILM_004_F"):
				case joaat("MP_FILM_004_M"):
					if (iParam1 == joaat("MP_FILM_004_F"))
					{
						iVar8 = __LIB_0__.func_534(2444, -1, 0);
						if (BitTest(iVar8, 4))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_004_M"))
					{
						iVar9 = __LIB_0__.func_534(2424, -1, 0);
						if (BitTest(iVar9, 22))
						{
							return 0;
						}
					}
					return !__LIB_0__.func_137(3797, -1);
					break;
				case joaat("MP_FILM_005_F"):
				case joaat("MP_FILM_005_M"):
					if (iParam1 == joaat("MP_FILM_005_F"))
					{
						iVar10 = __LIB_0__.func_534(2444, -1, 0);
						if (BitTest(iVar10, 5))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_005_M"))
					{
						iVar11 = __LIB_0__.func_534(2424, -1, 0);
						if (BitTest(iVar11, 23))
						{
							return 0;
						}
					}
					return !__LIB_0__.func_137(3798, -1);
					break;
				case joaat("MP_FILM_006_F"):
				case joaat("MP_FILM_006_M"):
					if (iParam1 == joaat("MP_FILM_006_F"))
					{
						iVar12 = __LIB_0__.func_534(2444, -1, 0);
						if (BitTest(iVar12, 6))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_006_M"))
					{
						iVar13 = __LIB_0__.func_534(2424, -1, 0);
						if (BitTest(iVar13, 24))
						{
							return 0;
						}
					}
					return !__LIB_0__.func_137(3799, -1);
					break;
				case joaat("MP_FILM_007_F"):
				case joaat("MP_FILM_007_M"):
					if (iParam1 == joaat("MP_FILM_007_F"))
					{
						iVar14 = __LIB_0__.func_534(2444, -1, 0);
						if (BitTest(iVar14, 7))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_007_M"))
					{
						iVar15 = __LIB_0__.func_534(2424, -1, 0);
						if (BitTest(iVar15, 25))
						{
							return 0;
						}
					}
					return !__LIB_0__.func_137(3800, -1);
					break;
				case joaat("MP_FILM_008_F"):
				case joaat("MP_FILM_008_M"):
					if (iParam1 == joaat("MP_FILM_008_F"))
					{
						iVar16 = __LIB_0__.func_534(2444, -1, 0);
						if (BitTest(iVar16, 8))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_008_M"))
					{
						iVar17 = __LIB_0__.func_534(2424, -1, 0);
						if (BitTest(iVar17, 26))
						{
							return 0;
						}
					}
					return !__LIB_0__.func_137(3801, -1);
					break;
				case joaat("MP_FILM_009_F"):
				case joaat("MP_FILM_009_M"):
					if (iParam1 == joaat("MP_FILM_009_F"))
					{
						iVar18 = __LIB_0__.func_534(2444, -1, 0);
						if (BitTest(iVar18, 9))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_009_M"))
					{
						iVar19 = __LIB_0__.func_534(2424, -1, 0);
						if (BitTest(iVar19, 27))
						{
							return 0;
						}
					}
					return !__LIB_0__.func_137(3802, -1);
					break;
			}
			break;
		case joaat("mpLuxe2_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Luxe_Tat_030_M"):
				case joaat("MP_Luxe_Tat_031_M"):
					return 1;
					break;
				case joaat("MP_Luxe_Tat_030_F"):
				case joaat("MP_Luxe_Tat_031_F"):
					return 1;
					break;
			}
			break;
		case joaat("multiplayer_overlays"):
			switch (iParam1)
			{
				case joaat("MP_FM_OGA_000_m"):
				case joaat("MP_FM_OGA_001_m"):
				case joaat("MP_FM_OGA_002_m"):
				case joaat("MP_FM_OGA_003_m"):
				case joaat("MP_FM_OGA_000_f"):
				case joaat("MP_FM_OGA_001_f"):
				case joaat("MP_FM_OGA_002_f"):
				case joaat("MP_FM_OGA_003_f"):
					return !__LIB_0__.func_116();
					break;
			}
			break;
	}
	return 0;
}

void func_926(int iParam0, int iParam1)//Position - 0x27464
{
	struct<12> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<7> Var4;
	int iVar5;
	int iVar6;
	struct<7> Var7;
	int iVar8;
	int iVar9;
	struct<7> Var10;
	int iVar11;
	int iVar12;
	struct<7> Var13;
	int iVar14;
	if (!PED::IS_PED_INJURED(iParam1))
	{
		iVar1 = __LIB_0__.func_250(iParam1);
		if (iParam0 != 0)
		{
			if (iVar1 == 3 || iVar1 == 4)
			{
				if (iParam0 == joaat("crewLogo"))
				{
					__LIB_25__.func_43(13, 0, Global_78127);
					__LIB_25__.func_43(14, 0, Global_78127);
					__LIB_25__.func_43(15, 0, Global_78127);
					__LIB_25__.func_43(16, 0, Global_78127);
					__LIB_25__.func_43(71, 0, Global_78127);
					__LIB_25__.func_43(72, 0, Global_78127);
					return;
				}
				else if (iParam0 == joaat("torsoDecal"))
				{
					if (iVar1 == 3)
					{
						__LIB_25__.func_43(73, 0, Global_78127);
						__LIB_25__.func_43(74, 0, Global_78127);
						__LIB_25__.func_43(75, 0, Global_78127);
						__LIB_25__.func_43(76, 0, Global_78127);
						__LIB_25__.func_43(77, 0, Global_78127);
						__LIB_25__.func_43(78, 0, Global_78127);
						__LIB_25__.func_43(79, 0, Global_78127);
						__LIB_25__.func_43(80, 0, Global_78127);
						__LIB_25__.func_43(81, 0, Global_78127);
						__LIB_25__.func_43(82, 0, Global_78127);
						__LIB_25__.func_43(83, 0, Global_78127);
						__LIB_25__.func_43(84, 0, Global_78127);
						__LIB_25__.func_43(85, 0, Global_78127);
						__LIB_25__.func_43(86, 0, Global_78127);
						__LIB_25__.func_43(90, 0, Global_78127);
						__LIB_25__.func_43(91, 0, Global_78127);
						__LIB_25__.func_43(124, 0, Global_78127);
						__LIB_25__.func_43(125, 0, Global_78127);
						__LIB_25__.func_43(87, 0, Global_78127);
						__LIB_25__.func_43(88, 0, Global_78127);
						__LIB_25__.func_43(89, 0, Global_78127);
						iVar3 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(3);
						iVar2 = 0;
						while (iVar2 < iVar3)
						{
							if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(3, iVar2, &Var4))
							{
								if (Var4.f_6 == joaat("torsoDecal"))
								{
									__LIB_25__.func_43((129 + iVar2), 0, Global_78127);
								}
							}
							iVar2++;
						}
					}
					else
					{
						__LIB_25__.func_43(73, 0, Global_78127);
						__LIB_25__.func_43(74, 0, Global_78127);
						__LIB_25__.func_43(75, 0, Global_78127);
						__LIB_25__.func_43(76, 0, Global_78127);
						__LIB_25__.func_43(77, 0, Global_78127);
						__LIB_25__.func_43(78, 0, Global_78127);
						__LIB_25__.func_43(79, 0, Global_78127);
						__LIB_25__.func_43(80, 0, Global_78127);
						__LIB_25__.func_43(81, 0, Global_78127);
						__LIB_25__.func_43(82, 0, Global_78127);
						__LIB_25__.func_43(83, 0, Global_78127);
						__LIB_25__.func_43(84, 0, Global_78127);
						__LIB_25__.func_43(85, 0, Global_78127);
						__LIB_25__.func_43(92, 0, Global_78127);
						__LIB_25__.func_43(87, 0, Global_78127);
						__LIB_25__.func_43(88, 0, Global_78127);
						__LIB_25__.func_43(89, 0, Global_78127);
						iVar6 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(4);
						iVar5 = 0;
						while (iVar5 < iVar6)
						{
							if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(4, iVar5, &Var7))
							{
								if (Var7.f_6 == joaat("torsoDecal"))
								{
									__LIB_25__.func_43((129 + iVar5), 0, Global_78127);
								}
							}
							iVar5++;
						}
					}
				}
				else if (iParam0 == joaat("hairOverlay"))
				{
					if (iVar1 == 3)
					{
						__LIB_25__.func_43(93, 0, Global_78127);
						__LIB_25__.func_43(94, 0, Global_78127);
						__LIB_25__.func_43(95, 0, Global_78127);
						__LIB_25__.func_43(96, 0, Global_78127);
						__LIB_25__.func_43(97, 0, Global_78127);
						__LIB_25__.func_43(98, 0, Global_78127);
						__LIB_25__.func_43(99, 0, Global_78127);
						__LIB_25__.func_43(100, 0, Global_78127);
						__LIB_25__.func_43(101, 0, Global_78127);
						__LIB_25__.func_43(102, 0, Global_78127);
						__LIB_25__.func_43(103, 0, Global_78127);
						__LIB_25__.func_43(104, 0, Global_78127);
						__LIB_25__.func_43(105, 0, Global_78127);
						__LIB_25__.func_43(106, 0, Global_78127);
						__LIB_25__.func_43(107, 0, Global_78127);
						__LIB_25__.func_43(108, 0, Global_78127);
						__LIB_25__.func_43(109, 0, Global_78127);
						__LIB_25__.func_43(110, 0, Global_78127);
						__LIB_25__.func_43(111, 0, Global_78127);
						__LIB_25__.func_43(112, 0, Global_78127);
						__LIB_25__.func_43(113, 0, Global_78127);
						__LIB_25__.func_43(114, 0, Global_78127);
						__LIB_25__.func_43(115, 0, Global_78127);
						__LIB_25__.func_43(116, 0, Global_78127);
						__LIB_25__.func_43(117, 0, Global_78127);
						__LIB_25__.func_43(123, 0, Global_78127);
						iVar9 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(3);
						iVar8 = 0;
						while (iVar8 < iVar9)
						{
							if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(3, iVar8, &Var10))
							{
								if (Var10.f_6 == joaat("hairOverlay"))
								{
									__LIB_25__.func_43((129 + iVar8), 0, Global_78127);
								}
							}
							iVar8++;
						}
					}
					else
					{
						__LIB_25__.func_43(93, 0, Global_78127);
						__LIB_25__.func_43(94, 0, Global_78127);
						__LIB_25__.func_43(95, 0, Global_78127);
						__LIB_25__.func_43(96, 0, Global_78127);
						__LIB_25__.func_43(97, 0, Global_78127);
						__LIB_25__.func_43(98, 0, Global_78127);
						__LIB_25__.func_43(99, 0, Global_78127);
						__LIB_25__.func_43(100, 0, Global_78127);
						__LIB_25__.func_43(101, 0, Global_78127);
						__LIB_25__.func_43(102, 0, Global_78127);
						__LIB_25__.func_43(103, 0, Global_78127);
						__LIB_25__.func_43(104, 0, Global_78127);
						__LIB_25__.func_43(105, 0, Global_78127);
						__LIB_25__.func_43(106, 0, Global_78127);
						__LIB_25__.func_43(107, 0, Global_78127);
						__LIB_25__.func_43(108, 0, Global_78127);
						__LIB_25__.func_43(109, 0, Global_78127);
						__LIB_25__.func_43(110, 0, Global_78127);
						__LIB_25__.func_43(111, 0, Global_78127);
						__LIB_25__.func_43(112, 0, Global_78127);
						__LIB_25__.func_43(113, 0, Global_78127);
						__LIB_25__.func_43(114, 0, Global_78127);
						__LIB_25__.func_43(115, 0, Global_78127);
						__LIB_25__.func_43(116, 0, Global_78127);
						__LIB_25__.func_43(117, 0, Global_78127);
						__LIB_25__.func_43(118, 0, Global_78127);
						__LIB_25__.func_43(119, 0, Global_78127);
						__LIB_25__.func_43(120, 0, Global_78127);
						__LIB_25__.func_43(121, 0, Global_78127);
						__LIB_25__.func_43(122, 0, Global_78127);
						__LIB_25__.func_43(123, 0, Global_78127);
						iVar12 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(4);
						iVar11 = 0;
						while (iVar11 < iVar12)
						{
							if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(4, iVar11, &Var13))
							{
								if (Var13.f_6 == joaat("hairOverlay"))
								{
									__LIB_25__.func_43((129 + iVar11), 0, Global_78127);
								}
							}
							iVar11++;
						}
					}
					return;
				}
			}
			iVar14 = 0;
			while (iVar14 < 127)
			{
				if (__LIB_6__.func_785(&Var0, iVar14, iVar1, iParam1, -1))
				{
					if (Var0.f_8 == iParam0)
					{
						__LIB_25__.func_43(Var0.f_11, 0, Global_78127);
					}
				}
				iVar14++;
			}
		}
	}
}

int func_927(int iParam0, int iParam1)//Position - 0x27A61
{
	int iVar0;
	iVar0 = __LIB_18__.func_468();
	if (iVar0 != -1)
	{
		if (!__LIB_25__.func_42(iParam0, iParam1, iVar0))
		{
			__LIB_25__.func_43(iVar0, 0, Global_78127);
			return 1;
		}
	}
	return 0;
}

void func_928(int iParam0, var uParam1, int iParam2)//Position - 0x5078E
{
	struct<8> Var0;
	int iVar1;
	if (iParam2 == -1)
	{
		iParam2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0);
		if (iParam2 != -1)
		{
		}
	}
	if ((*uParam1)[1] > 0 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, (*uParam1)[1], uParam1->f_13[1]), joaat("SHRINK_HEAD"), 0))
	{
		PED::GET_PED_HEAD_BLEND_DATA(iParam0, &Var0);
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_M_Freemode_01"))
		{
			PED::SET_PED_HEAD_BLEND_DATA(iParam0, 0, 0, 0, Var0.f_3, Var0.f_4, Var0.f_5, 0f, Var0.f_7, 0f, false);
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_F_Freemode_01"))
		{
			PED::SET_PED_HEAD_BLEND_DATA(iParam0, 21, 0, 0, Var0.f_3, Var0.f_4, Var0.f_5, 0f, Var0.f_7, 0f, false);
		}
		iVar1 = 0;
		while (iVar1 < 20)
		{
			PED::SET_PED_MICRO_MORPH(iParam0, iVar1, 0f);
			iVar1++;
		}
	}
	else if (iParam2 != -1 && PLAYER::INT_TO_PLAYERINDEX(iParam2) != PLAYER::PLAYER_ID())
	{
		if (NETWORK::NETWORK_HAS_CACHED_PLAYER_HEAD_BLEND_DATA(PLAYER::INT_TO_PLAYERINDEX(iParam2)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
		{
			NETWORK::NETWORK_APPLY_CACHED_PLAYER_HEAD_BLEND_DATA(iParam0, PLAYER::INT_TO_PLAYERINDEX(iParam2));
		}
	}
	else
	{
		__LIB_31__.func_910(iParam0, -1);
	}
}

int func_929(int iParam0)//Position - 0x8FE9
{
	int iVar0;
	iVar0 = __LIB_18__.func_330(iParam0);
	if (iVar0 == -1)
	{
		__LIB_25__.func_59(iParam0, 1);
		return 0;
	}
	Global_1660783[iVar0 /*5*/].f_4 = 1;
	return Global_1660783[iVar0 /*5*/].f_2;
}

void func_930(var uParam0, bool bParam1)//Position - 0x539
{
	struct<39> Var0;
	bool bVar1;
	int iVar2;
	Var0.f_0 = -877773232;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { *uParam0 };
	Var0.f_34 = uParam0->f_34;
	Var0.f_37 = bParam1;
	Var0.f_35 = uParam0->f_35;
	Var0.f_36 = uParam0->f_36;
	Var0.f_38 = uParam0->f_33;
	if (!__LIB_0__.func_649(&(uParam0->f_37)))
	{
		__LIB_0__.func_580(&(uParam0->f_37), 0, 0);
	}
	bVar1 = true;
	if (MISC::ARE_STRINGS_EQUAL(&(uParam0->f_16), &(Var0.f_2)))
	{
		if (__LIB_0__.func_649(&(uParam0->f_37)) && !__LIB_2__.func_47(&(uParam0->f_37), 1000, 0))
		{
			bVar1 = false;
		}
		else
		{
			__LIB_0__.func_579(&(uParam0->f_37));
		}
	}
	else
	{
		uParam0->f_16 = { Var0.f_2 };
		__LIB_0__.func_579(&(uParam0->f_37));
	}
	uParam0->f_32 = 0;
	if (bVar1)
	{
		iVar2 = __LIB_0__.func_679(PLAYER::PLAYER_ID());
		if (bParam1)
		{
			iVar2 = __LIB_6__.func_900(1, 1);
		}
		if (iVar2 != 0)
		{
			uParam0->f_32 = 1;
			SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 39, iVar2);
		}
	}
}

int func_931(int iParam0, int iParam1)//Position - 0x44F27
{
	int iVar0;
	iVar0 = __LIB_18__.func_395();
	if (iVar0 != -1)
	{
		if (!__LIB_25__.func_28(iParam0, iParam1, iVar0))
		{
			__LIB_18__.func_394(iVar0, 0, Global_78127);
			return 1;
		}
	}
	return 0;
}

int func_932()//Position - 0x5DF99
{
	int iVar0;
	struct<3> Var1;
	iVar0 = __LIB_5__.func_710(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9);
	switch (iVar0)
	{
		case 128:
			Var1 = { -245.64f, 6210.96f, 45.94f };
			break;
		case 129:
			Var1 = { 1695.88f, 4783.87f, 52.02f };
			break;
		case 130:
			Var1 = { -115.15f, -1771.65f, 40.86f };
			break;
		case 131:
			Var1 = { -600.96f, 280.47f, 90.04f };
			break;
		case 132:
			Var1 = { -1269.72f, -304.09f, 45f };
			break;
		case 133:
			Var1 = { 758.46f, -814.57f, 35.3f };
			break;
	}
	return __LIB_18__.func_510(5, 0f, 0f, 0f, Var1, 0f, 0f, 0f);
}

void func_933(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x5ED39
{
	if (MISC::IS_MINIGAME_IN_PROGRESS() && !bParam5)
	{
		MISC::SET_MINIGAME_IN_PROGRESS(false);
	}
	if (bParam3)
	{
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
	}
	HUD::CLEAR_HELP(true);
	if (bParam4)
	{
		__LIB_18__.func_465(PLAYER::PLAYER_ID(), 1, 0, 0);
	}
	__LIB_8__.func_770(0);
	__LIB_3__.func_692();
	__LIB_3__.func_735(uParam0, iParam1);
	if (bParam2)
	{
		__LIB_3__.func_740(uParam0);
	}
}

void func_934(int iParam0, var uParam1)//Position - 0x61644
{
	struct<3> Var0;
	int iVar1;
	if (__LIB_0__.func_154(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_428.f_4 != Global_1931416)
		{
			Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_428.f_4 = Global_1931416;
		}
	}
	Var0.f_2 = 14;
	switch (Global_1931416.f_1)
	{
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
			if ((!BitTest(uParam1->f_42, 4) && !BitTest(uParam1->f_42, 3)) && uParam1->f_523 != 8)
			{
				if (__LIB_25__.func_82(3) || __LIB_25__.func_82(4))
				{
					if (!__LIB_0__.func_649(&(uParam1->f_743)) || (__LIB_0__.func_649(&(uParam1->f_743)) && __LIB_2__.func_47(&(uParam1->f_743), 1500, 0)))
					{
						MISC::SET_BIT(&(uParam1->f_42), 4);
						__LIB_0__.func_579(&(uParam1->f_743));
					}
				}
			}
			break;
		case 2:
		case 3:
		case 4:
		case 5:
			if ((!BitTest(uParam1->f_42, 3) && !BitTest(uParam1->f_42, 4)) && uParam1->f_523 != 10)
			{
				if (__LIB_25__.func_82(3) || __LIB_25__.func_82(4))
				{
					if (!__LIB_0__.func_649(&(uParam1->f_743)) || (__LIB_0__.func_649(&(uParam1->f_743)) && __LIB_2__.func_47(&(uParam1->f_743), 1500, 0)))
					{
						MISC::SET_BIT(&(uParam1->f_42), 3);
						__LIB_0__.func_579(&(uParam1->f_743));
					}
				}
			}
			break;
	}
	switch (Global_1931416)
	{
		case 4:
		case 2:
		case 3:
			iVar1 = __LIB_3__.func_717(PLAYER::PLAYER_ID());
			if (iVar1 != -1)
			{
				__LIB_18__.func_504(10, uParam1->f_523, 0, &Var0);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(Var0.f_1))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &(Global_1973079.f_47), Var0.f_1, 3) && __LIB_25__.func_81(10, uParam1->f_523))
					{
						uParam1->f_523.f_3 = 0;
						uParam1->f_523.f_4 = 1;
						if (__LIB_0__.func_502())
						{
							__LIB_7__.func_324(&(uParam1->f_523), 3);
						}
						else
						{
							__LIB_7__.func_324(&(uParam1->f_523), 4);
						}
						if (Global_1931416 == 4)
						{
							MISC::CLEAR_BIT(&(uParam1->f_42), 4);
							MISC::CLEAR_BIT(&(uParam1->f_42), 3);
						}
					}
				}
			}
			break;
		case 0:
			break;
		case 9:
		case 7:
			if (!BitTest(uParam1->f_42, 3))
			{
				if (!__LIB_0__.func_649(&(uParam1->f_743)) || (__LIB_0__.func_649(&(uParam1->f_743)) && __LIB_2__.func_47(&(uParam1->f_743), 1500, 0)))
				{
					MISC::SET_BIT(&(uParam1->f_42), 3);
				}
			}
			break;
		case 10:
		case 8:
			if (!__LIB_0__.func_649(&(uParam1->f_743)) || (__LIB_0__.func_649(&(uParam1->f_743)) && __LIB_2__.func_47(&(uParam1->f_743), 1500, 0)))
			{
				if (!BitTest(uParam1->f_42, 4))
				{
					MISC::SET_BIT(&(uParam1->f_42), 4);
				}
			}
			break;
	}
	if (BitTest(uParam1->f_42, 4))
	{
		if (uParam1->f_523 != 8 && !__LIB_0__.func_649(&(uParam1->f_743)))
		{
			uParam1->f_523.f_3 = 0;
			uParam1->f_523.f_4 = 0;
			__LIB_18__.func_509();
			__LIB_7__.func_324(&(uParam1->f_523), 8);
			__LIB_0__.func_580(&(uParam1->f_743), 0, 0);
		}
		else if (__LIB_25__.func_82(uParam1->f_523) && __LIB_25__.func_81(10, uParam1->f_523))
		{
			uParam1->f_523.f_3 = 0;
			uParam1->f_523.f_4 = 1;
			if (__LIB_0__.func_502())
			{
				__LIB_7__.func_324(&(uParam1->f_523), 3);
			}
			else
			{
				__LIB_7__.func_324(&(uParam1->f_523), 4);
			}
			if (Global_1931416 == 4)
			{
				MISC::CLEAR_BIT(&(uParam1->f_42), 4);
			}
		}
	}
	else if (BitTest(uParam1->f_42, 3))
	{
		if (uParam1->f_523 != 10 && !__LIB_0__.func_649(&(uParam1->f_743)))
		{
			uParam1->f_523.f_3 = 0;
			uParam1->f_523.f_4 = 0;
			__LIB_18__.func_509();
			__LIB_7__.func_324(&(uParam1->f_523), 10);
			__LIB_0__.func_580(&(uParam1->f_743), 0, 0);
		}
		else if (__LIB_25__.func_82(uParam1->f_523) && __LIB_25__.func_81(10, uParam1->f_523))
		{
			uParam1->f_523.f_3 = 0;
			uParam1->f_523.f_4 = 1;
			if (__LIB_0__.func_502())
			{
				__LIB_7__.func_324(&(uParam1->f_523), 3);
			}
			else
			{
				__LIB_7__.func_324(&(uParam1->f_523), 4);
			}
			if (Global_1931416 == 4)
			{
				MISC::CLEAR_BIT(&(uParam1->f_42), 3);
			}
		}
	}
}

void func_935(int iParam0, var uParam1)//Position - 0x61AEE
{
	int iVar0;
	struct<3> Var1;
	Var1.f_2 = 14;
	switch (Global_1931414)
	{
		case 3:
		case 5:
		case 2:
			iVar0 = __LIB_3__.func_717(PLAYER::PLAYER_ID());
			if (iVar0 != -1)
			{
				__LIB_18__.func_504(10, 1, 0, &Var1);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(Var1.f_1))
				{
					if (((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &(Global_1973079.f_47), Var1.f_1, 3) && __LIB_25__.func_81(9, 1)) && uParam1->f_523 != 3) && uParam1->f_523 != 4)
					{
						uParam1->f_523.f_3 = 0;
						uParam1->f_523.f_4 = 1;
						if (__LIB_0__.func_502())
						{
							__LIB_7__.func_324(&(uParam1->f_523), 3);
						}
						else
						{
							__LIB_7__.func_324(&(uParam1->f_523), 4);
						}
					}
				}
			}
			break;
		case 0:
			break;
		case 4:
			if (uParam1->f_523 != 7 && uParam1->f_523 != 8)
			{
				uParam1->f_523.f_3 = 0;
				uParam1->f_523.f_4 = 0;
				if (__LIB_0__.func_502())
				{
					__LIB_7__.func_324(&(uParam1->f_523), 7);
				}
				else
				{
					__LIB_7__.func_324(&(uParam1->f_523), 8);
				}
			}
			break;
		case 6:
			if (uParam1->f_523 != 9 && uParam1->f_523 != 10)
			{
				uParam1->f_523.f_3 = 0;
				uParam1->f_523.f_4 = 0;
				if (__LIB_0__.func_502())
				{
					__LIB_7__.func_324(&(uParam1->f_523), 9);
				}
				else
				{
					__LIB_7__.func_324(&(uParam1->f_523), 10);
				}
			}
			break;
	}
}

int func_936(int iParam0)//Position - 0x5BAB8
{
	struct<21> Var0;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_9 = -1;
	Var0.f_16 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_16 = ((NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT() * __LIB_3__.func_763(16)) + iParam0);
	Var0.f_0 = 208;
	if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE("camhedz_arcade", Var0.f_16, true, 0))
	{
		if (__LIB_25__.func_80(Var0, 0))
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

void func_937(var uParam0, var uParam1)//Position - 0xC5353
{
	__LIB_2__.func_846();
	__LIB_25__.func_88(uParam0, 1);
}

void func_938(int iParam0)//Position - 0x202B4C
{
	int iVar0;
	float fVar1;
	int iVar2;
	iVar0 = PLAYER::PLAYER_ID();
	if (Global_2689235[iVar0 /*453*/].f_269.f_14 != -1)
	{
		if (__LIB_2__.func_57(Global_2689235[iVar0 /*453*/].f_269.f_14))
		{
			if (!__LIB_25__.func_47(PLAYER::PLAYER_ID(), Global_2689235[iVar0 /*453*/].f_269.f_14, 0, 0))
			{
				Global_2689235[iVar0 /*453*/].f_269.f_14 = -1;
			}
		}
		else
		{
			Global_2689235[iVar0 /*453*/].f_269.f_14 = -1;
		}
	}
	if (Global_2689235[iVar0 /*453*/].f_269.f_16 != -1)
	{
		if (__LIB_2__.func_57(Global_2689235[iVar0 /*453*/].f_269.f_16))
		{
			if (!__LIB_25__.func_47(PLAYER::PLAYER_ID(), Global_2689235[iVar0 /*453*/].f_269.f_16, 0, 1))
			{
				Global_2689235[iVar0 /*453*/].f_269.f_16 = -1;
			}
		}
		else
		{
			Global_2689235[iVar0 /*453*/].f_269.f_16 = -1;
		}
	}
	if (Global_2689235[iVar0 /*453*/].f_269.f_15 != -1)
	{
		if (!__LIB_25__.func_47(PLAYER::PLAYER_ID(), Global_2689235[iVar0 /*453*/].f_269.f_15, 0, 0))
		{
			Global_2689235[iVar0 /*453*/].f_269.f_15 = -1;
		}
	}
	if (__LIB_2__.func_57(iParam0))
	{
		if (__LIB_25__.func_47(PLAYER::PLAYER_ID(), iParam0, 0, 0))
		{
			if (!Global_2689235[iVar0 /*453*/].f_269.f_14 == iParam0)
			{
				Global_2689235[iVar0 /*453*/].f_269.f_14 = iParam0;
			}
		}
		if (__LIB_25__.func_47(PLAYER::PLAYER_ID(), iParam0, 0, 1))
		{
			if (!Global_2689235[iVar0 /*453*/].f_269.f_16 == iParam0)
			{
				Global_2689235[iVar0 /*453*/].f_269.f_16 = iParam0;
			}
		}
		iVar2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 32f));
		if (__LIB_8__.func_704(PLAYER::PLAYER_ID(), iParam0, 1120403456))
		{
			MISC::SET_BIT(&(Global_2689235[iVar0 /*453*/].f_269.f_17[iVar2]), (iParam0 - iVar2 * 32));
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_2689235[iVar0 /*453*/].f_269.f_17[iVar2]), (iParam0 - iVar2 * 32));
		}
		fVar1 = SYSTEM::VDIST(__LIB_1__.func_328(iParam0), __LIB_1__.func_265(PLAYER::PLAYER_ID()));
		if (iParam0 == Global_2689235[iVar0 /*453*/].f_269.f_20)
		{
			Global_2667225.f_2875 = fVar1;
		}
		else if (fVar1 < Global_2667225.f_2875 || Global_2667225.f_2875 <= 0f)
		{
			Global_2667225.f_2875 = fVar1;
			Global_2689235[iVar0 /*453*/].f_269.f_20 = iParam0;
		}
	}
	else if (iParam0 == Global_2689235[iVar0 /*453*/].f_269.f_20)
	{
		Global_2689235[iVar0 /*453*/].f_269.f_20 = -1;
		Global_2667225.f_2875 = -1f;
	}
	if (__LIB_25__.func_47(PLAYER::PLAYER_ID(), iParam0, 0, 0))
	{
		if (!Global_2689235[iVar0 /*453*/].f_269.f_15 == iParam0)
		{
			Global_2689235[iVar0 /*453*/].f_269.f_15 = iParam0;
		}
	}
}

int func_939(struct<3> Param0, float fParam1, bool bParam2, int iParam3, int iParam4)//Position - 0x20907C
{
	if (__LIB_4__.func_678(Param0, fParam1, bParam2, iParam3, 0) || __LIB_25__.func_51(Param0, bParam2, iParam4))
	{
		return 1;
	}
	return 0;
}

void func_940(struct<3> Param0, int iParam1)//Position - 0x20BE5C
{
	int iVar0;
	int iVar1;
	int iVar2[3];
	int iVar3[3];
	if (Global_2667225.f_45.f_319)
	{
		return;
	}
	if (!__LIB_0__.func_635())
	{
		if (iParam1 == 0)
		{
		}
		iVar1 = __LIB_1__.func_121(Param0);
		if (iVar1 > -1)
		{
			__LIB_0__.func_599();
			switch (iVar1)
			{
				case 0:
					__LIB_0__.func_634(-1139.6785f, -2694.1648f, 12.949f, 283.4298f);
					__LIB_0__.func_634(-1137.4546f, -2690.167f, 12.9448f, 283.0835f);
					__LIB_0__.func_634(-1135.02f, -2685.912f, 12.9412f, 283.8219f);
					__LIB_0__.func_634(-1099.8976f, -2688.6108f, 12.9473f, 295.3925f);
					__LIB_0__.func_634(-1110.5096f, -2693.2358f, 12.9595f, 298.84f);
					__LIB_0__.func_634(-1081.8075f, -2690.0146f, 12.7567f, 219.1729f);
					__LIB_0__.func_634(-1075.5862f, -2697.0898f, 12.7567f, 224.8977f);
					__LIB_0__.func_634(-1095.1333f, -2659.9954f, 12.7567f, 190.9326f);
					__LIB_0__.func_634(-1096.5112f, -2649.4827f, 12.6066f, 182.7913f);
					break;
				case 1:
					__LIB_0__.func_634(-1411.7308f, -533.6462f, 30.2703f, 215.116f);
					__LIB_0__.func_634(-1416.4075f, -527.0309f, 30.6453f, 215.2683f);
					__LIB_0__.func_634(-1432.1458f, -580.9922f, 29.5263f, 118.3858f);
					__LIB_0__.func_634(-1438.8004f, -584.4678f, 29.595f, 118.1207f);
					break;
				case 2:
					__LIB_0__.func_634(-780.5905f, 292.8159f, 84.673f, 97.2697f);
					__LIB_0__.func_634(-788.6147f, 291.8073f, 84.72f, 97.7348f);
					__LIB_0__.func_634(-765.572f, 294.4459f, 84.5182f, 93.9327f);
					__LIB_0__.func_634(-756.9962f, 294.8176f, 84.4061f, 93.9545f);
					break;
				case 3:
					__LIB_0__.func_634(-647.9388f, 40.9257f, 38.9494f, 356.4108f);
					__LIB_0__.func_634(-647.239f, 49.2068f, 40.7135f, 355.9723f);
					__LIB_0__.func_634(-620.1517f, 3.6633f, 40.5904f, 98.3813f);
					__LIB_0__.func_634(-610.5603f, 5.1258f, 41.2404f, 98.696f);
					break;
				case 4:
					__LIB_0__.func_634(-943.2437f, -487.8443f, 35.7504f, 208.6441f);
					__LIB_0__.func_634(-949.2938f, -476.3759f, 36.0878f, 208.1432f);
					__LIB_0__.func_634(-955.3208f, -465.3984f, 36.3328f, 206.9198f);
					__LIB_0__.func_634(-959.5925f, -457.0372f, 36.5226f, 207.7534f);
					break;
				case 5:
					__LIB_0__.func_634(-966.1365f, -401.5364f, 36.6824f, 27.6587f);
					__LIB_0__.func_634(-934.9108f, -413.4091f, 36.5161f, 118.0149f);
					__LIB_0__.func_634(-920.2501f, -405.6656f, 36.5869f, 117.2407f);
					__LIB_0__.func_634(-971.7031f, -390.5213f, 36.7118f, 26.8016f);
					break;
				case 6:
					__LIB_0__.func_634(-58.1347f, -573.486f, 36.5789f, 341.8442f);
					__LIB_0__.func_634(-64.227f, -590.2214f, 35.1654f, 338.972f);
					__LIB_0__.func_634(-67.0332f, -599.2827f, 35.1787f, 341.5854f);
					__LIB_0__.func_634(-71.8651f, -612.8891f, 35.1574f, 339.8537f);
					break;
				case 7:
					__LIB_0__.func_634(-232.1917f, -978.1431f, 28.166f, 160.2115f);
					__LIB_0__.func_634(-229.6225f, -970.9731f, 28.1636f, 160.2397f);
					__LIB_0__.func_634(-251.993f, -998.3963f, 28.3747f, 249.3297f);
					__LIB_0__.func_634(-262.222f, -994.5226f, 29.23f, 249.4673f);
					break;
				case 8:
					__LIB_0__.func_634(151.624f, -1309.343f, 28.2023f, 243.201f);
					__LIB_0__.func_634(152.7886f, -1305.608f, 28.2023f, 243.9973f);
					__LIB_0__.func_634(145.8017f, -1287.1896f, 28.312f, 120.6275f);
					__LIB_0__.func_634(142.8935f, -1282.2864f, 28.3156f, 120.3024f);
					break;
				case 9:
					__LIB_0__.func_634(-2333.5747f, 272.6518f, 168.4671f, 23.0287f);
					__LIB_0__.func_634(-2322.187f, 277.638f, 168.4671f, 23.4249f);
					__LIB_0__.func_634(-2316.2224f, 279.9105f, 168.4671f, 23.0175f);
					__LIB_0__.func_634(-2314.3955f, 290.9f, 168.4671f, 114.3983f);
					__LIB_0__.func_634(-2316.8096f, 296.424f, 168.4671f, 113.6228f);
					__LIB_0__.func_634(-2318.572f, 299.2423f, 168.4671f, 293.83f);
					__LIB_0__.func_634(-2327.902f, 291.6653f, 168.4671f, 294.1158f);
					__LIB_0__.func_634(-2330.711f, 274.0757f, 168.4671f, 205.2184f);
					__LIB_0__.func_634(-2345.0815f, 277.3852f, 168.4671f, 113.4219f);
					__LIB_0__.func_634(-2347.7766f, 282.6038f, 168.4671f, 292.7772f);
					__LIB_0__.func_634(-2339.33f, 293.4399f, 168.4671f, 114.2739f);
					__LIB_0__.func_634(-2352.6807f, 294.4205f, 168.4671f, 115.5597f);
					break;
				case 10:
					__LIB_6__.func_923(78);
					break;
				case 11:
					__LIB_6__.func_923(79);
					break;
				case 12:
					__LIB_6__.func_923(82);
					break;
				case 13:
					__LIB_6__.func_923(81);
					break;
				case 14:
					__LIB_6__.func_923(73);
					break;
				case 15:
					__LIB_0__.func_634(382.9244f, 443.8122f, 142.9934f, 78.3408f);
					__LIB_0__.func_634(391.2023f, 442.4812f, 142.5089f, 82.2125f);
					__LIB_0__.func_634(400.1477f, 441.0816f, 142.0776f, 83.4259f);
					__LIB_0__.func_634(414.2964f, 439.2628f, 141.5056f, 80.8689f);
					break;
				case 16:
					__LIB_6__.func_923(75);
					break;
				case 17:
					__LIB_6__.func_923(76);
					break;
				case 18:
					__LIB_6__.func_923(77);
					break;
				case 19:
					__LIB_0__.func_634(-921.9734f, 704.0754f, 150.8142f, 96.5139f);
					__LIB_0__.func_634(-904.7881f, 708.9782f, 149.8261f, 108.2109f);
					__LIB_0__.func_634(-931.6637f, 703.693f, 151.369f, 87.7447f);
					__LIB_0__.func_634(-943.8763f, 704.2332f, 152.0993f, 87.6764f);
					break;
				case 20:
					__LIB_6__.func_923(80);
					break;
				case 21:
				case 25:
					__LIB_6__.func_923(87);
					break;
				case 22:
				case 26:
					__LIB_6__.func_923(88);
					break;
				case 23:
				case 27:
					__LIB_6__.func_923(89);
					break;
				case 24:
				case 28:
					__LIB_6__.func_923(90);
					break;
				case 29:
				case 30:
					if (__LIB_0__.func_632(iParam1))
					{
						__LIB_6__.func_923(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32);
					}
					break;
				case 31:
					__LIB_0__.func_634(-352.53f, -1836.742f, 21.924f, 274.8f);
					__LIB_0__.func_634(-336.412f, -1837.341f, 22.497f, 264.6f);
					__LIB_0__.func_634(-320.707f, -1840.342f, 23.195f, 257.4f);
					__LIB_0__.func_634(-304.646f, -1843.295f, 24.219f, 261.599f);
					__LIB_0__.func_634(-288.991f, -1844.123f, 25.228f, 269.599f);
					__LIB_0__.func_634(-273.031f, -1842.69f, 26.27f, 278.199f);
					__LIB_0__.func_634(-361.271f, -1814.526f, 21.63f, 96.399f);
					__LIB_0__.func_634(-343.939f, -1813.331f, 22.368f, 87.999f);
					__LIB_0__.func_634(-326.881f, -1814.914f, 23.106f, 78.799f);
					__LIB_0__.func_634(-310.941f, -1818.223f, 23.957f, 78.799f);
					__LIB_0__.func_634(-294.16f, -1820.207f, 25.092f, 89.199f);
					__LIB_0__.func_634(-277.392f, -1819.237f, 26.283f, 100.199f);
					__LIB_0__.func_634(-257.213f, -1838.977f, 27.318f, 285.799f);
					__LIB_0__.func_634(-261.286f, -1815.615f, 27.439f, 110.399f);
					__LIB_0__.func_634(-246.086f, -1808.691f, 28.576f, 117.398f);
					__LIB_0__.func_634(-231.901f, -1800.767f, 28.619f, 119.398f);
					__LIB_0__.func_634(-199.77f, -1989.34f, 26.62f, 180.997f);
					__LIB_0__.func_634(-201.159f, -1971.41f, 26.62f, 190.798f);
					__LIB_0__.func_634(-205.571f, -1954.537f, 26.62f, 199.998f);
					__LIB_0__.func_634(-197.879f, -1940.822f, 26.62f, 114.998f);
					__LIB_0__.func_634(-141.311f, -1967.41f, 21.805f, 91.997f);
					__LIB_0__.func_634(-141.145f, -1977.861f, 21.813f, 91.997f);
					__LIB_0__.func_634(-140.565f, -1988.289f, 21.815f, 91.997f);
					__LIB_0__.func_634(-145.045f, -2032.168f, 21.956f, 73.597f);
					__LIB_0__.func_634(-147.923f, -2041.781f, 21.956f, 73.597f);
					__LIB_0__.func_634(-185.791f, -1948.005f, 26.62f, 18.596f);
					__LIB_0__.func_634(-181.155f, -1965.422f, 26.62f, 8.196f);
					__LIB_0__.func_634(-179.172f, -1984.332f, 26.62f, 1.396f);
					__LIB_0__.func_634(-225.88f, -1824.637f, 28.897f, 299.596f);
					__LIB_0__.func_634(-211.722f, -1816.401f, 28.859f, 300.796f);
					__LIB_0__.func_634(-217.99f, -1792.624f, 28.649f, 119.196f);
					__LIB_0__.func_634(-203.828f, -1784.264f, 28.678f, 119.996f);
					__LIB_0__.func_634(-194.254f, -2018.756f, 26.62f, 75f);
					__LIB_0__.func_634(-186.956f, -2031.369f, 26.62f, 338f);
					__LIB_0__.func_634(-194.916f, -2047.94f, 26.62f, 329.8f);
					__LIB_0__.func_634(-205.565f, -2064.553f, 26.62f, 320.2f);
					__LIB_0__.func_634(-218.606f, -2077.97f, 26.62f, 311.2f);
					__LIB_0__.func_634(-233.372f, -2089.601f, 26.62f, 304f);
					__LIB_0__.func_634(-207.822f, -2002.11f, 26.62f, 173.799f);
					__LIB_0__.func_634(-207.567f, -2027.579f, 26.62f, 158.599f);
					__LIB_0__.func_634(-215.235f, -2042.272f, 26.62f, 148.999f);
					__LIB_0__.func_634(-227.643f, -2058.498f, 26.62f, 138.799f);
					__LIB_0__.func_634(-242.977f, -2071.452f, 26.62f, 125.798f);
					__LIB_0__.func_634(-256.624f, -2087.982f, 26.62f, 204.198f);
					__LIB_0__.func_634(-249.549f, -2098.767f, 26.62f, 294.198f);
					__LIB_0__.func_634(-228.998f, -2048.889f, 26.62f, 141.198f);
					__LIB_0__.func_634(-176.963f, -2009.239f, 24.519f, 261.597f);
					__LIB_0__.func_634(-195.128f, -1806.447f, 28.814f, 299.997f);
					__LIB_0__.func_634(-180.02f, -1797.414f, 28.797f, 299.997f);
					__LIB_0__.func_634(-165.796f, -1787.672f, 28.788f, 304.597f);
					__LIB_0__.func_634(-188.124f, -1774.765f, 28.711f, 123.197f);
					__LIB_0__.func_634(-417.428f, -1836.374f, 19.238f, 121.797f);
					__LIB_0__.func_634(-430.967f, -1844.844f, 18.468f, 121.797f);
					__LIB_0__.func_634(-444.94f, -1853.739f, 17.786f, 121.797f);
					break;
			}
		}
		else if (__LIB_18__.func_844(Param0, &iVar2, &iVar3) || (__LIB_25__.func_266(Param0, &(iVar2[0])) && (VEHICLE::IS_THIS_MODEL_A_PLANE(iParam1) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam1))))
		{
			__LIB_0__.func_599();
			iVar0 = 0;
			while (iVar0 < iVar2)
			{
				if (iVar2[iVar0] > 1000)
				{
					iVar2[iVar0] = (iVar2[iVar0] - 1000);
					iVar3[iVar0] = 1;
				}
				if (iVar2[iVar0] >= 83 && iVar2[iVar0] <= 87)
				{
					Global_2667225.f_516 = 1;
				}
				if (!iVar3[iVar0] && __LIB_0__.func_630(iVar2[iVar0], -1))
				{
					if (__LIB_0__.func_632(iParam1))
					{
						__LIB_6__.func_923(iVar2[iVar0]);
					}
				}
				else if (iVar3[iVar0])
				{
					if (((__LIB_0__.func_629(PLAYER::PLAYER_PED_ID()) || __LIB_0__.func_628(PLAYER::PLAYER_PED_ID())) && VEHICLE::IS_THIS_MODEL_A_PLANE(iParam1)) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam1))
					{
						if (__LIB_0__.func_627(iParam1))
						{
							__LIB_6__.func_914(iVar2[iVar0]);
						}
						else if (__LIB_0__.func_626(iParam1))
						{
							__LIB_6__.func_913(iVar2[iVar0]);
							__LIB_6__.func_914(iVar2[iVar0]);
						}
						else
						{
							__LIB_6__.func_913(iVar2[iVar0]);
							__LIB_6__.func_914(iVar2[iVar0]);
						}
					}
					else
					{
						__LIB_24__.func_993(iVar2[iVar0], iParam1);
					}
				}
				else
				{
					__LIB_6__.func_923(iVar2[iVar0]);
				}
				iVar0++;
			}
		}
	}
}

int func_941(int iParam0, var uParam1)//Position - 0x674F
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	if (__LIB_18__.func_483())
	{
		return 1;
	}
	if (__LIB_2__.func_413(&(Global_1946250.f_3638), 0) || __LIB_2__.func_413(&(Global_1946250.f_3638), 1))
	{
		if (!BitTest(uParam1->f_188, 0))
		{
			__LIB_7__.func_364(&(uParam1->f_109), 1);
			if (__LIB_0__.func_121(uParam1->f_109))
			{
				if ((uParam1->f_189[1 /*3*/].f_2 - uParam1->f_189[0 /*3*/].f_2) > 4.9f)
				{
					MISC::SET_BIT(&(uParam1->f_188), 7);
				}
				Var0 = { __LIB_2__.func_411(iParam0) };
				fVar1 = __LIB_2__.func_410(iParam0);
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_109, Var0, false, false, true);
				ENTITY::SET_ENTITY_HEADING(uParam1->f_109, fVar1);
				fVar2 = 5f;
				if (iParam0 == 156 && VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(uParam1->f_109)))
				{
					fVar2 = 2f;
				}
				ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_109, false);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam1->f_109, fVar2);
				ENTITY::SET_ENTITY_COLLISION(uParam1->f_109, true, false);
				ENTITY::SET_ENTITY_VISIBLE(uParam1->f_109, true, false);
				VEHICLE::SET_VEHICLE_ENGINE_ON(uParam1->f_109, true, true, false);
				STREAMING::SET_FOCUS_POS_AND_VEL(Var0, 0f, 0f, 0f);
				uParam1->f_183[1] = (uParam1->f_189[1 /*3*/].f_1 - uParam1->f_189[0 /*3*/].f_1);
				uParam1->f_189[1 /*3*/] = 0f;
				uParam1->f_189[1 /*3*/].f_2 = 0f;
				uParam1->f_41 = 1;
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Garage_Door_Open", "GTAO_Script_Doors_Faded_Screen_Sounds", true);
				MISC::SET_BIT(&(uParam1->f_188), 0);
			}
		}
		__LIB_25__.func_102(iParam0, uParam1);
	}
	if ((((Global_1946250.f_3638.f_386 && Global_1946250.f_3638.f_372 > 0) && Global_1946250.f_3638.f_382 == (Global_1946250.f_3638.f_372 - 1)) && (Global_1946250.f_3638.f_18[Global_1946250.f_3638.f_382 /*36*/] - Global_1946250.f_3638.f_375) <= 400) || !Global_1946250.f_3638.f_386)
	{
		if ((MISC::GET_FRAME_COUNT() % 60) == 0)
		{
		}
		return 1;
	}
	return 0;
}

int func_942(int* iParam0, struct<3> Param1, struct<3> Param2, var uParam3, struct<3> Param4, struct<3> Param5, var uParam6, bool bParam7, struct<3> Param8, struct<3> Param9, var uParam10, struct<3> Param11, struct<3> Param12, var uParam13, bool bParam14, int iParam15, int iParam16)//Position - 0x77CD
{
	int iVar0;
	int iVar1;
	iVar0 = 5000;
	iVar1 = 3500;
	if (bParam14)
	{
		iVar1 = 2350;
	}
	if (bParam7)
	{
		iVar0 = 3750;
	}
	__LIB_25__.func_103(iParam0, iVar0, "zoom_sustain", Param1, Param2, uParam3, Param4, Param5, uParam6, iParam15, 0, 0, 0, 0, 0);
	if (!bParam7)
	{
		__LIB_25__.func_103(iParam0, iVar1, "above", Param8, Param9, uParam10, Param11, Param12, uParam13, iParam16, 0, 1000, 0, 0, 0);
	}
	return 1;
}

int func_943(int iParam0)//Position - 0x32688
{
	int iVar0;
	iVar0 = PLAYER::PLAYER_ID();
	if (__LIB_4__.func_973(0) && __LIB_0__.func_582() != __LIB_0__.func_160())
	{
		iVar0 = __LIB_0__.func_582();
	}
	if (!__LIB_4__.func_113(iVar0))
	{
		return 0;
	}
	if (SYSTEM::VDIST(__LIB_1__.func_265(PLAYER::PLAYER_ID()), __LIB_2__.func_429(iParam0)) <= 200f || (__LIB_7__.func_700(iParam0) && __LIB_8__.func_155(iParam0)))
	{
		if (__LIB_8__.func_108(PLAYER::PLAYER_ID(), 1))
		{
			return 0;
		}
		if (__LIB_2__.func_431() == iParam0)
		{
			return 0;
		}
		if (__LIB_7__.func_700(iParam0))
		{
			return 1;
		}
		return __LIB_18__.func_791(iParam0);
	}
	return 0;
}

void func_944(bool bParam0, int iParam1, var uParam2)//Position - 0x47BFB
{
	if (__LIB_0__.func_811(PLAYER::PLAYER_PED_ID()))
	{
		if (__LIB_1__.func_188(iParam1))
		{
			__LIB_7__.func_381("PPA_JUGG1" /* GXT: You can't access this Office whilst wearing the Ballistic Equipment. */, iParam1, 1);
			return;
		}
		if (__LIB_0__.func_630(iParam1, -1))
		{
			__LIB_7__.func_381("PPA_JUGG2" /* GXT: You can't access this Clubhouse whilst wearing the Ballistic Equipment. */, iParam1, 1);
			return;
		}
		if (bParam0)
		{
			__LIB_7__.func_381("PPA_JUGG3" /* GXT: You can't access this Garage whilst wearing the Ballistic Equipment. */, iParam1, 1);
			return;
		}
		__LIB_7__.func_381("PPA_JUGG4" /* GXT: You can't access this Apartment whilst wearing the Ballistic Equipment. */, iParam1, 1);
		return;
	}
	if (BitTest(Global_1835493, 1))
	{
		if (__LIB_1__.func_188(iParam1))
		{
			if (__LIB_18__.func_851(Global_1312193[iParam1 /*1951*/].f_35, uParam2, 1, 0))
			{
				__LIB_7__.func_381("PPA_BEAST2" /* GXT: You can't access your Office as the Beast. */, iParam1, 1);
			}
			else
			{
				__LIB_7__.func_381("PPA_BEAST2b", iParam1, 1);
			}
			__LIB_2__.func_239(1);
			return;
		}
		if (bParam0)
		{
			__LIB_7__.func_381("PPA_BEAST1" /* GXT: You can't access your Garage as the Beast. */, iParam1, 1);
			__LIB_2__.func_239(1);
			return;
		}
		__LIB_7__.func_381("PPA_BEAST0" /* GXT: You can't access an Apartment as the Beast. */, iParam1, 1);
		__LIB_2__.func_239(1);
		return;
	}
	else if (BitTest(Global_1835493, 4))
	{
		if (__LIB_1__.func_188(iParam1))
		{
			if (__LIB_18__.func_851(Global_1312193[iParam1 /*1951*/].f_35, uParam2, 1, 0))
			{
				__LIB_7__.func_381("PPA_CONTRA2" /* GXT: You can't access your Office while holding Special Cargo. */, iParam1, 1);
			}
			else
			{
				__LIB_7__.func_381("PPA_CONTRA2b" /* GXT: You can't access an Office while holding Special Cargo. */, iParam1, 1);
			}
			return;
		}
		if (bParam0)
		{
			__LIB_7__.func_381("PPA_CONTRA1" /* GXT: You can't access your Garage while holding Special Cargo. */, iParam1, 1);
			return;
		}
		if (((iParam1 != 1234 && iParam1 != 1235) && iParam1 != 117) && __LIB_18__.func_851(Global_1312193[iParam1 /*1951*/].f_35, uParam2, 1, 0))
		{
			__LIB_7__.func_381("PPA_CONTRA0b" /* GXT: You can't access your Apartment while holding Special Cargo. */, iParam1, 1);
		}
		else
		{
			__LIB_7__.func_381("PPA_CONTRA0" /* GXT: You can't access the Apartment while holding Special Cargo. */, iParam1, 1);
		}
		return;
	}
	else if (BitTest(Global_1835493, 13))
	{
		if (__LIB_1__.func_188(iParam1))
		{
			if (__LIB_18__.func_851(Global_1312193[iParam1 /*1951*/].f_35, uParam2, 1, 0))
			{
				__LIB_7__.func_381("PPA_BOUNT" /* GXT: You can't access your Office while escorting a bounty target. */, iParam1, 1);
			}
			else
			{
				__LIB_7__.func_381("PPA_BOUNTb" /* GXT: You can't access an Office while escorting a bounty target. */, iParam1, 1);
			}
			return;
		}
		if (bParam0)
		{
			__LIB_7__.func_381("PPA_BOUNGAR1" /* GXT: You can't access your Garage while escorting a bounty target. */, iParam1, 1);
			return;
		}
		if (((iParam1 != 1234 && iParam1 != 1235) && iParam1 != 117) && __LIB_18__.func_851(Global_1312193[iParam1 /*1951*/].f_35, uParam2, 1, 0))
		{
			__LIB_7__.func_381("PPA_BOUNTGA" /* GXT: You can't access your property while escorting a bounty target. */, iParam1, 1);
		}
		else
		{
			__LIB_7__.func_381("PPA_BOUNTGAb" /* GXT: You can't access a property while escorting a bounty target. */, iParam1, 1);
		}
		return;
	}
	if (__LIB_1__.func_188(iParam1))
	{
		if (__LIB_0__.func_693(PLAYER::PLAYER_ID()) || __LIB_0__.func_694(PLAYER::PLAYER_ID()))
		{
			if (__LIB_18__.func_851(Global_1312193[iParam1 /*1951*/].f_35, uParam2, 1, 0))
			{
				__LIB_7__.func_381("PPA_OFF_HEIST" /* GXT: You can't access your Office while on a heist. */, iParam1, 1);
			}
			else
			{
				__LIB_7__.func_381("PPA_OFF_HEISTb", iParam1, 1);
			}
		}
		else if (__LIB_18__.func_851(Global_1312193[iParam1 /*1951*/].f_35, uParam2, 1, 0))
		{
			__LIB_7__.func_381("PPA_GENOFF" /* GXT: You can't access your Office at this time. */, iParam1, 1);
		}
		else
		{
			__LIB_7__.func_381("PPA_GENOFFb" /* GXT: You can't access an Office at this time. */, iParam1, 1);
		}
		return;
	}
	if (__LIB_0__.func_630(iParam1, -1))
	{
		if (__LIB_0__.func_693(PLAYER::PLAYER_ID()) || __LIB_0__.func_694(PLAYER::PLAYER_ID()))
		{
			if (__LIB_18__.func_851(Global_1312193[iParam1 /*1951*/].f_35, uParam2, 1, 0))
			{
				__LIB_7__.func_381("PPA_CLU_HEIST" /* GXT: You can't access your Clubhouse while on a heist. */, iParam1, 1);
			}
			else
			{
				__LIB_7__.func_381("PPA_CLU_HEISTb" /* GXT: You can't access a Clubhouse while on a heist. */, iParam1, 1);
			}
		}
		else if (__LIB_18__.func_851(Global_1312193[iParam1 /*1951*/].f_35, uParam2, 1, 0))
		{
			__LIB_7__.func_381("PPA_GENUCLU" /* GXT: You can't access your Clubhouse at this time. */, iParam1, 1);
		}
		else
		{
			__LIB_7__.func_381("PPA_GENCLUB" /* GXT: You can't access a Clubhouse at this time. */, iParam1, 1);
		}
		return;
	}
	if (iParam1 == 1235 || iParam1 == 117)
	{
		if (__LIB_0__.func_693(PLAYER::PLAYER_ID()) || __LIB_0__.func_694(PLAYER::PLAYER_ID()))
		{
			__LIB_7__.func_381("PPA_FAC_HEISTb" /* GXT: You can't access a Facility while on a heist. */, iParam1, 1);
		}
		else
		{
			__LIB_7__.func_381("PPA_GENFAC", iParam1, 1);
		}
		return;
	}
	if (bParam0)
	{
		if (!(__LIB_2__.func_59(4) && Global_1312193[iParam1 /*1951*/].f_35 == 69))
		{
			__LIB_7__.func_381("PPA_GEN1" /* GXT: You can't access your Garage at this time. */, iParam1, 0);
		}
		return;
	}
	if (__LIB_0__.func_630(iParam1, -1))
	{
		__LIB_7__.func_381("PPA_GENCLUB" /* GXT: You can't access a Clubhouse at this time. */, iParam1, 0);
	}
	else if ((iParam1 != 1234 && iParam1 != 1235) && iParam1 != 117)
	{
		__LIB_7__.func_381("PPA_GEN0" /* GXT: You can't access an Apartment at this time. */, iParam1, 0);
	}
}

int func_945(int iParam0)//Position - 0x667A9
{
	int iVar0;
	if (!__LIB_25__.func_117())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (__LIB_8__.func_108(PLAYER::PLAYER_ID(), 1))
	{
		return 0;
	}
	if (__LIB_2__.func_431() == iParam0)
	{
		return 0;
	}
	if ((__LIB_8__.func_108(PLAYER::PLAYER_ID(), 1) || (__LIB_7__.func_701(PLAYER::PLAYER_ID()) && !__LIB_1__.func_425(PLAYER::PLAYER_ID(), 0))) || __LIB_1__.func_909())
	{
		return 0;
	}
	if (__LIB_1__.func_425(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = __LIB_3__.func_803(PLAYER::PLAYER_ID());
		switch (iVar0)
		{
			case 192:
			case 190:
			case 167:
			case 168:
			case 178:
			case 188:
			case 225:
			case 226:
			case 229:
			case 230:
			case 233:
			case 237:
			case 271:
				return 0;
			}
		default:
	}
	return 1;
}

int func_946(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, bool bParam9)//Position - 0xB7387
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	struct<3> Var7;
	bool bVar8;
	int iVar9;
	int iVar10;
	struct<3> Var11;
	float fVar12;
	float fVar13;
	struct<3> Var14;
	float fVar15;
	float fVar16;
	int iVar17;
	Global_2727792 = MISC::GET_GAME_TIMER();
	if (__LIB_1__.func_217())
	{
		__LIB_2__.func_834();
	}
	if (!__LIB_7__.func_50() && !bParam9)
	{
		__LIB_8__.func_626();
	}
	if (__LIB_2__.func_833())
	{
		__LIB_2__.func_832(0);
	}
	if (!__LIB_0__.func_791())
	{
		if (Global_2727791 != iParam7 && iParam7 == 1)
		{
			if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				CLOCK::GET_POSIX_TIME(&uVar0, &uVar1, &uVar2, &uVar3, &uVar4, &uVar5);
				STREAMING::ALLOW_PLAYER_SWITCH_DESCENT();
				Global_2727791 = iParam7;
			}
		}
		else
		{
			Global_2727791 = iParam7;
		}
	}
	if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
		PLAYER::STOP_PLAYER_TELEPORT();
		return 0;
	}
	__LIB_18__.func_530();
	if (__LIB_0__.func_496() == 25)
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE() == 1)
	{
		if (bParam1)
		{
			HUD::SET_FRONTEND_ACTIVE(false);
		}
		if (bParam3)
		{
			__LIB_16__.func_621(0, 0, 1);
		}
	}
	__LIB_7__.func_453(&iVar6);
	if (iVar6 == 1)
	{
		return 1;
	}
	if (iVar6 == 2)
	{
		return 0;
	}
	if (!STREAMING::IS_SAFE_TO_START_PLAYER_SWITCH())
	{
		__LIB_18__.func_675(1, 0);
		return 0;
	}
	if (__LIB_0__.func_491() == 0)
	{
		return 1;
	}
	if (__LIB_0__.func_491() == 1)
	{
		__LIB_0__.func_708(2);
		return 0;
	}
	if (PED::IS_PED_DEAD_OR_DYING(PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_18__.func_675(1, 0);
		return 0;
	}
	bVar8 = false;
	if (Global_2715699.f_6597 && Global_2725323)
	{
		if (__LIB_25__.func_119(1))
		{
			bVar8 = true;
		}
	}
	if ((HUD::IS_PAUSE_MENU_ACTIVE() == 0 || (HUD::IS_SOCIAL_CLUB_ACTIVE() && HUD::IS_WARNING_MESSAGE_ACTIVE())) || bParam1 == 0)
	{
		if (!__LIB_4__.func_715())
		{
			if (__LIB_2__.func_283())
			{
				if (__LIB_2__.func_831())
				{
					if ((bVar8 && __LIB_2__.func_830(Global_2715699.f_6598)) || bVar8 == 0)
					{
						iVar9 = PLAYER::PLAYER_PED_ID();
						if (bVar8)
						{
							iVar9 = Global_2726703;
						}
						if (bParam3)
						{
							__LIB_16__.func_621(0, 0, 1);
						}
						if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() == 0)
						{
							if (iParam4 == 0)
							{
								GRAPHICS::ANIMPOSTFX_STOP_ALL();
							}
							iVar10 = 0;
							if (CAM::DOES_CAM_EXIST(iParam0) || iParam4)
							{
								Var7 = { CAM::GET_CAM_COORD(iParam0) };
								ENTITY::SET_ENTITY_COORDS(Global_1577840, ENTITY::GET_ENTITY_COORDS(iVar9, false), false, false, false, true);
								if (iParam4 == 0)
								{
									ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var7, false, false, false, true);
								}
								else
								{
									ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Global_2725423, false, false, false, true);
								}
								iVar10 = __LIB_18__.func_619(ENTITY::GET_ENTITY_COORDS(Global_1577840, false), ENTITY::GET_ENTITY_COORDS(iVar9, false));
								if (iVar10 == 3)
								{
									iVar10 = 2;
								}
							}
							if (__LIB_0__.func_791())
							{
								iVar10 = __LIB_0__.func_109();
							}
							if (iParam4 == 0)
							{
								STREAMING::START_PLAYER_SWITCH(Global_1577840, iVar9, 513, iVar10);
							}
							else
							{
								STREAMING::START_PLAYER_SWITCH(Global_1577840, iVar9, 8, iVar10);
							}
							if (CAM::DOES_CAM_EXIST(iParam0))
							{
								Var7 = { CAM::GET_CAM_COORD(iParam0) };
								Var11 = { CAM::GET_CAM_ROT(iParam0, 2) };
								fVar12 = CAM::GET_CAM_FOV(iParam0);
								fVar13 = CAM::GET_CAM_FAR_CLIP(iParam0);
								STREAMING::SET_PLAYER_SWITCH_OUTRO(Var7, Var11, fVar12, fVar13, 2);
							}
							__LIB_0__.func_708(4);
						}
						else if (STREAMING::IS_SWITCH_TO_MULTI_FIRSTPART_FINISHED())
						{
							if (CAM::DOES_CAM_EXIST(iParam0))
							{
								Var7 = { CAM::GET_CAM_COORD(iParam0) };
								Var14 = { CAM::GET_CAM_ROT(iParam0, 2) };
								fVar15 = CAM::GET_CAM_FOV(iParam0);
								fVar16 = CAM::GET_CAM_FAR_CLIP(iParam0);
								if ((bParam5 && !__LIB_2__.func_828()) && !__LIB_2__.func_827())
								{
									ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var7, false, false, false, true);
									ENTITY::SET_ENTITY_COORDS(iVar9, Var7, false, false, false, true);
								}
								if (__LIB_0__.func_394(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var7, 5f, 0) || !bParam5)
								{
									STREAMING::SWITCH_TO_MULTI_SECONDPART(iVar9);
									if (!__LIB_4__.func_976())
									{
										if (CAM::DOES_CAM_EXIST(iParam0))
										{
											STREAMING::SET_PLAYER_SWITCH_OUTRO(Var7, Var14, fVar15, fVar16, 2);
										}
									}
									if (iParam7 == 0)
									{
										STREAMING::ENABLE_SWITCH_PAUSE_BEFORE_DESCENT();
									}
									if (HUD::BUSYSPINNER_IS_ON())
									{
										HUD::BUSYSPINNER_OFF();
									}
									__LIB_0__.func_708(4);
								}
							}
							else
							{
								if (iParam7 == 0)
								{
									STREAMING::ENABLE_SWITCH_PAUSE_BEFORE_DESCENT();
								}
								__LIB_0__.func_708(4);
								STREAMING::SWITCH_TO_MULTI_SECONDPART(iVar9);
							}
						}
					}
				}
			}
		}
		if (__LIB_0__.func_491() == 4)
		{
			if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				if (!bParam6)
				{
					if (__LIB_0__.func_742() != 0)
					{
						if (__LIB_0__.func_742() < 37)
						{
							if (__LIB_2__.func_835())
							{
								if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(__LIB_18__.func_569(0)))
								{
									GRAPHICS::ANIMPOSTFX_PLAY(__LIB_18__.func_569(0), 0, true);
								}
							}
						}
					}
				}
				iVar17 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
				if (iVar17 != 0)
				{
					STREAMING::DISABLE_SWITCH_OUTRO_FX();
				}
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam8)
				{
					NETWORK::SET_PLAYER_VISIBLE_LOCALLY(PLAYER::PLAYER_ID(), false);
				}
				if (STREAMING::GET_PLAYER_SWITCH_TYPE() != 3)
				{
					if (STREAMING::GET_PLAYER_SWITCH_STATE() > 2)
					{
						__LIB_18__.func_529(bParam3, bParam1);
					}
				}
				else
				{
					__LIB_18__.func_529(bParam3, bParam1);
				}
			}
			if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() == 0 || (iParam2 && STREAMING::GET_PLAYER_SWITCH_STATE() > 8))
			{
				if (((((!Global_2667225.f_2688 == -1 && !Global_1836578) && !Global_2667225.f_2688 >= 254) && !__LIB_2__.func_822()) && !BitTest(Global_4718592.f_168795, 0)) && !(AUDIO::AUDIO_IS_SCRIPTED_MUSIC_PLAYING() && Global_2667225.f_2689 == 0))
				{
					if (!__LIB_0__.func_786(&Global_2725371))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								AUDIO::SET_RADIO_TO_STATION_NAME(&Global_2725371);
							}
						}
					}
				}
				StringCopy(&Global_2725371, "", 32);
				__LIB_18__.func_529(bParam3, bParam1);
				if ((HUD::IS_PAUSE_MENU_ACTIVE() == 0 || (HUD::IS_SOCIAL_CLUB_ACTIVE() && HUD::IS_WARNING_MESSAGE_ACTIVE())) || bParam1 == 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Global_1577840))
					{
						if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_1577840, false))
						{
							if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Global_1577840))
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1577840, false, false);
							}
							PED::DELETE_PED(&Global_1577840);
						}
					}
					if (__LIB_0__.func_497() == 0)
					{
						PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), false);
					}
					GRAPHICS::DONT_RENDER_IN_GAME_UI(false);
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam8)
					{
						NETWORK::SET_PLAYER_VISIBLE_LOCALLY(PLAYER::PLAYER_ID(), false);
					}
					Global_2714762.f_730 = 0;
					__LIB_0__.func_708(0);
					__LIB_1__.func_210();
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_947(var uParam0, int iParam1)//Position - 0xE53C4
{
	struct<3> Var0;
	float* fVar1;
	float* fVar2;
	struct<3> Var3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	int iVar11;
	if (__LIB_0__.func_649(&uLocal_124))
	{
		if (__LIB_2__.func_47(&uLocal_124, 1000, 0) && !__LIB_2__.func_47(&uLocal_124, 2000, 0))
		{
			return;
		}
		else if (__LIB_2__.func_47(&uLocal_124, 2000, 0))
		{
			__LIB_0__.func_579(&uLocal_124);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		if (ENTITY::GET_ENTITY_SPEED(iParam1) > 1f)
		{
			return;
		}
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam1, false))
			{
				return;
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!__LIB_0__.func_649(&uLocal_124))
			{
				__LIB_0__.func_580(&uLocal_124, 0, 0);
			}
			if (!BitTest(uParam0->f_22, 2))
			{
				Var0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(iParam1, true), ENTITY::GET_ENTITY_HEADING(iParam1), 2.4f, 1f, 0.4f) };
				Var3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(iParam1, true), ENTITY::GET_ENTITY_HEADING(iParam1), 2.4f, -1f, 0.4f) };
				__LIB_2__.func_718(iParam1, Var0, &fVar1);
				__LIB_2__.func_718(iParam1, Var3, &fVar2);
				iVar5 = __LIB_19__.func_486(iParam1);
				iVar6 = PLAYER::GET_PLAYER_PED(iVar5);
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar6, false))
				{
					iVar4 = PED::GET_VEHICLE_PED_IS_IN(iVar6, false);
				}
				if ((ENTITY::DOES_ENTITY_EXIST(iVar4) && !ENTITY::IS_ENTITY_DEAD(iVar4, false)) && !VEHICLE::IS_VEHICLE_MODEL(iVar4, joaat("terbyte")))
				{
					uParam0->f_22.f_107 = SHAPETEST::START_SHAPE_TEST_CAPSULE(Var0, Var3, 1f, 81, iVar4, 4);
				}
				else
				{
					uParam0->f_22.f_107 = SHAPETEST::START_SHAPE_TEST_CAPSULE(Var0, Var3, 1f, 83, iParam1, 4);
				}
				if (uParam0->f_22.f_107 != 0)
				{
					MISC::SET_BIT(&(uParam0->f_22), 2);
				}
			}
			else
			{
				iVar11 = SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_22.f_107, &iVar7, &uVar8, &uVar9, &uVar10);
				if (iVar11 == 2)
				{
					if (iVar7 == 0)
					{
						MISC::CLEAR_BIT(&Global_1946250, 19);
						uParam0->f_22.f_107 = 0;
						MISC::CLEAR_BIT(&(uParam0->f_22), 2);
					}
					else
					{
						uParam0->f_22.f_107 = 0;
						MISC::SET_BIT(&Global_1946250, 19);
						MISC::CLEAR_BIT(&(uParam0->f_22), 2);
					}
				}
				else if (iVar11 == 0)
				{
					MISC::CLEAR_BIT(&(uParam0->f_22), 2);
					uParam0->f_22.f_107 = 0;
				}
			}
		}
	}
}

void func_948(int iParam0, int iParam1, var uParam2)//Position - 0xFA782
{
	switch (iParam1)
	{
		case 0:
			__LIB_8__.func_799(iParam0, &(uParam2->f_4));
			uParam2->f_7 = { 1f, 1f, 2f };
			MISC::SET_BIT(&(uParam2->f_3), 4);
			MISC::SET_BIT(&(uParam2->f_3), 1);
			MISC::SET_BIT(&(uParam2->f_3), 5);
			if (!BitTest(Global_1946250, 19))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("terbyte"))))
				{
					HUD::GET_HUD_COLOUR(9, &(uParam2->f_15), &(uParam2->f_16), &(uParam2->f_17), &(uParam2->f_18));
				}
			}
			else
			{
				uParam2->f_18 = 0;
			}
			break;
		case 1:
			__LIB_25__.func_123(iParam0, &(uParam2->f_4), &(uParam2->f_7), &(uParam2->f_10), &(uParam2->f_13), &(uParam2->f_14));
			MISC::SET_BIT(&(uParam2->f_3), 4);
			MISC::SET_BIT(&(uParam2->f_3), 0);
			MISC::SET_BIT(&(uParam2->f_3), 2);
			MISC::SET_BIT(&(uParam2->f_3), 5);
			uParam2->f_2 = 1;
			if (!BitTest(Global_1946250, 19))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("oppressor2")))
				{
					HUD::GET_HUD_COLOUR(9, &(uParam2->f_15), &(uParam2->f_16), &(uParam2->f_17), &(uParam2->f_18));
				}
			}
			else
			{
				uParam2->f_18 = 0;
			}
			break;
	}
}

void func_949(int iParam0, int* iParam1)//Position - 0x12B1B5
{
	if (__LIB_2__.func_413(&(Global_1946250.f_4073), 0))
	{
		if (!BitTest(iParam1->f_188, 0))
		{
			__LIB_7__.func_449(iParam1, 1);
			__LIB_3__.func_362(&(iParam1->f_176[3]), &(iParam1->f_176[0]), &(iParam1->f_176[1]), &(iParam1->f_176[2]));
			__LIB_7__.func_364(&(iParam1->f_109), 1);
			__LIB_25__.func_128(&(iParam1->f_109.f_1[0]), iParam0, 1, 0);
			ENTITY::SET_ENTITY_COLLISION(iParam1->f_109, false, false);
			__LIB_3__.func_356(0);
			MISC::SET_BIT(&(iParam1->f_188), 0);
		}
		if (Global_1946250.f_4073.f_375 >= 50 && !BitTest(iParam1->f_188, 2))
		{
			__LIB_3__.func_355(&(iParam1->f_109.f_1[0]));
			MISC::SET_BIT(&(iParam1->f_188), 2);
		}
	}
}

char* func_950(var uParam0, var uParam1, var uParam2)//Position - 0x14948B
{
	int iVar0;
	bool bVar1;
	if (__LIB_7__.func_373())
	{
		return "SI_ENTR_BLCK4A" /* GXT: You cannot enter the Mobile Operations Center while on call. You can cancel this via the Quick Join app on the phone. */;
	}
	if (__LIB_1__.func_288())
	{
		return "";
	}
	if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !NETWORK::NETWORK_IS_IN_MP_CUTSCENE()) && PLAYER::PLAYER_ID() == __LIB_18__.func_698())
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if ((!__LIB_0__.func_656(iVar0, 1) && !VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("caddy2"))) && !VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("caddy3")))
		{
			if (!__LIB_3__.func_416(PLAYER::PLAYER_ID()) && !__LIB_0__.func_333(PLAYER::PLAYER_ID()))
			{
				if (__LIB_0__.func_657(iVar0, 1))
				{
					return "GR_TRUCK_STOR_P" /* GXT: You do not currently own the Mobile Operations Center Personal Vehicle Storage bay. Purchase one at www.warstock-cache-and-carry.com. */;
				}
				else if (__LIB_25__.func_277(iVar0))
				{
					return "GR_TRUCK_MOD_P" /* GXT: You do not currently own the Mobile Operations Center Weapon & Vehicle Workshop bay. Purchase one at www.warstock-cache-and-carry.com. */;
				}
				else
				{
					return "GR_TRUCK_BUY_A" /* GXT: You do not currently own the Mobile Operations Center Personal Vehicle Storage bay or the Mobile Operations Center Weapon & Vehicle Workshop bay. Purchase one at www.warstock-cache-and-carry.com. */;
				}
			}
		}
	}
	if (BitTest(Global_1946250.f_506, 0))
	{
		if (__LIB_4__.func_682(PLAYER::PLAYER_ID(), 0))
		{
			bVar1 = __LIB_0__.func_582();
			if (__LIB_18__.func_604(PLAYER::PLAYER_ID(), 0))
			{
				return "MP_TRUCK_KICKd" /* GXT: You no longer have access to the Mobile Operations Center as you became a Prospect. */;
			}
			else if (bVar1 != __LIB_0__.func_160() && __LIB_2__.func_456(bVar1))
			{
				return "MP_TRUCK_KICKa" /* GXT: You no longer have access to the Mobile Operations Center as you became an Associate. */;
			}
			else
			{
				return "MP_TRUCK_KICKb" /* GXT: You no longer have access to the Mobile Operations Center as you became a Bodyguard. */;
			}
		}
	}
	if (PLAYER::PLAYER_ID() == __LIB_18__.func_698() || __LIB_0__.func_582() == __LIB_18__.func_698())
	{
		if (__LIB_0__.func_811(PLAYER::PLAYER_PED_ID()))
		{
			return "JUG_BLOCK_MOC" /* GXT: You can't access this Mobile Operations Center whilst wearing the Ballistic Equipment. */;
		}
		if (__LIB_2__.func_104())
		{
			return "BOUNTY_PROP_BLCK" /* GXT: You cannot enter whilst delivering a bounty. */;
		}
	}
	if (__LIB_2__.func_477())
	{
		return "TRUC_MC_BLOCK_P" /* GXT: You cannot enter your Mobile Operations Center with a prostitute. */;
	}
	if (__LIB_2__.func_475())
	{
		return "NPC_BLOCK" /* GXT: You cannot enter with non-player characters in the vehicle. */;
	}
	if (__LIB_0__.func_740(PLAYER::PLAYER_ID()) || __LIB_7__.func_628(PLAYER::PLAYER_ID(), 1, 0))
	{
		return "TRUC_MC_BLOCK_E" /* GXT: You cannot enter your Mobile Operations Center while active in a mission. */;
	}
	if (__LIB_1__.func_205(PLAYER::PLAYER_ID()) == 3)
	{
		return "SUP_BLOCK_MOC" /* GXT: You can't access this Mobile Operations Center whilst carrying Supplies. */;
	}
	if (Global_1835493 != 0)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!__LIB_0__.func_657(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1))
			{
				return "TRUC_MC_BLOCK_V" /* GXT: You cannot enter your Mobile Operations Center while in a mission vehicle. */;
			}
		}
	}
	if (__LIB_1__.func_264(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (BitTest(Global_1946250.f_1, 3))
		{
			if (__LIB_3__.func_997(PLAYER::PLAYER_ID(), -1) || PED::GET_SEAT_PED_IS_TRYING_TO_ENTER(PLAYER::PLAYER_PED_ID()) == -1)
			{
				if (PLAYER::PLAYER_ID() != __LIB_18__.func_698())
				{
					MISC::CLEAR_BIT(&(Global_1946250.f_1), 3);
				}
			}
		}
	}
	if (BitTest(Global_1946250.f_1, 3))
	{
		return "GR_TRUCK_SUTAR" /* GXT: You are unable to access the Mobile Operations Center in this area. Move the Mobile Operations Center to a suitable area. */;
	}
	return "";
}

void func_951(int iParam0, var uParam1, bool bParam2)//Position - 0x14B555
{
	int iVar0;
	__LIB_1__.func_140(uParam1);
	if (bParam2)
	{
		uParam1->f_103 = 0;
		uParam1->f_105 = 0;
		StringCopy(&(uParam1->f_106), "", 64);
		StringCopy(&(uParam1->f_122), "", 64);
		uParam1->f_140 = 0;
		uParam1->f_138 = -1;
		uParam1->f_139 = -1;
		uParam1->f_141 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (Global_262145.f_11088 /* Tunable: ENABLEPVCLEANUP */)
		{
			MISC::SET_BIT(&(uParam1->f_103), 22);
		}
	}
	if (__LIB_2__.func_342(iParam0, 0))
	{
		__LIB_1__.func_258();
		MISC::SET_BIT(&(uParam1->f_103), 3);
	}
	__LIB_25__.func_269(iParam0, uParam1);
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
			if (BitTest(iVar0, 3))
			{
				MISC::SET_BIT(&(uParam1->f_103), 2);
			}
		}
	}
	if (BitTest(uParam1->f_103, 8))
	{
		if (!__LIB_6__.func_910(iParam0))
		{
		}
	}
	else if (__LIB_6__.func_910(iParam0))
	{
		MISC::SET_BIT(&(uParam1->f_103), 8);
		MISC::SET_BIT(&(uParam1->f_103), 9);
	}
}

char* func_952(int iParam0, var uParam1, var uParam2)//Position - 0x153D49
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	bool bVar7;
	struct<2> Var8;
	var uVar9;
	if (__LIB_7__.func_373())
	{
		return "SI_ENTR_BLCK10A" /* GXT: You cannot enter the Bunker while on call. You can cancel this via the Quick Join app on the phone. */;
	}
	bVar0 = __LIB_2__.func_191(PLAYER::PLAYER_ID());
	iVar2 = __LIB_3__.func_499(iParam0);
	bVar3 = false;
	iVar4 = -1;
	if ((bVar0 != __LIB_0__.func_160() && bVar0 != PLAYER::PLAYER_ID()) && __LIB_7__.func_594(bVar0, iVar2))
	{
		bVar3 = true;
	}
	if (__LIB_2__.func_477())
	{
		return "BUNK_MC_BLOCK_P" /* GXT: You cannot enter your Bunker with a prostitute. */;
	}
	if (__LIB_2__.func_475())
	{
		return "NPC_BLOCK" /* GXT: You cannot enter with non-player characters in the vehicle. */;
	}
	if ((bVar0 != PLAYER::PLAYER_ID() && __LIB_7__.func_594(PLAYER::PLAYER_ID(), iVar2)) && !bVar3)
	{
		if (__LIB_18__.func_604(PLAYER::PLAYER_ID(), 0))
		{
			return "BUNK_MC_BLOCK_M" /* GXT: Your Bunker is unavailable when being a member of an MC. */;
		}
		else if (__LIB_4__.func_682(PLAYER::PLAYER_ID(), 0))
		{
			bVar5 = __LIB_2__.func_191(PLAYER::PLAYER_ID());
			if (!__LIB_7__.func_594(bVar5, __LIB_3__.func_499(iParam0)))
			{
				if (__LIB_2__.func_456(__LIB_0__.func_582()))
				{
					return "BUNK_GOON_HLP1C" /* GXT: Your Bunker is unavailable when working as an Associate for a CEO. */;
				}
				else
				{
					return "BUNK_GOON_HLP1" /* GXT: Your Bunker is unavailable when working as a Bodyguard for a VIP. */;
				}
			}
		}
		if (!__LIB_4__.func_44(PLAYER::PLAYER_ID(), 1))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if ((((((__LIB_1__.func_179(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) || __LIB_1__.func_376(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))) || __LIB_1__.func_180(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))) || __LIB_3__.func_812(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)), 1)) || __LIB_3__.func_522(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))) || __LIB_3__.func_521(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))) || __LIB_3__.func_520(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false))))
				{
					return "BUNK_VEH_BLCK1" /* GXT: You cannot enter the Bunker with this vehicle. */;
				}
				else if (!__LIB_25__.func_260(iParam0, &iVar1, &iVar4, 1, 0) && __LIB_7__.func_594(PLAYER::PLAYER_ID(), iVar2))
				{
					if (iVar1 == PLAYER::PLAYER_ID())
					{
						if (iVar4 == 1)
						{
							return "BUNK_VEH_BLCK0" /* GXT: You cannot enter the Bunker with this vehicle. Only your Personal Vehicle can be driven in. */;
						}
						else if (iVar4 == 2)
						{
						}
						else if (iVar4 == 3)
						{
							return "BUNK_VEH_BLCK2" /* GXT: You cannot enter the Bunker with a vehicle while working for another player. */;
						}
						else if (iVar4 == 4)
						{
							return "BUNK_VEH_BLCK3" /* GXT: You cannot enter the Bunker with this vehicle. You do not own this Bunker. */;
						}
						else if (iVar4 == 5)
						{
							return "BUNK_VEH_BLCK4" /* GXT: You cannot enter the Bunker with this vehicle, without the Mobile Operations Center trailer attached. */;
						}
						else if (iVar4 == 7)
						{
							return "BUNK_VEH_BLCK4b" /* GXT: You cannot enter the Bunker with another player's Mobile Operations Center. */;
						}
						else if (iVar4 == 6)
						{
							return "BUNK_VEH_BLCK7" /* GXT: You cannot enter the Bunker with this vehicle. Please detach trailer to enter. */;
						}
						else if (iVar4 == 1)
						{
							return "BUNK_VEH_BLCK0b" /* GXT: You cannot enter the Bunker with this vehicle. Only the Bunker owner in their Personal Vehicle can drive in. */;
						}
						else if (iVar4 == -1)
						{
							return "BUNK_VEH_BLCK0" /* GXT: You cannot enter the Bunker with this vehicle. Only your Personal Vehicle can be driven in. */;
						}
					}
					else if (iVar4 == 1)
					{
						return "BUNK_VEH_BLCK0b" /* GXT: You cannot enter the Bunker with this vehicle. Only the Bunker owner in their Personal Vehicle can drive in. */;
					}
					else if (iVar4 == 2)
					{
					}
					else if (iVar4 == 3)
					{
						return "BUNK_VEH_BLCK2b" /* GXT: You cannot enter the Bunker with this vehicle. The driver is working for another player. */;
					}
					else if (iVar4 == 4 || iVar4 == 5)
					{
						return "BUNK_VEH_BLCK3b" /* GXT: You cannot enter the Bunker with this vehicle. The driver does not own this Bunker. */;
					}
					else if (iVar4 == -1)
					{
						return "BUNK_VEH_BLCK0b" /* GXT: You cannot enter the Bunker with this vehicle. Only the Bunker owner in their Personal Vehicle can drive in. */;
					}
				}
			}
		}
	}
	else if (__LIB_4__.func_44(PLAYER::PLAYER_ID(), 1))
	{
		iVar6 = __LIB_3__.func_803(PLAYER::PLAYER_ID());
		bVar7 = __LIB_2__.func_191(PLAYER::PLAYER_ID());
		if (bVar7 == __LIB_0__.func_160())
		{
			return "";
		}
		if (iVar6 == 192 || iVar6 == 190)
		{
			Var8 = { Global_1892703[bVar7 /*599*/].f_10.f_194 };
			if (__LIB_3__.func_499(iParam0) != Var8.f_0)
			{
				if (iVar6 == 190)
				{
					return "BUNK_BLOCK_BKRh" /* GXT: You can't enter this Bunker while selling goods from another business. */;
				}
				else if (__LIB_7__.func_679(bVar7, Var8.f_0))
				{
					return "BUNK_BLOCK_BKRc" /* GXT: You can't enter this Bunker while resupplying another business. */;
				}
				else
				{
					return "BUNK_BLOCK_BKRb" /* GXT: You can't enter this Bunker while setting up another business. */;
				}
			}
		}
		else if (iVar6 == 167)
		{
			return "BUNK_BLOCK_BKRd" /* GXT: You can't enter this Bunker while acquiring goods for a warehouse. */;
		}
		else if (iVar6 == 168)
		{
			return "BUNK_BLOCK_BKRe" /* GXT: You can't enter this Bunker while selling goods from a warehouse. */;
		}
		else if (iVar6 == 178)
		{
			return "BUNK_BLOCK_BKRf" /* GXT: You can't enter this Bunker while acquiring a vehicle for a warehouse. */;
		}
		else if (iVar6 == 188)
		{
			uVar9 = { Global_1892703[bVar7 /*599*/].f_10.f_187 };
			if (uVar9[1] == 0)
			{
				return "BUNK_BLOCK_BKRi" /* GXT: You can't enter this Bunker while selling a vehicle from a warehouse. */;
			}
			else
			{
				return "BUNK_BLOCK_BKRg" /* GXT: You can't enter this Bunker while selling vehicles from a warehouse. */;
			}
		}
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && (__LIB_7__.func_594(PLAYER::PLAYER_ID(), iVar2) || bVar3))
	{
		if (((((__LIB_7__.func_594(PLAYER::PLAYER_ID(), iVar2) && ((__LIB_1__.func_179(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) || __LIB_1__.func_177(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))) || __LIB_1__.func_376(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false))))) || __LIB_3__.func_812(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)), 1)) || __LIB_3__.func_522(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))) || __LIB_3__.func_521(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))) || __LIB_3__.func_520(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false))))
		{
			return "BUNK_VEH_BLCK1" /* GXT: You cannot enter the Bunker with this vehicle. */;
		}
		else if (!__LIB_25__.func_260(iParam0, &iVar1, &iVar4, 1, 0))
		{
			if (iVar1 == PLAYER::PLAYER_ID())
			{
				if (iVar4 == 1)
				{
					return "BUNK_VEH_BLCK0" /* GXT: You cannot enter the Bunker with this vehicle. Only your Personal Vehicle can be driven in. */;
				}
				else if (iVar4 == 2)
				{
				}
				else if (iVar4 == 3)
				{
					return "BUNK_VEH_BLCK2" /* GXT: You cannot enter the Bunker with a vehicle while working for another player. */;
				}
				else if (iVar4 == 4)
				{
					return "BUNK_VEH_BLCK3" /* GXT: You cannot enter the Bunker with this vehicle. You do not own this Bunker. */;
				}
				else if (iVar4 == 5)
				{
					return "BUNK_VEH_BLCK4" /* GXT: You cannot enter the Bunker with this vehicle, without the Mobile Operations Center trailer attached. */;
				}
				else if (iVar4 == 7)
				{
					return "BUNK_VEH_BLCK4b" /* GXT: You cannot enter the Bunker with another player's Mobile Operations Center. */;
				}
				else if (iVar4 == 6)
				{
					return "BUNK_VEH_BLCK7" /* GXT: You cannot enter the Bunker with this vehicle. Please detach trailer to enter. */;
				}
				else if (iVar4 == -1)
				{
					return "BUNK_VEH_BLCK0" /* GXT: You cannot enter the Bunker with this vehicle. Only your Personal Vehicle can be driven in. */;
				}
			}
			else if (iVar4 == 1)
			{
				return "BUNK_VEH_BLCK0b" /* GXT: You cannot enter the Bunker with this vehicle. Only the Bunker owner in their Personal Vehicle can drive in. */;
			}
			else if (iVar4 == 2)
			{
			}
			else if (iVar4 == 3)
			{
				return "BUNK_VEH_BLCK2b" /* GXT: You cannot enter the Bunker with this vehicle. The driver is working for another player. */;
			}
			else if (iVar4 == 4 || iVar4 == 5)
			{
				return "BUNK_VEH_BLCK3b" /* GXT: You cannot enter the Bunker with this vehicle. The driver does not own this Bunker. */;
			}
			else if (iVar4 == -1)
			{
				return "BUNK_VEH_BLCK0b" /* GXT: You cannot enter the Bunker with this vehicle. Only the Bunker owner in their Personal Vehicle can drive in. */;
			}
		}
	}
	if (__LIB_7__.func_594(PLAYER::PLAYER_ID(), iVar2) || __LIB_7__.func_594(__LIB_0__.func_582(), iVar2))
	{
		if (__LIB_0__.func_811(PLAYER::PLAYER_PED_ID()))
		{
			return "JUG_BLOCK_BUNK" /* GXT: You can't access this Bunker whilst wearing the Ballistic Equipment. */;
		}
		if (__LIB_2__.func_104())
		{
			return "BOUNTY_PROP_BLCK" /* GXT: You cannot enter whilst delivering a bounty. */;
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if ((__LIB_25__.func_260(iParam0, &iVar1, &iVar4, 1, 0) && __LIB_7__.func_594(PLAYER::PLAYER_ID(), iVar2)) && iVar1 == PLAYER::PLAYER_ID())
		{
			if (__LIB_3__.func_519(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
			{
				return "BUNK_VEH_BLCK1" /* GXT: You cannot enter the Bunker with this vehicle. */;
			}
			if (__LIB_18__.func_179(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1) && __LIB_3__.func_518(PLAYER::PLAYER_ID(), -1, 1))
			{
				return "BUNK_VEH_BLCK5" /* GXT: You can only have one vehicle in your Bunker at a time. Remove your Personal Vehicle from the Bunker to enter. */;
			}
			else if (__LIB_1__.func_104(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1) && __LIB_3__.func_517(PLAYER::PLAYER_ID(), -1, 1))
			{
				return "BUNK_VEH_BLCK6" /* GXT: You can only have one vehicle in your Bunker at a time. Remove your Pegasus vehicle from the Bunker to enter. */;
			}
		}
	}
	return "";
}

void func_953(var uParam0, var uParam1)//Position - 0x2F37F
{
	var uVar0;
	uVar0 = uParam1;
	__LIB_25__.func_87(uVar0);
}

void func_954(bool bParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x30988
{
	__LIB_6__.func_916();
	if (bParam0)
	{
		__LIB_7__.func_20(1);
		HUD::CLEAR_HELP(true);
	}
	HUD::CLEAR_PRINTS();
	__LIB_21__.func_361();
	GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(false);
	__LIB_8__.func_454(0, 1, 1, 0, 0, bParam2, 0);
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
	if (((((__LIB_0__.func_497() == 0 && __LIB_1__.func_129() == 0) && iParam1) && !__LIB_8__.func_303(PLAYER::PLAYER_ID())) && !STREAMING::IS_NEW_LOAD_SCENE_ACTIVE()) && __LIB_4__.func_715())
	{
		__LIB_18__.func_465(PLAYER::PLAYER_ID(), 1, 0, 0);
	}
	Global_2703735.f_3428 = 0;
	__LIB_19__.func_91();
}

void func_955(int iParam0, int iParam1, int iParam2, int iParam3, int* iParam4)//Position - 0x31B71
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	struct<3> Var4;
	float fVar5;
	fVar0 = (__LIB_18__.func_654(iParam0, iParam1, iParam2, iParam3) - __LIB_18__.func_653(iParam0, iParam1, iParam2, iParam3));
	fVar1 = (__LIB_18__.func_652(iParam0, iParam1, iParam2, iParam3) - __LIB_25__.func_139(iParam0, iParam1, iParam2, iParam3));
	fVar2 = 1f;
	fVar3 = 1f;
	if (MISC::ABSF(fVar0) > MISC::ABSF(fVar1))
	{
		fVar3 = (MISC::ABSF(fVar1) / MISC::ABSF(fVar0));
	}
	else if (MISC::ABSF(fVar1) > MISC::ABSF(fVar0))
	{
		fVar2 = (MISC::ABSF(fVar0) / MISC::ABSF(fVar1));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam4->f_176[iParam3]))
	{
		Var4 = { ENTITY::GET_ENTITY_COORDS(iParam4->f_176[iParam3], true) };
		if (Var4.f_0 == __LIB_18__.func_654(iParam0, iParam1, iParam2, iParam3) && Var4.f_1 == __LIB_18__.func_652(iParam0, iParam1, iParam2, iParam3))
		{
			if (!BitTest(*iParam4, 1))
			{
				MISC::SET_BIT(iParam4, 1);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "OPENING", "MP_PROPERTIES_ELEVATOR_DOORS", true);
			}
		}
		if (Var4.f_0 == __LIB_18__.func_653(iParam0, iParam1, iParam2, iParam3) && Var4.f_1 == __LIB_25__.func_139(iParam0, iParam1, iParam2, iParam3))
		{
			if (!BitTest(*iParam4, 2))
			{
				MISC::SET_BIT(iParam4, 2);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "OPENED", "MP_PROPERTIES_ELEVATOR_DOORS", true);
			}
		}
		fVar5 = (0.4f * fVar2);
		if (fVar0 > 0f)
		{
			Var4.f_0 = (Var4.f_0 - (fVar5 * SYSTEM::TIMESTEP()));
			if (Var4.f_0 < __LIB_18__.func_653(iParam0, iParam1, iParam2, iParam3))
			{
				Var4.f_0 = __LIB_18__.func_653(iParam0, iParam1, iParam2, iParam3);
			}
		}
		if (fVar0 < 0f)
		{
			Var4.f_0 = (Var4.f_0 + (fVar5 * SYSTEM::TIMESTEP()));
			if (Var4.f_0 > __LIB_18__.func_653(iParam0, iParam1, iParam2, iParam3))
			{
				Var4.f_0 = __LIB_18__.func_653(iParam0, iParam1, iParam2, iParam3);
			}
		}
		fVar5 = (0.4f * fVar3);
		if (fVar1 > 0f)
		{
			Var4.f_1 = (Var4.f_1 - (fVar5 * SYSTEM::TIMESTEP()));
			if (Var4.f_1 < __LIB_25__.func_139(iParam0, iParam1, iParam2, iParam3))
			{
				Var4.f_1 = __LIB_25__.func_139(iParam0, iParam1, iParam2, iParam3);
			}
		}
		if (fVar1 < 0f)
		{
			Var4.f_1 = (Var4.f_1 + (fVar5 * SYSTEM::TIMESTEP()));
			if (Var4.f_1 > __LIB_25__.func_139(iParam0, iParam1, iParam2, iParam3))
			{
				Var4.f_1 = __LIB_25__.func_139(iParam0, iParam1, iParam2, iParam3);
			}
		}
		ENTITY::SET_ENTITY_COORDS(iParam4->f_176[iParam3], Var4, true, false, false, true);
	}
}

void func_956(var uParam0, var uParam1)//Position - 0x5E53D
{
	__LIB_25__.func_88(uParam0, 1);
}

void func_957(var uParam0, var uParam1)//Position - 0x89AB1
{
	__LIB_25__.func_91(uParam0, 1);
}

void func_958(var uParam0, var uParam1)//Position - 0xD33F7
{
	__LIB_6__.func_404(&(uParam0->f_22.f_94));
	__LIB_2__.func_717(0);
	__LIB_25__.func_92(uParam0, 1);
	if (uParam0->f_413 != -1 && !__LIB_3__.func_998(PLAYER::PLAYER_ID()))
	{
		if (BitTest(Global_1946250.f_13, uParam0->f_413))
		{
			MISC::CLEAR_BIT(&(Global_1946250.f_13), uParam0->f_413);
			if (BitTest(Global_1946250.f_13, uParam0->f_413))
			{
				AUDIO::UNHINT_SCRIPT_AUDIO_BANK();
				AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK(__LIB_2__.func_716());
			}
		}
		uParam0->f_413 = -1;
	}
	Global_1946229 = 0;
}

void func_959(var uParam0, var uParam1)//Position - 0xF9674
{
	__LIB_25__.func_94(uParam0, 1);
}

void func_960(var uParam0, var uParam1)//Position - 0x10964B
{
	__LIB_25__.func_95(uParam0, 1);
}

void func_961(var uParam0, var uParam1)//Position - 0x111275
{
	__LIB_6__.func_404(&(uParam0->f_22.f_94));
	__LIB_3__.func_50(0);
	__LIB_25__.func_96(uParam0, 1);
}

void func_962(var uParam0, int iParam1)//Position - 0x12943E
{
	char* sVar0;
	int iVar1;
	sVar0 = __LIB_3__.func_116(iParam1);
	iVar1 = 0;
	if (!__LIB_18__.func_925(__LIB_3__.func_103(iParam1), &iVar1, 1))
	{
		if (TASK::DOES_SCENARIO_GROUP_EXIST(sVar0))
		{
			if (TASK::IS_SCENARIO_GROUP_ENABLED(sVar0))
			{
				TASK::SET_SCENARIO_GROUP_ENABLED(sVar0, false);
			}
		}
	}
	if (__LIB_3__.func_103(iParam1) == 9)
	{
		if (BitTest(uParam0->f_22, 14))
		{
			MISC::CLEAR_BIT(&(uParam0->f_22), 14);
			ENTITY::REMOVE_MODEL_HIDE(-1283.508f, -649.543f, 25.524f, 5f, joaat("prop_pot_plant_03a"), false);
		}
	}
	__LIB_25__.func_97(uParam0, 1);
}

int func_963(int iParam0, var uParam1)//Position - 0x13D332
{
	struct<3> Var0;
	struct<3> Var1;
	if (__LIB_0__.func_121(uParam1->f_176[1]))
	{
		__LIB_3__.func_200(&(uParam1->f_176[1]));
		ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(uParam1->f_176[1]);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_176[3]))
	{
		OBJECT::DELETE_OBJECT(&(uParam1->f_176[3]));
	}
	__LIB_3__.func_235();
	__LIB_7__.func_658(iParam0, 1);
	__LIB_7__.func_532(iParam0);
	MISC::SET_BIT(&(uParam1->f_188), 20);
	if (__LIB_0__.func_121(uParam1->f_176[0]))
	{
		__LIB_25__.func_166(iParam0, &(uParam1->f_176[0]), 1f, 0, 6f);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109) && !__LIB_3__.func_234(ENTITY::GET_ENTITY_MODEL(uParam1->f_109)))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(uParam1->f_109, true) };
		Var0.f_2 = (Var0.f_2 - 10f);
		ENTITY::SET_ENTITY_COORDS(uParam1->f_109, Var0, false, false, false, true);
	}
	else if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[0]) && __LIB_0__.func_121(uParam1->f_140[0]))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(uParam1->f_140[0], true) };
		Var1.f_2 = (Var1.f_2 - 10f);
		ENTITY::SET_ENTITY_COORDS(uParam1->f_140[0], Var1, false, false, false, true);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[0], true);
	}
	return 1;
}

void func_964(int iParam0, int iParam1, int* iParam2, int* iParam3, int* iParam4, int* iParam5, int* iParam6, bool bParam7)//Position - 0x157FAB
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam2))
	{
		OBJECT::DELETE_OBJECT(iParam2);
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam3))
	{
		OBJECT::DELETE_OBJECT(iParam3);
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam4))
	{
		OBJECT::DELETE_OBJECT(iParam4);
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam5))
	{
		OBJECT::DELETE_OBJECT(iParam5);
	}
	__LIB_25__.func_169(iParam0, iParam1, iParam6, bParam7);
	__LIB_7__.func_566(iParam0, iParam2);
	__LIB_7__.func_565(iParam0, iParam3);
	__LIB_7__.func_564(iParam0, iParam4, iParam5, -1093740265);
}

void func_965(var uParam0, var uParam1)//Position - 0x15A5EE
{
	__LIB_25__.func_99(uParam0, 1);
}

void func_966(int iParam0, var uParam1, var uParam2, int* iParam3, bool bParam4, bool bParam5)//Position - 0x17A97F
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return;
	}
	__LIB_3__.func_483(uParam2, 0);
	__LIB_25__.func_174(iParam0, uParam1, *uParam2);
	__LIB_3__.func_479(*uParam2, iParam3, bParam4, bParam5);
}

void func_967(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x1817EF
{
	struct<4> Var0;
	uParam1->f_405 = { __LIB_3__.func_528(iParam0) };
	uParam1->f_21 = "AM_MP_BUNKER";
	uParam1->f_22.f_241 = "DLC_GR_Bunker_Enter";
	uParam1->f_22.f_242 = "DLC_GR_Bunker_Interior";
	uParam1->f_22.f_243 = "DLC_GR_Bunker_Exit";
	uParam1->f_22.f_69[0] = "PUSH";
	uParam1->f_22.f_69[1] = "LIMIT";
	uParam1->f_22.f_72[0] = 0.271f;
	uParam1->f_22.f_72[1] = 0.411f;
	uParam1->f_22.f_75 = "GTAO_EXEC_WH_DOOR_GENERIC_SOUNDS";
	uParam1->f_3 = 0;
	uParam1->f_285[0 /*3*/] = { -41.549133f, -47.141113f, 0.831696f };
	uParam1->f_285.f_28[0 /*3*/] = { -41.549133f, -52.22632f, 3.818214f };
	uParam1->f_285.f_56[0] = 2.6875f;
	uParam1->f_285.f_94[0] = 269.5509f;
	Var0 = { __LIB_3__.func_480(iParam0) };
	uParam1->f_22.f_28 = { Var0 };
	uParam1->f_22.f_31 = { Var0.f_3 };
	__LIB_25__.func_176(iParam0, &(uParam1->f_22));
}

int func_968(int iParam0, int iParam1)//Position - 0x1BEA16
{
	if (!__LIB_1__.func_392(iParam0))
	{
		if (__LIB_3__.func_812(iParam0, 0))
		{
			if (iParam1 == __LIB_19__.func_123(iParam0))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (!__LIB_25__.func_471(iParam1) && __LIB_25__.func_470(iParam1))
		{
			return 0;
		}
	}
	if (__LIB_1__.func_376(iParam0))
	{
		if (!__LIB_1__.func_322(iParam1))
		{
			return 0;
		}
	}
	else if (__LIB_1__.func_322(iParam1))
	{
		return 0;
	}
	if (__LIB_25__.func_468(iParam1))
	{
		if (!__LIB_1__.func_177(iParam0))
		{
			return 0;
		}
	}
	else if (__LIB_1__.func_177(iParam0))
	{
		return 0;
	}
	if ((iParam0 == joaat("cerberus") || iParam0 == joaat("cerberus2")) || iParam0 == joaat("cerberus3"))
	{
		if ((iParam1 != 236 && iParam1 != 246) && iParam1 != 256)
		{
			return 0;
		}
	}
	else if ((iParam1 == 236 || iParam1 == 246) || iParam1 == 256)
	{
		return 0;
	}
	return 1;
}

int func_969(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6)//Position - 0x9DF24
{
	int iVar0;
	if (iParam0 == 158 && iParam6)
	{
		if (__LIB_31__.func_968(iParam3, iParam0))
		{
			if (bParam4)
			{
				if (__LIB_1__.func_556(__LIB_1__.func_368(4, iParam0), iParam5, 0) == joaat("hauler2") || __LIB_1__.func_556(__LIB_1__.func_368(4, iParam0), iParam5, 0) == joaat("phantom3"))
				{
					return iParam0;
				}
				else if (__LIB_1__.func_556(__LIB_1__.func_368(4, iParam0), iParam5, 0) == 0)
				{
					return iParam0;
				}
				else
				{
					return iParam0;
				}
			}
			else if (Global_1585857[iParam0 /*142*/].f_66 == joaat("hauler2") || Global_1585857[iParam0 /*142*/].f_66 == joaat("phantom3"))
			{
				return iParam0;
			}
			else if (Global_1585857[iParam0 /*142*/].f_66 == 0)
			{
				return iParam0;
			}
			else
			{
				return iParam0;
			}
		}
	}
	if (bParam4)
	{
		switch (iParam1)
		{
			case 0:
				if (__LIB_31__.func_968(iParam3, iParam0))
				{
					if (__LIB_1__.func_556(__LIB_1__.func_368(4, iParam0), iParam5, 0) == 0)
					{
						return iParam0;
					}
					else
					{
						iVar0 = __LIB_1__.func_556(__LIB_1__.func_368(1, iParam0), iParam5, 0);
						if (bParam2)
						{
							if (BitTest(iVar0, 0))
							{
								return iParam0;
							}
						}
					}
				}
				break;
			case 1:
				if (__LIB_31__.func_968(iParam3, iParam0))
				{
					if (__LIB_1__.func_556(__LIB_1__.func_368(4, iParam0), iParam5, 0) == 0)
					{
						return iParam0;
					}
				}
				if (bParam2)
				{
					if (__LIB_31__.func_968(iParam3, iParam0))
					{
						iVar0 = __LIB_1__.func_556(__LIB_1__.func_368(1, iParam0), iParam5, 0);
						if (BitTest(iVar0, 0))
						{
							return iParam0;
						}
					}
				}
				if (__LIB_31__.func_968(iParam3, iParam0))
				{
					iVar0 = __LIB_1__.func_556(__LIB_1__.func_368(1, iParam0), iParam5, 0);
					if (BitTest(iVar0, 1) && !BitTest(iVar0, 2))
					{
						return iParam0;
					}
				}
				break;
			case 2:
				if (__LIB_31__.func_968(iParam3, iParam0))
				{
					if (__LIB_1__.func_556(__LIB_1__.func_368(4, iParam0), iParam5, 0) == 0)
					{
						return iParam0;
					}
					else
					{
						iVar0 = __LIB_1__.func_556(__LIB_1__.func_368(1, iParam0), iParam5, 0);
						if (bParam2)
						{
							if (BitTest(iVar0, 0))
							{
								return iParam0;
							}
							else if (BitTest(iVar0, 1))
							{
								return iParam0;
							}
						}
						else if (BitTest(iVar0, 1))
						{
							return iParam0;
						}
					}
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				if (!__LIB_31__.func_968(iParam3, iParam0))
				{
				}
				else if (Global_1585857[iParam0 /*142*/].f_66 == 0)
				{
					return iParam0;
				}
				else if (bParam2)
				{
					if (BitTest(Global_1585857[iParam0 /*142*/].f_103, 0))
					{
						return iParam0;
					}
				}
				break;
			case 1:
				if (!__LIB_31__.func_968(iParam3, iParam0))
				{
				}
				else if (Global_1585857[iParam0 /*142*/].f_66 == 0)
				{
					return iParam0;
				}
				if (bParam2)
				{
					if (!__LIB_31__.func_968(iParam3, iParam0))
					{
					}
					else if (BitTest(Global_1585857[iParam0 /*142*/].f_103, 0))
					{
						return iParam0;
					}
				}
				if (!__LIB_31__.func_968(iParam3, iParam0))
				{
				}
				else if (BitTest(Global_1585857[iParam0 /*142*/].f_103, 1) && !BitTest(Global_1585857[iParam0 /*142*/].f_103, 2))
				{
					return iParam0;
				}
				else if (BitTest(Global_1585857[iParam0 /*142*/].f_103, 1))
				{
				}
				break;
			case 2:
				if (!__LIB_31__.func_968(iParam3, iParam0))
				{
				}
				else if (Global_1585857[iParam0 /*142*/].f_66 == 0)
				{
					return iParam0;
				}
				else if (bParam2)
				{
					if (BitTest(Global_1585857[iParam0 /*142*/].f_103, 0))
					{
						return iParam0;
					}
					else if (BitTest(Global_1585857[iParam0 /*142*/].f_103, 1))
					{
						return iParam0;
					}
				}
				else if (BitTest(Global_1585857[iParam0 /*142*/].f_103, 1))
				{
					return iParam0;
				}
				break;
			}
	}
	return -1;
}

void func_970(var uParam0)//Position - 0xF8EC5
{
	int iVar0;
	struct<4> Var1;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2))
	{
		if (MISC::ARE_STRINGS_EQUAL(uParam0->f_2, "MP_RGSUBM_T_1e" /* GXT: A guided missile can be launched from this station again in ~a~.~n~Press ~INPUT_CONTEXT~ to stand up. */))
		{
			if (__LIB_4__.func_410())
			{
				iVar0 = __LIB_4__.func_409(Global_1853194);
				if (iVar0 != -1)
				{
					iVar0 = (__LIB_4__.func_407() - iVar0);
					if (iVar0 < 0)
					{
						iVar0 = 0;
					}
					Var1 = { __LIB_3__.func_992(iVar0, 0, 1) };
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(uParam0->f_2);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Var1);
					HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, 100);
				}
			}
			if (!__LIB_4__.func_426() && !__LIB_8__.func_698())
			{
				if (__LIB_7__.func_987(1))
				{
					HUD::CLEAR_HELP(true);
					uParam0->f_2 = __LIB_25__.func_653(1);
				}
			}
			else if (!__LIB_4__.func_426())
			{
				if (__LIB_0__.func_1("MP_SUBSEAT_2" /* GXT: Press ~INPUT_CELLPHONE_SELECT~ to launch a guided missile. ~n~Press ~INPUT_CONTEXT~ to stand up. */))
				{
					HUD::CLEAR_HELP(true);
				}
			}
		}
		else if ((!__LIB_0__.func_1(uParam0->f_2) && __LIB_4__.func_410()) && !__LIB_4__.func_426())
		{
			__LIB_0__.func_187(uParam0->f_2);
		}
	}
}

int func_971(int* iParam0, struct<3> Param1, struct<3> Param2, float fParam3, struct<3> Param4, struct<3> Param5, float fParam6, bool bParam7, struct<3> Param8, struct<3> Param9, float fParam10, struct<3> Param11, struct<3> Param12, float fParam13, bool bParam14, float fParam15, float fParam16)//Position - 0x119153
{
	int iVar0;
	int iVar1;
	iVar0 = 5000;
	iVar1 = 3500;
	if (bParam14)
	{
		iVar1 = 2350;
	}
	if (bParam7)
	{
		iVar0 = 3750;
	}
	__LIB_25__.func_103(iParam0, iVar0, "zoom_sustain", Param1, Param2, fParam3, Param4, Param5, fParam6, fParam15, 0, 0, 0, 0, 0);
	if (!bParam7)
	{
		__LIB_25__.func_103(iParam0, iVar1, "above", Param8, Param9, fParam10, Param11, Param12, fParam13, fParam16, 0, 1000, 0, 0, 0);
	}
	return 1;
}

void func_972(var uParam0, var uParam1)//Position - 0x11A80A
{
	__LIB_25__.func_141(uParam0, 1);
}

int func_973(bool bParam0, int iParam1, var uParam2)//Position - 0x12AFC8
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (bParam0 != __LIB_0__.func_160())
	{
		if (iParam1 != -1)
		{
			if (Global_1946250.f_3614)
			{
				return 0;
			}
			if (Global_1892703[bParam0 /*599*/].f_10.f_32 == 148)
			{
				return 0;
			}
			if (__LIB_2__.func_499())
			{
				return 0;
			}
			if (__LIB_0__.func_77(0))
			{
				return 0;
			}
			if (__LIB_2__.func_477())
			{
				return 0;
			}
			if (__LIB_2__.func_476(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_8__.func_108(PLAYER::PLAYER_ID(), 1))
			{
				return 0;
			}
			if (__LIB_7__.func_701(bParam0) && !__LIB_1__.func_425(bParam0, 0))
			{
				return 0;
			}
			if (PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
			{
				return 0;
			}
			iVar0 = -1;
			if (__LIB_1__.func_425(PLAYER::PLAYER_ID(), 0))
			{
				iVar0 = __LIB_3__.func_803(PLAYER::PLAYER_ID());
				switch (iVar0)
				{
					case 192:
					case 190:
					case 167:
					case 168:
					case 178:
					case 188:
					case 225:
					case 226:
					case 229:
					case 230:
					case 233:
					case 237:
					case 271:
						return 0;
						break;
					}
			}
			if (iVar0 != 263 && iVar0 != 264)
			{
				if (__LIB_1__.func_909())
				{
					return 0;
				}
				if (__LIB_25__.func_142(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && __LIB_0__.func_306(PLAYER::PLAYER_PED_ID(), 0) == -1)
			{
				if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
				{
					iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (!__LIB_25__.func_143(iVar1))
					{
						return 0;
					}
				}
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(bParam0), false))
			{
				if (__LIB_4__.func_682(bParam0, 0) && __LIB_0__.func_306(PLAYER::PLAYER_PED_ID(), 0) == -1)
				{
					if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
					{
						iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
						if (__LIB_8__.func_54(iVar2))
						{
							if (__LIB_4__.func_112(__LIB_0__.func_582(), __LIB_2__.func_433(iParam1)))
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
				if (__LIB_7__.func_710(iParam1, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
				{
					return 1;
				}
				else
				{
					iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (ENTITY::DOES_ENTITY_EXIST(iVar3) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iVar3)))
					{
						return 0;
					}
				}
			}
			if (__LIB_4__.func_682(bParam0, 0))
			{
				if (__LIB_4__.func_112(__LIB_2__.func_191(bParam0), __LIB_2__.func_433(iParam1)))
				{
					return 1;
				}
			}
			else
			{
				if (__LIB_7__.func_800(PLAYER::PLAYER_ID()) == iParam1)
				{
					return 1;
				}
				if (__LIB_19__.func_17(iParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_974(var uParam0, int iParam1)//Position - 0x13AC81
{
	__LIB_4__.func_339(iParam1);
	if (__LIB_2__.func_575(PLAYER::PLAYER_ID()))
	{
		__LIB_25__.func_617();
		__LIB_1__.func_409(1);
	}
}

void func_975(var uParam0, var uParam1)//Position - 0x15F5C3
{
	__LIB_2__.func_846();
	__LIB_25__.func_141(uParam0, 1);
}

void func_976(var uParam0, var uParam1)//Position - 0x172AC9
{
	__LIB_25__.func_150(uParam0, 1);
}

void func_977(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)//Position - 0x17A724
{
	if (bParam0)
	{
		if (__LIB_1__.func_310())
		{
			__LIB_1__.func_543();
		}
		Global_2667225.f_714.f_518 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2667225.f_714.f_504 = iParam1;
		Global_2667225.f_714.f_505 = iParam2;
		Global_2667225.f_714.f_506 = iParam10;
		__LIB_6__.func_967();
		__LIB_18__.func_681(8, 0, 0, 0, 0);
		Global_2667225.f_714.f_507 = iParam11;
		Global_2667225.f_714.f_512 = iParam3;
		Global_2667225.f_714.f_513 = iParam4;
		Global_2667225.f_714.f_510 = iParam5;
		Global_2667225.f_714.f_511 = iParam6;
		Global_2667225.f_714.f_514 = iParam7;
		Global_2667225.f_714.f_515 = iParam8;
		Global_2667225.f_714.f_516 = iParam9;
		Global_2667225.f_714.f_517 = iParam14;
		Global_2667225.f_714.f_508 = iParam12;
		Global_2667225.f_714.f_509 = iParam13;
		Global_2667225.f_1753 = 1;
	}
	else
	{
		__LIB_25__.func_191();
	}
}

void func_978(var uParam0, var uParam1)//Position - 0x182132
{
	__LIB_25__.func_153(uParam0, 1);
}

void func_979(var uParam0, var uParam1)//Position - 0x189CF4
{
	__LIB_6__.func_404(&(uParam0->f_22.f_94));
	__LIB_3__.func_50(0);
	__LIB_25__.func_156(uParam0, 1);
}

int func_980(var uParam0, var uParam1)//Position - 0x19BEC4
{
	bool bVar0;
	if (!BitTest(Global_1946250.f_506, 0))
	{
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 != __LIB_0__.func_160())
		{
			if (!__LIB_1__.func_264(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9, 0, 1) && (!__LIB_4__.func_102(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9) || __LIB_4__.func_379(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9)))
			{
				MISC::SET_BIT(&(Global_1946250.f_506), 7);
				return 1;
			}
		}
	}
	else if (BitTest(Global_1946250.f_506, 0))
	{
		if (__LIB_4__.func_682(PLAYER::PLAYER_ID(), 0) && (!__LIB_4__.func_102(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9) || __LIB_4__.func_379(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9)))
		{
			bVar0 = __LIB_0__.func_582();
			if (bVar0 != __LIB_0__.func_160())
			{
				__LIB_2__.func_736(1);
				return 1;
			}
		}
	}
	if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 != __LIB_0__.func_160())
	{
		if (!BitTest(Global_1946250.f_506, 0))
		{
			if (__LIB_4__.func_682(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9, 0))
			{
				MISC::SET_BIT(&(Global_1946250.f_506), 8);
				return 1;
			}
		}
		if ((__LIB_4__.func_376(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9) && PLAYER::PLAYER_ID() != Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9) || __LIB_4__.func_378(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && __LIB_4__.func_21(PLAYER::PLAYER_ID(), 0))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
				if (!BitTest(Global_1946250.f_506, 10))
				{
					MISC::SET_BIT(&(Global_1946250.f_506), 10);
				}
			}
			else if ((TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_VEHICLE")) != 0) && !TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
			{
				return 1;
			}
		}
		if ((BitTest(Global_1946250.f_506, 10) && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_VEHICLE")) != 1) && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_VEHICLE")) != 0)
		{
			return 1;
		}
		if (Global_2815059.f_317 && Global_2815059.f_320)
		{
			return 1;
		}
		if (__LIB_4__.func_377(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9))
		{
			return 1;
		}
		if (PLAYER::PLAYER_ID() != Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9)
		{
			if (!__LIB_4__.func_682(PLAYER::PLAYER_ID(), 1) || !__LIB_3__.func_999(PLAYER::PLAYER_ID(), Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9))
			{
				if (__LIB_22__.func_170(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9))
				{
					return 1;
				}
			}
		}
	}
	if (Global_1835491)
	{
		return 1;
	}
	return 0;
}

void func_981(var uParam0, var uParam1)//Position - 0x1B92C5
{
	__LIB_25__.func_167(uParam0, 1);
}

void func_982(var uParam0, var uParam1)//Position - 0x1C9F58
{
	if (BitTest(uParam0->f_22, 7))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false));
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false);
				}
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_22.f_256) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_22.f_256, false))
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam0->f_22.f_256);
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_22.f_256))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_22.f_256, false);
			}
		}
	}
	__LIB_25__.func_168(uParam0, 1);
	__LIB_3__.func_307(0);
	__LIB_6__.func_404(&(uParam0->f_22.f_94));
}

void func_983(var uParam0, var uParam1)//Position - 0x1E052B
{
	__LIB_6__.func_404(&(uParam0->f_22.f_94));
	__LIB_3__.func_343(0);
	MISC::CLEAR_BIT(&Global_1946250, 10);
	if (BitTest(uParam0->f_22, 7))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false);
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_22.f_256) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_22.f_256, false))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_22.f_256, false);
		}
	}
	MISC::CLEAR_BIT(&Global_1946250, 15);
	__LIB_25__.func_171(uParam0, 1);
}

int func_984()//Position - 0x937B4
{
	bool bVar0;
	if (__LIB_4__.func_682(PLAYER::PLAYER_ID(), 0))
	{
		bVar0 = __LIB_0__.func_582();
		if (__LIB_1__.func_264(bVar0, 0, 0))
		{
			if (__LIB_25__.func_136(bVar0, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_985(bool bParam0, var uParam1)//Position - 0xAA019
{
	bool bVar0;
	bVar0 = __LIB_25__.func_142(bParam0);
	if (bVar0 && __LIB_25__.func_114(bParam0))
	{
		bVar0 = false;
	}
	if (((bParam0 != __LIB_0__.func_160() && __LIB_1__.func_264(bParam0, 0, 1)) && !__LIB_0__.func_811(PLAYER::GET_PLAYER_PED(bParam0))) && !bVar0)
	{
		return 1;
	}
	return 0;
}

int func_986(bool bParam0)//Position - 0xB4F37
{
	if (!__LIB_25__.func_218(60, 0, 0) && !bParam0)
	{
		return 0;
	}
	if (__LIB_0__.func_905(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (__LIB_0__.func_904(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (__LIB_1__.func_299(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (__LIB_0__.func_698())
	{
		return 0;
	}
	if (__LIB_0__.func_697())
	{
		return 0;
	}
	if (Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 1 || Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 3)
	{
		return 0;
	}
	if (Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 32)
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (__LIB_2__.func_500() || __LIB_0__.func_725())
		{
			return 0;
		}
	}
	if (BitTest(Global_4718592.f_33, 23))
	{
		return 0;
	}
	if (__LIB_7__.func_807(PLAYER::PLAYER_ID(), 191))
	{
		return 1;
	}
	if (__LIB_7__.func_628(PLAYER::PLAYER_ID(), 1, 0))
	{
		return 0;
	}
	if (__LIB_1__.func_557())
	{
		return 0;
	}
	if (__LIB_1__.func_41())
	{
		return 0;
	}
	if (Global_1836749)
	{
		return 0;
	}
	if (__LIB_0__.func_155(0))
	{
		return 0;
	}
	if (__LIB_7__.func_211(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (__LIB_1__.func_288())
	{
		return 0;
	}
	return 1;
}

int func_987(int iParam0, int iParam1)//Position - 0xB7D47
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bVar0 = false;
	if (__LIB_1__.func_425(PLAYER::PLAYER_ID(), 0) || __LIB_1__.func_909())
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (iParam1 == 4 || iParam1 == 6)
		{
			if (!__LIB_25__.func_219(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == 5 || iParam1 == 6)
	{
		if (!__LIB_4__.func_117(PLAYER::PLAYER_ID()))
		{
			return !__LIB_19__.func_17(iParam0);
		}
	}
	else if (iParam1 == 2)
	{
		if (__LIB_0__.func_121(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		{
			iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				bVar2 = __LIB_4__.func_337(iVar1);
				if (__LIB_1__.func_264(bVar2, 1, 1))
				{
					if (!__LIB_4__.func_113(bVar2))
					{
						return 1;
					}
				}
			}
		}
	}
	else
	{
		bVar3 = PLAYER::PLAYER_ID();
		if (__LIB_4__.func_973(1))
		{
			bVar3 = __LIB_0__.func_582();
		}
		if (iParam1 == 3)
		{
			if (!__LIB_4__.func_113(bVar3))
			{
				return 1;
			}
		}
		return __LIB_7__.func_800(bVar3) != iParam0;
	}
	return 0;
}

void func_988(int iParam0, var uParam1)//Position - 0xD4E03
{
	int iVar0;
	float fVar1;
	if (__LIB_2__.func_675())
	{
		if (uParam1->f_218 == -1)
		{
			uParam1->f_218 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(uParam1->f_218, "Sink", "DLC_H4_Submarine_Sinking_Sounds", true);
			CAM::SHAKE_GAMEPLAY_CAM("MEDIUM_EXPLOSION_SHAKE", 0.25f);
			CAM::DO_SCREEN_FADE_OUT(750);
		}
		else if (AUDIO::HAS_SOUND_FINISHED(uParam1->f_218))
		{
			MISC::CLEAR_BIT(&(Global_1946250.f_7), 24);
		}
	}
	else if (__LIB_3__.func_842())
	{
		if (!BitTest(uParam1->f_188, 0))
		{
			if (__LIB_0__.func_121(uParam1->f_140[0]))
			{
				ENTITY::SET_ENTITY_VISIBLE(uParam1->f_140[0], true, false);
				MISC::SET_BIT(&(uParam1->f_188), 0);
			}
		}
	}
	else
	{
		if (!BitTest(uParam1->f_188, 1))
		{
			if (__LIB_25__.func_227(uParam1))
			{
				MISC::SET_BIT(&(uParam1->f_188), 1);
			}
		}
		if (__LIB_2__.func_413(&(Global_1946250.f_4073), 0) || __LIB_2__.func_413(&(Global_1946250.f_4073), 1))
		{
			if (!BitTest(uParam1->f_188, 0))
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (__LIB_0__.func_121(uParam1->f_176[iVar0]))
					{
						if (!ENTITY::IS_ENTITY_VISIBLE(uParam1->f_176[iVar0]))
						{
							ENTITY::SET_ENTITY_VISIBLE(uParam1->f_176[iVar0], true, false);
						}
					}
					iVar0++;
				}
				if (__LIB_0__.func_121(uParam1->f_109))
				{
					if (!ENTITY::IS_ENTITY_VISIBLE(uParam1->f_109))
					{
						ENTITY::SET_ENTITY_VISIBLE(uParam1->f_109, true, false);
					}
				}
				if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
				{
					CAM::DO_SCREEN_FADE_IN(322);
				}
				MISC::SET_BIT(&(uParam1->f_188), 0);
				__LIB_2__.func_670(1);
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Global_1946250.f_4073.f_394))
			{
				fVar1 = PED::GET_SYNCHRONIZED_SCENE_PHASE(Global_1946250.f_4073.f_394);
				__LIB_18__.func_564(uParam1, fVar1, 1);
			}
			if (AUDIO::IS_VEHICLE_RADIO_ON(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
			{
				AUDIO::SET_RADIO_TO_STATION_NAME("OFF");
			}
		}
	}
	if (!Global_1946250.f_4073.f_386)
	{
		if (!__LIB_3__.func_842())
		{
			__LIB_7__.func_375(0, iParam0);
		}
	}
}

void func_989(var uParam0, var uParam1)//Position - 0xE5F7E
{
	__LIB_6__.func_404(&(uParam0->f_22.f_94));
	__LIB_2__.func_717(0);
	__LIB_25__.func_231(uParam0, 1);
	if (uParam0->f_413 != -1 && !__LIB_3__.func_998(PLAYER::PLAYER_ID()))
	{
		if (BitTest(Global_1946250.f_13, uParam0->f_413))
		{
			MISC::CLEAR_BIT(&(Global_1946250.f_13), uParam0->f_413);
			if (BitTest(Global_1946250.f_13, uParam0->f_413))
			{
				AUDIO::UNHINT_SCRIPT_AUDIO_BANK();
				AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK(__LIB_2__.func_716());
			}
		}
		uParam0->f_413 = -1;
	}
	Global_1946229 = 0;
}

void func_990(int iParam0, var uParam1)//Position - 0xF3B6B
{
	int iVar0;
	char* sVar1;
	struct<4> Var2;
	int iVar3;
	int iVar4;
	float fVar5;
	struct<3> Var6;
	struct<3> Var7;
	bool bVar8;
	sVar1 = __LIB_2__.func_811(iVar0, iParam0);
	if (Global_1853192 != __LIB_0__.func_160())
	{
		if (BitTest(Global_2689235[Global_1853192 /*453*/].f_318.f_4, 21))
		{
			iVar0 = 0;
			sVar1 = __LIB_2__.func_811(iVar0, iParam0);
		}
		else if (BitTest(Global_2689235[Global_1853192 /*453*/].f_318.f_4, 22))
		{
			iVar0 = 1;
			sVar1 = __LIB_2__.func_811(iVar0, iParam0);
		}
		else if (BitTest(Global_2689235[Global_1853192 /*453*/].f_318.f_4, 23))
		{
			iVar0 = 2;
			sVar1 = __LIB_2__.func_811(iVar0, iParam0);
		}
	}
	if ((__LIB_0__.func_725() || __LIB_7__.func_47()) || NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (BitTest(Global_1946250.f_2, 21))
		{
			if (CAM::DOES_CAM_EXIST(uParam1->f_11))
			{
				if (!BitTest(uParam1->f_188, 9))
				{
					__LIB_2__.func_419();
					NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(PLAYER::PLAYER_PED_ID(), true, true);
					iVar4 = 0;
					while (iVar4 < 32)
					{
						iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar4);
						if (iVar3 != __LIB_0__.func_160())
						{
							if (__LIB_0__.func_121(PLAYER::GET_PLAYER_PED(iVar3)))
							{
								NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(PLAYER::GET_PLAYER_PED(iVar3), true, true);
								if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(PLAYER::GET_PLAYER_PED(iVar3)))
								{
									PED::SET_FORCE_FOOTSTEP_UPDATE(PLAYER::GET_PLAYER_PED(iVar3), true);
								}
							}
						}
						iVar4++;
					}
					__LIB_19__.func_2(0, 1, 0);
					if (CAM::IS_CAM_ACTIVE(uParam1->f_11))
					{
						CAM::DESTROY_CAM(uParam1->f_11, false);
					}
					uParam1->f_11 = CAM::CREATE_CAMERA(joaat("DEFAULT_ANIMATED_CAMERA"), true);
					Var2 = { __LIB_2__.func_821(iParam0) };
					Var2.f_3 = { 0f, 0f, 0f };
					uParam1->f_27 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Var2, Var2.f_3, 2, false, false, 1f, 0f, 1f);
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam1->f_27, sVar1, __LIB_7__.func_312(iParam0, iVar0, Global_2824888), 1000f, -1000f, 1, 0, 1000f, 0);
					if (Global_1853192 == PLAYER::PLAYER_ID() && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam1->f_257))
					{
						NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(uParam1->f_257), uParam1->f_27, sVar1, __LIB_2__.func_820(iParam0, iVar0), 1000f, -1000f, 1);
					}
					if (CAM::DOES_CAM_EXIST(uParam1->f_11))
					{
						CAM::PLAY_CAM_ANIM(uParam1->f_11, __LIB_2__.func_819(iParam0, iVar0), sVar1, Var2, Var2.f_3, false, 2);
					}
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam1->f_27);
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
					__LIB_18__.func_843(1, 1, 1, 0, 0, 0, 0);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					__LIB_7__.func_449(uParam1, 1);
					MISC::SET_BIT(&(uParam1->f_188), 9);
				}
				else if (!BitTest(uParam1->f_188, 10))
				{
					if (uParam1->f_27 != -1)
					{
						__LIB_25__.func_148(0, 0);
						__LIB_16__.func_621(0, 0, 1);
						__LIB_7__.func_311();
						GRAPHICS::ANIMPOSTFX_STOP("MP_job_load");
						STREAMING::NEW_LOAD_SCENE_STOP();
						__LIB_25__.func_112(PLAYER::PLAYER_ID(), 0, 0, 0);
						MISC::SET_BIT(&(uParam1->f_188), 10);
					}
				}
				else if (!BitTest(uParam1->f_188, 11))
				{
					if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
					{
						CAM::DO_SCREEN_FADE_IN(1500);
					}
					if (uParam1->f_27 != -1 && NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam1->f_27) != -1)
					{
						if ((ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("cam_end")) || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("breakout"))) || (NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam1->f_27) != -1 && PED::GET_SYNCHRONIZED_SCENE_PHASE(NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam1->f_27)) >= 0.95f))
						{
							if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
							{
								MISC::SET_BIT(&(uParam1->f_188), 11);
							}
							else
							{
								uParam1->f_12 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), false);
								if (CAM::DOES_CAM_EXIST(uParam1->f_11))
								{
									fVar5 = CAM::GET_CAM_FOV(uParam1->f_11);
									Var6 = { __LIB_2__.func_816(iParam0, Global_2824888) };
									Var7 = { __LIB_2__.func_815(iParam0, Global_2824888) };
									CAM::SET_CAM_ACTIVE(uParam1->f_11, false);
								}
								if (CAM::DOES_CAM_EXIST(uParam1->f_12))
								{
									CAM::SET_CAM_PARAMS(uParam1->f_12, Var6, Var7, fVar5, 0, 1, 1, 2);
									CAM::SET_CAM_ACTIVE(uParam1->f_12, true);
									MISC::SET_BIT(&(uParam1->f_188), 11);
								}
							}
						}
					}
					else
					{
						MISC::SET_BIT(&(uParam1->f_188), 11);
					}
				}
				else if (!BitTest(uParam1->f_188, 12))
				{
					bVar8 = true;
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
					{
						bVar8 = false;
					}
					CAM::FORCE_CAMERA_RELATIVE_HEADING_AND_PITCH(__LIB_2__.func_814(iParam0, Global_2824888), __LIB_2__.func_813(iParam0, Global_2824888), 1f);
					if (CAM::DOES_CAM_EXIST(uParam1->f_11))
					{
						CAM::SET_CAM_ACTIVE(uParam1->f_11, false);
					}
					CAM::RENDER_SCRIPT_CAMS(false, bVar8, 2000, true, true, 0);
					MISC::SET_BIT(&(uParam1->f_188), 12);
				}
				else
				{
					if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
					{
						CAM::DO_SCREEN_FADE_IN(1500);
					}
					if (((uParam1->f_27 != -1 && (NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam1->f_27) != -1 && PED::GET_SYNCHRONIZED_SCENE_PHASE(NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam1->f_27)) >= 0.95f)) || __LIB_7__.func_448()) || !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar1, __LIB_7__.func_312(iParam0, iVar0, Global_2824888), 3))
					{
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						__LIB_25__.func_112(PLAYER::PLAYER_ID(), 1, 0, 0);
						MISC::SET_BIT(&(uParam1->f_188), 0);
					}
				}
			}
			else
			{
				uParam1->f_11 = CAM::CREATE_CAMERA(joaat("DEFAULT_ANIMATED_CAMERA"), false);
			}
		}
	}
}

void func_991(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0x1A7847
{
	*uParam3 = __LIB_3__.func_585(PLAYER::PLAYER_ID());
	__LIB_25__.func_179(uParam0);
}

int func_992(int iParam0, var* uParam1)//Position - 0x2F864
{
	int iVar0;
	bool bVar1;
	if (NETWORK::NETWORK_IS_HANDLE_VALID(uParam1, 13) && NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(uParam1))
	{
		iVar0 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uParam1);
	}
	else
	{
		iVar0 = __LIB_0__.func_160();
	}
	bVar1 = false;
	if (iVar0 == PLAYER::PLAYER_ID())
	{
		if (__LIB_18__.func_655(15, 0))
		{
			bVar1 = true;
		}
		else if (__LIB_18__.func_447(1))
		{
			bVar1 = true;
		}
	}
	else
	{
		bVar1 = true;
	}
	if (((((((!(ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0)) || !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true)) || !((NETWORK::NETWORK_IS_HANDLE_VALID(uParam1, 13) && NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()) && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam1))) || iVar0 == __LIB_0__.func_160()) || !__LIB_1__.func_264(iVar0, 0, 0)) || !bVar1) || __LIB_18__.func_900(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_993(int iParam0, int iParam1, int iParam2)//Position - 0x73049
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
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	switch (iParam0)
	{
		case joaat("mpSum2_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Sum2_Tee_000_M"):
				case joaat("MP_Sum2_Tee_000_F"):
					if (__LIB_0__.func_137(34505, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Sum2_Tee_000_M"));
					break;
				case joaat("MP_Sum2_Tee_001_M"):
				case joaat("MP_Sum2_Tee_001_F"):
					if (__LIB_0__.func_137(34375, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Sum2_Tee_001_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpTuner_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Tuner_Tee_000_M"):
				case joaat("MP_Tuner_Tee_000_F"):
					if (__LIB_1__.func_596(116, -1) >= __LIB_0__.func_238(116, 5, 9) || __LIB_0__.func_137(31760, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_000_M"));
					break;
				case joaat("MP_Tuner_Tee_002_M"):
				case joaat("MP_Tuner_Tee_002_F"):
					if (__LIB_1__.func_595(123, -1) || __LIB_0__.func_137(31761, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_002_M"));
					break;
				case joaat("MP_Tuner_Tee_003_M"):
				case joaat("MP_Tuner_Tee_003_F"):
					if (__LIB_1__.func_595(124, -1) || __LIB_0__.func_137(31762, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_003_M"));
					break;
				case joaat("MP_Tuner_Tee_005_M"):
				case joaat("MP_Tuner_Tee_005_F"):
					if (__LIB_1__.func_595(125, -1) || __LIB_0__.func_137(31763, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_005_M"));
					break;
				case joaat("MP_Tuner_Tee_006_M"):
				case joaat("MP_Tuner_Tee_006_F"):
					if (__LIB_1__.func_595(126, -1) || __LIB_0__.func_137(31764, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_006_M"));
					break;
				case joaat("MP_Tuner_Tee_008_M"):
				case joaat("MP_Tuner_Tee_008_F"):
					if (__LIB_0__.func_137(31768, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_008_M"));
					break;
				case joaat("MP_Tuner_Tee_010_M"):
				case joaat("MP_Tuner_Tee_010_F"):
					if (__LIB_0__.func_137(31769, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_010_M"));
					break;
				case joaat("MP_Tuner_Tee_011_M"):
				case joaat("MP_Tuner_Tee_011_F"):
					if (__LIB_0__.func_137(31770, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_011_M"));
					break;
				case joaat("MP_Tuner_Tee_012_M"):
				case joaat("MP_Tuner_Tee_012_F"):
					if (__LIB_0__.func_137(31771, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_012_M"));
					break;
				case joaat("MP_Tuner_Tee_013_M"):
				case joaat("MP_Tuner_Tee_013_F"):
					if (__LIB_0__.func_137(31772, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_013_M"));
					break;
				case joaat("MP_Tuner_Tee_014_M"):
				case joaat("MP_Tuner_Tee_014_F"):
					if (__LIB_0__.func_137(31773, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_014_M"));
					break;
				case joaat("MP_Tuner_Tee_015_M"):
				case joaat("MP_Tuner_Tee_015_F"):
					if (__LIB_0__.func_137(31774, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_015_M"));
					break;
				case joaat("MP_Tuner_Tee_016_M"):
				case joaat("MP_Tuner_Tee_016_F"):
					if (__LIB_0__.func_137(31775, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_016_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist4_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Heist4_Tee_030_M"):
				case joaat("MP_Heist4_Tee_030_F"):
					if (__LIB_0__.func_137(30533, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_030_M"));
					break;
				case joaat("MP_Heist4_Tee_032_M"):
				case joaat("MP_Heist4_Tee_032_F"):
					if (__LIB_0__.func_137(30534, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_032_M"));
					break;
				case joaat("MP_Heist4_Tee_028_M"):
				case joaat("MP_Heist4_Tee_028_F"):
					if (__LIB_0__.func_137(30535, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_028_M"));
					break;
				case joaat("MP_Heist4_Tee_029_M"):
				case joaat("MP_Heist4_Tee_029_F"):
					if (__LIB_0__.func_137(30536, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_029_M"));
					break;
				case joaat("MP_Heist4_Tee_031_M"):
				case joaat("MP_Heist4_Tee_031_F"):
					if (__LIB_0__.func_137(30537, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_031_M"));
					break;
				case joaat("MP_Heist4_Tee_022_M"):
				case joaat("MP_Heist4_Tee_022_F"):
					if (__LIB_0__.func_137(30538, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_022_M"));
					break;
				case joaat("MP_Heist4_Tee_023_M"):
				case joaat("MP_Heist4_Tee_023_F"):
					if (__LIB_0__.func_137(30539, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_023_M"));
					break;
				case joaat("MP_Heist4_Tee_020_M"):
				case joaat("MP_Heist4_Tee_020_F"):
					if (__LIB_0__.func_137(30540, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_020_M"));
					break;
				case joaat("MP_Heist4_Tee_021_M"):
				case joaat("MP_Heist4_Tee_021_F"):
					if (__LIB_0__.func_137(30541, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_021_M"));
					break;
				case joaat("MP_Heist4_Tee_003_M"):
				case joaat("MP_Heist4_Tee_003_F"):
					if (__LIB_0__.func_137(30542, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_003_M"));
					break;
				case joaat("MP_Heist4_Tee_004_M"):
				case joaat("MP_Heist4_Tee_004_F"):
					if (__LIB_0__.func_137(30543, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_004_M"));
					break;
				case joaat("MP_Heist4_Tee_005_M"):
				case joaat("MP_Heist4_Tee_005_F"):
					if (__LIB_0__.func_137(30544, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_005_M"));
					break;
				case joaat("MP_Heist4_Tee_006_M"):
				case joaat("MP_Heist4_Tee_006_F"):
					if (__LIB_0__.func_137(30545, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_006_M"));
					break;
				case joaat("MP_Heist4_Tee_027_M"):
				case joaat("MP_Heist4_Tee_027_F"):
					if (__LIB_0__.func_137(30546, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_027_M"));
					break;
				case joaat("MP_Heist4_Tee_026_M"):
				case joaat("MP_Heist4_Tee_026_F"):
					if (__LIB_0__.func_137(30547, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_026_M"));
					break;
				case joaat("MP_Heist4_Tee_025_M"):
				case joaat("MP_Heist4_Tee_025_F"):
					if (__LIB_0__.func_137(30548, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_025_M"));
					break;
				case joaat("MP_Heist4_Tee_024_M"):
				case joaat("MP_Heist4_Tee_024_F"):
					if (__LIB_0__.func_137(30549, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_024_M"));
					break;
				case joaat("MP_Heist4_Tee_002_M"):
				case joaat("MP_Heist4_Tee_002_F"):
					if (__LIB_0__.func_137(30550, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_002_M"));
					break;
				case joaat("MP_Heist4_Tee_001_M"):
				case joaat("MP_Heist4_Tee_001_F"):
					if (__LIB_0__.func_137(30551, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_001_M"));
					break;
				case joaat("MP_Heist4_Tee_000_M"):
				case joaat("MP_Heist4_Tee_000_F"):
					if (__LIB_0__.func_137(30552, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_000_M"));
					break;
				case joaat("MP_Heist4_Tee_007_M"):
				case joaat("MP_Heist4_Tee_007_F"):
					if (__LIB_0__.func_137(30553, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_007_M"));
					break;
				case joaat("MP_Heist4_Tee_008_M"):
				case joaat("MP_Heist4_Tee_008_F"):
					if (__LIB_0__.func_137(30554, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_008_M"));
					break;
				case joaat("MP_Heist4_Tee_009_M"):
				case joaat("MP_Heist4_Tee_009_F"):
					if (__LIB_0__.func_137(30555, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_009_M"));
					break;
				case joaat("MP_Heist4_Tee_010_M"):
				case joaat("MP_Heist4_Tee_010_F"):
					if (__LIB_0__.func_137(30556, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_010_M"));
					break;
				case joaat("MP_Heist4_Tee_011_M"):
				case joaat("MP_Heist4_Tee_011_F"):
					if (__LIB_0__.func_137(30557, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_011_M"));
					break;
				case joaat("MP_Heist4_Tee_012_M"):
				case joaat("MP_Heist4_Tee_012_F"):
					if (__LIB_0__.func_137(30524, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_012_M"));
					break;
				case joaat("MP_Heist4_Tee_013_M"):
				case joaat("MP_Heist4_Tee_013_F"):
					if (__LIB_0__.func_137(30525, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_013_M"));
					break;
				case joaat("MP_Heist4_Tee_014_M"):
				case joaat("MP_Heist4_Tee_014_F"):
					if (__LIB_0__.func_137(30526, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_014_M"));
					break;
				case joaat("MP_Heist4_Tee_015_M"):
				case joaat("MP_Heist4_Tee_015_F"):
					if (__LIB_0__.func_137(30527, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_015_M"));
					break;
				case joaat("MP_Heist4_Tee_016_M"):
				case joaat("MP_Heist4_Tee_016_F"):
					if (__LIB_0__.func_137(30528, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_016_M"));
					break;
				case joaat("MP_Heist4_Tee_017_M"):
				case joaat("MP_Heist4_Tee_017_F"):
					if (__LIB_0__.func_137(30529, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_017_M"));
					break;
				case joaat("MP_Heist4_Tee_018_M"):
				case joaat("MP_Heist4_Tee_018_F"):
					if (__LIB_0__.func_137(30530, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_018_M"));
					break;
				case joaat("MP_Heist4_Tee_019_M"):
				case joaat("MP_Heist4_Tee_019_F"):
					if (__LIB_0__.func_137(30531, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_019_M"));
					break;
				case joaat("MP_Heist4_Tee_033_M"):
				case joaat("MP_Heist4_Tee_033_F"):
					if (__LIB_0__.func_137(30532, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_033_M"));
					break;
				case joaat("MP_Heist4_Tee_045_M"):
				case joaat("MP_Heist4_Tee_045_F"):
					if (__LIB_0__.func_137(30570, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_045_M"));
					break;
				case joaat("MP_Heist4_Tee_046_M"):
				case joaat("MP_Heist4_Tee_046_F"):
					if (__LIB_0__.func_137(30571, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_046_M"));
					break;
				case joaat("MP_Heist4_Tee_048_M"):
				case joaat("MP_Heist4_Tee_048_F"):
					if (__LIB_0__.func_137(30568, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_048_M"));
					break;
				case joaat("MP_Heist4_Tee_047_M"):
				case joaat("MP_Heist4_Tee_047_F"):
					if (__LIB_0__.func_137(30569, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_047_M"));
					break;
				case joaat("MP_Heist4_Tee_049_M"):
				case joaat("MP_Heist4_Tee_049_F"):
					if (__LIB_0__.func_137(30634, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_049_M"));
					break;
				case joaat("MP_Heist4_Tee_051_M"):
				case joaat("MP_Heist4_Tee_051_F"):
					if (__LIB_0__.func_137(30635, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_051_M"));
					break;
				case joaat("MP_Heist4_Tee_053_M"):
				case joaat("MP_Heist4_Tee_053_F"):
					if (__LIB_0__.func_137(30636, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_053_M"));
					break;
				case joaat("MP_Heist4_Tee_054_M"):
				case joaat("MP_Heist4_Tee_054_F"):
					if (__LIB_0__.func_137(30637, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_054_M"));
					break;
				case joaat("MP_Heist4_Tee_055_M"):
				case joaat("MP_Heist4_Tee_055_F"):
					if (__LIB_0__.func_137(30703, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_055_M"));
					break;
				case joaat("MP_Heist4_Tee_057_M"):
				case joaat("MP_Heist4_Tee_057_F"):
					if (__LIB_0__.func_137(30704, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_057_M"));
					break;
				case joaat("MP_Heist4_Tee_059_M"):
				case joaat("MP_Heist4_Tee_059_F"):
					if (__LIB_0__.func_137(30700, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_059_M"));
					break;
				case joaat("MP_Heist4_Tee_061_M"):
				case joaat("MP_Heist4_Tee_061_F"):
					if (__LIB_0__.func_137(30701, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_061_M"));
					break;
				case joaat("MP_Heist4_Tee_063_M"):
				case joaat("MP_Heist4_Tee_063_F"):
					if (__LIB_0__.func_137(30702, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_063_M"));
					break;
				case joaat("MP_Heist4_Tee_065_M"):
				case joaat("MP_Heist4_Tee_065_F"):
					if (__LIB_0__.func_137(30699, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_065_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpSum_overlays"):
			switch (iParam1)
			{
				case joaat("mpSum_Tee_000_M"):
				case joaat("mpSum_Tee_000_F"):
					if (__LIB_0__.func_137(30260, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_000_M"));
					break;
				case joaat("mpSum_Tee_001_M"):
				case joaat("mpSum_Tee_001_F"):
					if (__LIB_0__.func_137(30261, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_001_M"));
					break;
				case joaat("mpSum_Tee_002_M"):
				case joaat("mpSum_Tee_002_F"):
					if (__LIB_0__.func_137(30262, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_002_M"));
					break;
				case joaat("mpSum_Tee_003_M"):
				case joaat("mpSum_Tee_003_F"):
					if (__LIB_0__.func_137(30263, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_003_M"));
					break;
				case joaat("mpSum_Tee_004_M"):
				case joaat("mpSum_Tee_004_F"):
					if (__LIB_0__.func_137(30264, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_004_M"));
					break;
				case joaat("mpSum_Tee_005_M"):
				case joaat("mpSum_Tee_005_F"):
					if (__LIB_0__.func_137(30265, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_005_M"));
					break;
				case joaat("mpSum_Tee_006_M"):
				case joaat("mpSum_Tee_006_F"):
					if (__LIB_0__.func_137(30266, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_006_M"));
					break;
				case joaat("mpSum_Tee_007_M"):
				case joaat("mpSum_Tee_007_F"):
					if (__LIB_0__.func_137(30267, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_007_M"));
					break;
				case joaat("mpSum_Tee_008_M"):
				case joaat("mpSum_Tee_008_F"):
					if (__LIB_0__.func_137(30268, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_008_M"));
					break;
				case joaat("mpSum_Tee_009_M"):
				case joaat("mpSum_Tee_009_F"):
					if (__LIB_0__.func_137(30269, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_009_M"));
					break;
				case joaat("mpSum_Tee_010_M"):
				case joaat("mpSum_Tee_010_F"):
					if (__LIB_0__.func_137(30270, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_010_M"));
					break;
				case joaat("mpSum_Tee_011_M"):
				case joaat("mpSum_Tee_011_F"):
					if (__LIB_0__.func_137(30271, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_011_M"));
					break;
				case joaat("mpSum_Tee_012_M"):
				case joaat("mpSum_Tee_012_F"):
					if (__LIB_0__.func_137(30272, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_012_M"));
					break;
				case joaat("mpSum_Tee_013_M"):
				case joaat("mpSum_Tee_013_F"):
					if (__LIB_0__.func_137(30273, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_013_M"));
					break;
				case joaat("mpSum_Tee_014_M"):
				case joaat("mpSum_Tee_014_F"):
					if (__LIB_0__.func_137(30274, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_014_M"));
					break;
				case joaat("mpSum_Tee_015_M"):
				case joaat("mpSum_Tee_015_F"):
					if (__LIB_0__.func_137(30275, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_015_M"));
					break;
				case joaat("mpSum_Tee_016_M"):
				case joaat("mpSum_Tee_016_F"):
					if (__LIB_0__.func_137(30276, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_016_M"));
					break;
				case joaat("mpSum_Tee_017_M"):
				case joaat("mpSum_Tee_017_F"):
					if (__LIB_0__.func_137(30277, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_017_M"));
					break;
				case joaat("mpSum_Tee_018_M"):
				case joaat("mpSum_Tee_018_F"):
					if (__LIB_0__.func_137(30278, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_018_M"));
					break;
				case joaat("mpSum_Tee_019_M"):
				case joaat("mpSum_Tee_019_F"):
					if (__LIB_0__.func_137(30279, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_019_M"));
					break;
				case joaat("mpSum_Tee_020_M"):
				case joaat("mpSum_Tee_020_F"):
					if (__LIB_0__.func_137(30280, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_020_M"));
					break;
				case joaat("mpSum_Tee_021_M"):
				case joaat("mpSum_Tee_021_F"):
					if (__LIB_0__.func_137(30281, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_021_M"));
					break;
				case joaat("mpSum_Tee_022_M"):
				case joaat("mpSum_Tee_022_F"):
					if (__LIB_0__.func_137(30282, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_022_M"));
					break;
				case joaat("mpSum_Tee_023_M"):
				case joaat("mpSum_Tee_023_F"):
					if (__LIB_0__.func_137(30283, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_023_M"));
					break;
				case joaat("mpSum_Tee_024_M"):
				case joaat("mpSum_Tee_024_F"):
					if (__LIB_0__.func_137(30284, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_024_M"));
					break;
				case joaat("mpSum_Tee_025_M"):
				case joaat("mpSum_Tee_025_F"):
					if (__LIB_0__.func_137(30285, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_025_M"));
					break;
				case joaat("mpSum_Tee_026_M"):
				case joaat("mpSum_Tee_026_F"):
					if (__LIB_0__.func_137(30286, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_026_M"));
					break;
				case joaat("mpSum_Tee_027_M"):
				case joaat("mpSum_Tee_027_F"):
					if (__LIB_0__.func_137(30287, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_027_M"));
					break;
				case joaat("mpSum_Tee_028_M"):
				case joaat("mpSum_Tee_028_F"):
					if (__LIB_0__.func_137(30288, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_028_M"));
					break;
				case joaat("mpSum_Tee_029_M"):
				case joaat("mpSum_Tee_029_F"):
					if (__LIB_0__.func_137(30289, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_029_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpSum_overlays"):
			switch (iParam1)
			{
				case joaat("mpSum_Tee_030_M"):
				case joaat("mpSum_Tee_030_F"):
					if (__LIB_0__.func_137(28255, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_030_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpSum_overlays"):
			switch (iParam1)
			{
				case joaat("mpSum_Tee_031_M"):
				case joaat("mpSum_Tee_031_F"):
					if (__LIB_1__.func_595(89, -1) || __LIB_0__.func_137(30254, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_031_M"));
					break;
				case joaat("mpSum_Tee_032_M"):
				case joaat("mpSum_Tee_032_F"):
					if (__LIB_1__.func_595(90, -1) || __LIB_0__.func_137(30255, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_032_M"));
					break;
				case joaat("mpSum_Tee_033_M"):
				case joaat("mpSum_Tee_033_F"):
					if (__LIB_1__.func_595(92, -1) || __LIB_0__.func_137(30256, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_033_M"));
					break;
				case joaat("mpSum_Tee_034_M"):
				case joaat("mpSum_Tee_034_F"):
					if ((((__LIB_1__.func_595(89, -1) && __LIB_1__.func_595(90, -1)) && __LIB_1__.func_595(92, -1)) && __LIB_1__.func_595(91, -1)) || __LIB_0__.func_137(30257, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_034_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_001_F"):
				case joaat("mpHeist3_Tee_001_M"):
					if (__LIB_1__.func_595(78, -1) || __LIB_0__.func_137(28199, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_001_M"));
					break;
				case joaat("mpHeist3_Tee_000_F"):
				case joaat("mpHeist3_Tee_000_M"):
					if (((__LIB_1__.func_595(77, -1) && __LIB_1__.func_595(78, -1)) && __LIB_1__.func_596(92, -1) >= __LIB_0__.func_238(92, 5, 9)) || __LIB_0__.func_137(28200, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_000_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_007_F"):
				case joaat("mpHeist3_Tee_008_F"):
				case joaat("mpHeist3_Tee_009_F"):
				case joaat("mpHeist3_Tee_007_M"):
				case joaat("mpHeist3_Tee_008_M"):
				case joaat("mpHeist3_Tee_009_M"):
					if (((__LIB_1__.func_596(93, -1) >= __LIB_0__.func_238(93, 5, 9) && __LIB_1__.func_595(79, -1)) && __LIB_1__.func_595(80, -1)) || __LIB_0__.func_137(28204, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, ((iParam1 == joaat("mpHeist3_Tee_007_M") || iParam1 == joaat("mpHeist3_Tee_008_M")) || iParam1 == joaat("mpHeist3_Tee_009_M")));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_004_F"):
				case joaat("mpHeist3_Tee_004_M"):
					if (__LIB_1__.func_595(81, -1) || __LIB_0__.func_137(28206, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_004_M"));
					break;
				case joaat("mpHeist3_Tee_005_F"):
				case joaat("mpHeist3_Tee_005_M"):
					if (__LIB_1__.func_596(94, -1) >= __LIB_0__.func_238(94, 5, 9) || __LIB_0__.func_137(28207, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_005_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_006_F"):
				case joaat("mpHeist3_Tee_006_M"):
					if (((__LIB_1__.func_595(84, -1) && __LIB_1__.func_595(85, -1)) && __LIB_1__.func_596(97, -1) >= __LIB_0__.func_238(97, 5, 9)) || __LIB_0__.func_137(28212, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_006_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_002_F"):
				case joaat("mpHeist3_Tee_002_M"):
					if (__LIB_0__.func_137(28249, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_002_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_013_F"):
				case joaat("mpHeist3_Tee_013_M"):
					if (__LIB_0__.func_137(28183, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_013_M"));
					break;
				case joaat("mpHeist3_Tee_014_F"):
				case joaat("mpHeist3_Tee_014_M"):
					if (__LIB_0__.func_137(28182, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_014_M"));
					break;
				case joaat("mpHeist3_Tee_015_F"):
				case joaat("mpHeist3_Tee_015_M"):
					if (__LIB_0__.func_137(28184, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_015_M"));
					break;
				case joaat("mpHeist3_Tee_016_F"):
				case joaat("mpHeist3_Tee_016_M"):
					if (__LIB_0__.func_137(28181, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_016_M"));
					break;
				case joaat("mpHeist3_Tee_017_F"):
				case joaat("mpHeist3_Tee_017_M"):
					if (__LIB_0__.func_137(28178, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_017_M"));
					break;
				case joaat("mpHeist3_Tee_018_F"):
				case joaat("mpHeist3_Tee_018_M"):
					if (__LIB_0__.func_137(28177, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_018_M"));
					break;
				case joaat("mpHeist3_Tee_019_F"):
				case joaat("mpHeist3_Tee_019_M"):
					if (__LIB_0__.func_137(28176, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_019_M"));
					break;
				case joaat("mpHeist3_Tee_020_F"):
				case joaat("mpHeist3_Tee_020_M"):
					if (__LIB_0__.func_137(28180, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_020_M"));
					break;
				case joaat("mpHeist3_Tee_021_F"):
				case joaat("mpHeist3_Tee_021_M"):
					if (__LIB_0__.func_137(28179, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_021_M"));
					break;
				case joaat("mpHeist3_Tee_022_F"):
				case joaat("mpHeist3_Tee_022_M"):
					if (((((((((__LIB_0__.func_137(28176, -1) && __LIB_0__.func_137(28177, -1)) && __LIB_0__.func_137(28178, -1)) && __LIB_0__.func_137(28179, -1)) && __LIB_0__.func_137(28180, -1)) && __LIB_0__.func_137(28181, -1)) && __LIB_0__.func_137(28182, -1)) && __LIB_0__.func_137(28183, -1)) && __LIB_0__.func_137(28184, -1)) || __LIB_0__.func_137(28221, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_022_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_023_F"):
				case joaat("mpHeist3_Tee_023_M"):
					if (__LIB_0__.func_137(28191, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_023_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_011_F"):
				case joaat("mpHeist3_Tee_011_M"):
					if (__LIB_0__.func_137(28190, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_011_M"));
					break;
				case joaat("mpHeist3_Tee_012_F"):
				case joaat("mpHeist3_Tee_012_M"):
					if (__LIB_0__.func_137(28189, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_012_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_003_F"):
				case joaat("mpHeist3_Tee_003_M"):
					if (__LIB_6__.func_804(0, 1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_003_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_010_F"):
				case joaat("mpHeist3_Tee_010_M"):
					if ((((((((((((((((((__LIB_1__.func_595(77, -1) && __LIB_1__.func_595(78, -1)) && __LIB_1__.func_596(92, -1) >= __LIB_0__.func_238(92, 5, 9)) && __LIB_1__.func_596(93, -1) >= __LIB_0__.func_238(93, 5, 9)) && __LIB_1__.func_595(79, -1)) && __LIB_1__.func_595(80, -1)) && __LIB_1__.func_595(81, -1)) && __LIB_1__.func_596(94, -1) >= __LIB_0__.func_238(94, 5, 9)) && __LIB_1__.func_596(95, -1) >= __LIB_0__.func_238(95, 5, 9)) && __LIB_1__.func_595(82, -1)) && __LIB_1__.func_595(83, -1)) && __LIB_1__.func_596(96, -1) >= __LIB_0__.func_238(96, 5, 9)) && __LIB_1__.func_595(84, -1)) && __LIB_1__.func_595(85, -1)) && __LIB_1__.func_596(97, -1) >= __LIB_0__.func_238(97, 5, 9)) && __LIB_1__.func_595(86, -1)) && __LIB_1__.func_595(87, -1)) && __LIB_1__.func_595(88, -1)) || __LIB_0__.func_137(28222, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_010_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpVinewood_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Vinewood_Tat_023_M"):
				case joaat("MP_Vinewood_Tat_023_F"):
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Vinewood_Tat_023_M"));
					break;
				case joaat("MP_Vinewood_Tat_030_M"):
				case joaat("MP_Vinewood_Tat_030_F"):
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Vinewood_Tat_030_M"));
					break;
				case joaat("CasinoTop_M_21"):
				case joaat("CasinoTop_F_21"):
					if (__LIB_0__.func_137(27109, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_21"));
					break;
				case joaat("CasinoTop_M_23"):
				case joaat("CasinoTop_F_23"):
					if (__LIB_0__.func_137(27110, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_23"));
					break;
				case joaat("CasinoTop_M_2"):
				case joaat("CasinoTop_F_2"):
					if (__LIB_0__.func_137(27111, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_2"));
					break;
				case joaat("CasinoTop_M_4"):
				case joaat("CasinoTop_F_4"):
					if (__LIB_0__.func_137(27112, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_4"));
					break;
				case joaat("CasinoTop_M_6"):
				case joaat("CasinoTop_F_6"):
					if (__LIB_0__.func_137(27113, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_6"));
					break;
				case joaat("CasinoTop_M_10"):
				case joaat("CasinoTop_F_10"):
					if (__LIB_0__.func_137(27114, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_10"));
					break;
				case joaat("CasinoTop_M_22"):
				case joaat("CasinoTop_F_22"):
					if (__LIB_0__.func_137(27115, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_22"));
					break;
			}
			break;
		case joaat("mpChristmas2018_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Christmas2018_Tee_000_M"):
				case joaat("MP_Christmas2018_Tee_000_F"):
					if (__LIB_0__.func_137(25032, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_000_M"));
					break;
				case joaat("MP_Christmas2018_Tee_001_M"):
				case joaat("MP_Christmas2018_Tee_001_F"):
					if (__LIB_0__.func_137(25033, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_001_M"));
					break;
				case joaat("MP_Christmas2018_Tee_002_M"):
				case joaat("MP_Christmas2018_Tee_002_F"):
					if (__LIB_0__.func_137(25034, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_002_M"));
					break;
				case joaat("MP_Christmas2018_Tee_003_M"):
				case joaat("MP_Christmas2018_Tee_003_F"):
					if (__LIB_0__.func_137(25035, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_003_M"));
					break;
				case joaat("MP_Christmas2018_Tee_004_M"):
				case joaat("MP_Christmas2018_Tee_004_F"):
					if (__LIB_0__.func_137(25036, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_004_M"));
					break;
				case joaat("MP_Christmas2018_Tee_005_M"):
				case joaat("MP_Christmas2018_Tee_005_F"):
					if (__LIB_0__.func_137(25037, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_005_M"));
					break;
				case joaat("MP_Christmas2018_Tee_006_M"):
				case joaat("MP_Christmas2018_Tee_006_F"):
					if (__LIB_0__.func_137(25038, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_006_M"));
					break;
				case joaat("MP_Christmas2018_Tee_007_M"):
				case joaat("MP_Christmas2018_Tee_007_F"):
					if (__LIB_0__.func_137(25039, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_007_M"));
					break;
				case joaat("MP_Christmas2018_Tee_008_M"):
				case joaat("MP_Christmas2018_Tee_008_F"):
					if (__LIB_0__.func_137(25040, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_008_M"));
					break;
				case joaat("MP_Christmas2018_Tee_009_M"):
				case joaat("MP_Christmas2018_Tee_009_F"):
					if (__LIB_0__.func_137(25041, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_009_M"));
					break;
				case joaat("MP_Christmas2018_Tee_010_M"):
				case joaat("MP_Christmas2018_Tee_010_F"):
					if (__LIB_0__.func_137(25042, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_010_M"));
					break;
				case joaat("MP_Christmas2018_Tee_011_M"):
				case joaat("MP_Christmas2018_Tee_011_F"):
					if (__LIB_0__.func_137(25043, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_011_M"));
					break;
				case joaat("MP_Christmas2018_Tee_012_M"):
				case joaat("MP_Christmas2018_Tee_012_F"):
					if (__LIB_0__.func_137(25044, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_012_M"));
					break;
				case joaat("MP_Christmas2018_Tee_013_M"):
				case joaat("MP_Christmas2018_Tee_013_F"):
					if (__LIB_0__.func_137(25045, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_013_M"));
					break;
				case joaat("MP_Christmas2018_Tee_014_M"):
				case joaat("MP_Christmas2018_Tee_014_F"):
					if (__LIB_0__.func_137(25046, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_014_M"));
					break;
				case joaat("MP_Christmas2018_Tee_015_M"):
				case joaat("MP_Christmas2018_Tee_015_F"):
					if (__LIB_0__.func_137(25047, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_015_M"));
					break;
				case joaat("MP_Christmas2018_Tee_016_M"):
				case joaat("MP_Christmas2018_Tee_016_F"):
					if (__LIB_0__.func_137(25048, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_016_M"));
					break;
				case joaat("MP_Christmas2018_Tee_017_M"):
				case joaat("MP_Christmas2018_Tee_017_F"):
					if (__LIB_0__.func_137(25049, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_017_M"));
					break;
				case joaat("MP_Christmas2018_Tee_018_M"):
				case joaat("MP_Christmas2018_Tee_018_F"):
					if (__LIB_0__.func_137(25050, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_018_M"));
					break;
				case joaat("MP_Christmas2018_Tee_019_M"):
				case joaat("MP_Christmas2018_Tee_019_F"):
					if (__LIB_0__.func_137(25051, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_019_M"));
					break;
				case joaat("MP_Christmas2018_Tee_020_M"):
				case joaat("MP_Christmas2018_Tee_020_F"):
					if (__LIB_0__.func_137(25052, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_020_M"));
					break;
				case joaat("MP_Christmas2018_Tee_021_M"):
				case joaat("MP_Christmas2018_Tee_021_F"):
					if (__LIB_0__.func_137(25053, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_021_M"));
					break;
				case joaat("MP_Christmas2018_Tee_022_M"):
				case joaat("MP_Christmas2018_Tee_022_F"):
					if (__LIB_0__.func_137(25054, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_022_M"));
					break;
				case joaat("MP_Christmas2018_Tee_023_M"):
				case joaat("MP_Christmas2018_Tee_023_F"):
					if (__LIB_0__.func_137(25055, -1))
					{
						return 0;
					}
					if (__LIB_0__.func_137(27077, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_023_M"));
					break;
				case joaat("MP_Christmas2018_Tee_024_M"):
				case joaat("MP_Christmas2018_Tee_024_F"):
					if (__LIB_0__.func_137(25056, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_024_M"));
					break;
				case joaat("MP_Christmas2018_Tee_025_M"):
				case joaat("MP_Christmas2018_Tee_025_F"):
					if (__LIB_0__.func_137(25057, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_025_M"));
					break;
				case joaat("MP_Christmas2018_Tee_026_M"):
				case joaat("MP_Christmas2018_Tee_026_F"):
					if (__LIB_0__.func_137(25058, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_026_M"));
					break;
				case joaat("MP_Christmas2018_Tee_027_M"):
				case joaat("MP_Christmas2018_Tee_027_F"):
					if (__LIB_0__.func_137(25059, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_027_M"));
					break;
				case joaat("MP_Christmas2018_Tee_028_M"):
				case joaat("MP_Christmas2018_Tee_028_F"):
					if (__LIB_0__.func_137(25060, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_028_M"));
					break;
				case joaat("MP_Christmas2018_Tee_029_M"):
				case joaat("MP_Christmas2018_Tee_029_F"):
					if (__LIB_0__.func_137(25061, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_029_M"));
					break;
				case joaat("MP_Christmas2018_Tee_030_M"):
				case joaat("MP_Christmas2018_Tee_030_F"):
					if (__LIB_0__.func_137(25062, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_030_M"));
					break;
				case joaat("MP_Christmas2018_Tee_031_M"):
				case joaat("MP_Christmas2018_Tee_031_F"):
					if (__LIB_0__.func_137(25063, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_031_M"));
					break;
				case joaat("MP_Christmas2018_Tee_032_M"):
				case joaat("MP_Christmas2018_Tee_032_F"):
					if (__LIB_0__.func_137(25064, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_032_M"));
					break;
				case joaat("MP_Christmas2018_Tee_033_M"):
				case joaat("MP_Christmas2018_Tee_033_F"):
					if (__LIB_0__.func_137(25065, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_033_M"));
					break;
				case joaat("MP_Christmas2018_Tee_034_M"):
				case joaat("MP_Christmas2018_Tee_034_F"):
					if (__LIB_0__.func_137(25066, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_034_M"));
					break;
				case joaat("MP_Christmas2018_Tee_035_M"):
				case joaat("MP_Christmas2018_Tee_035_F"):
					if (__LIB_0__.func_137(25067, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_035_M"));
					break;
				case joaat("MP_Christmas2018_Tee_036_M"):
				case joaat("MP_Christmas2018_Tee_036_F"):
					if (__LIB_0__.func_137(25068, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_036_M"));
					break;
				case joaat("MP_Christmas2018_Tee_037_M"):
				case joaat("MP_Christmas2018_Tee_037_F"):
					if (__LIB_0__.func_137(25069, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_037_M"));
					break;
				case joaat("MP_Christmas2018_Tee_038_M"):
				case joaat("MP_Christmas2018_Tee_038_F"):
					if (__LIB_0__.func_137(25070, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_038_M"));
					break;
				case joaat("MP_Christmas2018_Tee_039_M"):
				case joaat("MP_Christmas2018_Tee_039_F"):
					if (__LIB_0__.func_137(25071, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_039_M"));
					break;
				case joaat("MP_Christmas2018_Tee_040_M"):
				case joaat("MP_Christmas2018_Tee_040_F"):
					if (__LIB_0__.func_137(25072, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_040_M"));
					break;
				case joaat("MP_Christmas2018_Tee_041_M"):
				case joaat("MP_Christmas2018_Tee_041_F"):
					if (__LIB_0__.func_137(25073, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_041_M"));
					break;
				case joaat("MP_Christmas2018_Tee_042_M"):
				case joaat("MP_Christmas2018_Tee_042_F"):
					if (__LIB_0__.func_137(25074, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_042_M"));
					break;
				case joaat("MP_Christmas2018_Tee_043_M"):
				case joaat("MP_Christmas2018_Tee_043_F"):
					if (__LIB_0__.func_137(25075, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_043_M"));
					break;
				case joaat("MP_Christmas2018_Tee_044_M"):
				case joaat("MP_Christmas2018_Tee_044_F"):
					if (__LIB_0__.func_137(25076, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_044_M"));
					break;
				case joaat("MP_Christmas2018_Tee_045_M"):
				case joaat("MP_Christmas2018_Tee_045_F"):
					if (__LIB_0__.func_137(25077, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_045_M"));
					break;
				case joaat("MP_Christmas2018_Tee_046_M"):
				case joaat("MP_Christmas2018_Tee_046_F"):
					if (__LIB_0__.func_137(25078, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_046_M"));
					break;
				case joaat("MP_Christmas2018_Tee_047_M"):
				case joaat("MP_Christmas2018_Tee_047_F"):
					if (__LIB_0__.func_137(25079, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_047_M"));
					break;
				case joaat("MP_Christmas2018_Tee_048_M"):
				case joaat("MP_Christmas2018_Tee_048_F"):
					if (__LIB_0__.func_137(25080, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_048_M"));
					break;
				case joaat("MP_Christmas2018_Tee_049_M"):
				case joaat("MP_Christmas2018_Tee_049_F"):
					if (__LIB_0__.func_137(25081, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_049_M"));
					break;
				case joaat("MP_Christmas2018_Tee_050_M"):
				case joaat("MP_Christmas2018_Tee_050_F"):
					if (__LIB_0__.func_137(25082, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_050_M"));
					break;
				case joaat("MP_Christmas2018_Tee_051_M"):
				case joaat("MP_Christmas2018_Tee_051_F"):
					if (__LIB_0__.func_137(25083, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_051_M"));
					break;
				case joaat("MP_Christmas2018_Tee_052_M"):
				case joaat("MP_Christmas2018_Tee_052_F"):
					if (__LIB_0__.func_137(25084, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_052_M"));
					break;
				case joaat("MP_Christmas2018_Tee_053_M"):
				case joaat("MP_Christmas2018_Tee_053_F"):
					if (__LIB_0__.func_137(25085, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_053_M"));
					break;
				case joaat("MP_Christmas2018_Tee_054_M"):
				case joaat("MP_Christmas2018_Tee_054_F"):
					if (__LIB_0__.func_137(25086, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_054_M"));
					break;
				case joaat("MP_Christmas2018_Tee_055_M"):
				case joaat("MP_Christmas2018_Tee_055_F"):
					if (__LIB_0__.func_137(25087, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_055_M"));
					break;
				case joaat("MP_Christmas2018_Tee_056_M"):
				case joaat("MP_Christmas2018_Tee_056_F"):
					if (__LIB_0__.func_137(25088, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_056_M"));
					break;
				case joaat("MP_Christmas2018_Tee_057_M"):
				case joaat("MP_Christmas2018_Tee_057_F"):
					if (__LIB_0__.func_137(25089, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_057_M"));
					break;
				case joaat("MP_Christmas2018_Tee_058_M"):
				case joaat("MP_Christmas2018_Tee_058_F"):
					if (__LIB_0__.func_137(25090, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_058_M"));
					break;
				case joaat("MP_Christmas2018_Tee_059_M"):
				case joaat("MP_Christmas2018_Tee_059_F"):
					if (__LIB_0__.func_137(25091, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_059_M"));
					break;
				case joaat("MP_Christmas2018_Tee_060_M"):
				case joaat("MP_Christmas2018_Tee_060_F"):
					if (__LIB_0__.func_137(25092, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_060_M"));
					break;
				case joaat("MP_Christmas2018_Tee_061_M"):
				case joaat("MP_Christmas2018_Tee_061_F"):
					if (__LIB_0__.func_137(25093, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_061_M"));
					break;
				case joaat("MP_Christmas2018_Tee_062_M"):
				case joaat("MP_Christmas2018_Tee_062_F"):
					if (__LIB_0__.func_137(25094, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_062_M"));
					break;
				case joaat("MP_Christmas2018_Tee_063_M"):
				case joaat("MP_Christmas2018_Tee_063_F"):
					if (__LIB_0__.func_137(25095, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_063_M"));
					break;
				case joaat("MP_Christmas2018_Tee_064_M"):
				case joaat("MP_Christmas2018_Tee_064_F"):
					if (__LIB_0__.func_137(25096, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_064_M"));
					break;
				case joaat("MP_Christmas2018_Tee_065_M"):
				case joaat("MP_Christmas2018_Tee_065_F"):
					if (__LIB_0__.func_137(25097, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_065_M"));
					break;
				case joaat("MP_Christmas2018_Tee_066_M"):
				case joaat("MP_Christmas2018_Tee_066_F"):
					if (__LIB_0__.func_137(25098, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_066_M"));
					break;
				case joaat("MP_Christmas2018_Tee_067_M"):
				case joaat("MP_Christmas2018_Tee_067_F"):
					if (__LIB_0__.func_137(25099, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_067_M"));
					break;
				case joaat("MP_Christmas2018_Tat_000_M"):
				case joaat("MP_Christmas2018_Tat_000_F"):
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tat_000_M"));
					break;
			}
			break;
		case joaat("mpBattle_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Battle_Clothing_000_M"):
				case joaat("MP_Battle_Clothing_000_F"):
					if (__LIB_0__.func_137(22108, -1) || __LIB_0__.func_137(25006, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_000_M"));
					break;
				case joaat("MP_Battle_Clothing_002_M"):
				case joaat("MP_Battle_Clothing_002_F"):
					if (__LIB_0__.func_137(9481, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_002_M"));
					break;
				case joaat("MP_Battle_Clothing_003_M"):
				case joaat("MP_Battle_Clothing_003_F"):
					if (__LIB_0__.func_137(9470, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_003_M"));
					break;
				case joaat("MP_Battle_Clothing_004_M"):
				case joaat("MP_Battle_Clothing_004_F"):
					if (__LIB_0__.func_137(9475, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_004_M"));
					break;
				case joaat("MP_Battle_Clothing_005_M"):
				case joaat("MP_Battle_Clothing_005_F"):
					if (__LIB_0__.func_137(9472, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_005_M"));
					break;
				case joaat("MP_Battle_Clothing_006_M"):
				case joaat("MP_Battle_Clothing_006_F"):
					if (__LIB_0__.func_137(9465, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_006_M"));
					break;
				case joaat("MP_Battle_Clothing_007_M"):
				case joaat("MP_Battle_Clothing_007_F"):
					if (__LIB_0__.func_137(9463, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_007_M"));
					break;
				case joaat("MP_Battle_Clothing_008_M"):
				case joaat("MP_Battle_Clothing_008_F"):
					if (__LIB_0__.func_137(9464, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_008_M"));
					break;
				case joaat("MP_Battle_Clothing_009_M"):
				case joaat("MP_Battle_Clothing_009_F"):
					if (__LIB_0__.func_137(9468, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_009_M"));
					break;
				case joaat("MP_Battle_Clothing_010_M"):
				case joaat("MP_Battle_Clothing_010_F"):
					if (__LIB_0__.func_137(9469, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_010_M"));
					break;
				case joaat("MP_Battle_Clothing_011_M"):
				case joaat("MP_Battle_Clothing_011_F"):
					if (__LIB_0__.func_137(9479, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_011_M"));
					break;
				case joaat("MP_Battle_Clothing_012_M"):
				case joaat("MP_Battle_Clothing_012_F"):
					if (__LIB_0__.func_137(9473, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_012_M"));
					break;
				case joaat("MP_Battle_Clothing_013_M"):
				case joaat("MP_Battle_Clothing_013_F"):
					if (__LIB_0__.func_137(9480, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_013_M"));
					break;
				case joaat("MP_Battle_Clothing_014_M"):
				case joaat("MP_Battle_Clothing_014_F"):
					if (__LIB_0__.func_137(9476, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_014_M"));
					break;
				case joaat("MP_Battle_Clothing_015_M"):
				case joaat("MP_Battle_Clothing_015_F"):
					if (__LIB_0__.func_137(9477, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_015_M"));
					break;
				case joaat("MP_Battle_Clothing_016_M"):
				case joaat("MP_Battle_Clothing_016_F"):
					if (__LIB_0__.func_137(9471, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_016_M"));
					break;
				case joaat("MP_Battle_Clothing_017_M"):
				case joaat("MP_Battle_Clothing_017_F"):
					if (__LIB_0__.func_137(9474, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_017_M"));
					break;
				case joaat("MP_Battle_Clothing_018_M"):
				case joaat("MP_Battle_Clothing_018_F"):
					if (__LIB_0__.func_137(9467, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_018_M"));
					break;
				case joaat("MP_Battle_Clothing_019_M"):
				case joaat("MP_Battle_Clothing_019_F"):
					if (__LIB_0__.func_137(9478, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_019_M"));
					break;
				case joaat("MP_Battle_Clothing_020_M"):
				case joaat("MP_Battle_Clothing_020_F"):
					if (__LIB_0__.func_137(9462, -1))
					{
						return 0;
					}
					if (iParam1 == joaat("MP_Battle_Clothing_020_M"))
					{
						if (__LIB_0__.func_137(27085, -1))
						{
							return 0;
						}
					}
					else if (__LIB_0__.func_137(27084, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_020_M"));
					break;
				case joaat("MP_Battle_Clothing_021_M"):
				case joaat("MP_Battle_Clothing_021_F"):
					if (__LIB_0__.func_137(9466, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_021_M"));
					break;
				case joaat("MP_Battle_Clothing_022_M"):
				case joaat("MP_Battle_Clothing_022_F"):
					if (__LIB_0__.func_137(22126, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_022_M"));
					break;
				case joaat("MP_Battle_Clothing_023_M"):
				case joaat("MP_Battle_Clothing_023_F"):
					if (__LIB_0__.func_137(22127, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_023_M"));
					break;
				case joaat("MP_Battle_Clothing_024_M"):
				case joaat("MP_Battle_Clothing_024_F"):
					if (__LIB_0__.func_137(22128, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_024_M"));
					break;
				case joaat("MP_Battle_Clothing_025_M"):
				case joaat("MP_Battle_Clothing_025_F"):
					if (__LIB_0__.func_137(22124, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_025_M"));
					break;
				case joaat("MP_Battle_Clothing_026_M"):
				case joaat("MP_Battle_Clothing_026_F"):
					if (__LIB_0__.func_137(22130, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_026_M"));
					break;
				case joaat("MP_Battle_Clothing_027_M"):
				case joaat("MP_Battle_Clothing_027_F"):
					if (__LIB_0__.func_137(22125, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_027_M"));
					break;
				case joaat("MP_Battle_Clothing_028_M"):
				case joaat("MP_Battle_Clothing_028_F"):
					if (__LIB_0__.func_137(22129, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_028_M"));
					break;
				case joaat("MP_Battle_Clothing_029_M"):
				case joaat("MP_Battle_Clothing_029_F"):
					if (__LIB_0__.func_137(22131, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_029_M"));
					break;
				case joaat("MP_Battle_Clothing_030_M"):
				case joaat("MP_Battle_Clothing_030_F"):
					if (__LIB_0__.func_137(22132, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_030_M"));
					break;
			}
			switch (iParam1)
			{
				case joaat("MP_Battle_Clothing_031_M"):
				case joaat("MP_Battle_Clothing_031_F"):
					if (__LIB_0__.func_137(22147, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_031_M"));
					break;
				case joaat("MP_Battle_Clothing_032_M"):
				case joaat("MP_Battle_Clothing_032_F"):
					if (__LIB_0__.func_137(22148, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_032_M"));
					break;
				case joaat("MP_Battle_Clothing_033_M"):
				case joaat("MP_Battle_Clothing_033_F"):
					if (__LIB_0__.func_137(22149, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_033_M"));
					break;
				case joaat("MP_Battle_Clothing_034_M"):
				case joaat("MP_Battle_Clothing_034_F"):
					if (__LIB_0__.func_137(22150, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_034_M"));
					break;
				case joaat("MP_Battle_Clothing_035_M"):
				case joaat("MP_Battle_Clothing_035_F"):
					if (__LIB_0__.func_137(22151, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_035_M"));
					break;
				case joaat("MP_Battle_Clothing_036_M"):
				case joaat("MP_Battle_Clothing_036_F"):
					if (__LIB_0__.func_137(22152, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_036_M"));
					break;
				case joaat("MP_Battle_Clothing_037_M"):
				case joaat("MP_Battle_Clothing_037_F"):
					if (__LIB_0__.func_137(22153, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_037_M"));
					break;
				case joaat("MP_Battle_Clothing_038_M"):
				case joaat("MP_Battle_Clothing_038_F"):
					if (__LIB_0__.func_137(22154, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_038_M"));
					break;
				case joaat("MP_Battle_Clothing_039_M"):
				case joaat("MP_Battle_Clothing_039_F"):
					if (__LIB_0__.func_137(22155, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_039_M"));
					break;
				case joaat("MP_Battle_Clothing_040_M"):
				case joaat("MP_Battle_Clothing_040_F"):
					if (__LIB_0__.func_137(22156, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_040_M"));
					break;
				case joaat("MP_Battle_Clothing_041_M"):
				case joaat("MP_Battle_Clothing_041_F"):
					if (__LIB_0__.func_137(22157, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_041_M"));
					break;
				case joaat("MP_Battle_Clothing_042_M"):
				case joaat("MP_Battle_Clothing_042_F"):
					if (__LIB_0__.func_137(22158, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_042_M"));
					break;
				case joaat("MP_Battle_Clothing_043_M"):
				case joaat("MP_Battle_Clothing_043_F"):
					if (__LIB_0__.func_137(22159, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_043_M"));
					break;
				case joaat("MP_Battle_Clothing_044_M"):
				case joaat("MP_Battle_Clothing_044_F"):
					if (__LIB_0__.func_137(22160, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_044_M"));
					break;
				case joaat("MP_Battle_Clothing_045_M"):
				case joaat("MP_Battle_Clothing_045_F"):
					if (__LIB_0__.func_137(22161, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_045_M"));
					break;
				case joaat("MP_Battle_Clothing_046_M"):
				case joaat("MP_Battle_Clothing_046_F"):
					if (__LIB_0__.func_137(22162, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_046_M"));
					break;
				case joaat("MP_Battle_Clothing_047_M"):
				case joaat("MP_Battle_Clothing_047_F"):
					if (__LIB_0__.func_137(22163, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_047_M"));
					break;
				case joaat("MP_Battle_Clothing_048_M"):
				case joaat("MP_Battle_Clothing_048_F"):
					if (__LIB_0__.func_137(22164, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_048_M"));
					break;
				case joaat("MP_Battle_Clothing_049_M"):
				case joaat("MP_Battle_Clothing_049_F"):
					if (__LIB_0__.func_137(22165, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_049_M"));
					break;
				case joaat("MP_Battle_Clothing_050_M"):
				case joaat("MP_Battle_Clothing_050_F"):
					if (__LIB_0__.func_137(22166, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_050_M"));
					break;
				case joaat("MP_Battle_Clothing_051_M"):
				case joaat("MP_Battle_Clothing_051_F"):
					if (__LIB_0__.func_137(22167, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_051_M"));
					break;
				case joaat("MP_Battle_Clothing_052_M"):
				case joaat("MP_Battle_Clothing_052_F"):
					if (__LIB_0__.func_137(22168, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_052_M"));
					break;
				case joaat("MP_Battle_Clothing_053_M"):
				case joaat("MP_Battle_Clothing_053_F"):
					if (__LIB_0__.func_137(22169, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_053_M"));
					break;
				case joaat("MP_Battle_Clothing_054_M"):
				case joaat("MP_Battle_Clothing_054_F"):
					if (__LIB_0__.func_137(22170, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_054_M"));
					break;
				case joaat("MP_Battle_Clothing_055_M"):
				case joaat("MP_Battle_Clothing_055_F"):
					if (__LIB_0__.func_137(22171, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_055_M"));
					break;
				case joaat("MP_Battle_Clothing_056_M"):
				case joaat("MP_Battle_Clothing_056_F"):
					if (__LIB_0__.func_137(22172, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_056_M"));
					break;
				case joaat("MP_Battle_Clothing_057_M"):
				case joaat("MP_Battle_Clothing_057_F"):
					if (__LIB_0__.func_137(22173, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_057_M"));
					break;
				case joaat("MP_Battle_Clothing_058_M"):
				case joaat("MP_Battle_Clothing_058_F"):
					if (__LIB_0__.func_137(22174, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_058_M"));
					break;
				case joaat("MP_Battle_Clothing_059_M"):
				case joaat("MP_Battle_Clothing_059_F"):
					if (__LIB_0__.func_137(22175, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_059_M"));
					break;
				case joaat("MP_Battle_Clothing_060_M"):
				case joaat("MP_Battle_Clothing_060_F"):
					if (__LIB_0__.func_137(22176, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_060_M"));
					break;
				case joaat("MP_Battle_Clothing_061_M"):
				case joaat("MP_Battle_Clothing_061_F"):
					if (__LIB_0__.func_137(22177, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_061_M"));
					break;
				case joaat("MP_Battle_Clothing_062_M"):
				case joaat("MP_Battle_Clothing_062_F"):
					if (__LIB_0__.func_137(22178, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_062_M"));
					break;
			}
			break;
		case joaat("mpGunrunning_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Gunrunning_Award_019_M"):
				case joaat("MP_Gunrunning_Award_025_F"):
					if (__LIB_0__.func_137(15426, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_019_M"));
					break;
				case joaat("MP_Gunrunning_Award_020_M"):
				case joaat("MP_Gunrunning_Award_020_F"):
					if (__LIB_0__.func_137(15422, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_020_M"));
					break;
				case joaat("MP_Gunrunning_Award_020_M_ALT"):
				case joaat("MP_Gunrunning_Award_020_F_ALT"):
					if (__LIB_0__.func_137(15423, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_020_M_ALT"));
					break;
				case joaat("MP_Gunrunning_Award_021_M"):
				case joaat("MP_Gunrunning_Award_021_F"):
					if (__LIB_0__.func_137(15421, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_021_M"));
					break;
				case joaat("MP_Gunrunning_Award_022_M"):
				case joaat("MP_Gunrunning_Award_026_F"):
					if (__LIB_0__.func_137(15427, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_022_M"));
					break;
				case joaat("MP_Gunrunning_Award_023_M"):
				case joaat("MP_Gunrunning_Award_023_F"):
					if (__LIB_0__.func_137(15419, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_023_M"));
					break;
				case joaat("MP_Gunrunning_Award_024_M"):
				case joaat("MP_Gunrunning_Award_024_F"):
					if (__LIB_0__.func_137(15420, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_024_M"));
					break;
			}
			switch (iParam1)
			{
				case joaat("MP_Gunrunning_Award_000_M"):
				case joaat("MP_Gunrunning_Award_000_F"):
					if (__LIB_0__.func_137(15394, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_000_M"));
					break;
				case joaat("MP_Gunrunning_Award_001_M"):
				case joaat("MP_Gunrunning_Award_001_F"):
					if (__LIB_1__.func_563(209, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_001_M"));
					break;
				case joaat("MP_Gunrunning_Award_002_M"):
				case joaat("MP_Gunrunning_Award_002_F"):
					if (__LIB_0__.func_137(15406, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_002_M"));
					break;
				case joaat("MP_Gunrunning_Award_003_M"):
				case joaat("MP_Gunrunning_Award_003_F"):
					if (__LIB_0__.func_137(15395, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_003_M"));
					break;
				case joaat("MP_Gunrunning_Award_004_M"):
				case joaat("MP_Gunrunning_Award_004_F"):
					if (__LIB_1__.func_563(209, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_004_M"));
					break;
				case joaat("MP_Gunrunning_Award_005_M"):
				case joaat("MP_Gunrunning_Award_005_F"):
					if (__LIB_0__.func_137(15410, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_005_M"));
					break;
				case joaat("MP_Gunrunning_Award_006_M"):
				case joaat("MP_Gunrunning_Award_006_F"):
					if (__LIB_0__.func_137(15407, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_006_M"));
					break;
				case joaat("MP_Gunrunning_Award_007_M"):
				case joaat("MP_Gunrunning_Award_007_F"):
					if (__LIB_1__.func_563(209, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_007_M"));
					break;
				case joaat("MP_Gunrunning_Award_008_M"):
				case joaat("MP_Gunrunning_Award_008_F"):
					if (__LIB_1__.func_563(209, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_008_M"));
					break;
				case joaat("MP_Gunrunning_Award_009_M"):
				case joaat("MP_Gunrunning_Award_009_F"):
					if (__LIB_0__.func_137(15414, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_009_M"));
					break;
				case joaat("MP_Gunrunning_Award_010_M"):
				case joaat("MP_Gunrunning_Award_010_F"):
					if (__LIB_0__.func_137(15415, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_010_M"));
					break;
				case joaat("MP_Gunrunning_Award_011_M"):
				case joaat("MP_Gunrunning_Award_011_F"):
					if (__LIB_0__.func_137(15399, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_011_M"));
					break;
				case joaat("MP_Gunrunning_Award_012_M"):
				case joaat("MP_Gunrunning_Award_012_F"):
					if (__LIB_0__.func_137(15404, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_012_M"));
					break;
				case joaat("MP_Gunrunning_Award_013_M"):
				case joaat("MP_Gunrunning_Award_013_F"):
					if (__LIB_1__.func_563(209, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_013_M"));
					break;
				case joaat("MP_Gunrunning_Award_014_M"):
				case joaat("MP_Gunrunning_Award_014_F"):
					if (__LIB_0__.func_137(15392, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_014_M"));
					break;
				case joaat("MP_Gunrunning_Award_015_M"):
				case joaat("MP_Gunrunning_Award_015_F"):
					if (__LIB_0__.func_137(15390, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_015_M"));
					break;
				case joaat("MP_Gunrunning_Award_016_M"):
				case joaat("MP_Gunrunning_Award_016_F"):
					if (__LIB_0__.func_137(15402, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_016_M"));
					break;
				case joaat("MP_Gunrunning_Award_017_M"):
				case joaat("MP_Gunrunning_Award_017_F"):
					if (__LIB_0__.func_137(15416, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_017_M"));
					break;
				case joaat("MP_Gunrunning_Award_018_M"):
				case joaat("MP_Gunrunning_Award_018_F"):
					if (__LIB_1__.func_563(209, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_018_M"));
					break;
			}
			break;
		case joaat("mpBiker_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Biker_Tee_022_M"):
				case joaat("MP_Biker_Tee_022_F"):
					if (__LIB_0__.func_137(9366, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_022_M"));
					break;
				case joaat("MP_Biker_Tee_023_M"):
				case joaat("MP_Biker_Tee_023_F"):
					if (__LIB_0__.func_137(9367, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_023_M"));
					break;
				case joaat("MP_Biker_Tee_024_M"):
				case joaat("MP_Biker_Tee_024_F"):
					if (__LIB_0__.func_137(9369, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_024_M"));
					break;
				case joaat("MP_Biker_Tee_025_M"):
				case joaat("MP_Biker_Tee_025_F"):
					if (__LIB_0__.func_137(9368, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_025_M"));
					break;
				case joaat("MP_Biker_Tee_047_M"):
				case joaat("MP_Biker_Tee_047_F"):
					if (__LIB_0__.func_137(9365, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_047_M"));
					break;
				case joaat("MP_Biker_Tee_048_M"):
				case joaat("MP_Biker_Tee_048_F"):
					if (__LIB_0__.func_137(9364, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_048_M"));
					break;
				case joaat("MP_Biker_Tee_049_M"):
				case joaat("MP_Biker_Tee_049_F"):
					if (__LIB_0__.func_137(27078, -1))
					{
						return 0;
					}
					if (__LIB_0__.func_137(9363, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_049_M"));
					break;
				case joaat("MP_Biker_Tee_050_M"):
				case joaat("MP_Biker_Tee_050_F"):
					if (__LIB_0__.func_137(9362, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_050_M"));
					break;
				case joaat("MP_Biker_Tee_051_M"):
				case joaat("MP_Biker_Tee_051_F"):
					if (__LIB_0__.func_137(9370, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_051_M"));
					break;
				case joaat("MP_Biker_Tee_052_M"):
				case joaat("MP_Biker_Tee_052_F"):
					if (__LIB_0__.func_137(9371, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_052_M"));
					break;
				case joaat("MP_Biker_Tee_053_M"):
				case joaat("MP_Biker_Tee_053_F"):
					if (__LIB_0__.func_137(9372, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_053_M"));
					break;
				case joaat("MP_Biker_Tee_054_M"):
				case joaat("MP_Biker_Tee_054_F"):
					if (__LIB_0__.func_137(9373, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_054_M"));
					break;
				case joaat("MP_Biker_Tee_055_M"):
				case joaat("MP_Biker_Tee_055_F"):
					if (__LIB_0__.func_137(9374, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_055_M"));
					break;
				case joaat("MP_Biker_Award_000_M"):
				case joaat("MP_Biker_Award_000_F"):
					if (__LIB_0__.func_137(9384, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Biker_Award_000_M"));
					break;
				case joaat("MP_Biker_Award_001_M"):
				case joaat("MP_Biker_Award_001_F"):
					if (__LIB_0__.func_137(9385, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_Biker_Award_001_M"));
					break;
			}
			break;
		case joaat("mpExecutive_overlays"):
			switch (iParam1)
			{
				case joaat("MP_exec_prizes_015_M"):
				case joaat("MP_exec_prizes_015_F"):
					if (__LIB_0__.func_137(7551, -1) || __LIB_1__.func_556(3792, -1, 0) >= Global_262145.f_16823 /* Tunable: DCTL_WIN_COUNT_REWARD */)
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_015_M"));
					break;
				case joaat("MP_exec_prizes_000_M"):
				case joaat("MP_exec_prizes_000_F"):
					if (__LIB_0__.func_137(7467, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_000_M"));
					break;
				case joaat("MP_exec_prizes_001_M"):
				case joaat("MP_exec_prizes_001_F"):
					if (__LIB_0__.func_137(7468, -1))
					{
						return 0;
					}
					if (iParam1 == joaat("MP_exec_prizes_001_M"))
					{
						if (__LIB_0__.func_137(27083, -1))
						{
							return 0;
						}
					}
					else if (__LIB_0__.func_137(27086, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_001_M"));
					break;
				case joaat("MP_exec_prizes_002_M"):
				case joaat("MP_exec_prizes_002_F"):
					if (__LIB_0__.func_137(7469, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_002_M"));
					break;
				case joaat("MP_exec_prizes_003_M"):
				case joaat("MP_exec_prizes_003_F"):
					if (__LIB_0__.func_137(7470, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_003_M"));
					break;
				case joaat("MP_exec_prizes_004_M"):
				case joaat("MP_exec_prizes_004_F"):
					if (__LIB_0__.func_137(7471, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_004_M"));
					break;
				case joaat("MP_exec_prizes_005_M"):
				case joaat("MP_exec_prizes_005_F"):
					if (__LIB_0__.func_137(7472, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_005_M"));
					break;
				case joaat("MP_exec_prizes_006_M"):
				case joaat("MP_exec_prizes_006_F"):
					if (__LIB_0__.func_137(7473, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_006_M"));
					break;
				case joaat("MP_exec_prizes_007_M"):
				case joaat("MP_exec_prizes_007_F"):
					if (__LIB_0__.func_137(7474, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_007_M"));
					break;
				case joaat("MP_exec_prizes_008_M"):
				case joaat("MP_exec_prizes_008_F"):
					if (__LIB_0__.func_137(7475, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_008_M"));
					break;
				case joaat("MP_exec_prizes_009_M"):
				case joaat("MP_exec_prizes_009_F"):
					if (__LIB_0__.func_137(7476, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_009_M"));
					break;
				case joaat("MP_exec_prizes_010_M"):
				case joaat("MP_exec_prizes_010_F"):
					if (__LIB_0__.func_137(7477, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_010_M"));
					break;
				case joaat("MP_exec_prizes_011_M"):
				case joaat("MP_exec_prizes_011_F"):
					if (__LIB_0__.func_137(7478, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_011_M"));
					break;
				case joaat("MP_exec_prizes_012_M"):
				case joaat("MP_exec_prizes_012_F"):
					if (__LIB_0__.func_137(7479, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_012_M"));
					break;
				case joaat("MP_exec_prizes_013_M"):
				case joaat("MP_exec_prizes_013_F"):
					if (__LIB_0__.func_137(7480, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_013_M"));
					break;
				case joaat("MP_exec_prizes_014_M"):
				case joaat("MP_exec_prizes_014_F"):
					if (__LIB_0__.func_137(7481, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_014_M"));
					break;
			}
			break;
		case joaat("mpHalloween_overlays"):
			switch (iParam1)
			{
				case joaat("HW_Tee_000_F"):
				case joaat("HW_Tee_000_M"):
					if (__LIB_0__.func_137(4260, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("HW_Tee_000_M"));
					break;
				case joaat("HW_Tee_001_F"):
				case joaat("HW_Tee_001_M"):
					if (__LIB_0__.func_137(4257, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("HW_Tee_001_M"));
					break;
				case joaat("HW_Tee_002_F"):
				case joaat("HW_Tee_002_M"):
					if (__LIB_0__.func_137(4269, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("HW_Tee_002_M"));
					break;
				case joaat("HW_Tee_003_F"):
				case joaat("HW_Tee_003_M"):
					if (__LIB_0__.func_137(4261, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("HW_Tee_003_M"));
					break;
				case joaat("HW_Tee_004_F"):
				case joaat("HW_Tee_004_M"):
					if (__LIB_0__.func_137(4259, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("HW_Tee_004_M"));
					break;
				case joaat("HW_Tee_005_F"):
				case joaat("HW_Tee_005_M"):
					if (__LIB_0__.func_137(4268, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("HW_Tee_005_M"));
					break;
				case joaat("HW_Tee_006_F"):
				case joaat("HW_Tee_006_M"):
					if (__LIB_0__.func_137(4265, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("HW_Tee_006_M"));
					break;
				case joaat("HW_Tee_007_F"):
				case joaat("HW_Tee_007_M"):
					if (__LIB_0__.func_137(4258, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("HW_Tee_007_M"));
					break;
				case joaat("HW_Tee_008_F"):
				case joaat("HW_Tee_008_M"):
					if (__LIB_0__.func_137(4264, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("HW_Tee_008_M"));
					break;
				case joaat("HW_Tee_009_F"):
				case joaat("HW_Tee_009_M"):
					if (__LIB_0__.func_137(4267, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("HW_Tee_009_M"));
					break;
				case joaat("HW_Tee_010_F"):
				case joaat("HW_Tee_010_M"):
					if (__LIB_0__.func_137(4262, -1))
					{
						return 0;
					}
					if (__LIB_0__.func_137(27079, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("HW_Tee_010_M"));
					break;
				case joaat("HW_Tee_011_F"):
				case joaat("HW_Tee_011_M"):
					if (__LIB_0__.func_137(4263, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("HW_Tee_011_M"));
					break;
				case joaat("HW_Tee_012_F"):
				case joaat("HW_Tee_012_M"):
					if (__LIB_0__.func_137(4266, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("HW_Tee_012_M"));
					break;
			}
			break;
		case joaat("mpLowrider_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Bennys_000_M"):
				case joaat("MP_Bennys_001_M"):
					if (__LIB_1__.func_556(2934, -1, 0) > 0)
					{
						return 0;
					}
					if (iParam1 == joaat("MP_Bennys_001_M"))
					{
						if (__LIB_0__.func_137(27068, -1))
						{
							return 0;
						}
					}
					return !__LIB_25__.func_109(iParam2, iParam1, 1);
					break;
				case joaat("MP_Bennys_000_F"):
				case joaat("MP_Bennys_001_F"):
					if (__LIB_1__.func_556(2934, -1, 0) > 0)
					{
						return 0;
					}
					if (iParam1 == joaat("MP_Bennys_001_F"))
					{
						if (__LIB_0__.func_137(27068, -1))
						{
							return 0;
						}
					}
					return !__LIB_25__.func_109(iParam2, iParam1, 0);
					break;
			}
			break;
		case joaat("mpxmas_604490_overlays"):
			switch (iParam1)
			{
				case joaat("MP_IHeartLC_000_M"):
				case joaat("MP_IHeartLC_001_F"):
					if (__LIB_0__.func_137(113, -1))
					{
						return 0;
					}
					return !__LIB_25__.func_109(iParam2, iParam1, iParam1 == joaat("MP_IHeartLC_000_M"));
					break;
			}
			break;
		case joaat("mpHeist_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Award_M_Tshirt_004"):
				case joaat("MP_Award_M_Tshirt_005"):
				case joaat("MP_Award_M_Tshirt_006"):
				case joaat("MP_Award_M_Tshirt_007"):
				case joaat("MP_Award_M_Tshirt_008"):
				case joaat("MP_Award_M_Tshirt_009"):
				case joaat("MP_Award_M_Tshirt_010"):
				case joaat("MP_Award_M_Tshirt_011"):
				case joaat("MP_Award_M_Tshirt_012"):
				case joaat("MP_Award_M_Tshirt_013"):
					if (iParam1 == joaat("MP_Award_M_Tshirt_004"))
					{
						if (__LIB_0__.func_137(27082, -1))
						{
							return 0;
						}
						if (__LIB_0__.func_137(3770, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_005"))
					{
						if (__LIB_0__.func_137(3771, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_006"))
					{
						if (__LIB_0__.func_137(3772, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_007"))
					{
						if (__LIB_0__.func_137(3773, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_008"))
					{
						if (__LIB_0__.func_137(3774, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_009"))
					{
						if (__LIB_0__.func_137(3775, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_010"))
					{
						if (__LIB_0__.func_137(3776, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_011"))
					{
						if (__LIB_0__.func_137(3777, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_012"))
					{
						if (__LIB_0__.func_137(3778, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_013"))
					{
						if (__LIB_0__.func_137(3779, -1) || __LIB_0__.func_137(27084, -1))
						{
							return 0;
						}
					}
					return !__LIB_25__.func_109(iParam2, iParam1, 1);
					break;
				case joaat("MP_Award_F_Tshirt_004"):
				case joaat("MP_Award_F_Tshirt_005"):
				case joaat("MP_Award_F_Tshirt_006"):
				case joaat("MP_Award_F_Tshirt_007"):
				case joaat("MP_Award_F_Tshirt_008"):
				case joaat("MP_Award_F_Tshirt_009"):
				case joaat("MP_Award_F_Tshirt_010"):
				case joaat("MP_Award_F_Tshirt_011"):
				case joaat("MP_Award_F_Tshirt_012"):
				case joaat("MP_Award_F_Tshirt_013"):
					if (iParam1 == joaat("MP_Award_F_Tshirt_004"))
					{
						if (__LIB_0__.func_137(3770, -1))
						{
							return 0;
						}
						if (__LIB_0__.func_137(27082, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_005"))
					{
						if (__LIB_0__.func_137(3771, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_006"))
					{
						if (__LIB_0__.func_137(3772, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_007"))
					{
						if (__LIB_0__.func_137(3773, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_008"))
					{
						if (__LIB_0__.func_137(3774, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_009"))
					{
						if (__LIB_0__.func_137(3775, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_010"))
					{
						if (__LIB_0__.func_137(3776, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_011"))
					{
						if (__LIB_0__.func_137(3777, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_012"))
					{
						if (__LIB_0__.func_137(3778, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_013"))
					{
						if (__LIB_0__.func_137(3779, -1) || __LIB_0__.func_137(27083, -1))
						{
							return 0;
						}
					}
					return !__LIB_25__.func_109(iParam2, iParam1, 0);
					break;
				case joaat("MP_Elite_M_Tshirt"):
				case joaat("MP_Elite_M_Tshirt_1"):
				case joaat("MP_Elite_F_Tshirt"):
				case joaat("MP_Elite_F_Tshirt_1"):
					if ((((__LIB_0__.func_137(3765, -1) && __LIB_0__.func_137(3766, -1)) && __LIB_0__.func_137(3767, -1)) && __LIB_0__.func_137(3768, -1)) && __LIB_0__.func_137(3769, -1))
					{
						return 0;
					}
					return 1;
					break;
			}
			break;
		case joaat("mpIndependence_overlays"):
			switch (iParam1)
			{
				case joaat("FM_Ind_M_Award_000"):
				case joaat("FM_Ind_F_Award_000"):
					return !__LIB_0__.func_137(3593, -1);
					break;
			}
			if (!Global_262145.f_8258 /* Tunable: TOGGLE_ACTIVATE_INDEPENDENCE_PACK */ && !__LIB_25__.func_109(iParam2, iParam1, 0))
			{
				return 1;
			}
			break;
		case joaat("mpHipster_overlays"):
			switch (iParam1)
			{
				case 1443536758:
				case 1333229624:
				case -1665422117:
				case 1100930183:
				case -1595008258:
				case 94055115:
				case -627896761:
				case 1873477305:
					return 1;
					break;
				case joaat("MP_Award_M_Tshirt_000"):
				case joaat("MP_Award_M_Tshirt_001"):
				case joaat("MP_Award_F_Tshirt_000"):
				case joaat("MP_Award_F_Tshirt_001"):
					return 1;
					break;
				case 300677115:
				case 262692161:
				case -1684141219:
				case 390655118:
				case -479442624:
				case -542924311:
				case 1696910411:
				case -1259058037:
					return 1;
					break;
				case joaat("MP_Award_M_Tshirt_002"):
				case joaat("MP_Award_M_Tshirt_003"):
				case joaat("MP_Award_F_Tshirt_002"):
				case joaat("MP_Award_F_Tshirt_003"):
					return 1;
					break;
				case joaat("FM_Hip_M_Retro_010"):
				case joaat("FM_Hip_F_Retro_010"):
					return (!__LIB_1__.func_563(152, -1) && !__LIB_0__.func_137(9440, -1));
					break;
				case joaat("FM_Hip_M_Retro_003"):
				case joaat("FM_Hip_F_Retro_003"):
					return (!__LIB_1__.func_563(151, -1) && !__LIB_0__.func_137(9430, -1));
					break;
				case joaat("FM_Hip_M_Retro_000"):
				case joaat("FM_Hip_F_Retro_000"):
					return (!__LIB_25__.func_77(iParam2, -1) && !__LIB_0__.func_137(9426, -1));
					break;
				case joaat("FM_Hip_M_Retro_001"):
				case joaat("FM_Hip_F_Retro_001"):
					return (!__LIB_25__.func_77(iParam2, -1) && !__LIB_0__.func_137(9427, -1));
					break;
				case joaat("FM_Hip_M_Retro_002"):
				case joaat("FM_Hip_F_Retro_002"):
					return (!__LIB_25__.func_77(iParam2, -1) && !__LIB_0__.func_137(9428, -1));
					break;
				case joaat("FM_Hip_M_Retro_004"):
				case joaat("FM_Hip_F_Retro_004"):
					return (!__LIB_25__.func_77(iParam2, -1) && !__LIB_0__.func_137(9431, -1));
					break;
				case joaat("FM_Hip_M_Retro_005"):
				case joaat("FM_Hip_F_Retro_005"):
					return (!__LIB_25__.func_77(iParam2, -1) && !__LIB_0__.func_137(9432, -1));
					break;
				case joaat("FM_Hip_M_Retro_006"):
				case joaat("FM_Hip_F_Retro_006"):
					return (!__LIB_25__.func_77(iParam2, -1) && !__LIB_0__.func_137(9433, -1));
					break;
				case joaat("FM_Hip_M_Retro_007"):
				case joaat("FM_Hip_F_Retro_007"):
					return (!__LIB_25__.func_77(iParam2, -1) && !__LIB_0__.func_137(9439, -1));
					break;
				case joaat("FM_Hip_M_Retro_008"):
				case joaat("FM_Hip_F_Retro_008"):
					return (!__LIB_25__.func_77(iParam2, -1) && !__LIB_0__.func_137(9434, -1));
					break;
				case joaat("FM_Hip_M_Retro_009"):
				case joaat("FM_Hip_F_Retro_009"):
					return (!__LIB_25__.func_77(iParam2, -1) && !__LIB_0__.func_137(9435, -1));
					break;
				case joaat("FM_Hip_M_Retro_011"):
				case joaat("FM_Hip_F_Retro_011"):
					return (!__LIB_25__.func_77(iParam2, -1) && !__LIB_0__.func_137(9436, -1));
					break;
				case joaat("FM_Hip_M_Retro_012"):
				case joaat("FM_Hip_F_Retro_012"):
					return (!__LIB_25__.func_77(iParam2, -1) && !__LIB_0__.func_137(9429, -1));
					break;
				case joaat("FM_Hip_M_Retro_013"):
				case joaat("FM_Hip_F_Retro_013"):
					return (!__LIB_25__.func_77(iParam2, -1) && !__LIB_0__.func_137(9437, -1));
					break;
				case joaat("FM_Rstar_M_Tshirt_000"):
				case joaat("FM_Rstar_M_Tshirt_001"):
				case joaat("FM_Rstar_M_Tshirt_002"):
				case joaat("FM_Rstar_F_Tshirt_000"):
				case joaat("FM_Rstar_F_Tshirt_001"):
				case joaat("FM_Rstar_F_Tshirt_002"):
					return !__LIB_0__.func_236();
					break;
			}
			break;
		case joaat("mpValentines_overlays"):
			if ((!Global_262145.f_7058 /* Tunable: TURN_ON_VALENTINES_EVENT */ && !__LIB_25__.func_77(iParam2, -1)) && !Global_262145.f_12031 /* Tunable: TURN_ON_VALENTINE_CLOTHING */)
			{
				return 1;
			}
			break;
		case joaat("mpPilot_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Fli_M_Tshirt_000"):
				case joaat("MP_Fli_F_Tshirt_000"):
					return !__LIB_0__.func_137(3608, -1);
					break;
			}
			break;
		case joaat("mpLTS_overlays"):
			switch (iParam1)
			{
				case joaat("FM_LTS_M_Tshirt_000"):
				case joaat("FM_LTS_F_Tshirt_000"):
					return (!__LIB_0__.func_137(3615, -1) && !__LIB_0__.func_137(9438, -1));
					break;
			}
			break;
		case joaat("mpLuxe_overlays"):
			if (iParam1 == joaat("MP_LUXE_VDG_006_F"))
			{
				return 1;
			}
			switch (iParam1)
			{
				case joaat("MP_FAKE_DIS_000_M"):
				case joaat("MP_FAKE_DIS_000_F"):
					return !__LIB_0__.func_137(3783, -1);
					break;
				case joaat("MP_FAKE_DIS_001_M"):
				case joaat("MP_FAKE_DIS_001_F"):
					return !__LIB_0__.func_137(3784, -1);
					break;
				case joaat("MP_FAKE_DS_000_M"):
				case joaat("MP_FAKE_DS_000_F"):
					return !__LIB_0__.func_137(3785, -1);
					break;
				case joaat("MP_FAKE_ENEMA_000_M"):
				case joaat("MP_FAKE_ENEMA_000_F"):
					return !__LIB_0__.func_137(3786, -1);
					break;
				case joaat("MP_FAKE_LB_000_M"):
				case joaat("MP_FAKE_LB_000_F"):
					return !__LIB_0__.func_137(3787, -1);
					break;
				case joaat("MP_FAKE_LC_000_M"):
				case joaat("MP_FAKE_LC_000_F"):
					return !__LIB_0__.func_137(3788, -1);
					break;
				case joaat("MP_FAKE_SC_000_M"):
				case joaat("MP_FAKE_SC_000_F"):
					if (__LIB_0__.func_137(27081, -1))
					{
						return 0;
					}
					return !__LIB_0__.func_137(3789, -1);
					break;
				case joaat("MP_FAKE_Vap_000_M"):
				case joaat("MP_FAKE_Vap_000_F"):
					return !__LIB_0__.func_137(3790, -1);
					break;
				case joaat("MP_FAKE_Per_000_M"):
				case joaat("MP_FAKE_Per_000_F"):
					return !__LIB_0__.func_137(3791, -1);
					break;
				case joaat("MP_FAKE_SN_000_M"):
				case joaat("MP_FAKE_SN_000_F"):
					return !__LIB_0__.func_137(3792, -1);
					break;
				case joaat("MP_FILM_000_F"):
				case joaat("MP_FILM_000_M"):
					if (iParam1 == joaat("MP_FILM_000_F"))
					{
						iVar0 = __LIB_1__.func_556(2444, -1, 0);
						if (BitTest(iVar0, 0))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_000_M"))
					{
						iVar1 = __LIB_1__.func_556(2424, -1, 0);
						if (BitTest(iVar1, 18))
						{
							return 0;
						}
					}
					return !__LIB_0__.func_137(3793, -1);
					break;
				case joaat("MP_FILM_001_F"):
				case joaat("MP_FILM_001_M"):
					if (iParam1 == joaat("MP_FILM_001_F"))
					{
						iVar2 = __LIB_1__.func_556(2444, -1, 0);
						if (BitTest(iVar2, 1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_001_M"))
					{
						iVar3 = __LIB_1__.func_556(2424, -1, 0);
						if (BitTest(iVar3, 19))
						{
							return 0;
						}
					}
					return !__LIB_0__.func_137(3794, -1);
					break;
				case joaat("MP_FILM_002_F"):
				case joaat("MP_FILM_002_M"):
					if (iParam1 == joaat("MP_FILM_002_F"))
					{
						iVar4 = __LIB_1__.func_556(2444, -1, 0);
						if (BitTest(iVar4, 2))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_002_M"))
					{
						iVar5 = __LIB_1__.func_556(2424, -1, 0);
						if (BitTest(iVar5, 20))
						{
							return 0;
						}
					}
					return !__LIB_0__.func_137(3795, -1);
					break;
				case joaat("MP_FILM_003_F"):
				case joaat("MP_FILM_003_M"):
					if (iParam1 == joaat("MP_FILM_003_F"))
					{
						iVar6 = __LIB_1__.func_556(2444, -1, 0);
						if (BitTest(iVar6, 3))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_003_M"))
					{
						iVar7 = __LIB_1__.func_556(2424, -1, 0);
						if (BitTest(iVar7, 21))
						{
							return 0;
						}
					}
					return !__LIB_0__.func_137(3796, -1);
					break;
				case joaat("MP_FILM_004_F"):
				case joaat("MP_FILM_004_M"):
					if (iParam1 == joaat("MP_FILM_004_F"))
					{
						iVar8 = __LIB_1__.func_556(2444, -1, 0);
						if (BitTest(iVar8, 4))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_004_M"))
					{
						iVar9 = __LIB_1__.func_556(2424, -1, 0);
						if (BitTest(iVar9, 22))
						{
							return 0;
						}
					}
					return !__LIB_0__.func_137(3797, -1);
					break;
				case joaat("MP_FILM_005_F"):
				case joaat("MP_FILM_005_M"):
					if (iParam1 == joaat("MP_FILM_005_F"))
					{
						iVar10 = __LIB_1__.func_556(2444, -1, 0);
						if (BitTest(iVar10, 5))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_005_M"))
					{
						iVar11 = __LIB_1__.func_556(2424, -1, 0);
						if (BitTest(iVar11, 23))
						{
							return 0;
						}
					}
					return !__LIB_0__.func_137(3798, -1);
					break;
				case joaat("MP_FILM_006_F"):
				case joaat("MP_FILM_006_M"):
					if (iParam1 == joaat("MP_FILM_006_F"))
					{
						iVar12 = __LIB_1__.func_556(2444, -1, 0);
						if (BitTest(iVar12, 6))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_006_M"))
					{
						iVar13 = __LIB_1__.func_556(2424, -1, 0);
						if (BitTest(iVar13, 24))
						{
							return 0;
						}
					}
					return !__LIB_0__.func_137(3799, -1);
					break;
				case joaat("MP_FILM_007_F"):
				case joaat("MP_FILM_007_M"):
					if (iParam1 == joaat("MP_FILM_007_F"))
					{
						iVar14 = __LIB_1__.func_556(2444, -1, 0);
						if (BitTest(iVar14, 7))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_007_M"))
					{
						iVar15 = __LIB_1__.func_556(2424, -1, 0);
						if (BitTest(iVar15, 25))
						{
							return 0;
						}
					}
					return !__LIB_0__.func_137(3800, -1);
					break;
				case joaat("MP_FILM_008_F"):
				case joaat("MP_FILM_008_M"):
					if (iParam1 == joaat("MP_FILM_008_F"))
					{
						iVar16 = __LIB_1__.func_556(2444, -1, 0);
						if (BitTest(iVar16, 8))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_008_M"))
					{
						iVar17 = __LIB_1__.func_556(2424, -1, 0);
						if (BitTest(iVar17, 26))
						{
							return 0;
						}
					}
					return !__LIB_0__.func_137(3801, -1);
					break;
				case joaat("MP_FILM_009_F"):
				case joaat("MP_FILM_009_M"):
					if (iParam1 == joaat("MP_FILM_009_F"))
					{
						iVar18 = __LIB_1__.func_556(2444, -1, 0);
						if (BitTest(iVar18, 9))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_009_M"))
					{
						iVar19 = __LIB_1__.func_556(2424, -1, 0);
						if (BitTest(iVar19, 27))
						{
							return 0;
						}
					}
					return !__LIB_0__.func_137(3802, -1);
					break;
			}
			break;
		case joaat("mpLuxe2_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Luxe_Tat_030_M"):
				case joaat("MP_Luxe_Tat_031_M"):
					return 1;
					break;
				case joaat("MP_Luxe_Tat_030_F"):
				case joaat("MP_Luxe_Tat_031_F"):
					return 1;
					break;
			}
			break;
		case joaat("multiplayer_overlays"):
			switch (iParam1)
			{
				case joaat("MP_FM_OGA_000_m"):
				case joaat("MP_FM_OGA_001_m"):
				case joaat("MP_FM_OGA_002_m"):
				case joaat("MP_FM_OGA_003_m"):
				case joaat("MP_FM_OGA_000_f"):
				case joaat("MP_FM_OGA_001_f"):
				case joaat("MP_FM_OGA_002_f"):
				case joaat("MP_FM_OGA_003_f"):
					return !__LIB_0__.func_116();
					break;
			}
			break;
	}
	return 0;
}

void func_994(var uParam0, var uParam1)//Position - 0x1155DF
{
	__LIB_25__.func_198(uParam0, 1);
}

void func_995(var uParam0, var uParam1)//Position - 0x1262B4
{
	if (BitTest(uParam0->f_22, 7))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false));
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false);
				}
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_22.f_256) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_22.f_256, false))
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam0->f_22.f_256);
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_22.f_256))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_22.f_256, false);
			}
		}
	}
	__LIB_25__.func_199(uParam0, 1);
	__LIB_3__.func_307(0);
	__LIB_6__.func_404(&(uParam0->f_22.f_94));
}

void func_996(var uParam0, var uParam1)//Position - 0x13CB4D
{
	__LIB_6__.func_404(&(uParam0->f_22.f_94));
	__LIB_3__.func_343(0);
	MISC::CLEAR_BIT(&Global_1946250, 10);
	if (BitTest(uParam0->f_22, 7))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false);
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_22.f_256) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_22.f_256, false))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_22.f_256, false);
		}
	}
	MISC::CLEAR_BIT(&Global_1946250, 15);
	__LIB_25__.func_201(uParam0, 1);
}

void func_997(int iParam0)//Position - 0x1D05
{
	struct<3> Var0;
	if (Global_262145.f_20201 /* Tunable: 1239690786 */)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iParam0))
			{
				Var0.f_0 = ENTITY::GET_ENTITY_MODEL(iParam0);
				Var0.f_1 = MISC::GET_HASH_KEY(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0));
				if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("RandomID", 3))
				{
					if (!DECORATOR::DECOR_EXIST_ON(iParam0, "RandomID"))
					{
						Var0.f_2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 65535);
						DECORATOR::DECOR_SET_INT(iParam0, "RandomID", Var0.f_2);
					}
					else
					{
						Var0.f_2 = DECORATOR::DECOR_GET_INT(iParam0, "RandomID");
					}
				}
				__LIB_25__.func_267(Var0);
			}
		}
	}
}

int func_998(int iParam0, var* uParam1)//Position - 0x7EF5
{
	bool bVar0;
	bool bVar1;
	if (NETWORK::NETWORK_IS_HANDLE_VALID(uParam1, 13) && NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(uParam1))
	{
		bVar0 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uParam1);
	}
	else
	{
		bVar0 = __LIB_0__.func_160();
	}
	bVar1 = false;
	if (bVar0 == PLAYER::PLAYER_ID())
	{
		if (__LIB_18__.func_655(15, 0))
		{
			bVar1 = true;
		}
		else if (__LIB_25__.func_140(1))
		{
			bVar1 = true;
		}
	}
	else
	{
		bVar1 = true;
	}
	if (((((((!(ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0)) || !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true)) || !((NETWORK::NETWORK_IS_HANDLE_VALID(uParam1, 13) && NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()) && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam1))) || bVar0 == __LIB_0__.func_160()) || !__LIB_1__.func_264(bVar0, 0, 0)) || !bVar1) || __LIB_18__.func_900(iParam0))
	{
		return 0;
	}
	return 1;
}

Vector3 func_999(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0xFE0F
{
	struct<3> Var0;
	int iVar1;
	float fVar2;
	iVar1 = __LIB_1__.func_347(iParam1);
	switch (iVar1)
	{
		case 1:
			switch (iParam2)
			{
				case 1:
					Var0 = { 1043.39f, -3193.05f, -38.92f };
					break;
				case 2:
					Var0 = { 1042.92f, -3193.05f, -38.92f };
					break;
				case 3:
					Var0 = { 1043.39f, -3192.41f, -38.92f };
					break;
				case 4:
					Var0 = { 1042.92f, -3192.41f, -38.92f };
					break;
				case 5:
					Var0 = { 1043.39f, -3193.05f, -38.66f };
					break;
				case 6:
					Var0 = { 1042.92f, -3193.05f, -38.66f };
					break;
				case 7:
					Var0 = { 1043.39f, -3192.41f, -38.66f };
					break;
				case 8:
					Var0 = { 1042.92f, -3192.41f, -38.66f };
					break;
				case 9:
					Var0 = { 1041.14f, -3193.06f, -38.92f };
					break;
				case 10:
					Var0 = { 1041.62f, -3193.06f, -38.92f };
					break;
				case 11:
					Var0 = { 1041.14f, -3192.43f, -38.92f };
					break;
				case 12:
					Var0 = { 1041.63f, -3192.43f, -38.92f };
					break;
				case 13:
					Var0 = { 1041.14f, -3193.06f, -38.66f };
					break;
				case 14:
					Var0 = { 1041.62f, -3193.06f, -38.66f };
					break;
				case 15:
					Var0 = { 1041.14f, -3192.43f, -38.66f };
					break;
				case 16:
					Var0 = { 1041.63f, -3192.43f, -38.66f };
					break;
				case 17:
					Var0 = { 1039.25f, -3192.91f, -38.92f };
					break;
				case 18:
					Var0 = { 1039.89f, -3192.91f, -38.92f };
					break;
				case 19:
					Var0 = { 1039.25f, -3192.42f, -38.92f };
					break;
				case 20:
					Var0 = { 1039.89f, -3192.43f, -38.92f };
					break;
				case 21:
					Var0 = { 1039.25f, -3192.91f, -38.66f };
					break;
				case 22:
					Var0 = { 1039.89f, -3192.91f, -38.66f };
					break;
				case 23:
					Var0 = { 1039.25f, -3192.42f, -38.66f };
					break;
				case 24:
					Var0 = { 1039.89f, -3192.43f, -38.66f };
					break;
				case 25:
					Var0 = { 1044.65f, -3193.11f, -38.92f };
					break;
				case 26:
					Var0 = { 1045.2f, -3192.88f, -38.92f };
					break;
				case 27:
					Var0 = { 1044.68f, -3192.52f, -38.92f };
					break;
				case 28:
					Var0 = { 1045.18f, -3192.27f, -38.92f };
					break;
				case 29:
					Var0 = { 1044.65f, -3193.11f, -38.66f };
					break;
				case 30:
					Var0 = { 1045.2f, -3192.88f, -38.66f };
					break;
				case 31:
					Var0 = { 1044.68f, -3192.52f, -38.66f };
					break;
				case 32:
					Var0 = { 1045.18f, -3192.27f, -38.66f };
					break;
				case 33:
					Var0 = { 1039.91f, -3198.91f, -38.92f };
					break;
				case 34:
					Var0 = { 1039.91f, -3198.27f, -38.92f };
					break;
				case 35:
					Var0 = { 1039.41f, -3198.91f, -38.92f };
					break;
				case 36:
					Var0 = { 1039.41f, -3198.27f, -38.92f };
					break;
				case 37:
					Var0 = { 1039.91f, -3198.91f, -38.66f };
					break;
				case 38:
					Var0 = { 1039.91f, -3198.27f, -38.66f };
					break;
				case 39:
					Var0 = { 1039.41f, -3198.91f, -38.66f };
					break;
				case 40:
					Var0 = { 1039.41f, -3198.27f, -38.66f };
					break;
				case 41:
					Var0 = { 1039.91f, -3197.16f, -38.92f };
					break;
				case 42:
					Var0 = { 1039.91f, -3196.67f, -38.92f };
					break;
				case 43:
					Var0 = { 1039.28f, -3196.67f, -38.92f };
					break;
				case 44:
					Var0 = { 1039.28f, -3197.16f, -38.92f };
					break;
				case 45:
					Var0 = { 1039.91f, -3197.16f, -38.66f };
					break;
				case 46:
					Var0 = { 1039.91f, -3196.67f, -38.66f };
					break;
				case 47:
					Var0 = { 1039.28f, -3196.67f, -38.66f };
					break;
				case 48:
					Var0 = { 1039.28f, -3197.16f, -38.66f };
					break;
				case 49:
					Var0 = { 1040.41f, -3195.32f, -38.92f };
					break;
				case 50:
					Var0 = { 1040.42f, -3194.75f, -38.92f };
					break;
				case 51:
					Var0 = { 1039.88f, -3195.07f, -38.92f };
					break;
				case 52:
					Var0 = { 1039.82f, -3194.55f, -38.92f };
					break;
				case 53:
					Var0 = { 1040.41f, -3195.32f, -38.66f };
					break;
				case 54:
					Var0 = { 1040.42f, -3194.75f, -38.66f };
					break;
				case 55:
					Var0 = { 1039.88f, -3195.07f, -38.66f };
					break;
				case 56:
					Var0 = { 1039.82f, -3194.55f, -38.66f };
					break;
				case 57:
					Var0 = { 1044.68f, -3198.28f, -38.92f };
					break;
				case 58:
					Var0 = { 1044.68f, -3198.91f, -38.92f };
					break;
				case 59:
					Var0 = { 1045.17f, -3198.28f, -38.92f };
					break;
				case 60:
					Var0 = { 1045.17f, -3198.91f, -38.92f };
					break;
				case 61:
					Var0 = { 1044.68f, -3198.28f, -38.66f };
					break;
				case 62:
					Var0 = { 1044.68f, -3198.91f, -38.66f };
					break;
				case 63:
					Var0 = { 1045.17f, -3198.28f, -38.66f };
					break;
				case 64:
					Var0 = { 1045.17f, -3198.91f, -38.66f };
					break;
				case 65:
					Var0 = { 1043.78f, -3200.91f, -38.88f };
					break;
				case 66:
					Var0 = { 1043.08f, -3200.91f, -38.88f };
					break;
				case 67:
					Var0 = { 1043.78f, -3200.4f, -38.88f };
					break;
				case 68:
					Var0 = { 1043.08f, -3200.4f, -38.88f };
					break;
				case 69:
					Var0 = { 1043.78f, -3200.91f, -38.6f };
					break;
				case 70:
					Var0 = { 1043.08f, -3200.91f, -38.6f };
					break;
				case 71:
					Var0 = { 1043.78f, -3200.4f, -38.6f };
					break;
				case 72:
					Var0 = { 1043.08f, -3200.4f, -38.6f };
					break;
				case 73:
					Var0 = { 1043.02f, -3206.22f, -38.85f };
					break;
				case 74:
					Var0 = { 1042.41f, -3206.43f, -38.85f };
					break;
				case 75:
					Var0 = { 1042.84f, -3205.75f, -38.85f };
					break;
				case 76:
					Var0 = { 1042.24f, -3205.97f, -38.85f };
					break;
				case 77:
					Var0 = { 1043.02f, -3206.22f, -38.58f };
					break;
				case 78:
					Var0 = { 1042.41f, -3206.43f, -38.58f };
					break;
				case 79:
					Var0 = { 1042.84f, -3205.75f, -38.58f };
					break;
				case 80:
					Var0 = { 1042.24f, -3205.97f, -38.58f };
					break;
			}
			break;
		case 4:
			switch (iParam2)
			{
				case 1:
					Var0 = { 1102.86f, -3197.42f, -39.754f };
					break;
				case 2:
					Var0 = { 1102.86f, -3196.74f, -39.754f };
					break;
				case 3:
					if (__LIB_18__.func_978(iParam0, iParam1, 0) && !bParam3)
					{
						Var0 = { 1102.86f, -3197.42f, -39.347f };
					}
					else
					{
						Var0 = { 1102.86f, -3197.42f, -39.487f };
					}
					break;
				case 4:
					if (__LIB_18__.func_978(iParam0, iParam1, 0) && !bParam3)
					{
						Var0 = { 1102.86f, -3196.74f, -39.347f };
					}
					else
					{
						Var0 = { 1102.86f, -3196.74f, -39.487f };
					}
					break;
				case 5:
					if (__LIB_18__.func_978(iParam0, iParam1, 0) && !bParam3)
					{
						Var0 = { 1102.86f, -3197.085f, -38.94f };
					}
					else
					{
						Var0 = { 1102.86f, -3197.085f, -39.166f };
					}
					break;
				case 6:
					Var0 = { 1102.86f, -3195.75f, -39.754f };
					break;
				case 7:
					Var0 = { 1102.86f, -3195.07f, -39.754f };
					break;
				case 8:
					if (__LIB_18__.func_978(iParam0, iParam1, 0) && !bParam3)
					{
						Var0 = { 1102.86f, -3195.75f, -39.347f };
					}
					else
					{
						Var0 = { 1102.86f, -3195.75f, -39.487f };
					}
					break;
				case 9:
					if (__LIB_18__.func_978(iParam0, iParam1, 0) && !bParam3)
					{
						Var0 = { 1102.86f, -3195.07f, -39.347f };
					}
					else
					{
						Var0 = { 1102.86f, -3195.07f, -39.487f };
					}
					break;
				case 10:
					if (__LIB_18__.func_978(iParam0, iParam1, 0) && !bParam3)
					{
						Var0 = { 1102.86f, -3195.405f, -38.94f };
					}
					else
					{
						Var0 = { 1102.86f, -3195.405f, -39.166f };
					}
					break;
			}
			break;
		case 0:
			switch (iParam2)
			{
				case 1:
					Var0 = { 1163.9f, -3190.22f, -38.16f };
					break;
				case 2:
					Var0 = { 1163.37f, -3190.22f, -38.16f };
					break;
				case 3:
					Var0 = { 1162.85f, -3190.22f, -38.16f };
					break;
				case 4:
					Var0 = { 1162.32f, -3190.22f, -38.16f };
					break;
				case 5:
					Var0 = { 1161.77f, -3190.22f, -38.16f };
					break;
				case 6:
					Var0 = { 1163.9f, -3190.22f, -38.71f };
					break;
				case 7:
					Var0 = { 1163.37f, -3190.22f, -38.71f };
					break;
				case 8:
					Var0 = { 1162.85f, -3190.22f, -38.71f };
					break;
				case 9:
					Var0 = { 1162.32f, -3190.22f, -38.71f };
					break;
				case 10:
					Var0 = { 1161.77f, -3190.22f, -38.71f };
					break;
				case 11:
					Var0 = { 1163.9f, -3190.22f, -39.29f };
					break;
				case 12:
					Var0 = { 1163.37f, -3190.22f, -39.29f };
					break;
				case 13:
					Var0 = { 1162.85f, -3190.22f, -39.29f };
					break;
				case 14:
					Var0 = { 1162.32f, -3190.22f, -39.29f };
					break;
				case 15:
					Var0 = { 1161.77f, -3190.22f, -39.29f };
					break;
				case 16:
					Var0 = { 1163.9f, -3190.22f, -39.92f };
					break;
				case 17:
					Var0 = { 1163.37f, -3190.22f, -39.92f };
					break;
				case 18:
					Var0 = { 1162.85f, -3190.22f, -39.92f };
					break;
				case 19:
					Var0 = { 1162.32f, -3190.22f, -39.92f };
					break;
				case 20:
					Var0 = { 1161.77f, -3190.22f, -39.92f };
					break;
				case 21:
					Var0 = { 1160.89f, -3190.22f, -38.16f };
					break;
				case 22:
					Var0 = { 1160.36f, -3190.22f, -38.16f };
					break;
				case 23:
					Var0 = { 1159.83f, -3190.22f, -38.16f };
					break;
				case 24:
					Var0 = { 1159.3f, -3190.22f, -38.16f };
					break;
				case 25:
					Var0 = { 1158.77f, -3190.22f, -38.16f };
					break;
				case 26:
					Var0 = { 1160.89f, -3190.22f, -38.71f };
					break;
				case 27:
					Var0 = { 1160.36f, -3190.22f, -38.71f };
					break;
				case 28:
					Var0 = { 1159.83f, -3190.22f, -38.71f };
					break;
				case 29:
					Var0 = { 1159.3f, -3190.22f, -38.71f };
					break;
				case 30:
					Var0 = { 1158.77f, -3190.22f, -38.71f };
					break;
				case 31:
					Var0 = { 1160.89f, -3190.22f, -39.29f };
					break;
				case 32:
					Var0 = { 1160.36f, -3190.22f, -39.29f };
					break;
				case 33:
					Var0 = { 1159.83f, -3190.22f, -39.29f };
					break;
				case 34:
					Var0 = { 1159.3f, -3190.22f, -39.29f };
					break;
				case 35:
					Var0 = { 1158.77f, -3190.22f, -39.29f };
					break;
				case 36:
					Var0 = { 1160.89f, -3190.22f, -39.92f };
					break;
				case 37:
					Var0 = { 1160.36f, -3190.22f, -39.92f };
					break;
				case 38:
					Var0 = { 1159.83f, -3190.22f, -39.92f };
					break;
				case 39:
					Var0 = { 1159.3f, -3190.22f, -39.92f };
					break;
				case 40:
					Var0 = { 1158.77f, -3190.22f, -39.92f };
					break;
				case 41:
					Var0 = { 1157.05f, -3190.05f, -38.16f };
					break;
				case 42:
					Var0 = { 1157.05f, -3190.58f, -38.16f };
					break;
				case 43:
					Var0 = { 1157.05f, -3191.09f, -38.16f };
					break;
				case 44:
					Var0 = { 1157.05f, -3191.62f, -38.16f };
					break;
				case 45:
					Var0 = { 1157.05f, -3192.16f, -38.16f };
					break;
				case 46:
					Var0 = { 1157.05f, -3190.05f, -38.71f };
					break;
				case 47:
					Var0 = { 1157.05f, -3190.58f, -38.71f };
					break;
				case 48:
					Var0 = { 1157.05f, -3191.09f, -38.71f };
					break;
				case 49:
					Var0 = { 1157.05f, -3191.62f, -38.71f };
					break;
				case 50:
					Var0 = { 1157.05f, -3192.16f, -38.71f };
					break;
				case 51:
					Var0 = { 1157.05f, -3190.05f, -39.29f };
					break;
				case 52:
					Var0 = { 1157.05f, -3190.58f, -39.29f };
					break;
				case 53:
					Var0 = { 1157.05f, -3191.09f, -39.29f };
					break;
				case 54:
					Var0 = { 1157.05f, -3191.62f, -39.29f };
					break;
				case 55:
					Var0 = { 1157.05f, -3192.16f, -39.29f };
					break;
				case 56:
					Var0 = { 1157.05f, -3190.05f, -39.92f };
					break;
				case 57:
					Var0 = { 1157.05f, -3190.58f, -39.92f };
					break;
				case 58:
					Var0 = { 1157.05f, -3191.09f, -39.92f };
					break;
				case 59:
					Var0 = { 1157.05f, -3191.62f, -39.92f };
					break;
				case 60:
					Var0 = { 1157.05f, -3192.16f, -39.92f };
					break;
			}
			break;
		case 2:
			if (iParam2 < 11)
			{
				Var0 = { 1119.9185f, -3195.2415f, -41.1847f };
				Var0.f_2 = (Var0.f_2 + (IntToFloat((iParam2 - 1)) * 0.0728f));
			}
			else if (iParam2 < 21)
			{
				Var0 = { 1119.8325f, -3193.2905f, -41.1772f };
				Var0.f_2 = (Var0.f_2 + (IntToFloat((iParam2 - 11)) * 0.0728f));
			}
			else if (iParam2 < 31)
			{
				Var0 = { 1118.7825f, -3193.2734f, -41.1772f };
				Var0.f_2 = (Var0.f_2 + (IntToFloat((iParam2 - 21)) * 0.0728f));
			}
			else
			{
				Var0 = { 1117.7335f, -3193.2825f, -41.1772f };
				Var0.f_2 = (Var0.f_2 + (IntToFloat((iParam2 - 31)) * 0.0728f));
			}
			fVar2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 0.03f);
			Var0.f_0 = (Var0.f_0 + fVar2);
			Var0.f_1 = (Var0.f_1 - fVar2);
			break;
		case 3:
			switch (iParam2)
			{
				case 1:
					Var0 = { 1017.8255f, -3197.8606f, -39.8918f };
					break;
				case 2:
					Var0 = { 1017.8415f, -3198.7576f, -39.8918f };
					break;
				case 3:
					Var0 = { 1017.9115f, -3199.9204f, -39.8918f };
					break;
				case 4:
					Var0 = { 1017.9115f, -3200.8145f, -39.8918f };
					break;
				case 5:
					Var0 = { 1017.8255f, -3197.8606f, -39.2918f };
					break;
				case 6:
					Var0 = { 1017.8415f, -3198.7576f, -39.2918f };
					break;
				case 7:
					Var0 = { 1017.9115f, -3199.9204f, -39.2918f };
					break;
				case 8:
					Var0 = { 1017.9115f, -3200.8145f, -39.2918f };
					break;
				case 9:
					Var0 = { 1017.8255f, -3197.8606f, -38.6918f };
					break;
				case 10:
					Var0 = { 1017.8415f, -3198.7576f, -38.6918f };
					break;
				case 11:
					Var0 = { 1017.9115f, -3199.9204f, -38.6918f };
					break;
				case 12:
					Var0 = { 1017.9115f, -3200.8145f, -38.6918f };
					break;
				case 13:
					Var0 = { 1017.8255f, -3197.8606f, -38.0918f };
					break;
				case 14:
					Var0 = { 1017.8415f, -3198.7576f, -38.0918f };
					break;
				case 15:
					Var0 = { 1017.9115f, -3199.9204f, -38.0918f };
					break;
				case 16:
					Var0 = { 1017.9115f, -3200.8145f, -38.0918f };
					break;
				case 17:
					Var0 = { 1017.8255f, -3197.8606f, -37.4918f };
					break;
				case 18:
					Var0 = { 1017.8415f, -3198.7576f, -37.4918f };
					break;
				case 19:
					Var0 = { 1017.9115f, -3199.9204f, -37.4918f };
					break;
				case 20:
					Var0 = { 1017.9115f, -3200.8145f, -37.4918f };
					break;
			}
			break;
		case 5:
			switch (iParam2)
			{
				case 1:
					Var0 = { 918.0762f, -3233.553f, -99.29f };
					break;
				case 2:
					Var0 = { 917.455f, -3231.86f, -99.29f };
					break;
				case 3:
					Var0 = { 917.8137f, -3230.3757f, -99.29f };
					break;
				case 4:
					Var0 = { 916.6675f, -3228.079f, -99.29f };
					break;
				case 5:
					Var0 = { 916.424f, -3222.085f, -99.29f };
					break;
				case 6:
					Var0 = { 916.024f, -3219.905f, -99.29f };
					break;
				case 7:
					Var0 = { 915.0478f, -3217.955f, -99.29f };
					break;
				case 8:
					Var0 = { 929.4294f, -3239.7043f, -99.29f };
					break;
				case 9:
					Var0 = { 932.3951f, -3239.353f, -99.29f };
					break;
				case 10:
					Var0 = { 935.0101f, -3239.74f, -99.29f };
					break;
				case 11:
					Var0 = { 938.0048f, -3239.7593f, -99.29f };
					break;
				case 12:
					Var0 = { 940.6334f, -3239.468f, -99.29f };
					break;
				case 13:
					Var0 = { 942.5807f, -3239.505f, -99.29f };
					break;
				case 14:
					Var0 = { 944.7498f, -3239.5232f, -99.29f };
					break;
				case 15:
					Var0 = { 925.9312f, -3235.3582f, -99.29f };
					break;
				case 16:
					Var0 = { 927.8091f, -3235.5996f, -99.29f };
					break;
				case 17:
					Var0 = { 930.0591f, -3234.9968f, -99.29f };
					break;
				case 18:
					Var0 = { 931.6411f, -3235.31f, -99.29f };
					break;
				case 19:
					Var0 = { 934.9592f, -3233.146f, -99.29f };
					break;
				case 20:
					Var0 = { 937.2183f, -3233.4138f, -99.29f };
					break;
				case 21:
					Var0 = { 934.4614f, -3235.288f, -99.29f };
					break;
				case 22:
					Var0 = { 937.2183f, -3235.1987f, -99.29f };
					break;
				case 23:
					Var0 = { 941.0244f, -3234.8906f, -99.29f };
					break;
				case 24:
					Var0 = { 941.0244f, -3232.8713f, -99.29f };
					break;
				case 25:
					Var0 = { 939.026f, -3230.6658f, -99.29f };
					break;
				case 26:
					Var0 = { 941.0535f, -3230.5999f, -99.29f };
					break;
				case 27:
					Var0 = { 943.2751f, -3233.4336f, -99.29f };
					break;
				case 28:
					Var0 = { 943.2751f, -3231.5068f, -99.29f };
					break;
				case 29:
					Var0 = { 945.3622f, -3235.1987f, -99.29f };
					break;
				case 30:
					Var0 = { 945.3622f, -3233.2449f, -99.29f };
					break;
				case 31:
					Var0 = { 945.3622f, -3231.068f, -99.29f };
					break;
				case 32:
					Var0 = { 950f, -3236.0881f, -99.29f };
					break;
				case 33:
					Var0 = { 930.3836f, -3229.8333f, -99.29f };
					break;
				case 34:
					Var0 = { 927.9138f, -3229.9148f, -99.29f };
					break;
				case 35:
					Var0 = { 925.825f, -3230.2483f, -99.29f };
					break;
				case 36:
					Var0 = { 921.7018f, -3224.2114f, -99.29f };
					break;
				case 37:
					Var0 = { 921.916f, -3221.8296f, -99.29f };
					break;
				case 38:
					Var0 = { 921.6567f, -3219.6096f, -99.29f };
					break;
				case 39:
					Var0 = { 930.4537f, -3223.4377f, -99.29f };
					break;
				case 40:
					Var0 = { 930.1275f, -3220.707f, -99.29f };
					break;
				case 41:
					Var0 = { 930.2318f, -3218.944f, -99.29f };
					break;
				case 42:
					Var0 = { 933.3158f, -3223.0168f, -99.29f };
					break;
				case 43:
					Var0 = { 933.08f, -3219.95f, -99.29f };
					break;
				case 44:
					Var0 = { 936.4805f, -3223.024f, -99.29f };
					break;
				case 45:
					Var0 = { 937.114f, -3221.0762f, -99.29f };
					break;
				case 46:
					Var0 = { 935.2993f, -3218.889f, -99.29f };
					break;
				case 47:
					Var0 = { 937.2183f, -3218.444f, -99.29f };
					break;
				case 48:
					Var0 = { 938.804f, -3223.024f, -99.29f };
					break;
				case 49:
					Var0 = { 940.7271f, -3223.2468f, -99.29f };
					break;
				case 50:
					Var0 = { 943.1925f, -3222.187f, -99.29f };
					break;
				case 51:
					Var0 = { 945.3622f, -3222.2944f, -99.29f };
					break;
				case 52:
					Var0 = { 940.3299f, -3217.9543f, -99.29f };
					break;
				case 53:
					Var0 = { 943.5904f, -3217.5198f, -99.29f };
					break;
				case 54:
					Var0 = { 949.9017f, -3225.98f, -99.29f };
					break;
				case 55:
					Var0 = { 949.9017f, -3223.631f, -99.29f };
					break;
				case 56:
					Var0 = { 949.9017f, -3221.0159f, -99.29f };
					break;
				case 57:
					Var0 = { 949.9017f, -3218.0212f, -99.29f };
					break;
				case 58:
					Var0 = { 923.31f, -3210.99f, -99.29f };
					break;
				case 59:
					Var0 = { 925.9277f, -3213.227f, -99.29f };
					break;
				case 60:
					Var0 = { 928.2844f, -3212.9849f, -99.29f };
					break;
				case 61:
					Var0 = { 928.7822f, -3210.8428f, -99.29f };
					break;
				case 62:
					Var0 = { 928.1567f, -3209.1396f, -99.29f };
					break;
				case 63:
					Var0 = { 927.9027f, -3207.2021f, -99.29f };
					break;
				case 64:
					Var0 = { 930.9362f, -3213.2424f, -99.29f };
					break;
				case 65:
					Var0 = { 930.9362f, -3211.4573f, -99.29f };
					break;
				case 66:
					Var0 = { 931.063f, -3208.7092f, -99.29f };
					break;
				case 67:
					Var0 = { 933.0613f, -3212.9343f, -99.29f };
					break;
				case 68:
					Var0 = { 933.0613f, -3210.915f, -99.29f };
					break;
				case 69:
					Var0 = { 933.0905f, -3208.6433f, -99.29f };
					break;
				case 70:
					Var0 = { 935.3121f, -3211.4773f, -99.29f };
					break;
				case 71:
					Var0 = { 935.3121f, -3209.5505f, -99.29f };
					break;
				case 72:
					Var0 = { 937.3992f, -3209.1116f, -99.29f };
					break;
				case 73:
					Var0 = { 938.0475f, -3211.5154f, -99.29f };
					break;
				case 74:
					Var0 = { 938.0278f, -3213.8f, -99.29f };
					break;
				case 75:
					Var0 = { 936.63f, -3206.74f, -99.302f };
					break;
				case 76:
					Var0 = { 930.307f, -3202.097f, -99.29f };
					break;
				case 77:
					Var0 = { 930.2169f, -3199.165f, -99.29f };
					break;
				case 78:
					Var0 = { 928.1337f, -3202.218f, -99.29f };
					break;
				case 79:
					Var0 = { 927.6704f, -3199.946f, -99.29f };
					break;
				case 80:
					Var0 = { 926.1827f, -3202.3267f, -99.29f };
					break;
				case 81:
					Var0 = { 918.865f, -3201.836f, -99.29f };
					break;
				case 82:
					Var0 = { 918.3308f, -3199.714f, -99.29f };
					break;
				case 83:
					Var0 = { 918.3589f, -3197.4822f, -99.29f };
					break;
				case 84:
					Var0 = { 918.1301f, -3195.4666f, -99.29f };
					break;
				case 85:
					Var0 = { 920.7615f, -3195.3127f, -99.29f };
					break;
				case 86:
					Var0 = { 923.2033f, -3195.1504f, -99.29f };
					break;
				case 87:
					Var0 = { 934.7308f, -3193.2488f, -99.29f };
					break;
				case 88:
					Var0 = { 937.2307f, -3193.0696f, -99.29f };
					break;
				case 89:
					Var0 = { 939.2424f, -3192.6992f, -99.29f };
					break;
				case 90:
					Var0 = { 941.4653f, -3192.019f, -99.29f };
					break;
				case 91:
					Var0 = { 943.882f, -3192.2446f, -99.29f };
					break;
				case 92:
					Var0 = { 944.5169f, -3194.794f, -99.29f };
					break;
				case 93:
					Var0 = { 946.1968f, -3200.0688f, -99.29f };
					break;
				case 94:
					Var0 = { 948.5137f, -3201.2068f, -99.29f };
					break;
				case 95:
					Var0 = { 949.1263f, -3203.4321f, -99.29f };
					break;
				case 96:
					Var0 = { 922.98f, -3208.57f, -99.2823f };
					break;
				case 97:
					Var0 = { 920.8f, -3197.81f, -99.2492f };
					break;
				case 98:
					Var0 = { 939.15f, -3206.69f, -99.3005f };
					break;
				case 99:
					Var0 = { 942.2f, -3194.83f, -99.2781f };
					break;
				case 100:
					Var0 = { 946.86f, -3202.77f, -99.2781f };
					break;
			}
			break;
	}
	return Var0;
}
