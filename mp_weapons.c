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
	int iLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
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
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66[64] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	int iLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
#endregion
void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
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
	iLocal_28 = 3;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	iLocal_64 = 4;
	iLocal_65 = 12;
	if (__LIB_0__::func_3() == 2)
	{
		while (true)
		{
			SYSTEM::WAIT(0);
		}
	}
	HUD::FORCE_SCRIPTED_GFX_WHEN_FRONTEND_ACTIVE(1);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	Global_1574600 = 1;
	iVar0 = 0;
	Global_1646386.f_281 = 1;
	Global_1643950.f_1 = 0;
	Global_1643950.f_3 = 0;
	Global_1643950.f_5 = 0;
	func_157(&Global_1646386);
	func_156(&Global_1646386);
	func_155(&Global_1646386);
	func_151();
	func_150(0, &Global_1646386);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
	HUD::PAUSE_MENU_ACTIVATE_CONTEXT(joaat("HIDE_ACCEPTBUTTON"));
	HUD::PAUSE_MENU_ACTIVATE_CONTEXT(joaat("NAVIGATING_CONTENT"));
	HUD::PAUSE_MENU_REDRAW_INSTRUCTIONAL_BUTTONS(0);
	func_149();
	iVar5 = 1;
	switch (iScriptParam_69)
	{
		case 3:
			while (iVar0 == 0)
			{
				SYSTEM::WAIT(0);
				if (iVar5 == 1)
				{
					if (iVar6 == 0)
					{
						if (HUD::IS_FRONTEND_READY_FOR_CONTROL())
						{
							HUD::TAKE_CONTROL_OF_FRONTEND();
							iVar6 = 1;
						}
					}
				}
				if (__LIB_10__::func_437(201))
				{
					if (iVar5 == 0)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /* GXT: Filter List */, "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
						Global_1643950.f_1 = 0;
						Global_1643950.f_3 = 0;
						iVar5 = 1;
						func_150(0, &Global_1646386);
						func_156(&Global_1646386);
						func_155(&Global_1646386);
						func_147(&Global_1646386, &Global_1643950);
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("MENU_SHIFT_DEPTH");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					}
				}
				if (iVar5 == 0)
				{
					if (__LIB_10__::func_437(189) || __LIB_10__::func_437(190))
					{
						iVar0 = 1;
					}
				}
				if (__LIB_10__::func_437(202))
				{
					__LIB_38__::func_220();
					if (iVar5 == 1)
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("MENU_SHIFT_DEPTH");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
						HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(joaat("HIDE_ACCEPTBUTTON"));
						HUD::PAUSE_MENU_REDRAW_INSTRUCTIONAL_BUTTONS(0);
						func_156(&Global_1646386);
						func_155(&Global_1646386);
						func_150(-1, &Global_1646386);
						iVar5 = 0;
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
						iVar0 = 1;
						HUD::RELEASE_CONTROL_OF_FRONTEND();
					}
				}
				if (HUD::HAS_MENU_TRIGGER_EVENT_OCCURRED())
				{
					HUD::GET_MENU_TRIGGER_EVENT_DETAILS(&iVar2, &uVar3);
				}
				if (HUD::HAS_MENU_LAYOUT_CHANGED_EVENT_OCCURRED())
				{
					HUD::GET_MENU_LAYOUT_CHANGED_EVENT_DETAILS(&uVar1, &iVar2, &uVar3);
					iVar4 = iVar2 + 1000;
					if (iVar4 >= 0)
					{
						if (iVar4 >= 9)
						{
							iVar4 = 8;
						}
						Global_1643950.f_1 = (iVar4 % 3);
						Global_1643950.f_3 = (iVar4 / 3);
						func_150(iVar4, &Global_1646386);
						func_155(&Global_1646386);
					}
				}
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPWeaponsCommon", false);
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPWeaponsGang0", false);
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPWeaponsGang1", false);
				func_9(&Global_1646386, &Global_1643950);
				if (iVar5 == 1)
				{
					func_1(&Global_1646386, &Global_1643950, &uLocal_67);
				}
			}
			break;
		case 0:
			break;
		case 1:
			break;
		case 2:
			break;
	}
	HUD::RELEASE_CONTROL_OF_FRONTEND();
	HUD::FORCE_SCRIPTED_GFX_WHEN_FRONTEND_ACTIVE(0);
	Global_1574600 = 0;
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	while (true)
	{
		SYSTEM::WAIT(0);
	}
}

void func_1(var uParam0, var uParam1, var uParam2)//Position - 0x30C
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!__LIB_0__::func_864(uParam2) || (__LIB_0__::func_864(uParam2) && __LIB_0__::func_937(uParam2, 250, 0)))
	{
		iVar0 = 1;
	}
	if ((PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/) || __LIB_7__::func_705(187, &(Global_1648034.f_1060), 1)) && iVar0)
	{
		__LIB_0__::func_794(uParam2);
		__LIB_0__::func_795(uParam2, 0, 0);
		MISC::SET_BIT(&(uParam0->f_285), 0);
	}
	if ((PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/) || __LIB_7__::func_705(188, &(Global_1648034.f_1060), 1)) && iVar0)
	{
		__LIB_0__::func_794(uParam2);
		__LIB_0__::func_795(uParam2, 0, 0);
		MISC::SET_BIT(&(uParam0->f_285), 1);
	}
	if (((PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 189 /*INPUT_FRONTEND_LEFT*/) || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 241 /*INPUT_CURSOR_SCROLL_UP*/)) || __LIB_7__::func_705(189, &(Global_1648034.f_1060), 1)) && iVar0)
	{
		__LIB_0__::func_794(uParam2);
		__LIB_0__::func_795(uParam2, 0, 0);
		MISC::SET_BIT(&(uParam0->f_285), 2);
	}
	if (((PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/) || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 242 /*INPUT_CURSOR_SCROLL_DOWN*/)) || __LIB_7__::func_705(190, &(Global_1648034.f_1060), 1)) && iVar0)
	{
		MISC::SET_BIT(&(uParam0->f_285), 3);
		__LIB_0__::func_794(uParam2);
		__LIB_0__::func_795(uParam2, 0, 0);
	}
	if (BitTest(uParam0->f_285, 1))
	{
		MISC::CLEAR_BIT(&(uParam0->f_285), 1);
		AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
		uParam1->f_3 = (uParam1->f_3 - 1);
		if (uParam1->f_3 < 0)
		{
			uParam1->f_3 = 2;
		}
		func_150(func_3(&(uParam1->f_1), &(uParam1->f_3), uParam1->f_5, 188), uParam0);
		func_156(uParam0);
		func_155(uParam0);
		func_147(uParam0, uParam1);
	}
	if (BitTest(uParam0->f_285, 0))
	{
		MISC::CLEAR_BIT(&(uParam0->f_285), 0);
		AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
		uParam1->f_3++;
		if (uParam1->f_3 > 2)
		{
			uParam1->f_3 = 0;
		}
		func_150(func_3(&(uParam1->f_1), &(uParam1->f_3), uParam1->f_5, 187), uParam0);
		func_156(uParam0);
		func_155(uParam0);
		func_147(uParam0, uParam1);
	}
	if (BitTest(uParam0->f_285, 2))
	{
		MISC::CLEAR_BIT(&(uParam0->f_285), 2);
		uParam1->f_1 = (uParam1->f_1 - 1);
		if (uParam1->f_1 < 0)
		{
			if (iLocal_64 > 1)
			{
				func_157(uParam0);
				*uParam0 = 0;
				func_2(uParam0);
			}
			if (uParam1->f_5 > 0)
			{
				uParam1->f_5 = (uParam1->f_5 - 1);
				uParam1->f_1 = 2;
			}
			else
			{
				uParam1->f_5 = iLocal_64;
				uParam1->f_1 = 2;
				iVar1 = (uParam1->f_1 + uParam1->f_3 * 3);
				if (iVar1 >= iLocal_65)
				{
					uParam1->f_1 = ((iLocal_65 - 1) % 3);
					uParam1->f_3 = ((iLocal_65 - 1) / 3);
				}
			}
		}
		AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
		func_150(func_3(&(uParam1->f_1), &(uParam1->f_3), uParam1->f_5, 189), uParam0);
		func_156(uParam0);
		func_155(uParam0);
		func_147(uParam0, uParam1);
	}
	if (BitTest(uParam0->f_285, 3))
	{
		MISC::CLEAR_BIT(&(uParam0->f_285), 3);
		uParam1->f_1++;
		iVar2 = (uParam1->f_1 + uParam1->f_3 * 3);
		if (uParam1->f_1 > 2 || (uParam1->f_5 == iLocal_64 && iVar2 >= iLocal_65))
		{
			if (iLocal_64 > 1)
			{
				func_157(uParam0);
				*uParam0 = 0;
				func_2(uParam0);
			}
			uParam1->f_1 = 0;
			uParam1->f_5++;
			if (uParam1->f_5 > iLocal_64)
			{
				uParam1->f_5 = 0;
			}
		}
		AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
		func_150(func_3(&(uParam1->f_1), &(uParam1->f_3), uParam1->f_5, 190), uParam0);
		func_156(uParam0);
		func_155(uParam0);
		func_147(uParam0, uParam1);
	}
}

void func_2(var uParam0)//Position - 0x686
{
	uParam0->f_281 = 0;
}

int func_3(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x694
{
	int iVar0;
	int iVar1;
	iVar0 = (*uParam0 + *uParam1 * 3);
	switch (iParam3)
	{
		case 188:
			if (iParam2 == iLocal_64)
			{
				if (iVar0 > (iLocal_65 - 1))
				{
					*uParam1 = 0;
					iVar0 = (*uParam0 + *uParam1 * 3);
				}
			}
			break;
		case 187:
			if (iParam2 == iLocal_64)
			{
				if (iVar0 > (iLocal_65 - 1))
				{
					if (*uParam1 > 0)
					{
						*uParam1 = (*uParam1 - 1);
					}
					else
					{
						*uParam1 = 0;
					}
					iVar0 = (*uParam0 + *uParam1 * 3);
				}
			}
			break;
		case 189:
			break;
		case 190:
			if (iParam2 == iLocal_64)
			{
				if (*uParam0 == 0)
				{
					iVar1 = 0;
					while (iVar1 <= 3)
					{
						if (iVar0 > (iLocal_65 - 1))
						{
							*uParam1 = (*uParam1 - 1);
							iVar0 = (*uParam0 + *uParam1 * 3);
						}
						else
						{
							iVar1 = 3;
						}
						iVar1++;
					}
				}
				else if (iVar0 > (iLocal_65 - 1))
				{
					if (*uParam0 > 0)
					{
						*uParam0 = (*uParam0 - 1);
					}
					else
					{
						*uParam0 = 0;
					}
					iVar0 = (*uParam0 + *uParam1 * 3);
				}
			}
			break;
	}
	return iVar0;
}

void func_9(var uParam0, var uParam1)//Position - 0x9B2
{
	if ((GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPWeaponsCommon") && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPWeaponsGang0")) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPWeaponsGang1"))
	{
		if (__LIB_0__::func_194(8, -1) == 0)
		{
			*uParam1 = __LIB_0__::getGlobal_1574918();
		}
		func_149();
		switch (uParam1->f_5)
		{
			case 0:
				if (!uParam0->f_1[0])
				{
					func_107(joaat("WEAPON_PISTOL"), uParam0, *uParam1, 0);
					func_107(joaat("WEAPON_COMBATPISTOL"), uParam0, *uParam1, 0);
					func_107(joaat("WEAPON_APPISTOL"), uParam0, *uParam1, 0);
					func_107(joaat("WEAPON_MICROSMG"), uParam0, *uParam1, 0);
					func_107(joaat("WEAPON_SMG"), uParam0, *uParam1, 0);
					func_107(joaat("WEAPON_ASSAULTRIFLE"), uParam0, *uParam1, 0);
					func_107(joaat("WEAPON_CARBINERIFLE"), uParam0, *uParam1, 0);
					func_107(joaat("WEAPON_ADVANCEDRIFLE"), uParam0, *uParam1, 0);
					func_107(joaat("WEAPON_MG"), uParam0, *uParam1, 0);
				}
				break;
			case 1:
				if (!uParam0->f_1[0])
				{
					func_107(joaat("WEAPON_COMBATMG"), uParam0, *uParam1, 0);
					func_107(joaat("WEAPON_ASSAULTSMG"), uParam0, *uParam1, 0);
					func_107(joaat("WEAPON_PUMPSHOTGUN"), uParam0, *uParam1, 0);
					func_107(joaat("WEAPON_ASSAULTSHOTGUN"), uParam0, *uParam1, 0);
					func_107(joaat("WEAPON_SNIPERRIFLE"), uParam0, *uParam1, 0);
					func_107(joaat("WEAPON_HEAVYSNIPER"), uParam0, *uParam1, 0);
					func_107(joaat("WEAPON_GRENADELAUNCHER"), uParam0, *uParam1, 0);
					func_107(joaat("WEAPON_MINIGUN"), uParam0, *uParam1, 0);
					func_107(joaat("WEAPON_RPG"), uParam0, *uParam1, 0);
				}
				break;
			case 2:
				if (!uParam0->f_1[0])
				{
					func_107(joaat("WEAPON_KNIFE"), uParam0, *uParam1, 0);
					func_107(joaat("WEAPON_NIGHTSTICK"), uParam0, *uParam1, 0);
					func_107(joaat("WEAPON_BAT"), uParam0, *uParam1, 0);
					func_107(joaat("WEAPON_CROWBAR"), uParam0, *uParam1, 0);
					func_107(joaat("WEAPON_GOLFCLUB"), uParam0, *uParam1, 0);
					func_107(joaat("WEAPON_MOLOTOV"), uParam0, *uParam1, 0);
					func_107(joaat("WEAPON_GRENADE"), uParam0, *uParam1, 0);
					func_107(joaat("WEAPON_SMOKEGRENADE"), uParam0, *uParam1, 0);
					func_107(joaat("WEAPON_STICKYBOMB"), uParam0, *uParam1, 0);
				}
				break;
			default:
				if (!uParam0->f_1[0])
				{
					func_96(uParam0, uParam1);
				}
				break;
		}
		func_10(uParam0, __LIB_40__::func_33(uParam0));
	}
}

void func_10(var uParam0, int iParam1)//Position - 0xBF1
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_2(uParam0);
	}
	if (*uParam0 == 0)
	{
		iVar0 = 0;
		while (iVar0 <= 8)
		{
			iVar5 = 0;
			iVar6 = 0;
			iVar7 = 0;
			if (uParam0->f_1[iVar0] == 1)
			{
				if (uParam0->f_85[iVar0] != 0)
				{
					if (__LIB_6__::func_163(uParam0->f_85[iVar0]))
					{
						if (func_92(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), __LIB_18__::func_245(uParam0->f_85[iVar0]), -1))
						{
							bVar2 = true;
						}
						else
						{
							bVar2 = false;
						}
					}
					else if (func_88(uParam0->f_85[iVar0], uParam0->f_276, 0))
					{
						bVar2 = true;
					}
					else
					{
						bVar2 = false;
					}
				}
				bVar3 = func_85(uParam0->f_85[iVar0], uParam0->f_276, 0);
				iVar1 = 0;
				while (iVar1 <= 35)
				{
					iVar4 = __LIB_0__::func_722(uParam0->f_85[iVar0], iVar1);
					if (!bVar3)
					{
						func_67(iVar4, uParam0->f_85[iVar0], 0, 0, 0);
						func_63(iVar4, uParam0->f_85[iVar0], 0);
						func_57(iVar4, uParam0->f_85[iVar0], 0);
					}
					if (MISC::ARE_STRINGS_EQUAL(__LIB_19__::func_181(iVar4, uParam0->f_85[iVar0]), "WCT_CLIP1" /* GXT: Default Clip */))
					{
						func_67(iVar4, uParam0->f_85[iVar0], 1, 0, 0);
						if (!bVar3)
						{
							func_63(iVar4, uParam0->f_85[iVar0], 1);
							func_57(iVar4, uParam0->f_85[iVar0], 1);
						}
					}
					if (MISC::ARE_STRINGS_EQUAL(__LIB_19__::func_181(iVar4, uParam0->f_85[iVar0]), "WCT_SCOPE_LRG" /* GXT: Scope */))
					{
						func_67(iVar4, uParam0->f_85[iVar0], 1, 0, 0);
						if (!bVar3)
						{
							func_63(iVar4, uParam0->f_85[iVar0], 1);
							func_57(iVar4, uParam0->f_85[iVar0], 1);
						}
					}
					if ((uParam0->f_85[iVar0] == joaat("WEAPON_BULLPUPSHOTGUN") || uParam0->f_85[iVar0] == joaat("WEAPON_PISTOL50")) || uParam0->f_85[iVar0] == joaat("WEAPON_SNSPISTOL"))
					{
						func_67(iVar4, uParam0->f_85[iVar0], 1, 0, 0);
						func_63(iVar4, uParam0->f_85[iVar0], 1);
						func_57(iVar4, uParam0->f_85[iVar0], 1);
					}
					if (bVar3 && func_51(iVar4, uParam0->f_85[iVar0], uParam0->f_276))
					{
						if (bVar2 && func_92(iVar4, uParam0->f_85[iVar0], uParam0->f_276))
						{
							iVar5 = (iVar5 + func_49(iVar4, uParam0->f_85[iVar0], 8));
							iVar6 = (iVar6 + func_47(iVar4, uParam0->f_85[iVar0], 8));
							iVar7 = (iVar7 + func_45(iVar4, uParam0->f_85[iVar0], 8));
						}
					}
					else if (iVar4 != 0)
					{
						iVar5 = (iVar5 + func_49(iVar4, uParam0->f_85[iVar0], 4));
						iVar6 = (iVar6 + func_47(iVar4, uParam0->f_85[iVar0], 4));
						iVar7 = (iVar7 + func_45(iVar4, uParam0->f_85[iVar0], 4));
					}
					iVar1++;
				}
			}
			iVar8 = 0;
			if (uParam0->f_85[iVar0] != 0)
			{
				if (bVar3)
				{
					if (__LIB_6__::func_163(uParam0->f_85[iVar0]))
					{
						if (func_92(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), __LIB_18__::func_245(uParam0->f_85[iVar0]), -1))
						{
							bVar2 = true;
						}
						else
						{
							bVar2 = false;
						}
					}
					else if (func_88(uParam0->f_85[iVar0], uParam0->f_276, 0))
					{
						bVar2 = true;
					}
					else
					{
						bVar2 = false;
					}
					if (((bVar2 || (uParam0->f_85[iVar0] == joaat("WEAPON_PISTOL") && WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PISTOL"), false))) || func_43(uParam0->f_85[iVar0])) || __LIB_38__::func_241(uParam0->f_85[iVar0], uParam0->f_276))
					{
						if (__LIB_6__::func_163(uParam0->f_85[iVar0]))
						{
							if (bVar2)
							{
								iVar8++;
							}
							else
							{
								iVar8 += 2;
							}
						}
						else
						{
							iVar8++;
						}
					}
					else
					{
						iVar8 += 2;
					}
				}
				else
				{
					iVar8 += 4;
				}
			}
			if (uParam0->f_1[iVar0] == 0 || MISC::ARE_STRINGS_EQUAL(__LIB_4__::func_960(uParam0->f_85[iVar0], 0), __LIB_4__::func_960(0, 0)))
			{
				iVar8 = 0;
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_85[iVar0]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar5);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar6);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			iVar0++;
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("DISPLAY_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		*uParam0 = 1;
	}
	func_21(uParam0, func_23(uParam0));
	func_14(uParam0, func_20(uParam0));
	func_11(uParam0, func_13(uParam0));
}

void func_11(var uParam0, int iParam1)//Position - 0x1067
{
	if (iParam1 == 1)
	{
		uParam0->f_279 = 0;
		func_12(uParam0);
	}
	if (uParam0->f_279 == 0)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_HIGHLIGHT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_277);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		uParam0->f_279 = 1;
	}
}

void func_12(var uParam0)//Position - 0x10B9
{
	uParam0->f_283 = 0;
}

int func_13(var uParam0)//Position - 0x10C7
{
	return uParam0->f_283;
}

void func_14(var uParam0, int iParam1)//Position - 0x10D4
{
	struct<2> Var0;
	int iVar1;
	StringCopy(&Var0, " ", 16);
	if (iParam1 == 1)
	{
		uParam0->f_280 = 0;
		func_19(uParam0);
	}
	if (uParam0->f_280 == 0)
	{
		if (uParam0->f_277 > -1)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DESCRIPTION");
			iVar1 = (uParam0->f_215[uParam0->f_277] - uParam0->f_165[uParam0->f_277]);
			if (iVar1 < 0)
			{
				iVar1 = 0;
			}
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			__LIB_0__::func_610(&(uParam0->f_11[uParam0->f_277 /*4*/]));
			__LIB_0__::func_610(&(uParam0->f_48[uParam0->f_277 /*4*/]));
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_95[uParam0->f_277]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_105[uParam0->f_277]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(uParam0->f_135[uParam0->f_277]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(uParam0->f_115[uParam0->f_277]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_145[uParam0->f_277]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_155[uParam0->f_277]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_165[uParam0->f_277]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_185[uParam0->f_277]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_195[uParam0->f_277]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_205[uParam0->f_277]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_225[uParam0->f_277]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_125[uParam0->f_277]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_175[uParam0->f_277]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_235[uParam0->f_277]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(__LIB_20__::func_360(uParam0->f_85[uParam0->f_277]));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			if (func_15(uParam0->f_85[uParam0->f_277]))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_TITLE");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				__LIB_0__::func_610(&Var0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_TITLE");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				__LIB_0__::func_610(&Var0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_TITLE");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				__LIB_0__::func_610(&Var0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_TITLE");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				__LIB_0__::func_610(&Var0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_TITLE");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				__LIB_0__::func_610(&Var0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			else
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_TITLE");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				__LIB_0__::func_610("PM_ACCURACY" /* GXT: Accuracy */);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_TITLE");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				__LIB_0__::func_610("PM_RANGE" /* GXT: Range */);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_TITLE");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				__LIB_0__::func_610("PM_CLIPSIZE" /* GXT: Clip Size */);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_TITLE");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				__LIB_0__::func_610("PM_KD_RATIO" /* GXT: K/D Ratio */);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(7);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_TITLE");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				__LIB_0__::func_610("PM_HEADSHOTS" /* GXT: Headshots */);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_TITLE");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				__LIB_0__::func_610("PM_MY_ACCURACY" /* GXT: My Accuracy */);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
		uParam0->f_280 = 1;
	}
}

int func_15(int iParam0)//Position - 0x13A0
{
	switch (iParam0)
	{
		case joaat("WEAPON_KNIFE"):
		case joaat("WEAPON_NIGHTSTICK"):
		case joaat("WEAPON_HAMMER"):
		case joaat("WEAPON_BAT"):
		case joaat("WEAPON_CROWBAR"):
		case joaat("WEAPON_GOLFCLUB"):
		case joaat("WEAPON_GRENADE"):
		case joaat("WEAPON_SMOKEGRENADE"):
		case joaat("WEAPON_STICKYBOMB"):
		case joaat("WEAPON_MOLOTOV"):
		case joaat("WEAPON_BOTTLE"):
		case joaat("WEAPON_DAGGER"):
		case joaat("WEAPON_PROXMINE"):
		case joaat("WEAPON_KNUCKLE"):
		case joaat("WEAPON_MACHETE"):
		case joaat("WEAPON_FLASHLIGHT"):
		case joaat("WEAPON_SWITCHBLADE"):
		case joaat("WEAPON_BATTLEAXE"):
		case joaat("WEAPON_PIPEBOMB"):
		case joaat("WEAPON_POOLCUE"):
		case joaat("WEAPON_WRENCH"):
		case joaat("WEAPON_STONE_HATCHET"):
			return 1;
			break;
	}
	return 0;
}

void func_19(var uParam0)//Position - 0x162B
{
	uParam0->f_284 = 0;
}

int func_20(var uParam0)//Position - 0x1639
{
	return uParam0->f_284;
}

void func_21(var uParam0, int iParam1)//Position - 0x1646
{
	if (iParam1 == 1)
	{
		uParam0->f_278 = 0;
		func_22(uParam0);
	}
	if (uParam0->f_278 == 0)
	{
		if (uParam0->f_275 != 9999)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_275);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			uParam0->f_275 = 9999;
			uParam0->f_278 = 1;
		}
	}
}

void func_22(var uParam0)//Position - 0x1698
{
	uParam0->f_282 = 0;
}

int func_23(var uParam0)//Position - 0x16A6
{
	return uParam0->f_282;
}

int func_43(int iParam0)//Position - 0x32DC
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	switch (iParam0)
	{
		case joaat("WEAPON_MOLOTOV"):
			bVar0 = true;
			iVar3 = 494;
			break;
		case joaat("WEAPON_GOLFCLUB"):
			bVar0 = true;
			iVar3 = 248;
			break;
		case joaat("WEAPON_BAT"):
			bVar0 = true;
			iVar3 = 241;
			break;
		case joaat("WEAPON_CROWBAR"):
			bVar0 = true;
			iVar3 = 213;
			break;
	}
	if (bVar0)
	{
		iVar1 = __LIB_1__::func_136(PLAYER::PLAYER_ID());
		iVar2 = __LIB_20__::func_360(iParam0);
		if (iVar1 >= iVar2)
		{
			if (__LIB_0__::func_369(iVar3, -1, 0) > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_45(int iParam0, int iParam1, int iParam2)//Position - 0x3370
{
	int iVar0;
	iVar0 = func_46(iParam0, iParam1);
	switch (iVar0)
	{
		case 1:
			switch (iParam2)
			{
				case 4:
					return 2;
					break;
				case 1:
					return 1;
					break;
				case 8:
					return 4;
					break;
			}
			break;
		case 2:
			switch (iParam2)
			{
				case 4:
					return 2;
					break;
				case 1:
					return 1;
					break;
				case 8:
					return 4;
					break;
			}
			break;
		case 4:
			switch (iParam2)
			{
				case 4:
					return 16;
					break;
				case 1:
					return 8;
					break;
				case 8:
					return 32;
					break;
			}
			break;
		case 8:
			switch (iParam2)
			{
				case 4:
					return 128;
					break;
				case 1:
					return 64;
					break;
				case 8:
					return 256;
					break;
			}
			break;
	}
	return 0;
}

int func_46(int iParam0, int iParam1)//Position - 0x346D
{
	switch (iParam1)
	{
		case joaat("WEAPON_SMG_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_SCOPE_MACRO_02_SMG_MK2"):
					return 1;
					break;
				case joaat("COMPONENT_AT_SCOPE_SMALL_SMG_MK2"):
					return 2;
					break;
				case joaat("COMPONENT_AT_SB_BARREL_01"):
					return 4;
					break;
				case joaat("COMPONENT_AT_SB_BARREL_02"):
					return 8;
					break;
			}
			break;
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_SCOPE_LARGE_MK2"):
					return 2;
					break;
				case joaat("COMPONENT_AT_SR_BARREL_01"):
					return 4;
					break;
				case joaat("COMPONENT_AT_SR_BARREL_02"):
					return 8;
					break;
			}
			break;
		case joaat("WEAPON_COMBATMG_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
					return 1;
					break;
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 2;
					break;
				case joaat("COMPONENT_AT_MG_BARREL_01"):
					return 4;
					break;
				case joaat("COMPONENT_AT_MG_BARREL_02"):
					return 8;
					break;
			}
			break;
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 1;
					break;
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 2;
					break;
				case joaat("COMPONENT_AT_AR_BARREL_01"):
					return 4;
					break;
				case joaat("COMPONENT_AT_AR_BARREL_02"):
					return 8;
					break;
			}
			break;
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 1;
					break;
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 2;
					break;
				case joaat("COMPONENT_AT_CR_BARREL_01"):
					return 4;
					break;
				case joaat("COMPONENT_AT_CR_BARREL_02"):
					return 8;
					break;
			}
			break;
	}
	return 0;
}

int func_47(int iParam0, int iParam1, int iParam2)//Position - 0x35C9
{
	int iVar0;
	iVar0 = func_48(iParam0, iParam1);
	switch (iVar0)
	{
		case 1:
			switch (iParam2)
			{
				case 4:
					return 2;
					break;
				case 1:
					return 1;
					break;
				case 8:
					return 4;
					break;
			}
			break;
		case 2:
			switch (iParam2)
			{
				case 4:
					return 16;
					break;
				case 1:
					return 8;
					break;
				case 8:
					return 32;
					break;
			}
			break;
		case 4:
			switch (iParam2)
			{
				case 4:
					return 128;
					break;
				case 1:
					return 64;
					break;
				case 8:
					return 256;
					break;
			}
			break;
		case 7:
			switch (iParam2)
			{
				case 4:
					return 1024;
					break;
				case 1:
					return 512;
					break;
				case 8:
					return 2048;
					break;
			}
			break;
		case 16:
			switch (iParam2)
			{
				case 4:
					return 8192;
					break;
				case 1:
					return 4096;
					break;
				case 8:
					return 16384;
					break;
			}
			break;
		case 32:
			switch (iParam2)
			{
				case 4:
					return 65536;
					break;
				case 1:
					return 1;
					break;
				case 8:
					return 131072;
					break;
			}
			break;
		case 64:
			switch (iParam2)
			{
				case 4:
					return 2;
					break;
				case 1:
					return 1;
					break;
				case 8:
					return 1048576;
					break;
			}
			break;
	}
	return 0;
}

int func_48(int iParam0, int iParam1)//Position - 0x3780
{
	switch (iParam1)
	{
		case joaat("WEAPON_SMG_MK2"):
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
		case joaat("WEAPON_CARBINERIFLE_MK2"):
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
		case joaat("WEAPON_COMBATMG_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 1;
					break;
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 2;
					break;
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 4;
					break;
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 7;
					break;
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 16;
					break;
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 32;
					break;
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 64;
					break;
				case joaat("COMPONENT_AT_MUZZLE_08"):
					return 1;
					break;
				case joaat("COMPONENT_AT_MUZZLE_09"):
					return 2;
					break;
			}
			break;
	}
	return 0;
}

int func_49(int iParam0, int iParam1, int iParam2)//Position - 0x3830
{
	int iVar0;
	iVar0 = func_50(iParam0, iParam1);
	switch (iVar0)
	{
		case 1:
			switch (iParam2)
			{
				case 4:
					return 2;
					break;
				case 1:
					return 1;
					break;
				case 8:
					return 4;
					break;
			}
			break;
		case 2:
			switch (iParam2)
			{
				case 4:
					return 16;
					break;
				case 1:
					return 8;
					break;
				case 8:
					return 32;
					break;
			}
			break;
		case 4:
			switch (iParam2)
			{
				case 4:
					return 128;
					break;
				case 1:
					return 64;
					break;
				case 8:
					return 256;
					break;
			}
			break;
		case 8:
			switch (iParam2)
			{
				case 4:
					return 1024;
					break;
				case 1:
					return 512;
					break;
				case 8:
					return 2048;
					break;
			}
			break;
		case 16:
			switch (iParam2)
			{
				case 4:
					return 8192;
					break;
				case 1:
					return 4096;
					break;
				case 8:
					return 16384;
					break;
			}
			break;
		case 32:
			switch (iParam2)
			{
				case 4:
					return 65536;
					break;
				case 1:
					return 32768;
					break;
				case 8:
					return 131072;
					break;
			}
			break;
		case 256:
			switch (iParam2)
			{
				case 4:
					return 33554432;
					break;
				case 1:
					return 16777216;
					break;
				case 8:
					return 67108864;
					break;
			}
			break;
		case 64:
			switch (iParam2)
			{
				case 4:
					return 524288;
					break;
				case 1:
					return 262144;
					break;
				case 8:
					return 1048576;
					break;
			}
			break;
		case 128:
			switch (iParam2)
			{
				case 4:
					return 4194304;
					break;
				case 1:
					return 2097152;
					break;
				case 8:
					return 8388608;
					break;
			}
			break;
	}
	return 0;
}

int func_50(int iParam0, int iParam1)//Position - 0x3A73
{
	switch (iParam1)
	{
		case joaat("WEAPON_PISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_PISTOL_CLIP_01"):
					return 16;
				case joaat("COMPONENT_PISTOL_CLIP_02"):
					return 32;
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 2;
				case joaat("COMPONENT_AT_PI_SUPP_02"):
					return 1;
					break;
			}
			break;
		case joaat("WEAPON_PISTOL50"):
			switch (iParam0)
			{
				case joaat("COMPONENT_PISTOL50_CLIP_01"):
					return 16;
				case joaat("COMPONENT_PISTOL50_CLIP_02"):
					return 32;
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 2;
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 1;
					break;
			}
			break;
		case joaat("WEAPON_COMBATPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMBATPISTOL_CLIP_01"):
					return 16;
				case joaat("COMPONENT_COMBATPISTOL_CLIP_02"):
					return 32;
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 2;
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 1;
					break;
			}
			break;
		case joaat("WEAPON_APPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_APPISTOL_CLIP_01"):
					return 16;
				case joaat("COMPONENT_APPISTOL_CLIP_02"):
					return 32;
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 2;
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 1;
					break;
			}
			break;
		case joaat("WEAPON_MICROSMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MICROSMG_CLIP_01"):
					return 16;
				case joaat("COMPONENT_MICROSMG_CLIP_02"):
					return 32;
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 2;
				case joaat("COMPONENT_AT_SCOPE_MACRO"):
					return 64;
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 1;
					break;
			}
			break;
		case joaat("WEAPON_ASSAULTSMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTSMG_CLIP_01"):
					return 16;
				case joaat("COMPONENT_ASSAULTSMG_CLIP_02"):
					return 32;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 2;
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 1;
				case joaat("COMPONENT_AT_SCOPE_MACRO"):
					return 64;
					break;
			}
			break;
		case joaat("WEAPON_SMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SMG_CLIP_01"):
					return 16;
				case joaat("COMPONENT_SMG_CLIP_02"):
					return 32;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 2;
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 1;
				case joaat("COMPONENT_AT_SCOPE_MACRO_02"):
					return 64;
				case joaat("COMPONENT_SMG_CLIP_03"):
					return 256;
					break;
			}
			break;
		case joaat("WEAPON_ASSAULTRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"):
					return 16;
				case joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"):
					return 32;
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 128;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 2;
				case joaat("COMPONENT_AT_SCOPE_MACRO"):
					return 64;
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 1;
				case joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"):
					return 256;
					break;
			}
			break;
		case joaat("WEAPON_CARBINERIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_CARBINERIFLE_CLIP_01"):
					return 16;
				case joaat("COMPONENT_CARBINERIFLE_CLIP_02"):
					return 32;
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 128;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 2;
				case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
					return 64;
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 1;
				case joaat("COMPONENT_CARBINERIFLE_CLIP_03"):
					return 256;
					break;
			}
			break;
		case joaat("WEAPON_SPECIALCARBINE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SPECIALCARBINE_CLIP_01"):
					return 16;
				case joaat("COMPONENT_SPECIALCARBINE_CLIP_02"):
					return 32;
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 128;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 2;
				case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
					return 64;
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 1;
				case joaat("COMPONENT_SPECIALCARBINE_CLIP_03"):
					return 256;
				default:
			}
			break;
		case joaat("WEAPON_BULLPUPRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_BULLPUPRIFLE_CLIP_01"):
					return 16;
				case joaat("COMPONENT_BULLPUPRIFLE_CLIP_02"):
					return 32;
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 128;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 2;
				case joaat("COMPONENT_AT_SCOPE_SMALL"):
					return 64;
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 1;
				default:
			}
			break;
		case joaat("WEAPON_HEAVYPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_HEAVYPISTOL_CLIP_01"):
					return 16;
				case joaat("COMPONENT_HEAVYPISTOL_CLIP_02"):
					return 32;
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 2;
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 1;
				default:
			}
			break;
		case joaat("WEAPON_SNSPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SNSPISTOL_CLIP_01"):
					return 16;
				case joaat("COMPONENT_SNSPISTOL_CLIP_02"):
					return 32;
				default:
			}
			break;
		case joaat("WEAPON_ADVANCEDRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01"):
					return 16;
				case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02"):
					return 32;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 2;
				case joaat("COMPONENT_AT_SCOPE_SMALL"):
					return 64;
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 1;
					break;
			}
			break;
		case joaat("WEAPON_MG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MG_CLIP_01"):
					return 16;
				case joaat("COMPONENT_MG_CLIP_02"):
					return 32;
				case joaat("COMPONENT_AT_SCOPE_SMALL_02"):
					return 64;
					break;
			}
			break;
		case joaat("WEAPON_COMBATMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMBATMG_CLIP_01"):
					return 16;
				case joaat("COMPONENT_COMBATMG_CLIP_02"):
					return 32;
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 128;
				case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
					return 64;
					break;
			}
			break;
		case joaat("WEAPON_PUMPSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_SR_SUPP"):
					return 1;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 2;
					break;
			}
			break;
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01"):
					return 16;
				case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02"):
					return 32;
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 128;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 2;
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 1;
					break;
			}
			break;
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 128;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 2;
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 1;
					break;
			}
			break;
		case joaat("WEAPON_SNIPERRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_SCOPE_MAX"):
					return 4;
				case joaat("COMPONENT_AT_SCOPE_LARGE"):
					return 64;
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 1;
					break;
			}
			break;
		case joaat("WEAPON_HEAVYSNIPER"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_SCOPE_MAX"):
					return 4;
				case joaat("COMPONENT_AT_SCOPE_LARGE"):
					return 64;
					break;
			}
			break;
		case joaat("WEAPON_GRENADELAUNCHER"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 128;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 2;
				case joaat("COMPONENT_AT_SCOPE_SMALL"):
					return 64;
					break;
			}
			break;
		case joaat("WEAPON_VINTAGEPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_VINTAGEPISTOL_CLIP_01"):
					return 16;
				case joaat("COMPONENT_VINTAGEPISTOL_CLIP_02"):
					return 32;
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 1;
					break;
			}
			break;
		case joaat("WEAPON_GUSENBERG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_GUSENBERG_CLIP_01"):
					return 16;
				case joaat("COMPONENT_GUSENBERG_CLIP_02"):
					return 32;
					break;
			}
			break;
		case joaat("WEAPON_HEAVYSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_01"):
					return 16;
				case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_02"):
					return 32;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 2;
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 1;
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 128;
				case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_03"):
					return 256;
					break;
			}
			break;
		case joaat("WEAPON_MARKSMANRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MARKSMANRIFLE_CLIP_01"):
					return 16;
				case joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"):
					return 32;
				case joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM"):
					return 64;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 2;
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 1;
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 128;
					break;
			}
			break;
		case joaat("WEAPON_MARKSMANPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MARKSMANPISTOL_CLIP_01"):
					return 16;
					break;
			}
			break;
		case joaat("WEAPON_COMBATPDW"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMBATPDW_CLIP_01"):
					return 16;
				case joaat("COMPONENT_COMBATPDW_CLIP_02"):
					return 32;
				case joaat("COMPONENT_AT_SCOPE_SMALL"):
					return 64;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 2;
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 128;
				case joaat("COMPONENT_COMBATPDW_CLIP_03"):
					return 256;
					break;
			}
			break;
		case joaat("WEAPON_MACHINEPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MACHINEPISTOL_CLIP_01"):
					return 16;
				case joaat("COMPONENT_MACHINEPISTOL_CLIP_02"):
					return 32;
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 1;
				case joaat("COMPONENT_MACHINEPISTOL_CLIP_03"):
					return 256;
					break;
			}
			break;
		case joaat("WEAPON_COMPACTRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMPACTRIFLE_CLIP_01"):
					return 16;
				case joaat("COMPONENT_COMPACTRIFLE_CLIP_02"):
					return 32;
				case joaat("COMPONENT_COMPACTRIFLE_CLIP_03"):
					return 256;
					break;
			}
			break;
		case joaat("WEAPON_MINISMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MINISMG_CLIP_01"):
					return 16;
				case joaat("COMPONENT_MINISMG_CLIP_02"):
					return 32;
					break;
			}
			break;
		case joaat("WEAPON_PISTOL_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_PISTOL_MK2_CLIP_01"):
					return 16;
					break;
				case joaat("COMPONENT_PISTOL_MK2_CLIP_02"):
					return 32;
					break;
				case joaat("COMPONENT_PISTOL_MK2_CLIP_FMJ"):
					return 256;
					break;
				case joaat("COMPONENT_PISTOL_MK2_CLIP_HOLLOWPOINT"):
					return 256;
					break;
				case joaat("COMPONENT_PISTOL_MK2_CLIP_INCENDIARY"):
					return 256;
					break;
				case joaat("COMPONENT_PISTOL_MK2_CLIP_TRACER"):
					return 256;
					break;
				case joaat("COMPONENT_AT_PI_FLSH_02"):
					return 2;
					break;
				case joaat("COMPONENT_AT_PI_RAIL"):
					return 128;
					break;
				case joaat("COMPONENT_AT_PI_SUPP_02"):
					return 1;
					break;
				case joaat("COMPONENT_AT_PI_COMP"):
					return 128;
					break;
			}
			break;
		case joaat("WEAPON_SMG_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SMG_MK2_CLIP_01"):
					return 16;
					break;
				case joaat("COMPONENT_SMG_MK2_CLIP_02"):
					return 32;
					break;
				case joaat("COMPONENT_SMG_MK2_CLIP_FMJ"):
					return 256;
					break;
				case joaat("COMPONENT_SMG_MK2_CLIP_HOLLOWPOINT"):
					return 256;
					break;
				case joaat("COMPONENT_SMG_MK2_CLIP_INCENDIARY"):
					return 256;
					break;
				case joaat("COMPONENT_SMG_MK2_CLIP_TRACER"):
					return 256;
					break;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 2;
					break;
				case joaat("COMPONENT_AT_SIGHTS_SMG"):
					return 64;
					break;
				case joaat("COMPONENT_AT_SCOPE_MACRO_02_SMG_MK2"):
					return 4;
					break;
				case joaat("COMPONENT_AT_SCOPE_SMALL_SMG_MK2"):
					return 64;
					break;
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 8;
					break;
			}
			break;
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_01"):
					return 16;
					break;
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_02"):
					return 32;
					break;
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_ARMORPIERCING"):
					return 256;
					break;
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_EXPLOSIVE"):
					return 256;
					break;
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_FMJ"):
					return 256;
					break;
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_INCENDIARY"):
					return 256;
					break;
				case joaat("COMPONENT_AT_SCOPE_LARGE"):
					return 4;
					break;
				case joaat("COMPONENT_AT_SCOPE_MAX"):
					return 64;
					break;
				case joaat("COMPONENT_AT_SCOPE_NV"):
					return 8;
					break;
				case joaat("COMPONENT_AT_SCOPE_THERMAL"):
					return 8;
					break;
			}
			break;
		case joaat("WEAPON_COMBATMG_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_01"):
					return 16;
					break;
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_02"):
					return 32;
					break;
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_ARMORPIERCING"):
					return 256;
					break;
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_FMJ"):
					return 256;
					break;
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_INCENDIARY"):
					return 256;
					break;
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_TRACER"):
					return 256;
					break;
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 128;
					break;
				case joaat("COMPONENT_AT_SIGHTS"):
					return 64;
					break;
			}
			break;
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_01"):
					return 16;
					break;
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_02"):
					return 32;
					break;
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_ARMORPIERCING"):
					return 256;
					break;
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_FMJ"):
					return 256;
					break;
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_INCENDIARY"):
					return 256;
					break;
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_TRACER"):
					return 256;
					break;
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 128;
					break;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 2;
					break;
				case joaat("COMPONENT_AT_SIGHTS"):
					return 64;
					break;
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 4;
					break;
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 8;
					break;
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 1;
					break;
			}
			break;
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_01"):
					return 16;
					break;
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_02"):
					return 32;
					break;
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_ARMORPIERCING"):
					return 256;
					break;
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_FMJ"):
					return 256;
					break;
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_INCENDIARY"):
					return 256;
					break;
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_TRACER"):
					return 256;
					break;
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 128;
					break;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 2;
					break;
				case joaat("COMPONENT_AT_SIGHTS"):
					return 64;
					break;
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 4;
					break;
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 8;
					break;
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_51(int iParam0, int iParam1, int iParam2)//Position - 0x4601
{
	var uVar0;
	int iVar1;
	if (__LIB_0__::func_980())
	{
		return 0;
	}
	uVar0 = func_54(iParam0, iParam1, iParam2);
	iVar1 = __LIB_6__::func_350(iParam0, iParam1);
	return BitTest(uVar0, __LIB_0__::func_160(iVar1));
}

var func_54(int iParam0, int iParam1, int iParam2)//Position - 0x694D
{
	var uVar0;
	uVar0 = __LIB_0__::func_369(__LIB_22__::func_345(iParam0, iParam1), iParam2, 0);
	return uVar0;
}

void func_57(int iParam0, int iParam1, bool bParam2)//Position - 0x72BD
{
	if (bParam2)
	{
		if (!__LIB_42__::func_479(iParam0, iParam1, -1))
		{
			func_58(iParam0, iParam1, 1);
		}
	}
	else if (__LIB_42__::func_479(iParam0, iParam1, -1))
	{
		func_58(iParam0, iParam1, 0);
	}
}

void func_58(int iParam0, int iParam1, bool bParam2)//Position - 0x72F8
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_38__::func_222(iParam0, iParam1, -1);
	iVar1 = __LIB_6__::func_350(iParam0, iParam1);
	if (iVar1 > -1)
	{
		if (bParam2)
		{
			MISC::SET_BIT(&iVar0, __LIB_0__::func_160(iVar1));
		}
		else
		{
			MISC::CLEAR_BIT(&iVar0, __LIB_0__::func_160(iVar1));
		}
		__LIB_0__::func_413(__LIB_6__::func_698(iParam0, iParam1), iVar0, -1, 1, 0);
	}
}

void func_63(int iParam0, int iParam1, bool bParam2)//Position - 0x7540
{
	if (bParam2)
	{
		if (!func_92(iParam0, iParam1, -1))
		{
			func_64(iParam0, iParam1, 1);
		}
	}
	else if (func_92(iParam0, iParam1, -1))
	{
		func_64(iParam0, iParam1, 0);
	}
}

void func_64(int iParam0, int iParam1, bool bParam2)//Position - 0x757B
{
	int iVar0;
	int iVar1;
	iVar0 = func_66(iParam0, iParam1, -1);
	iVar1 = __LIB_6__::func_350(iParam0, iParam1);
	if (iVar1 > -1)
	{
		if (bParam2)
		{
			MISC::SET_BIT(&iVar0, __LIB_0__::func_160(iVar1));
		}
		else
		{
			MISC::CLEAR_BIT(&iVar0, __LIB_0__::func_160(iVar1));
		}
		__LIB_0__::func_413(__LIB_6__::func_700(iParam0, iParam1), iVar0, -1, 1, 0);
	}
}

var func_66(int iParam0, int iParam1, int iParam2)//Position - 0x7743
{
	var uVar0;
	uVar0 = __LIB_0__::func_369(__LIB_6__::func_700(iParam0, iParam1), iParam2, 0);
	return uVar0;
}

void func_67(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x775E
{
	if (bParam2)
	{
		if (!func_51(iParam0, iParam1, -1))
		{
			func_82(iParam0, iParam1, 1);
		}
		if (bParam3)
		{
			if (__LIB_24__::func_326(iParam0, iParam1) == 0)
			{
				__LIB_12__::func_529(16, __LIB_19__::func_181(iParam0, 0), __LIB_22__::func_178(iParam0, 0), __LIB_20__::func_392(iParam1), __LIB_20__::func_391(iParam1), -1, 0, 0, 0, -1, 0);
				__LIB_23__::func_511(iParam0, iParam1, 1);
			}
		}
		if (bParam4)
		{
			func_68(iParam0, iParam1, 1);
		}
	}
	else if (func_51(iParam0, iParam1, -1))
	{
		func_82(iParam0, iParam1, 0);
	}
}

void func_68(int iParam0, int iParam1, bool bParam2)//Position - 0x77E7
{
	if (bParam2)
	{
		if (!func_72(iParam0, iParam1, -1))
		{
			func_69(iParam0, iParam1, 1);
		}
	}
	else if (func_72(iParam0, iParam1, -1))
	{
		func_69(iParam0, iParam1, 0);
	}
}

void func_69(int iParam0, int iParam1, bool bParam2)//Position - 0x7822
{
	int iVar0;
	int iVar1;
	iVar0 = func_71(iParam0, iParam1, -1);
	iVar1 = __LIB_6__::func_350(iParam0, iParam1);
	if (iVar1 > -1)
	{
		if (bParam2)
		{
			MISC::SET_BIT(&iVar0, __LIB_0__::func_160(iVar1));
		}
		else
		{
			MISC::CLEAR_BIT(&iVar0, __LIB_0__::func_160(iVar1));
		}
		__LIB_0__::func_413(__LIB_22__::func_343(iParam0, iParam1), iVar0, -1, 1, 0);
	}
}

var func_71(int iParam0, int iParam1, int iParam2)//Position - 0x79ED
{
	var uVar0;
	uVar0 = __LIB_0__::func_369(__LIB_22__::func_343(iParam0, iParam1), iParam2, 0);
	return uVar0;
}

int func_72(int iParam0, int iParam1, int iParam2)//Position - 0x7A08
{
	var uVar0;
	int iVar1;
	if (__LIB_0__::func_980())
	{
		return 0;
	}
	uVar0 = func_71(iParam0, iParam1, iParam2);
	iVar1 = __LIB_6__::func_350(iParam0, iParam1);
	return BitTest(uVar0, __LIB_0__::func_160(iVar1));
}

void func_82(int iParam0, int iParam1, bool bParam2)//Position - 0x86A1
{
	int iVar0;
	int iVar1;
	iVar0 = func_54(iParam0, iParam1, -1);
	iVar1 = __LIB_6__::func_350(iParam0, iParam1);
	if (iVar1 > -1)
	{
		if (bParam2)
		{
			MISC::SET_BIT(&iVar0, __LIB_0__::func_160(iVar1));
		}
		else
		{
			MISC::CLEAR_BIT(&iVar0, __LIB_0__::func_160(iVar1));
		}
		__LIB_0__::func_413(__LIB_22__::func_345(iParam0, iParam1), iVar0, -1, 1, 0);
	}
}

int func_85(int iParam0, int iParam1, int iParam2)//Position - 0x9334
{
	var uVar0;
	int iVar1;
	if (iParam2 == 0)
	{
	}
	if (__LIB_0__::func_980())
	{
		return 0;
	}
	uVar0 = func_86(iParam0, iParam1);
	iVar1 = __LIB_3__::func_371(iParam0);
	return BitTest(uVar0, __LIB_0__::func_160(iVar1));
}

var func_86(int iParam0, int iParam1)//Position - 0x9368
{
	var uVar0;
	uVar0 = __LIB_0__::func_369(__LIB_16__::func_237(iParam0), iParam1, 0);
	return uVar0;
}

int func_88(int iParam0, int iParam1, int iParam2)//Position - 0x9412
{
	var uVar0;
	int iVar1;
	if (iParam2 == 0)
	{
	}
	if (__LIB_0__::func_980())
	{
		return 0;
	}
	if (__LIB_0__::func_438() == 0)
	{
		return 0;
	}
	if (iParam0 != joaat("GADGET_PARACHUTE") && iParam0 != joaat("WEAPON_RAILGUN"))
	{
		if (__LIB_0__::func_351(__LIB_6__::func_150(iParam0), -1))
		{
			return 0;
		}
	}
	uVar0 = func_89(iParam0, iParam1);
	iVar1 = __LIB_3__::func_371(iParam0);
	return BitTest(uVar0, __LIB_0__::func_160(iVar1));
}

var func_89(int iParam0, var uParam1)//Position - 0x947C
{
	var uVar0;
	uVar0 = __LIB_0__::func_369(__LIB_6__::func_349(iParam0), uParam1, 0);
	return uVar0;
}

int func_92(int iParam0, int iParam1, int iParam2)//Position - 0x9AA6
{
	var uVar0;
	int iVar1;
	if (__LIB_0__::func_980())
	{
		return 0;
	}
	uVar0 = func_66(iParam0, iParam1, iParam2);
	iVar1 = __LIB_6__::func_350(iParam0, iParam1);
	return BitTest(uVar0, __LIB_0__::func_160(iVar1));
}

void func_96(var uParam0, var uParam1)//Position - 0x9BFC
{
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_HAMMER")) && iLocal_66[10] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_HAMMER"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_PISTOL50")) && iLocal_66[0] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_PISTOL50"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_BULLPUPSHOTGUN")) && iLocal_66[1] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_BULLPUPSHOTGUN"), uParam0, *uParam1, 0);
	}
	if (__LIB_0__::func_420(1, 0))
	{
		if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_SAWNOFFSHOTGUN")) && iLocal_66[2] == uParam1->f_5)
		{
			func_107(joaat("WEAPON_SAWNOFFSHOTGUN"), uParam0, *uParam1, 0);
		}
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_BOTTLE")) && iLocal_66[3] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_BOTTLE"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_SNSPISTOL")) && iLocal_66[4] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_SNSPISTOL"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_GUSENBERG")) && iLocal_66[11] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_GUSENBERG"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_HEAVYPISTOL")) && iLocal_66[7] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_HEAVYPISTOL"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_SPECIALCARBINE")) && iLocal_66[5] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_SPECIALCARBINE"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_BULLPUPRIFLE")) && iLocal_66[6] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_BULLPUPRIFLE"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_DAGGER")) && iLocal_66[8] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_DAGGER"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_VINTAGEPISTOL")) && iLocal_66[9] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_VINTAGEPISTOL"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_FIREWORK")) && iLocal_66[14] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_FIREWORK"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_MUSKET")) && iLocal_66[13] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_MUSKET"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_FLAREGUN")) && iLocal_66[12] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_FLAREGUN"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_HEAVYSHOTGUN")) && iLocal_66[15] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_HEAVYSHOTGUN"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_MARKSMANRIFLE")) && iLocal_66[16] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_MARKSMANRIFLE"), uParam0, *uParam1, 0);
	}
	if (__LIB_0__::func_116() || Global_262145.f_20269 /* Tunable: ENABLE_RETURNING_CONTENT_WEAPON */)
	{
		if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_HATCHET")) && iLocal_66[22] == uParam1->f_5)
		{
			func_107(joaat("WEAPON_HATCHET"), uParam0, *uParam1, 0);
		}
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_PROXMINE")) && iLocal_66[17] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_PROXMINE"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_HOMINGLAUNCHER")) && iLocal_66[18] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_HOMINGLAUNCHER"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_COMBATPDW")) && iLocal_66[19] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_COMBATPDW"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_MARKSMANPISTOL")) && iLocal_66[20] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_MARKSMANPISTOL"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_KNUCKLE")) && iLocal_66[21] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_KNUCKLE"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_MACHETE")) && iLocal_66[23] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_MACHETE"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_MACHINEPISTOL")) && iLocal_66[24] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_MACHINEPISTOL"), uParam0, *uParam1, 0);
	}
	if ((Global_262145.f_12049 /* Tunable: TURN_ON_HALLOWEEN_WEAPONS */ && WEAPON::IS_WEAPON_VALID(joaat("WEAPON_FLASHLIGHT"))) && iLocal_66[25] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_FLASHLIGHT"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_REVOLVER")) && iLocal_66[26] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_REVOLVER"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_SWITCHBLADE")) && iLocal_66[27] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_SWITCHBLADE"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_DBSHOTGUN")) && iLocal_66[28] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_DBSHOTGUN"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_COMPACTRIFLE")) && iLocal_66[29] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_COMPACTRIFLE"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_AUTOSHOTGUN")) && iLocal_66[30] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_AUTOSHOTGUN"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_BATTLEAXE")) && iLocal_66[31] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_BATTLEAXE"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_COMPACTLAUNCHER")) && iLocal_66[32] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_COMPACTLAUNCHER"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_MINISMG")) && iLocal_66[33] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_MINISMG"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_PIPEBOMB")) && iLocal_66[34] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_PIPEBOMB"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_POOLCUE")) && iLocal_66[35] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_POOLCUE"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_WRENCH")) && iLocal_66[36] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_WRENCH"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_ASSAULTRIFLE_MK2")) && iLocal_66[37] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_ASSAULTRIFLE_MK2"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_CARBINERIFLE_MK2")) && iLocal_66[38] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_CARBINERIFLE_MK2"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_COMBATMG_MK2")) && iLocal_66[39] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_COMBATMG_MK2"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_HEAVYSNIPER_MK2")) && iLocal_66[40] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_HEAVYSNIPER_MK2"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_PISTOL_MK2")) && iLocal_66[41] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_PISTOL_MK2"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_SMG_MK2")) && iLocal_66[42] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_SMG_MK2"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_BULLPUPRIFLE_MK2")) && iLocal_66[43] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_BULLPUPRIFLE_MK2"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_MARKSMANRIFLE_MK2")) && iLocal_66[44] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_MARKSMANRIFLE_MK2"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_PUMPSHOTGUN_MK2")) && iLocal_66[45] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_PUMPSHOTGUN_MK2"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_REVOLVER_MK2")) && iLocal_66[46] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_REVOLVER_MK2"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_SNSPISTOL_MK2")) && iLocal_66[47] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_SNSPISTOL_MK2"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_SPECIALCARBINE_MK2")) && iLocal_66[48] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_SPECIALCARBINE_MK2"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_DOUBLEACTION")) && iLocal_66[49] == uParam1->f_5)
	{
		if (Global_262145.f_23472 /* Tunable: ENABLE_TREASURE_HUNT */ && (__LIB_18__::func_240() || Global_1963965))
		{
			func_107(joaat("WEAPON_DOUBLEACTION"), uParam0, *uParam1, 0);
		}
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_STONE_HATCHET")) && iLocal_66[50] == uParam1->f_5)
	{
		if (Global_262145.f_24171 /* Tunable: -585985361 */ && __LIB_6__::func_148())
		{
			func_107(joaat("WEAPON_STONE_HATCHET"), uParam0, *uParam1, 0);
		}
	}
	if ((WEAPON::IS_WEAPON_VALID(joaat("WEAPON_RAYCARBINE")) && iLocal_66[51] == uParam1->f_5) && Global_262145.f_26748 /* Tunable: ENABLE_AW_HELLBRINGER */)
	{
		func_107(joaat("WEAPON_RAYCARBINE"), uParam0, *uParam1, 0);
	}
	if ((WEAPON::IS_WEAPON_VALID(joaat("WEAPON_RAYMINIGUN")) && iLocal_66[52] == uParam1->f_5) && Global_262145.f_26747 /* Tunable: ENABLE_AW_WIDOWMAKER */)
	{
		func_107(joaat("WEAPON_RAYMINIGUN"), uParam0, *uParam1, 0);
	}
	if ((WEAPON::IS_WEAPON_VALID(joaat("WEAPON_RAYPISTOL")) && (((__LIB_0__::func_137(25007, -1) || __LIB_0__::func_137(25002, -1)) || func_88(joaat("WEAPON_RAYPISTOL"), -1, 0)) || Global_262145.f_25756 /* Tunable: ENABLE_AW_RAYGUN */)) && iLocal_66[53] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_RAYPISTOL"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_CERAMICPISTOL")) && iLocal_66[54] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_CERAMICPISTOL"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_NAVYREVOLVER")) && iLocal_66[55] == uParam1->f_5)
	{
		if (Global_262145.f_28372 /* Tunable: ENABLE_SERIAL_KILLER */ && (__LIB_29__::func_151() || Global_1963971))
		{
			func_107(joaat("WEAPON_NAVYREVOLVER"), uParam0, *uParam1, 0);
		}
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_MILITARYRIFLE")) && iLocal_66[56] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_MILITARYRIFLE"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_COMBATSHOTGUN")) && iLocal_66[57] == uParam1->f_5)
	{
		if (__LIB_0__::func_137(30632, -1))
		{
			func_107(joaat("WEAPON_COMBATSHOTGUN"), uParam0, *uParam1, 0);
		}
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_GADGETPISTOL")) && iLocal_66[58] == uParam1->f_5)
	{
		if (__LIB_0__::func_355(106, -1))
		{
			func_107(joaat("WEAPON_GADGETPISTOL"), uParam0, *uParam1, 0);
		}
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_EMPLAUNCHER")) && iLocal_66[59] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_EMPLAUNCHER"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_STUNGUN_MP")) && iLocal_66[60] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_STUNGUN_MP"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_HEAVYRIFLE")) && iLocal_66[61] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_HEAVYRIFLE"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_TACTICALRIFLE")) && iLocal_66[62] == uParam1->f_5)
	{
		if (((Global_262145.f_32775 /* Tunable: UNLOCK_SERVICE_CARBINE_FOR_PURCHASE */ || func_88(joaat("WEAPON_TACTICALRIFLE"), -1, 0)) || __LIB_0__::func_351(__LIB_6__::func_150(joaat("WEAPON_TACTICALRIFLE")), -1)) || __LIB_6__::func_353(joaat("WEAPON_TACTICALRIFLE")))
		{
			func_107(joaat("WEAPON_TACTICALRIFLE"), uParam0, *uParam1, 0);
		}
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_PRECISIONRIFLE")) && iLocal_66[63] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_PRECISIONRIFLE"), uParam0, *uParam1, 0);
	}
}

void func_107(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0xAA7D
{
	struct<2> Var0;
	char cVar1[16];
	float fVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	var uVar6;
	struct<5> Var7;
	struct<5> Var8;
	struct<5> Var9;
	int iVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	iParam3 = iParam3;
	StringCopy(&Var0, __LIB_4__::func_960(iParam0, 0), 16);
	if (((iParam0 == joaat("WEAPON_DOUBLEACTION") || iParam0 == joaat("WEAPON_COMPACTRIFLE")) || iParam0 == joaat("WEAPON_COMPACTLAUNCHER")) || iParam0 == joaat("WEAPON_MARKSMANRIFLE"))
	{
		StringCopy(&cVar1, __LIB_38__::func_224(iParam0, 1), 16);
	}
	else
	{
		StringCopy(&cVar1, __LIB_38__::func_224(iParam0, 0), 16);
	}
	fVar2 = func_134(iParam0);
	uVar3 = func_133(iParam0, iParam2);
	uVar4 = func_132(iParam0, iParam2);
	iVar5 = func_131(iParam0, iParam2);
	uVar6 = func_130(iParam0, iParam2);
	WEAPON::GET_WEAPON_HUD_STATS(iParam0, &Var7);
	Var7.f_2 = WEAPON::GET_WEAPON_CLIP_SIZE(iParam0);
	bVar13 = false;
	iVar12 = 0;
	while (iVar12 <= 8)
	{
		if (uParam1->f_1[iVar12] == 0 && WEAPON::IS_WEAPON_VALID(iParam0))
		{
			if (__LIB_6__::func_163(iParam0))
			{
				if (func_92(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), __LIB_18__::func_245(iParam0), -1))
				{
					bVar13 = true;
				}
				else
				{
					bVar13 = false;
				}
			}
			else if (func_88(iParam0, iParam2, 0))
			{
				bVar13 = true;
				if (bVar13)
				{
				}
			}
			else
			{
				bVar13 = false;
			}
			iVar11 = 0;
			while (iVar11 <= 35)
			{
				iVar10 = __LIB_0__::func_722(iParam0, iVar11);
				if (iVar10 != 0)
				{
					if (func_51(iVar10, iParam0, iParam2) && bVar13)
					{
						if (WEAPON::GET_WEAPON_COMPONENT_HUD_STATS(iVar10, &Var8))
						{
							Var9.f_0 = (Var9.f_0 + Var8.f_0);
							Var9.f_1 = (Var9.f_1 + Var8.f_1);
							Var9.f_3 = (Var9.f_3 + Var8.f_3);
							Var9.f_4 = (Var9.f_4 + Var8.f_4);
						}
					}
					if (__LIB_42__::func_479(iVar10, iParam0, iParam2))
					{
						if (func_129(iVar10))
						{
							Var9.f_2 = func_128(iParam0);
						}
						else if (func_127(iVar10))
						{
							Var9.f_2 = func_126(iParam0);
						}
					}
					if (func_92(iVar10, iParam0, iParam2))
					{
					}
				}
				iVar11++;
			}
			if (Var9.f_2 == 0)
			{
				Var9.f_2 = Var7.f_2;
			}
			func_125(iVar12, &Var0, &cVar1, uParam1);
			func_124(iVar12, Var7.f_0, uParam1);
			func_123(iVar12, Var9.f_0, uParam1);
			if (func_15(iParam0))
			{
				func_122(iVar12, -1, uParam1);
				func_121(iVar12, Var9.f_3, uParam1);
				func_120(iVar12, -1, uParam1);
				func_119(iVar12, Var9.f_4, uParam1);
				func_118(iVar12, -1, uParam1);
				func_117(iVar12, Var9.f_2, uParam1);
			}
			else
			{
				func_122(iVar12, Var7.f_3, uParam1);
				func_121(iVar12, Var9.f_3, uParam1);
				func_120(iVar12, Var7.f_4, uParam1);
				func_119(iVar12, Var9.f_4, uParam1);
				func_118(iVar12, Var7.f_2, uParam1);
				func_117(iVar12, Var9.f_2, uParam1);
			}
			func_116(iVar12, uVar4, uParam1);
			func_115(iVar12, uVar3, uParam1);
			if (func_15(iParam0))
			{
				func_114(iVar12, -1f, uParam1);
				func_113(iVar12, -1, uParam1);
			}
			else
			{
				func_114(iVar12, fVar2, uParam1);
				func_113(iVar12, iVar5, uParam1);
			}
			func_112(iVar12, uVar6, uParam1);
			func_111(iVar12, Var7.f_1, uParam1);
			func_110(iVar12, Var9.f_1, uParam1);
			func_109(iVar12, iParam0, uParam1);
			func_108(iParam2, uParam1);
			uParam1->f_1[iVar12] = 1;
			iVar12 = 9;
		}
		iVar12++;
	}
}

void func_108(int iParam0, var uParam1)//Position - 0xAD9E
{
	uParam1->f_276 = iParam0;
}

void func_109(int iParam0, int iParam1, var uParam2)//Position - 0xADAD
{
	uParam2->f_85[iParam0] = iParam1;
}

void func_110(int iParam0, var uParam1, var uParam2)//Position - 0xADBF
{
	uParam2->f_205[iParam0] = uParam1;
}

void func_111(int iParam0, var uParam1, var uParam2)//Position - 0xADD1
{
	uParam2->f_155[iParam0] = uParam1;
}

void func_112(int iParam0, var uParam1, var uParam2)//Position - 0xADE3
{
	uParam2->f_135[iParam0] = uParam1;
}

void func_113(int iParam0, int iParam1, var uParam2)//Position - 0xADF5
{
	uParam2->f_125[iParam0] = iParam1;
}

void func_114(int iParam0, float fParam1, var uParam2)//Position - 0xAE07
{
	uParam2->f_115[iParam0] = fParam1;
}

void func_115(int iParam0, var uParam1, var uParam2)//Position - 0xAE19
{
	uParam2->f_95[iParam0] = uParam1;
}

void func_116(int iParam0, var uParam1, var uParam2)//Position - 0xAE2B
{
	uParam2->f_105[iParam0] = uParam1;
}

void func_117(int iParam0, var uParam1, var uParam2)//Position - 0xAE3D
{
	uParam2->f_215[iParam0] = uParam1;
}

void func_118(int iParam0, int iParam1, var uParam2)//Position - 0xAE4F
{
	uParam2->f_165[iParam0] = iParam1;
}

void func_119(int iParam0, var uParam1, var uParam2)//Position - 0xAE61
{
	uParam2->f_235[iParam0] = uParam1;
}

void func_120(int iParam0, int iParam1, var uParam2)//Position - 0xAE73
{
	uParam2->f_175[iParam0] = iParam1;
}

void func_121(int iParam0, var uParam1, var uParam2)//Position - 0xAE85
{
	uParam2->f_225[iParam0] = uParam1;
}

void func_122(int iParam0, int iParam1, var uParam2)//Position - 0xAE97
{
	uParam2->f_185[iParam0] = iParam1;
}

void func_123(int iParam0, var uParam1, var uParam2)//Position - 0xAEA9
{
	uParam2->f_195[iParam0] = uParam1;
}

void func_124(int iParam0, var uParam1, var uParam2)//Position - 0xAEBB
{
	uParam2->f_145[iParam0] = uParam1;
}

void func_125(int iParam0, char* sParam1, char* sParam2, var uParam3)//Position - 0xAECD
{
	StringCopy(&(uParam3->f_11[iParam0 /*4*/]), sParam1, 16);
	StringCopy(&(uParam3->f_48[iParam0 /*4*/]), sParam2, 16);
}

int func_126(int iParam0)//Position - 0xAEED
{
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL"):
			return 16;
		case joaat("WEAPON_COMBATPISTOL"):
			return 16;
		case joaat("WEAPON_APPISTOL"):
			return 36;
		case joaat("WEAPON_PISTOL_MK2"):
			return 16;
		case joaat("WEAPON_MICROSMG"):
			return 30;
		case joaat("WEAPON_SMG"):
			return 60;
		case joaat("WEAPON_SMG_MK2"):
			return 60;
		case joaat("WEAPON_ASSAULTRIFLE"):
			return 60;
		case joaat("WEAPON_CARBINERIFLE"):
			return 60;
		case joaat("WEAPON_ADVANCEDRIFLE"):
			return 60;
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			return 60;
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			return 60;
		case joaat("WEAPON_MG"):
			return 100;
		case joaat("WEAPON_COMBATMG"):
			return 200;
		case joaat("WEAPON_COMBATMG_MK2"):
			return 200;
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			return 32;
		case joaat("WEAPON_PISTOL50"):
			return 12;
		case joaat("WEAPON_ASSAULTSMG"):
			return 60;
		case joaat("WEAPON_SNSPISTOL"):
			return 12;
		case joaat("WEAPON_SPECIALCARBINE"):
			return 60;
		case joaat("WEAPON_BULLPUPRIFLE"):
			return 60;
		case joaat("WEAPON_HEAVYPISTOL"):
			return 36;
		case joaat("WEAPON_VINTAGEPISTOL"):
			return 14;
		case joaat("WEAPON_GUSENBERG"):
			return 50;
		case joaat("WEAPON_MARKSMANRIFLE"):
			return 16;
		case joaat("WEAPON_HEAVYSHOTGUN"):
			return 12;
		case joaat("WEAPON_COMBATPDW"):
			return 60;
		case joaat("WEAPON_COMPACTRIFLE"):
			return 60;
		case joaat("WEAPON_MACHINEPISTOL"):
			return 20;
		case joaat("WEAPON_MINISMG"):
			return 30;
		default:
	}
	return 0;
	return 0;
}

int func_127(int iParam0)//Position - 0xB04B
{
	switch (iParam0)
	{
		case joaat("COMPONENT_PISTOL_CLIP_02"):
			return 1;
			break;
		case joaat("COMPONENT_COMBATPISTOL_CLIP_02"):
			return 1;
			break;
		case joaat("COMPONENT_APPISTOL_CLIP_02"):
			return 1;
			break;
		case joaat("COMPONENT_MICROSMG_CLIP_02"):
			return 1;
			break;
		case joaat("COMPONENT_SMG_CLIP_02"):
			return 1;
			break;
		case joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"):
			return 1;
			break;
		case joaat("COMPONENT_CARBINERIFLE_CLIP_02"):
			return 1;
			break;
		case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02"):
			return 1;
			break;
		case joaat("COMPONENT_MG_CLIP_02"):
			return 1;
			break;
		case joaat("COMPONENT_COMBATMG_CLIP_02"):
			return 1;
			break;
		case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02"):
			return 1;
			break;
		case joaat("COMPONENT_ASSAULTSMG_CLIP_02"):
			return 1;
			break;
		case joaat("COMPONENT_PISTOL50_CLIP_02"):
			return 1;
			break;
		case joaat("COMPONENT_ASSAULTMG_CLIP_02"):
			return 1;
			break;
		case joaat("COMPONENT_PROGRAMMABLEAR_CLIP_02"):
			return 1;
			break;
		case joaat("COMPONENT_HEAVYRIFLE_CLIP_02"):
			return 1;
			break;
		case joaat("COMPONENT_SPECIALCARBINE_CLIP_02"):
			return 1;
			break;
		case joaat("COMPONENT_BULLPUPRIFLE_CLIP_02"):
			return 1;
			break;
		case joaat("COMPONENT_HEAVYPISTOL_CLIP_02"):
			return 1;
			break;
		case joaat("COMPONENT_SNSPISTOL_CLIP_02"):
			return 1;
			break;
		case joaat("COMPONENT_VINTAGEPISTOL_CLIP_02"):
			return 1;
			break;
		case joaat("COMPONENT_GUSENBERG_CLIP_02"):
			return 1;
			break;
		case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_02"):
			return 1;
			break;
		case joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"):
			return 1;
			break;
		case joaat("COMPONENT_COMBATPDW_CLIP_02"):
			return 1;
			break;
		case joaat("COMPONENT_COMPACTRIFLE_CLIP_02"):
			return 1;
			break;
		case joaat("COMPONENT_MACHINEPISTOL_CLIP_02"):
			return 1;
			break;
		case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_02"):
			return 1;
			break;
		case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_02"):
			return 1;
			break;
		case joaat("COMPONENT_COMBATMG_MK2_CLIP_02"):
			return 1;
			break;
		case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_02"):
			return 1;
			break;
		case joaat("COMPONENT_PISTOL_MK2_CLIP_02"):
			return 1;
			break;
		case joaat("COMPONENT_SMG_MK2_CLIP_02"):
			return 1;
			break;
		case joaat("COMPONENT_MINISMG_CLIP_02"):
			return 1;
			break;
	}
	return 0;
}

int func_128(int iParam0)//Position - 0xB215
{
	switch (iParam0)
	{
		case joaat("WEAPON_SMG"):
			return 100;
		case joaat("WEAPON_ASSAULTRIFLE"):
			return 100;
		case joaat("WEAPON_CARBINERIFLE"):
			return 100;
		case joaat("WEAPON_SMG_MK2"):
			return 100;
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			return 100;
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			return 100;
		case joaat("WEAPON_SPECIALCARBINE"):
			return 100;
		case joaat("WEAPON_HEAVYSHOTGUN"):
			return 30;
		case joaat("WEAPON_COMBATPDW"):
			return 100;
		case joaat("WEAPON_COMPACTRIFLE"):
			return 100;
		case joaat("WEAPON_MACHINEPISTOL"):
			return 30;
		default:
	}
	return 0;
	return 0;
}

int func_129(int iParam0)//Position - 0xB2A2
{
	switch (iParam0)
	{
		case joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"):
			return 1;
			break;
		case joaat("COMPONENT_CARBINERIFLE_CLIP_03"):
			return 1;
			break;
		case joaat("COMPONENT_COMBATPDW_CLIP_03"):
			return 1;
			break;
		case joaat("COMPONENT_COMPACTRIFLE_CLIP_03"):
			return 1;
			break;
		case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_03"):
			return 1;
			break;
		case joaat("COMPONENT_MACHINEPISTOL_CLIP_03"):
			return 1;
			break;
		case joaat("COMPONENT_SMG_CLIP_03"):
			return 1;
			break;
		case joaat("COMPONENT_SPECIALCARBINE_CLIP_03"):
			return 1;
			break;
	}
	return 0;
}

float func_130(int iParam0, int iParam1)//Position - 0xB31A
{
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL"):
		case joaat("WEAPON_PISTOL_MK2"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(251, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(252, iParam1, 0)));
		case joaat("WEAPON_COMBATPISTOL"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(261, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(262, iParam1, 0)));
		case joaat("WEAPON_APPISTOL"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(281, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(282, iParam1, 0)));
		case joaat("WEAPON_MICROSMG"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(291, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(292, iParam1, 0)));
		case joaat("WEAPON_SMG"):
		case joaat("WEAPON_SMG_MK2"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(301, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(302, iParam1, 0)));
		case joaat("WEAPON_ASSAULTRIFLE"):
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(321, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(322, iParam1, 0)));
		case joaat("WEAPON_CARBINERIFLE"):
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(330, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(331, iParam1, 0)));
		case joaat("WEAPON_ADVANCEDRIFLE"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(339, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(340, iParam1, 0)));
		case joaat("WEAPON_MG"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(348, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(349, iParam1, 0)));
		case joaat("WEAPON_COMBATMG"):
		case joaat("WEAPON_COMBATMG_MK2"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(357, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(358, iParam1, 0)));
		case joaat("WEAPON_PUMPSHOTGUN"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(375, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(376, iParam1, 0)));
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(384, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(385, iParam1, 0)));
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(403, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(404, iParam1, 0)));
		case joaat("WEAPON_SNIPERRIFLE"):
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(422, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(423, iParam1, 0)));
		case joaat("WEAPON_HEAVYSNIPER"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(431, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(432, iParam1, 0)));
		case joaat("WEAPON_GRENADELAUNCHER"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(442, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(443, iParam1, 0)));
		case joaat("WEAPON_RPG"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(449, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(450, iParam1, 0)));
		case joaat("WEAPON_MINIGUN"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(456, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(457, iParam1, 0)));
		case joaat("WEAPON_GRENADE"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(465, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(466, iParam1, 0)));
		case joaat("WEAPON_SMOKEGRENADE"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(473, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(474, iParam1, 0)));
		case joaat("WEAPON_STICKYBOMB"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(482, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(483, iParam1, 0)));
		case joaat("WEAPON_MOLOTOV"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(490, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(491, iParam1, 0)));
		case joaat("WEAPON_STUNGUN"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(412, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(413, iParam1, 0)));
		case joaat("WEAPON_KNIFE"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(194, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(196, iParam1, 0)));
		case joaat("WEAPON_NIGHTSTICK"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(202, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(204, iParam1, 0)));
		case joaat("WEAPON_HAMMER"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(230, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(232, iParam1, 0)));
		case joaat("WEAPON_BAT"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(237, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(239, iParam1, 0)));
		case joaat("WEAPON_CROWBAR"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(209, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(211, iParam1, 0)));
		case joaat("WEAPON_GOLFCLUB"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(244, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(246, iParam1, 0)));
		case joaat("WEAPON_PISTOL50"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(271, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(272, iParam1, 0)));
		case joaat("WEAPON_ASSAULTSMG"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(311, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(312, iParam1, 0)));
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(394, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(395, iParam1, 0)));
		case joaat("WEAPON_ASSAULTMG"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(366, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(367, iParam1, 0)));
		case joaat("WEAPON_ASSAULTSNIPER"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(321, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(322, iParam1, 0)));
		case joaat("WEAPON_HEAVYRIFLE"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(431, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(432, iParam1, 0)));
		case joaat("WEAPON_PROGRAMMABLEAR"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(321, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(322, iParam1, 0)));
		case joaat("WEAPON_BOTTLE"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(1731, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(1732, iParam1, 0)));
		case joaat("WEAPON_SNSPISTOL"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(1741, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(1742, iParam1, 0)));
		case joaat("WEAPON_SPECIALCARBINE"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(10878, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(10879, iParam1, 0)));
		case joaat("WEAPON_BULLPUPRIFLE"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(10888, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(10889, iParam1, 0)));
		case joaat("WEAPON_HEAVYPISTOL"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(10868, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(10869, iParam1, 0)));
		case joaat("WEAPON_DAGGER"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(11155, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(11156, iParam1, 0)));
		case joaat("WEAPON_VINTAGEPISTOL"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(11165, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(11166, iParam1, 0)));
		case joaat("WEAPON_GUSENBERG"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(10898, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(10899, iParam1, 0)));
		case joaat("WEAPON_MUSKET"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(11185, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(11186, iParam1, 0)));
		case joaat("WEAPON_FIREWORK"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(11175, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(11176, iParam1, 0)));
		case joaat("WEAPON_HEAVYSHOTGUN"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(11263, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(11264, iParam1, 0)));
		case joaat("WEAPON_MARKSMANRIFLE"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(11273, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(11274, iParam1, 0)));
		case joaat("WEAPON_HOMINGLAUNCHER"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(11299, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(11300, iParam1, 0)));
		case joaat("WEAPON_PROXMINE"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(11291, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(11292, iParam1, 0)));
		case joaat("WEAPON_COMBATPDW"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(11307, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(11308, iParam1, 0)));
		case joaat("WEAPON_MARKSMANPISTOL"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(11324, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(11325, iParam1, 0)));
		case joaat("WEAPON_KNUCKLE"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(11317, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(11318, iParam1, 0)));
		case joaat("WEAPON_MACHETE"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(11334, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(11335, iParam1, 0)));
		case joaat("WEAPON_MACHINEPISTOL"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(11342, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(11343, iParam1, 0)));
		case joaat("WEAPON_FLASHLIGHT"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(11380, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(11381, iParam1, 0)));
		case joaat("WEAPON_SWITCHBLADE"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(11408, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(11409, iParam1, 0)));
		case joaat("WEAPON_REVOLVER"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(11398, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(11399, iParam1, 0)));
		case joaat("WEAPON_DBSHOTGUN"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(11370, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(11371, iParam1, 0)));
		case joaat("WEAPON_COMPACTRIFLE"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(11360, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(11361, iParam1, 0)));
		case joaat("WEAPON_HATCHET"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(11283, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(11284, iParam1, 0)));
		case joaat("WEAPON_AUTOSHOTGUN"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(11449, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(11450, iParam1, 0)));
		case joaat("WEAPON_BATTLEAXE"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(11459, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(11460, iParam1, 0)));
		case joaat("WEAPON_COMPACTLAUNCHER"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(11465, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(11466, iParam1, 0)));
		case joaat("WEAPON_MINISMG"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(11475, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(11476, iParam1, 0)));
		case joaat("WEAPON_PIPEBOMB"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(11485, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(11486, iParam1, 0)));
		case joaat("WEAPON_POOLCUE"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(11493, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(11494, iParam1, 0)));
		case joaat("WEAPON_WRENCH"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(223, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(225, iParam1, 0)));
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(11957, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(11958, iParam1, 0)));
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(11977, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(11978, iParam1, 0)));
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(11967, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(11968, iParam1, 0)));
		case joaat("WEAPON_REVOLVER_MK2"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(11987, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(11988, iParam1, 0)));
		case joaat("WEAPON_SNSPISTOL_MK2"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(12007, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(12008, iParam1, 0)));
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(12017, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(12018, iParam1, 0)));
		case joaat("WEAPON_DOUBLEACTION"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(11997, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(11998, iParam1, 0)));
		case joaat("WEAPON_STONE_HATCHET"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(12220, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(12221, iParam1, 0)));
		case joaat("WEAPON_RAYPISTOL"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(12377, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(12378, iParam1, 0)));
		case joaat("WEAPON_RAYCARBINE"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(12387, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(12388, iParam1, 0)));
		case joaat("WEAPON_RAYMINIGUN"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(12397, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(12398, iParam1, 0)));
		case joaat("WEAPON_NAVYREVOLVER"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(12828, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(12829, iParam1, 0)));
		case joaat("WEAPON_CERAMICPISTOL"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(12818, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(12819, iParam1, 0)));
		case joaat("WEAPON_MILITARYRIFLE"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(12988, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(12989, iParam1, 0)));
		case joaat("WEAPON_COMBATSHOTGUN"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(12968, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(12969, iParam1, 0)));
		case joaat("WEAPON_GADGETPISTOL"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(12978, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(12979, iParam1, 0)));
		case joaat("WEAPON_EMPLAUNCHER"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(13019, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(13020, iParam1, 0)));
		case joaat("WEAPON_STUNGUN_MP"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(13041, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(13042, iParam1, 0)));
		case joaat("WEAPON_PRECISIONRIFLE"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(13112, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(13113, iParam1, 0)));
		case joaat("WEAPON_TACTICALRIFLE"):
			return (SYSTEM::TO_FLOAT(__LIB_0__::func_369(13102, iParam1, 0)) / SYSTEM::TO_FLOAT(__LIB_0__::func_369(13103, iParam1, 0)));
		default:
	}
	return 0f;
}

int func_131(int iParam0, int iParam1)//Position - 0xC050
{
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL"):
			return __LIB_0__::func_369(255, iParam1, 0);
		case joaat("WEAPON_COMBATPISTOL"):
			return __LIB_0__::func_369(265, iParam1, 0);
		case joaat("WEAPON_APPISTOL"):
			return __LIB_0__::func_369(285, iParam1, 0);
		case joaat("WEAPON_MICROSMG"):
			return __LIB_0__::func_369(295, iParam1, 0);
		case joaat("WEAPON_SMG"):
			return __LIB_0__::func_369(305, iParam1, 0);
		case joaat("WEAPON_ASSAULTRIFLE"):
			return __LIB_0__::func_369(325, iParam1, 0);
		case joaat("WEAPON_CARBINERIFLE"):
			return __LIB_0__::func_369(334, iParam1, 0);
		case joaat("WEAPON_ADVANCEDRIFLE"):
			return __LIB_0__::func_369(343, iParam1, 0);
		case joaat("WEAPON_MG"):
			return __LIB_0__::func_369(352, iParam1, 0);
		case joaat("WEAPON_COMBATMG"):
			return __LIB_0__::func_369(361, iParam1, 0);
		case joaat("WEAPON_PUMPSHOTGUN"):
			return __LIB_0__::func_369(379, iParam1, 0);
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			return __LIB_0__::func_369(388, iParam1, 0);
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			return __LIB_0__::func_369(407, iParam1, 0);
		case joaat("WEAPON_SNIPERRIFLE"):
			return __LIB_0__::func_369(426, iParam1, 0);
		case joaat("WEAPON_HEAVYSNIPER"):
			return __LIB_0__::func_369(435, iParam1, 0);
		case joaat("WEAPON_MINIGUN"):
			return __LIB_0__::func_369(460, iParam1, 0);
		case joaat("WEAPON_PISTOL50"):
			return __LIB_0__::func_369(275, iParam1, 0);
		case joaat("WEAPON_ASSAULTSMG"):
			return __LIB_0__::func_369(315, iParam1, 0);
		case joaat("WEAPON_HEAVYRIFLE"):
			return __LIB_0__::func_369(435, iParam1, 0);
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			return __LIB_0__::func_369(398, iParam1, 0);
		case joaat("WEAPON_ASSAULTMG"):
			return __LIB_0__::func_369(370, iParam1, 0);
		case joaat("WEAPON_ASSAULTSNIPER"):
			return __LIB_0__::func_369(325, iParam1, 0);
		case joaat("WEAPON_PROGRAMMABLEAR"):
			return __LIB_0__::func_369(325, iParam1, 0);
		case joaat("WEAPON_RUBBERGUN"):
			return __LIB_0__::func_369(325, iParam1, 0);
		case joaat("WEAPON_SNSPISTOL"):
			return __LIB_0__::func_369(1745, iParam1, 0);
		case joaat("WEAPON_SPECIALCARBINE"):
			return __LIB_0__::func_369(10882, iParam1, 0);
		case joaat("WEAPON_BULLPUPRIFLE"):
			return __LIB_0__::func_369(10892, iParam1, 0);
		case joaat("WEAPON_HEAVYPISTOL"):
			return __LIB_0__::func_369(10872, iParam1, 0);
		case joaat("WEAPON_VINTAGEPISTOL"):
			return __LIB_0__::func_369(11169, iParam1, 0);
		case joaat("WEAPON_GUSENBERG"):
			return __LIB_0__::func_369(10902, iParam1, 0);
		case joaat("WEAPON_MUSKET"):
			return __LIB_0__::func_369(11189, iParam1, 0);
		case joaat("WEAPON_FIREWORK"):
			return __LIB_0__::func_369(11179, iParam1, 0);
		case joaat("WEAPON_HEAVYSHOTGUN"):
			return __LIB_0__::func_369(11267, iParam1, 0);
		case joaat("WEAPON_MARKSMANRIFLE"):
			return __LIB_0__::func_369(11277, iParam1, 0);
		case joaat("WEAPON_COMBATPDW"):
			return __LIB_0__::func_369(11311, iParam1, 0);
		case joaat("WEAPON_MARKSMANPISTOL"):
			return __LIB_0__::func_369(11328, iParam1, 0);
		case joaat("WEAPON_MACHINEPISTOL"):
			return __LIB_0__::func_369(11346, iParam1, 0);
		case joaat("WEAPON_REVOLVER"):
			return __LIB_0__::func_369(11402, iParam1, 0);
		case joaat("WEAPON_DBSHOTGUN"):
			return __LIB_0__::func_369(11374, iParam1, 0);
		case joaat("WEAPON_COMPACTRIFLE"):
			return __LIB_0__::func_369(11364, iParam1, 0);
		case joaat("WEAPON_AUTOSHOTGUN"):
			return __LIB_0__::func_369(11453, iParam1, 0);
		case joaat("WEAPON_MINISMG"):
			return __LIB_0__::func_369(11479, iParam1, 0);
		case joaat("WEAPON_PISTOL_MK2"):
			return __LIB_0__::func_369(255, iParam1, 0);
		case joaat("WEAPON_SMG_MK2"):
			return __LIB_0__::func_369(305, iParam1, 0);
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			return __LIB_0__::func_369(435, iParam1, 0);
		case joaat("WEAPON_COMBATMG_MK2"):
			return __LIB_0__::func_369(361, iParam1, 0);
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			return __LIB_0__::func_369(325, iParam1, 0);
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			return __LIB_0__::func_369(334, iParam1, 0);
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			return __LIB_0__::func_369(11961, iParam1, 0);
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			return __LIB_0__::func_369(11981, iParam1, 0);
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			return __LIB_0__::func_369(11971, iParam1, 0);
		case joaat("WEAPON_REVOLVER_MK2"):
			return __LIB_0__::func_369(11991, iParam1, 0);
		case joaat("WEAPON_SNSPISTOL_MK2"):
			return __LIB_0__::func_369(12011, iParam1, 0);
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			return __LIB_0__::func_369(12021, iParam1, 0);
		case joaat("WEAPON_DOUBLEACTION"):
			return __LIB_0__::func_369(12001, iParam1, 0);
		case joaat("WEAPON_RAYPISTOL"):
			return __LIB_0__::func_369(12381, iParam1, 0);
		case joaat("WEAPON_RAYCARBINE"):
			return __LIB_0__::func_369(12391, iParam1, 0);
		case joaat("WEAPON_RAYMINIGUN"):
			return __LIB_0__::func_369(12401, iParam1, 0);
		case joaat("WEAPON_MILITARYRIFLE"):
			return __LIB_0__::func_369(12992, iParam1, 0);
		case joaat("WEAPON_COMBATSHOTGUN"):
			return __LIB_0__::func_369(12972, iParam1, 0);
		case joaat("WEAPON_GADGETPISTOL"):
			return __LIB_0__::func_369(12982, iParam1, 0);
		case joaat("WEAPON_EMPLAUNCHER"):
			return __LIB_0__::func_369(13023, iParam1, 0);
		case joaat("WEAPON_STUNGUN_MP"):
			return __LIB_0__::func_369(13045, iParam1, 0);
		case joaat("WEAPON_PRECISIONRIFLE"):
			return __LIB_0__::func_369(13116, iParam1, 0);
		case joaat("WEAPON_TACTICALRIFLE"):
			return __LIB_0__::func_369(13106, iParam1, 0);
		default:
	}
	return 0;
}

int func_132(int iParam0, int iParam1)//Position - 0xC531
{
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL"):
			return __LIB_0__::func_369(252, iParam1, 0);
		case joaat("WEAPON_COMBATPISTOL"):
			return __LIB_0__::func_369(262, iParam1, 0);
		case joaat("WEAPON_APPISTOL"):
			return __LIB_0__::func_369(282, iParam1, 0);
		case joaat("WEAPON_MICROSMG"):
			return __LIB_0__::func_369(292, iParam1, 0);
		case joaat("WEAPON_SMG"):
			return __LIB_0__::func_369(302, iParam1, 0);
		case joaat("WEAPON_ASSAULTRIFLE"):
			return __LIB_0__::func_369(322, iParam1, 0);
		case joaat("WEAPON_CARBINERIFLE"):
			return __LIB_0__::func_369(331, iParam1, 0);
		case joaat("WEAPON_ADVANCEDRIFLE"):
			return __LIB_0__::func_369(340, iParam1, 0);
		case joaat("WEAPON_MG"):
			return __LIB_0__::func_369(349, iParam1, 0);
		case joaat("WEAPON_COMBATMG"):
			return __LIB_0__::func_369(358, iParam1, 0);
		case joaat("WEAPON_PUMPSHOTGUN"):
			return __LIB_0__::func_369(376, iParam1, 0);
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			return __LIB_0__::func_369(385, iParam1, 0);
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			return __LIB_0__::func_369(404, iParam1, 0);
		case joaat("WEAPON_SNIPERRIFLE"):
			return __LIB_0__::func_369(423, iParam1, 0);
		case joaat("WEAPON_HEAVYSNIPER"):
			return __LIB_0__::func_369(432, iParam1, 0);
		case joaat("WEAPON_GRENADELAUNCHER"):
			return __LIB_0__::func_369(443, iParam1, 0);
		case joaat("WEAPON_RPG"):
			return __LIB_0__::func_369(450, iParam1, 0);
		case joaat("WEAPON_MINIGUN"):
			return __LIB_0__::func_369(457, iParam1, 0);
		case joaat("WEAPON_GRENADE"):
			return __LIB_0__::func_369(466, iParam1, 0);
		case joaat("WEAPON_SMOKEGRENADE"):
			return __LIB_0__::func_369(474, iParam1, 0);
		case joaat("WEAPON_STICKYBOMB"):
			return __LIB_0__::func_369(483, iParam1, 0);
		case joaat("WEAPON_MOLOTOV"):
			return __LIB_0__::func_369(491, iParam1, 0);
		case joaat("WEAPON_STUNGUN"):
			return __LIB_0__::func_369(413, iParam1, 0);
		case joaat("WEAPON_KNIFE"):
			return __LIB_0__::func_369(196, iParam1, 0);
		case joaat("WEAPON_NIGHTSTICK"):
			return __LIB_0__::func_369(204, iParam1, 0);
		case joaat("WEAPON_HAMMER"):
			return __LIB_0__::func_369(232, iParam1, 0);
		case joaat("WEAPON_BAT"):
			return __LIB_0__::func_369(239, iParam1, 0);
		case joaat("WEAPON_CROWBAR"):
			return __LIB_0__::func_369(211, iParam1, 0);
		case joaat("WEAPON_GOLFCLUB"):
			return __LIB_0__::func_369(246, iParam1, 0);
		case joaat("WEAPON_PISTOL50"):
			return __LIB_0__::func_369(272, iParam1, 0);
		case joaat("WEAPON_ASSAULTSMG"):
			return __LIB_0__::func_369(312, iParam1, 0);
		case joaat("WEAPON_HEAVYRIFLE"):
			return __LIB_0__::func_369(432, iParam1, 0);
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			return __LIB_0__::func_369(395, iParam1, 0);
		case joaat("WEAPON_ASSAULTMG"):
			return __LIB_0__::func_369(367, iParam1, 0);
		case joaat("WEAPON_ASSAULTSNIPER"):
			return __LIB_0__::func_369(322, iParam1, 0);
		case joaat("WEAPON_PROGRAMMABLEAR"):
			return __LIB_0__::func_369(322, iParam1, 0);
		case joaat("WEAPON_RUBBERGUN"):
			return __LIB_0__::func_369(322, iParam1, 0);
		case joaat("WEAPON_BOTTLE"):
			return __LIB_0__::func_369(1732, iParam1, 0);
		case joaat("WEAPON_SNSPISTOL"):
			return __LIB_0__::func_369(1742, iParam1, 0);
		case joaat("WEAPON_SPECIALCARBINE"):
			return __LIB_0__::func_369(10879, iParam1, 0);
		case joaat("WEAPON_BULLPUPRIFLE"):
			return __LIB_0__::func_369(10889, iParam1, 0);
		case joaat("WEAPON_HEAVYPISTOL"):
			return __LIB_0__::func_369(10869, iParam1, 0);
		case joaat("WEAPON_DAGGER"):
			return __LIB_0__::func_369(11156, iParam1, 0);
		case joaat("WEAPON_VINTAGEPISTOL"):
			return __LIB_0__::func_369(11166, iParam1, 0);
		case joaat("WEAPON_GUSENBERG"):
			return __LIB_0__::func_369(10899, iParam1, 0);
		case joaat("WEAPON_MUSKET"):
			return __LIB_0__::func_369(11186, iParam1, 0);
		case joaat("WEAPON_FIREWORK"):
			return __LIB_0__::func_369(11176, iParam1, 0);
		case joaat("WEAPON_HEAVYSHOTGUN"):
			return __LIB_0__::func_369(11264, iParam1, 0);
		case joaat("WEAPON_MARKSMANRIFLE"):
			return __LIB_0__::func_369(11274, iParam1, 0);
		case joaat("WEAPON_PROXMINE"):
			return __LIB_0__::func_369(11292, iParam1, 0);
		case joaat("WEAPON_HOMINGLAUNCHER"):
			return __LIB_0__::func_369(11300, iParam1, 0);
		case joaat("WEAPON_COMBATPDW"):
			return __LIB_0__::func_369(11308, iParam1, 0);
		case joaat("WEAPON_MARKSMANPISTOL"):
			return __LIB_0__::func_369(11325, iParam1, 0);
		case joaat("WEAPON_KNUCKLE"):
			return __LIB_0__::func_369(11318, iParam1, 0);
		case joaat("WEAPON_MACHETE"):
			return __LIB_0__::func_369(11335, iParam1, 0);
		case joaat("WEAPON_MACHINEPISTOL"):
			return __LIB_0__::func_369(11343, iParam1, 0);
		case joaat("WEAPON_FLASHLIGHT"):
			return __LIB_0__::func_369(11381, iParam1, 0);
		case joaat("WEAPON_SWITCHBLADE"):
			return __LIB_0__::func_369(11409, iParam1, 0);
		case joaat("WEAPON_REVOLVER"):
			return __LIB_0__::func_369(11399, iParam1, 0);
		case joaat("WEAPON_DBSHOTGUN"):
			return __LIB_0__::func_369(11371, iParam1, 0);
		case joaat("WEAPON_COMPACTRIFLE"):
			return __LIB_0__::func_369(11361, iParam1, 0);
		case joaat("WEAPON_HATCHET"):
			return __LIB_0__::func_369(11284, iParam1, 0);
		case joaat("WEAPON_AUTOSHOTGUN"):
			return __LIB_0__::func_369(11450, iParam1, 0);
		case joaat("WEAPON_BATTLEAXE"):
			return __LIB_0__::func_369(11460, iParam1, 0);
		case joaat("WEAPON_COMPACTLAUNCHER"):
			return __LIB_0__::func_369(11466, iParam1, 0);
		case joaat("WEAPON_MINISMG"):
			return __LIB_0__::func_369(11476, iParam1, 0);
		case joaat("WEAPON_PIPEBOMB"):
			return __LIB_0__::func_369(11486, iParam1, 0);
		case joaat("WEAPON_POOLCUE"):
			return __LIB_0__::func_369(11494, iParam1, 0);
		case joaat("WEAPON_WRENCH"):
			return __LIB_0__::func_369(225, iParam1, 0);
		case joaat("WEAPON_PISTOL_MK2"):
			return __LIB_0__::func_369(252, iParam1, 0);
		case joaat("WEAPON_SMG_MK2"):
			return __LIB_0__::func_369(302, iParam1, 0);
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			return __LIB_0__::func_369(432, iParam1, 0);
		case joaat("WEAPON_COMBATMG_MK2"):
			return __LIB_0__::func_369(358, iParam1, 0);
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			return __LIB_0__::func_369(322, iParam1, 0);
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			return __LIB_0__::func_369(331, iParam1, 0);
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			return __LIB_0__::func_369(11958, iParam1, 0);
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			return __LIB_0__::func_369(11978, iParam1, 0);
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			return __LIB_0__::func_369(11968, iParam1, 0);
		case joaat("WEAPON_REVOLVER_MK2"):
			return __LIB_0__::func_369(11988, iParam1, 0);
		case joaat("WEAPON_SNSPISTOL_MK2"):
			return __LIB_0__::func_369(12008, iParam1, 0);
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			return __LIB_0__::func_369(12018, iParam1, 0);
		case joaat("WEAPON_DOUBLEACTION"):
			return __LIB_0__::func_369(11998, iParam1, 0);
		case joaat("WEAPON_STONE_HATCHET"):
			return __LIB_0__::func_369(12221, iParam1, 0);
		case joaat("WEAPON_RAYPISTOL"):
			return __LIB_0__::func_369(12378, iParam1, 0);
		case joaat("WEAPON_RAYCARBINE"):
			return __LIB_0__::func_369(12388, iParam1, 0);
		case joaat("WEAPON_RAYMINIGUN"):
			return __LIB_0__::func_369(12398, iParam1, 0);
		case joaat("WEAPON_NAVYREVOLVER"):
			return __LIB_0__::func_369(12829, iParam1, 0);
		case joaat("WEAPON_CERAMICPISTOL"):
			return __LIB_0__::func_369(12819, iParam1, 0);
		case joaat("WEAPON_GADGETPISTOL"):
			return __LIB_0__::func_369(12979, iParam1, 0);
		case joaat("WEAPON_MILITARYRIFLE"):
			return __LIB_0__::func_369(12989, iParam1, 0);
		case joaat("WEAPON_COMBATSHOTGUN"):
			return __LIB_0__::func_369(12969, iParam1, 0);
		case joaat("WEAPON_EMPLAUNCHER"):
			return __LIB_0__::func_369(13020, iParam1, 0);
		case joaat("WEAPON_STUNGUN_MP"):
			return __LIB_0__::func_369(13042, iParam1, 0);
		case joaat("WEAPON_PRECISIONRIFLE"):
			return __LIB_0__::func_369(13113, iParam1, 0);
		case joaat("WEAPON_TACTICALRIFLE"):
			return __LIB_0__::func_369(13103, iParam1, 0);
		default:
	}
	return 0;
}

int func_133(int iParam0, int iParam1)//Position - 0xCC45
{
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL"):
			return __LIB_0__::func_369(251, iParam1, 0);
		case joaat("WEAPON_COMBATPISTOL"):
			return __LIB_0__::func_369(261, iParam1, 0);
		case joaat("WEAPON_APPISTOL"):
			return __LIB_0__::func_369(281, iParam1, 0);
		case joaat("WEAPON_MICROSMG"):
			return __LIB_0__::func_369(291, iParam1, 0);
		case joaat("WEAPON_SMG"):
			return __LIB_0__::func_369(301, iParam1, 0);
		case joaat("WEAPON_ASSAULTRIFLE"):
			return __LIB_0__::func_369(321, iParam1, 0);
		case joaat("WEAPON_CARBINERIFLE"):
			return __LIB_0__::func_369(330, iParam1, 0);
		case joaat("WEAPON_ADVANCEDRIFLE"):
			return __LIB_0__::func_369(339, iParam1, 0);
		case joaat("WEAPON_MG"):
			return __LIB_0__::func_369(348, iParam1, 0);
		case joaat("WEAPON_COMBATMG"):
			return __LIB_0__::func_369(357, iParam1, 0);
		case joaat("WEAPON_PUMPSHOTGUN"):
			return __LIB_0__::func_369(375, iParam1, 0);
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			return __LIB_0__::func_369(384, iParam1, 0);
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			return __LIB_0__::func_369(403, iParam1, 0);
		case joaat("WEAPON_SNIPERRIFLE"):
			return __LIB_0__::func_369(422, iParam1, 0);
		case joaat("WEAPON_HEAVYSNIPER"):
			return __LIB_0__::func_369(431, iParam1, 0);
		case joaat("WEAPON_GRENADELAUNCHER"):
			return __LIB_0__::func_369(442, iParam1, 0);
		case joaat("WEAPON_RPG"):
			return __LIB_0__::func_369(449, iParam1, 0);
		case joaat("WEAPON_MINIGUN"):
			return __LIB_0__::func_369(456, iParam1, 0);
		case joaat("WEAPON_GRENADE"):
			return __LIB_0__::func_369(465, iParam1, 0);
		case joaat("WEAPON_SMOKEGRENADE"):
			return __LIB_0__::func_369(473, iParam1, 0);
		case joaat("WEAPON_STICKYBOMB"):
			return __LIB_0__::func_369(482, iParam1, 0);
		case joaat("WEAPON_MOLOTOV"):
			return __LIB_0__::func_369(490, iParam1, 0);
		case joaat("WEAPON_STUNGUN"):
			return __LIB_0__::func_369(412, iParam1, 0);
		case joaat("WEAPON_KNIFE"):
			return __LIB_0__::func_369(194, iParam1, 0);
		case joaat("WEAPON_NIGHTSTICK"):
			return __LIB_0__::func_369(202, iParam1, 0);
		case joaat("WEAPON_HAMMER"):
			return __LIB_0__::func_369(230, iParam1, 0);
		case joaat("WEAPON_BAT"):
			return __LIB_0__::func_369(237, iParam1, 0);
		case joaat("WEAPON_CROWBAR"):
			return __LIB_0__::func_369(209, iParam1, 0);
		case joaat("WEAPON_GOLFCLUB"):
			return __LIB_0__::func_369(244, iParam1, 0);
		case joaat("WEAPON_PISTOL50"):
			return __LIB_0__::func_369(271, iParam1, 0);
		case joaat("WEAPON_ASSAULTSMG"):
			return __LIB_0__::func_369(311, iParam1, 0);
		case joaat("WEAPON_HEAVYRIFLE"):
			return __LIB_0__::func_369(431, iParam1, 0);
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			return __LIB_0__::func_369(394, iParam1, 0);
		case joaat("WEAPON_ASSAULTMG"):
			return __LIB_0__::func_369(366, iParam1, 0);
		case joaat("WEAPON_ASSAULTSNIPER"):
			return __LIB_0__::func_369(321, iParam1, 0);
		case joaat("WEAPON_PROGRAMMABLEAR"):
			return __LIB_0__::func_369(321, iParam1, 0);
		case joaat("WEAPON_RUBBERGUN"):
			return __LIB_0__::func_369(321, iParam1, 0);
		case joaat("WEAPON_BOTTLE"):
			return __LIB_0__::func_369(1731, iParam1, 0);
		case joaat("WEAPON_SNSPISTOL"):
			return __LIB_0__::func_369(1741, iParam1, 0);
		case joaat("WEAPON_SPECIALCARBINE"):
			return __LIB_0__::func_369(10878, iParam1, 0);
		case joaat("WEAPON_BULLPUPRIFLE"):
			return __LIB_0__::func_369(10888, iParam1, 0);
		case joaat("WEAPON_HEAVYPISTOL"):
			return __LIB_0__::func_369(10868, iParam1, 0);
		case joaat("WEAPON_DAGGER"):
			return __LIB_0__::func_369(11155, iParam1, 0);
		case joaat("WEAPON_VINTAGEPISTOL"):
			return __LIB_0__::func_369(11165, iParam1, 0);
		case joaat("WEAPON_GUSENBERG"):
			return __LIB_0__::func_369(10898, iParam1, 0);
		case joaat("WEAPON_MUSKET"):
			return __LIB_0__::func_369(11185, iParam1, 0);
		case joaat("WEAPON_FIREWORK"):
			return __LIB_0__::func_369(11175, iParam1, 0);
		case joaat("WEAPON_HEAVYSHOTGUN"):
			return __LIB_0__::func_369(11263, iParam1, 0);
		case joaat("WEAPON_MARKSMANRIFLE"):
			return __LIB_0__::func_369(11273, iParam1, 0);
		case joaat("WEAPON_PROXMINE"):
			return __LIB_0__::func_369(11291, iParam1, 0);
		case joaat("WEAPON_HOMINGLAUNCHER"):
			return __LIB_0__::func_369(11299, iParam1, 0);
		case joaat("WEAPON_COMBATPDW"):
			return __LIB_0__::func_369(11307, iParam1, 0);
		case joaat("WEAPON_MARKSMANPISTOL"):
			return __LIB_0__::func_369(11324, iParam1, 0);
		case joaat("WEAPON_KNUCKLE"):
			return __LIB_0__::func_369(11317, iParam1, 0);
		case joaat("WEAPON_MACHETE"):
			return __LIB_0__::func_369(11334, iParam1, 0);
		case joaat("WEAPON_MACHINEPISTOL"):
			return __LIB_0__::func_369(11342, iParam1, 0);
		case joaat("WEAPON_FLASHLIGHT"):
			return __LIB_0__::func_369(11380, iParam1, 0);
		case joaat("WEAPON_SWITCHBLADE"):
			return __LIB_0__::func_369(11408, iParam1, 0);
		case joaat("WEAPON_REVOLVER"):
			return __LIB_0__::func_369(11398, iParam1, 0);
		case joaat("WEAPON_DBSHOTGUN"):
			return __LIB_0__::func_369(11370, iParam1, 0);
		case joaat("WEAPON_COMPACTRIFLE"):
			return __LIB_0__::func_369(11360, iParam1, 0);
		case joaat("WEAPON_HATCHET"):
			return __LIB_0__::func_369(11283, iParam1, 0);
		case joaat("WEAPON_AUTOSHOTGUN"):
			return __LIB_0__::func_369(11449, iParam1, 0);
		case joaat("WEAPON_BATTLEAXE"):
			return __LIB_0__::func_369(11459, iParam1, 0);
		case joaat("WEAPON_COMPACTLAUNCHER"):
			return __LIB_0__::func_369(11465, iParam1, 0);
		case joaat("WEAPON_MINISMG"):
			return __LIB_0__::func_369(11475, iParam1, 0);
		case joaat("WEAPON_PIPEBOMB"):
			return __LIB_0__::func_369(11485, iParam1, 0);
		case joaat("WEAPON_POOLCUE"):
			return __LIB_0__::func_369(11493, iParam1, 0);
		case joaat("WEAPON_WRENCH"):
			return __LIB_0__::func_369(223, iParam1, 0);
		case joaat("WEAPON_PISTOL_MK2"):
			return __LIB_0__::func_369(251, iParam1, 0);
		case joaat("WEAPON_SMG_MK2"):
			return __LIB_0__::func_369(301, iParam1, 0);
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			return __LIB_0__::func_369(431, iParam1, 0);
		case joaat("WEAPON_COMBATMG_MK2"):
			return __LIB_0__::func_369(357, iParam1, 0);
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			return __LIB_0__::func_369(321, iParam1, 0);
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			return __LIB_0__::func_369(330, iParam1, 0);
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			return __LIB_0__::func_369(11957, iParam1, 0);
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			return __LIB_0__::func_369(11977, iParam1, 0);
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			return __LIB_0__::func_369(11967, iParam1, 0);
		case joaat("WEAPON_REVOLVER_MK2"):
			return __LIB_0__::func_369(11987, iParam1, 0);
		case joaat("WEAPON_SNSPISTOL_MK2"):
			return __LIB_0__::func_369(12007, iParam1, 0);
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			return __LIB_0__::func_369(12017, iParam1, 0);
		case joaat("WEAPON_DOUBLEACTION"):
			return __LIB_0__::func_369(11997, iParam1, 0);
		case joaat("WEAPON_STONE_HATCHET"):
			return __LIB_0__::func_369(12220, iParam1, 0);
		case joaat("WEAPON_RAYPISTOL"):
			return __LIB_0__::func_369(12377, iParam1, 0);
		case joaat("WEAPON_RAYCARBINE"):
			return __LIB_0__::func_369(12387, iParam1, 0);
		case joaat("WEAPON_RAYMINIGUN"):
			return __LIB_0__::func_369(12397, iParam1, 0);
		case joaat("WEAPON_NAVYREVOLVER"):
			return __LIB_0__::func_369(12828, iParam1, 0);
		case joaat("WEAPON_CERAMICPISTOL"):
			return __LIB_0__::func_369(12818, iParam1, 0);
		case joaat("WEAPON_GADGETPISTOL"):
			return __LIB_0__::func_369(12978, iParam1, 0);
		case joaat("WEAPON_MILITARYRIFLE"):
			return __LIB_0__::func_369(12988, iParam1, 0);
		case joaat("WEAPON_COMBATSHOTGUN"):
			return __LIB_0__::func_369(12968, iParam1, 0);
		case joaat("WEAPON_EMPLAUNCHER"):
			return __LIB_0__::func_369(12968, iParam1, 0);
		case joaat("WEAPON_STUNGUN_MP"):
			return __LIB_0__::func_369(13041, iParam1, 0);
		case joaat("WEAPON_PRECISIONRIFLE"):
			return __LIB_0__::func_369(13112, iParam1, 0);
		case joaat("WEAPON_TACTICALRIFLE"):
			return __LIB_0__::func_369(13102, iParam1, 0);
		default:
	}
	return 0;
}

float func_134(int iParam0)//Position - 0xD359
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL"):
			iVar0 = 253;
			iVar1 = 254;
			break;
		case joaat("WEAPON_PISTOL_MK2"):
			iVar0 = 253;
			iVar1 = 254;
			break;
		case joaat("WEAPON_COMBATPISTOL"):
			iVar0 = 263;
			iVar1 = 264;
			break;
		case joaat("WEAPON_APPISTOL"):
			iVar0 = 283;
			iVar1 = 284;
			break;
		case joaat("WEAPON_MICROSMG"):
			iVar0 = 293;
			iVar1 = 294;
			break;
		case joaat("WEAPON_SMG"):
			iVar0 = 303;
			iVar1 = 304;
			break;
		case joaat("WEAPON_SMG_MK2"):
			iVar0 = 303;
			iVar1 = 304;
			break;
		case joaat("WEAPON_ASSAULTRIFLE"):
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			iVar0 = 323;
			iVar1 = 324;
			break;
		case joaat("WEAPON_CARBINERIFLE"):
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			iVar0 = 332;
			iVar1 = 333;
			break;
		case joaat("WEAPON_SPECIALCARBINE"):
			iVar0 = 10880;
			iVar1 = 10881;
			break;
		case joaat("WEAPON_SNSPISTOL"):
			iVar0 = 1743;
			iVar1 = 1744;
			break;
		case joaat("WEAPON_ADVANCEDRIFLE"):
			iVar0 = 341;
			iVar1 = 342;
			break;
		case joaat("WEAPON_MG"):
			iVar0 = 350;
			iVar1 = 351;
			break;
		case joaat("WEAPON_COMBATMG"):
		case joaat("WEAPON_COMBATMG_MK2"):
			iVar0 = 359;
			iVar1 = 360;
			break;
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			iVar0 = 386;
			iVar1 = 387;
			break;
		case joaat("WEAPON_PUMPSHOTGUN"):
			iVar0 = 377;
			iVar1 = 378;
			break;
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			iVar0 = 405;
			iVar1 = 406;
			break;
		case joaat("WEAPON_SNIPERRIFLE"):
			iVar0 = 424;
			iVar1 = 425;
			break;
		case joaat("WEAPON_HEAVYSNIPER"):
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			iVar0 = 433;
			iVar1 = 434;
			break;
		case joaat("WEAPON_GRENADELAUNCHER"):
			iVar0 = 444;
			iVar1 = 442;
			break;
		case joaat("WEAPON_MINIGUN"):
			iVar0 = 458;
			iVar1 = 459;
			break;
		case joaat("WEAPON_RPG"):
			iVar0 = 451;
			iVar1 = 449;
			break;
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			iVar0 = 396;
			iVar1 = 397;
			break;
		case joaat("WEAPON_ASSAULTSMG"):
			iVar0 = 313;
			iVar1 = 314;
			break;
		case joaat("WEAPON_PISTOL50"):
			iVar0 = 273;
			iVar1 = 274;
			break;
		case joaat("WEAPON_HEAVYPISTOL"):
			iVar0 = 10870;
			iVar1 = 10871;
			break;
		case joaat("WEAPON_BULLPUPRIFLE"):
			iVar0 = 10890;
			iVar1 = 10891;
			break;
		case joaat("WEAPON_GUSENBERG"):
			iVar0 = 10900;
			iVar1 = 10901;
			break;
		case joaat("WEAPON_VINTAGEPISTOL"):
			iVar0 = 11167;
			iVar1 = 11168;
			break;
		case joaat("WEAPON_MUSKET"):
			iVar0 = 11187;
			iVar1 = 11188;
			break;
		case joaat("WEAPON_FIREWORK"):
			iVar0 = 11177;
			iVar1 = 11178;
			break;
		case joaat("WEAPON_FLAREGUN"):
			iVar0 = 10920;
			iVar1 = 10921;
			break;
		case joaat("WEAPON_HEAVYSHOTGUN"):
			iVar0 = 11265;
			iVar1 = 11266;
			break;
		case joaat("WEAPON_MARKSMANRIFLE"):
			iVar0 = 11275;
			iVar1 = 11276;
			break;
		case joaat("WEAPON_HOMINGLAUNCHER"):
			iVar0 = 11301;
			iVar1 = 11299;
			break;
		case joaat("WEAPON_PROXMINE"):
			iVar0 = 11293;
			iVar1 = 11291;
			break;
		case joaat("WEAPON_COMBATPDW"):
			iVar0 = 11309;
			iVar1 = 11310;
			break;
		case joaat("WEAPON_MARKSMANPISTOL"):
			iVar0 = 11326;
			iVar1 = 11327;
			break;
		case joaat("WEAPON_MACHINEPISTOL"):
			iVar0 = 11344;
			iVar1 = 11345;
			break;
		case joaat("WEAPON_COMPACTRIFLE"):
			iVar0 = 11362;
			iVar1 = 11363;
			break;
		case joaat("WEAPON_DBSHOTGUN"):
			iVar0 = 11372;
			iVar1 = 11373;
			break;
		case joaat("WEAPON_REVOLVER"):
			iVar0 = 11400;
			iVar1 = 11401;
			break;
		case joaat("WEAPON_AUTOSHOTGUN"):
			iVar0 = 11451;
			iVar1 = 11452;
			break;
		case joaat("WEAPON_MINISMG"):
			iVar0 = 11477;
			iVar1 = 11478;
			break;
		case joaat("WEAPON_COMPACTLAUNCHER"):
			iVar0 = 11467;
			iVar1 = 11465;
			break;
		case joaat("WEAPON_DOUBLEACTION"):
			iVar0 = 11999;
			iVar1 = 12000;
			break;
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			iVar1 = 11957;
			iVar0 = 11959;
			break;
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			iVar1 = 11977;
			iVar0 = 11979;
			break;
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			iVar1 = 11967;
			iVar0 = 11969;
			break;
		case joaat("WEAPON_REVOLVER_MK2"):
			iVar1 = 11987;
			iVar0 = 11989;
			break;
		case joaat("WEAPON_SNSPISTOL_MK2"):
			iVar1 = 12007;
			iVar0 = 12009;
			break;
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			iVar1 = 12017;
			iVar0 = 12019;
			break;
		case joaat("WEAPON_RAYCARBINE"):
			iVar0 = 12389;
			iVar1 = 12390;
			break;
		case joaat("WEAPON_RAYMINIGUN"):
			iVar0 = 12399;
			iVar1 = 12400;
			break;
		case joaat("WEAPON_RAYPISTOL"):
			iVar0 = 12379;
			iVar1 = 12380;
			break;
		case joaat("WEAPON_NAVYREVOLVER"):
			iVar0 = 12830;
			iVar1 = 12831;
			break;
		case joaat("WEAPON_CERAMICPISTOL"):
			iVar0 = 12820;
			iVar1 = 12821;
			break;
		case joaat("WEAPON_COMBATSHOTGUN"):
			iVar0 = 12970;
			iVar1 = 12971;
			break;
		case joaat("WEAPON_GADGETPISTOL"):
			iVar0 = 12980;
			iVar1 = 12981;
			break;
		case joaat("WEAPON_MILITARYRIFLE"):
			iVar0 = 12990;
			iVar1 = 12991;
			break;
		case joaat("WEAPON_HEAVYRIFLE"):
			iVar0 = 13031;
			iVar1 = 13032;
			break;
		case joaat("WEAPON_EMPLAUNCHER"):
			iVar0 = 13021;
			iVar1 = 13022;
			break;
		case joaat("WEAPON_STUNGUN_MP"):
			iVar0 = 13043;
			iVar1 = 13044;
			break;
		case joaat("WEAPON_TACTICALRIFLE"):
			iVar0 = 13104;
			iVar1 = 13105;
			break;
		case joaat("WEAPON_PRECISIONRIFLE"):
			iVar0 = 13114;
			iVar1 = 13115;
			break;
	}
	if ((__LIB_3__::func_105(iParam0) || iParam0 == joaat("WEAPON_FLASHLIGHT")) || __LIB_3__::func_104(iParam0))
	{
	}
	else
	{
		fVar2 = SYSTEM::TO_FLOAT(__LIB_0__::func_369(iVar0, -1, 0));
		fVar3 = SYSTEM::TO_FLOAT(__LIB_0__::func_369(iVar1, -1, 0));
		if (fVar2 > 0f)
		{
			fVar4 = (fVar3 / fVar2);
			if (fVar4 > 1f)
			{
				fVar4 = 1f;
			}
			fVar4 = (fVar4 * 100f);
			iVar5 = SYSTEM::ROUND(fVar4);
			fVar4 = SYSTEM::TO_FLOAT(iVar5);
			return fVar4;
		}
	}
	return 0f;
}

void func_147(var uParam0, var uParam1)//Position - 0xE0F6
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	func_149();
	iVar0 = 9;
	iVar1 = uParam0->f_277;
	if (uParam1->f_5 < iLocal_64)
	{
		iVar1 = (iVar1 + (iVar0 * uParam1->f_5));
	}
	else
	{
		iVar1 = (iVar1 + (iVar0 * uParam1->f_5));
	}
	iVar2 = uParam1->f_5 + 1;
	iVar3 = iLocal_64 + 1;
	__LIB_38__::func_198(0, iVar2, iVar3, "HUD_PAGE" /* GXT: Page ~1~ of ~1~ */, 0);
}

void func_149()//Position - 0xE1E1
{
	iLocal_65 = 0;
	iLocal_64 = 3;
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_HAMMER")))
	{
		iLocal_66[10] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[10] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_PISTOL50")))
	{
		iLocal_66[0] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[0] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_BULLPUPSHOTGUN")))
	{
		iLocal_66[1] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[1] = -1;
	}
	if (__LIB_0__::func_420(1, 0))
	{
		if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_SAWNOFFSHOTGUN")))
		{
			iLocal_66[2] = ((iLocal_65 / 9) + iLocal_64);
			iLocal_65++;
		}
		else
		{
			iLocal_66[2] = -1;
		}
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_BOTTLE")))
	{
		iLocal_66[3] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[3] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_SNSPISTOL")))
	{
		iLocal_66[4] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[4] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_GUSENBERG")))
	{
		iLocal_66[11] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[11] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_HEAVYPISTOL")))
	{
		iLocal_66[7] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[7] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_SPECIALCARBINE")))
	{
		iLocal_66[5] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[5] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_BULLPUPRIFLE")))
	{
		iLocal_66[6] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[6] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_DAGGER")))
	{
		iLocal_66[8] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[8] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_VINTAGEPISTOL")))
	{
		iLocal_66[9] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[9] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_FIREWORK")))
	{
		iLocal_66[14] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[14] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_MUSKET")))
	{
		iLocal_66[13] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[13] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_HEAVYSHOTGUN")))
	{
		iLocal_66[15] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[15] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_MARKSMANRIFLE")))
	{
		iLocal_66[16] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[16] = -1;
	}
	if (__LIB_0__::func_116() || Global_262145.f_20269 /* Tunable: ENABLE_RETURNING_CONTENT_WEAPON */)
	{
		if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_HATCHET")))
		{
			iLocal_66[22] = ((iLocal_65 / 9) + iLocal_64);
			iLocal_65++;
		}
		else
		{
			iLocal_66[22] = -1;
		}
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_HOMINGLAUNCHER")))
	{
		iLocal_66[18] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[18] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_PROXMINE")))
	{
		iLocal_66[17] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[17] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_FLAREGUN")))
	{
		iLocal_66[12] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[12] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_COMBATPDW")))
	{
		iLocal_66[19] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[19] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_MARKSMANPISTOL")))
	{
		iLocal_66[20] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[20] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_KNUCKLE")))
	{
		iLocal_66[21] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[21] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_MACHETE")))
	{
		iLocal_66[23] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[23] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_MACHINEPISTOL")))
	{
		iLocal_66[24] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[24] = -1;
	}
	if (Global_262145.f_12049 /* Tunable: TURN_ON_HALLOWEEN_WEAPONS */ && WEAPON::IS_WEAPON_VALID(joaat("WEAPON_FLASHLIGHT")))
	{
		iLocal_66[25] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[25] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_REVOLVER")))
	{
		iLocal_66[26] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[26] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_SWITCHBLADE")))
	{
		iLocal_66[27] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[27] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_DBSHOTGUN")))
	{
		iLocal_66[28] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[28] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_COMPACTRIFLE")))
	{
		iLocal_66[29] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[29] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_AUTOSHOTGUN")))
	{
		iLocal_66[30] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[30] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_BATTLEAXE")))
	{
		iLocal_66[31] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[31] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_COMPACTLAUNCHER")))
	{
		iLocal_66[32] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[32] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_MINISMG")))
	{
		iLocal_66[33] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[33] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_PIPEBOMB")))
	{
		iLocal_66[34] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[34] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_POOLCUE")))
	{
		iLocal_66[35] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[35] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_WRENCH")))
	{
		iLocal_66[36] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[36] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_ASSAULTRIFLE_MK2")))
	{
		iLocal_66[37] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[37] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_CARBINERIFLE_MK2")))
	{
		iLocal_66[38] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[38] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_COMBATMG_MK2")))
	{
		iLocal_66[39] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[39] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_HEAVYSNIPER_MK2")))
	{
		iLocal_66[40] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[40] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_PISTOL_MK2")))
	{
		iLocal_66[41] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[41] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_SMG_MK2")))
	{
		iLocal_66[42] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[42] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_BULLPUPRIFLE_MK2")))
	{
		iLocal_66[43] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[43] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_MARKSMANRIFLE_MK2")))
	{
		iLocal_66[44] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[44] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_PUMPSHOTGUN_MK2")))
	{
		iLocal_66[45] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[45] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_REVOLVER_MK2")))
	{
		iLocal_66[46] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[46] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_SNSPISTOL_MK2")))
	{
		iLocal_66[47] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[47] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_SPECIALCARBINE_MK2")))
	{
		iLocal_66[48] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[48] = -1;
	}
	if ((Global_262145.f_23472 /* Tunable: ENABLE_TREASURE_HUNT */ && WEAPON::IS_WEAPON_VALID(joaat("WEAPON_DOUBLEACTION"))) && (__LIB_18__::func_240() || Global_1963965))
	{
		iLocal_66[49] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[49] = -1;
	}
	if ((Global_262145.f_24171 /* Tunable: -585985361 */ && WEAPON::IS_WEAPON_VALID(joaat("WEAPON_STONE_HATCHET"))) && __LIB_6__::func_148())
	{
		iLocal_66[50] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[50] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_RAYCARBINE")) && Global_262145.f_26748 /* Tunable: ENABLE_AW_HELLBRINGER */)
	{
		iLocal_66[51] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[51] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_RAYMINIGUN")) && Global_262145.f_26747 /* Tunable: ENABLE_AW_WIDOWMAKER */)
	{
		iLocal_66[52] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[52] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_RAYPISTOL")) && (((__LIB_0__::func_137(25007, -1) || __LIB_0__::func_137(25002, -1)) || func_88(joaat("WEAPON_RAYPISTOL"), -1, 0)) || Global_262145.f_25756 /* Tunable: ENABLE_AW_RAYGUN */))
	{
		iLocal_66[53] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[53] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_CERAMICPISTOL")))
	{
		iLocal_66[54] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[54] = -1;
	}
	if ((Global_262145.f_28372 /* Tunable: ENABLE_SERIAL_KILLER */ && WEAPON::IS_WEAPON_VALID(joaat("WEAPON_NAVYREVOLVER"))) && (__LIB_29__::func_151() || Global_1963971))
	{
		iLocal_66[55] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[55] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_MILITARYRIFLE")))
	{
		iLocal_66[56] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[56] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_COMBATSHOTGUN")) && __LIB_0__::func_137(30632, -1))
	{
		iLocal_66[57] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[57] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_GADGETPISTOL")) && __LIB_0__::func_355(106, -1))
	{
		iLocal_66[58] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[58] = -1;
	}
	if ((Global_262145.f_28372 /* Tunable: ENABLE_SERIAL_KILLER */ && WEAPON::IS_WEAPON_VALID(joaat("WEAPON_NAVYREVOLVER"))) && (__LIB_29__::func_151() || Global_1963971))
	{
		iLocal_66[55] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[55] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_EMPLAUNCHER")))
	{
		iLocal_66[59] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[59] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_STUNGUN_MP")))
	{
		iLocal_66[60] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[60] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_HEAVYRIFLE")))
	{
		iLocal_66[61] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[61] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_TACTICALRIFLE")) && (((Global_262145.f_32775 /* Tunable: UNLOCK_SERVICE_CARBINE_FOR_PURCHASE */ || func_88(joaat("WEAPON_TACTICALRIFLE"), -1, 0)) || __LIB_0__::func_351(__LIB_6__::func_150(joaat("WEAPON_TACTICALRIFLE")), -1)) || __LIB_6__::func_353(joaat("WEAPON_TACTICALRIFLE"))))
	{
		iLocal_66[62] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[62] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_PRECISIONRIFLE")))
	{
		iLocal_66[63] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[63] = -1;
	}
	if (iLocal_65 == 0)
	{
		iLocal_64 = 2;
		iLocal_65 = 9;
	}
	else
	{
		iLocal_64 = (iLocal_64 + (iLocal_65 / 9));
		iLocal_65 = (iLocal_65 - (9 * (iLocal_65 / 9)));
		if (iLocal_65 == 0)
		{
			iLocal_64 = (iLocal_64 - 1);
			iLocal_65 = 9;
		}
	}
}

void func_150(int iParam0, var uParam1)//Position - 0xEE08
{
	uParam1->f_277 = iParam0;
}

void func_151()//Position - 0xEE17
{
	func_149();
	func_152();
	__LIB_38__::func_198(0, 1, iLocal_64 + 1, "HUD_PAGE" /* GXT: Page ~1~ of ~1~ */, 0);
}

void func_152()//Position - 0xEE36
{
	__LIB_38__::func_221(1);
}

void func_155(var uParam0)//Position - 0xEEAA
{
	uParam0->f_284 = 1;
}

void func_156(var uParam0)//Position - 0xEEB8
{
	uParam0->f_283 = 1;
}

void func_157(var uParam0)//Position - 0xEEC6
{
	func_158(uParam0);
	uParam0->f_281 = 1;
}

void func_158(var uParam0)//Position - 0xEEDA
{
	*uParam0 = { Global_1646100 };
}

