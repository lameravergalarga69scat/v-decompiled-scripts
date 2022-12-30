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
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
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
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 17;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 17;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
#endregion
void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
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
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4))
	{
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(joaat("EditPlaylistPick"));
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(joaat("EditPlaylistDrop"));
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(joaat("DeletePlaylist"));
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(joaat("EditPlaylist"));
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(joaat("SetCrewChallenge"));
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(joaat("RScrollUpDown"));
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(874957556);
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(817402210);
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(joaat("HIDE_ACCEPTBUTTON"));
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(joaat("PageLeft"));
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(joaat("PageRight"));
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(joaat("SupressSelectPM"));
		HUD::PAUSE_MENU_SET_BUSY_SPINNER(false, -1, 0);
		Global_1574599 = 0;
		STATS::PLAYSTATS_AWARD_NAV(Global_1646672.f_471, Global_1646672.f_472);
		Global_1646672.f_471 = 0;
		Global_1646672.f_472 = 0;
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	HUD::FORCE_SCRIPTED_GFX_WHEN_FRONTEND_ACTIVE(1);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	Global_1574599 = 1;
	iVar0 = 0;
	iVar1 = 1;
	Global_1643950.f_1 = 0;
	Global_1643950.f_3 = 0;
	Global_1643950.f_5 = 0;
	Global_1643950.f_7 = 0;
	Global_1643950.f_6 = 0;
	func_146(&Global_1647601);
	func_145(0, &Global_1647601);
	func_144(&Global_1647601);
	func_142(&Global_1646672);
	func_141(-1, &Global_1646672);
	func_140(&Global_1646672);
	func_139(&Global_1646672);
	func_135();
	HUD::PAUSE_MENU_ACTIVATE_CONTEXT(874957556);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	switch (iScriptParam_114)
	{
		case 3:
			while (iVar0 == 0)
			{
				SYSTEM::WAIT(0);
				if (iVar1 == 1)
				{
					if (iVar2 == 0)
					{
						if (HUD::IS_FRONTEND_READY_FOR_CONTROL())
						{
							HUD::TAKE_CONTROL_OF_FRONTEND();
							Global_1643950.f_7 = 0;
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("MENU_SHIFT_DEPTH");
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_FOCUS");
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							iVar2 = 1;
						}
					}
				}
				if (Global_1646672.f_469 == 0 && Global_1646672.f_470 == 0)
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
					{
						if (iVar1 == 0)
						{
							iVar1 = 1;
							HUD::PAUSE_MENU_ACTIVATE_CONTEXT(874957556);
							HUD::PAUSE_MENU_ACTIVATE_CONTEXT(joaat("NAVIGATING_CONTENT"));
							HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(817402210);
							HUD::PAUSE_MENU_REDRAW_INSTRUCTIONAL_BUTTONS(0);
							func_145(Global_1643950.f_6, &Global_1647601);
							func_144(&Global_1647601);
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("MENU_SHIFT_DEPTH");
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							__LIB_38__::func_220();
						}
						else
						{
							switch (Global_1643950.f_7)
							{
								case 0:
									GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("MENU_SHIFT_DEPTH");
									GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
									GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
									HUD::PAUSE_MENU_ACTIVATE_CONTEXT(joaat("HIDE_ACCEPTBUTTON"));
									HUD::PAUSE_MENU_ACTIVATE_CONTEXT(817402210);
									HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(874957556);
									HUD::PAUSE_MENU_REDRAW_INSTRUCTIONAL_BUTTONS(0);
									Global_1643950.f_7 = 1;
									func_133(&Global_1646672, &Global_1643950);
									func_141(func_132(&(Global_1643950.f_1), &(Global_1643950.f_3), Global_1643950.f_5, 188), &Global_1646672);
									func_140(&Global_1646672);
									func_139(&Global_1646672);
									func_123(&Global_1646672, &Global_1643950);
									break;
								}
							}
						}
				}
				if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
				{
					if (iVar1 == 0)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
						HUD::RELEASE_CONTROL_OF_FRONTEND();
						iVar0 = 1;
					}
					else
					{
						switch (Global_1643950.f_7)
						{
							case 0:
								AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("MENU_SHIFT_DEPTH");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
								HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(817402210);
								HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(874957556);
								HUD::PAUSE_MENU_REDRAW_INSTRUCTIONAL_BUTTONS(0);
								Global_1643950.f_1 = 0;
								Global_1643950.f_3 = 0;
								func_145(-1, &Global_1647601);
								func_144(&Global_1647601);
								__LIB_38__::func_220();
								iVar1 = 0;
								break;
							case 1:
								AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("MENU_SHIFT_DEPTH");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
								HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(joaat("HIDE_ACCEPTBUTTON"));
								HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(817402210);
								HUD::PAUSE_MENU_ACTIVATE_CONTEXT(874957556);
								HUD::PAUSE_MENU_REDRAW_INSTRUCTIONAL_BUTTONS(0);
								func_141(-1, &Global_1646672);
								func_140(&Global_1646672);
								func_139(&Global_1646672);
								__LIB_38__::func_220();
								Global_1643950.f_7 = 0;
								break;
							}
						}
				}
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPAwards1", false);
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPAwards2", false);
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPAwards3", false);
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPAwards4", false);
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPAwards5", false);
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPAwards6", false);
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPTShirtAwards2", false);
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPTshirtAwardLTS", false);
				if (!HUD::HAS_ADDITIONAL_TEXT_LOADED(8))
				{
					HUD::REQUEST_ADDITIONAL_TEXT("MPAWD", 8);
				}
				func_15(&Global_1643950);
				if (iVar1 == 1)
				{
					func_2(&Global_1646672, &Global_1643950, &uLocal_112);
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
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	func_1();
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uVar3);
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uVar4);
	HUD::RELEASE_CONTROL_OF_FRONTEND();
	Global_1574599 = 0;
	HUD::PAUSE_MENU_SET_BUSY_SPINNER(false, -1, 0);
	STATS::PLAYSTATS_AWARD_NAV(Global_1646672.f_471, Global_1646672.f_472);
	Global_1646672.f_471 = 0;
	Global_1646672.f_472 = 0;
	while (true)
	{
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x4FD
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DATA_SLOT_EMPTY");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_2(var uParam0, var uParam1, var uParam2)//Position - 0x516
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	if (!__LIB_0__::func_864(uParam2) || (__LIB_0__::func_864(uParam2) && __LIB_0__::func_937(uParam2, 250, 0)))
	{
		iVar0 = 1;
	}
	if ((PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/) || __LIB_7__::func_705(187, &(Global_1648034.f_1060), 1)) && iVar0)
	{
		__LIB_0__::clearF_1Prop(uParam2);
		__LIB_0__::func_795(uParam2, 0, 0);
		MISC::SET_BIT(&(uParam0->f_464), 0);
	}
	if ((PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/) || __LIB_7__::func_705(188, &(Global_1648034.f_1060), 1)) && iVar0)
	{
		__LIB_0__::clearF_1Prop(uParam2);
		__LIB_0__::func_795(uParam2, 0, 0);
		MISC::SET_BIT(&(uParam0->f_464), 1);
	}
	if (((PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 189 /*INPUT_FRONTEND_LEFT*/) || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 241 /*INPUT_CURSOR_SCROLL_UP*/)) || __LIB_7__::func_705(189, &(Global_1648034.f_1060), 1)) && iVar0)
	{
		__LIB_0__::clearF_1Prop(uParam2);
		__LIB_0__::func_795(uParam2, 0, 0);
		MISC::SET_BIT(&(uParam0->f_464), 2);
	}
	if (((PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/) || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 242 /*INPUT_CURSOR_SCROLL_DOWN*/)) || __LIB_7__::func_705(190, &(Global_1648034.f_1060), 1)) && iVar0)
	{
		__LIB_0__::clearF_1Prop(uParam2);
		__LIB_0__::func_795(uParam2, 0, 0);
		MISC::SET_BIT(&(uParam0->f_464), 3);
	}
	if (BitTest(uParam0->f_464, 1))
	{
		MISC::CLEAR_BIT(&(uParam0->f_464), 1);
		switch (uParam1->f_7)
		{
			case 0:
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				uParam1->f_6 = (uParam1->f_6 - 1);
				uParam1->f_5 = 0;
				uParam1->f_1 = 0;
				uParam1->f_3 = 0;
				if (__LIB_0__::func_3() == 0 || __LIB_0__::func_63() == 0)
				{
				}
				else if (uParam1->f_6 > 16)
				{
					uParam1->f_6 = 0;
				}
				switch (func_6(*uParam1, 0))
				{
					case 9:
						if (uParam1->f_6 < 0)
						{
							uParam1->f_6 = 16;
						}
						break;
				}
				func_145(uParam1->f_6, &Global_1647601);
				func_144(&Global_1647601);
				uParam0->f_469 = 1;
				__LIB_0__::func_627(&(uParam0->f_465), 0, 0);
				break;
			case 1:
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				uParam1->f_3 = (uParam1->f_3 - 1);
				switch (func_6(*uParam1, 0))
				{
					case 9:
						if (uParam1->f_3 < 0)
						{
							uParam1->f_3 = 2;
						}
						break;
				}
				func_141(func_132(&(uParam1->f_1), &(uParam1->f_3), uParam1->f_5, 188), uParam0);
				func_140(uParam0);
				func_139(uParam0);
				func_123(uParam0, uParam1);
				break;
			}
	}
	if (BitTest(uParam0->f_464, 0))
	{
		MISC::CLEAR_BIT(&(uParam0->f_464), 0);
		switch (uParam1->f_7)
		{
			case 0:
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				uParam1->f_6++;
				uParam1->f_5 = 0;
				uParam1->f_1 = 0;
				uParam1->f_3 = 0;
				switch (func_6(*uParam1, 0))
				{
					case 9:
						if (uParam1->f_6 > 16)
						{
							uParam1->f_6 = 0;
						}
						break;
				}
				func_145(uParam1->f_6, &Global_1647601);
				func_144(&Global_1647601);
				uParam0->f_469 = 1;
				__LIB_0__::func_627(&(uParam0->f_465), 0, 0);
				break;
			case 1:
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				uParam1->f_3++;
				if (uParam1->f_3 > 2)
				{
					uParam1->f_3 = 0;
				}
				func_141(func_132(&(uParam1->f_1), &(uParam1->f_3), uParam1->f_5, 187), uParam0);
				func_140(uParam0);
				func_139(uParam0);
				func_123(uParam0, uParam1);
				break;
			}
	}
	if (BitTest(uParam0->f_464, 2))
	{
		MISC::CLEAR_BIT(&(uParam0->f_464), 2);
		switch (uParam1->f_7)
		{
			case 1:
				uParam1->f_1 = (uParam1->f_1 - 1);
				if (uParam1->f_1 < 0)
				{
					if (iLocal_110 >= 1)
					{
						func_142(uParam0);
						func_1();
					}
					if (uParam1->f_5 > 0)
					{
						uParam1->f_5 = (uParam1->f_5 - 1);
						uParam1->f_1 = 3;
					}
					else
					{
						uParam1->f_5 = iLocal_110;
						uParam1->f_1 = 3;
						iVar1 = (uParam1->f_1 + uParam1->f_3 * 4);
						if (iVar1 >= iLocal_111)
						{
							uParam1->f_1 = ((iLocal_111 - 1) % 4);
							uParam1->f_3 = ((iLocal_111 - 1) / 4);
						}
					}
				}
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				func_141(func_132(&(uParam1->f_1), &(uParam1->f_3), uParam1->f_5, 189), uParam0);
				func_140(uParam0);
				func_139(uParam0);
				func_123(uParam0, uParam1);
				break;
			}
	}
	if (BitTest(uParam0->f_464, 3))
	{
		MISC::CLEAR_BIT(&(uParam0->f_464), 3);
		switch (uParam1->f_7)
		{
			case 1:
				uParam1->f_1++;
				iVar2 = (uParam1->f_1 + uParam1->f_3 * 4);
				if (uParam1->f_1 >= 4 || (uParam1->f_5 == iLocal_110 && iVar2 >= iLocal_111))
				{
					if (iLocal_110 >= 1)
					{
						func_142(uParam0);
						func_1();
					}
					uParam1->f_1 = 0;
					uParam1->f_5++;
					if (uParam1->f_5 > iLocal_110)
					{
						uParam1->f_5 = 0;
					}
				}
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				func_141(func_132(&(uParam1->f_1), &(uParam1->f_3), uParam1->f_5, 190), uParam0);
				func_140(uParam0);
				func_139(uParam0);
				func_123(uParam0, uParam1);
				break;
			}
	}
	if (HUD::HAS_MENU_TRIGGER_EVENT_OCCURRED())
	{
		HUD::GET_MENU_TRIGGER_EVENT_DETAILS(&uVar3, &iVar4);
		switch (uParam1->f_7)
		{
			case 0:
				if (iVar4 == 0 || iVar4 == 1)
				{
					uParam1->f_7 = 1;
					if (HUD::PAUSE_MENU_GET_MOUSE_CLICK_EVENT(&iVar5, &uVar6, &uVar7))
					{
						Global_1643950.f_1 = (iVar5 % 4);
						Global_1643950.f_3 = (iVar5 / 4);
					}
				}
				break;
			}
	}
	if (HUD::HAS_MENU_LAYOUT_CHANGED_EVENT_OCCURRED())
	{
		HUD::GET_MENU_LAYOUT_CHANGED_EVENT_DETAILS(&uVar8, &iVar9, &iVar10);
		iVar11 = iVar9 + 1000;
		if (iVar11 >= 0)
		{
			if (iVar10 == 0)
			{
				uParam1->f_7 = 0;
				if (uParam1->f_6 != iVar11)
				{
					uParam1->f_6 = iVar11;
					uParam1->f_5 = 0;
					uParam1->f_1 = 0;
					uParam1->f_3 = 0;
					uParam0->f_469 = 1;
				}
			}
			else if (iVar10 == 1)
			{
				uParam1->f_7 = 1;
				uParam1->f_1 = (iVar11 % 4);
				uParam1->f_3 = (iVar11 / 4);
			}
			else if (iVar10 == -1 && uParam1->f_7 == 1)
			{
				uParam1->f_7 = 0;
			}
		}
	}
	if (uParam0->f_469 == 1)
	{
		if (__LIB_3__::func_99(&(uParam0->f_465), 500, 0))
		{
			switch (uParam1->f_7)
			{
				case 0:
					uParam0->f_469 = 0;
					func_142(uParam0);
					func_133(uParam0, uParam1);
					func_141(-1, uParam0);
					func_140(uParam0);
					func_139(uParam0);
					func_3(0);
					uParam0->f_470 = 0;
					break;
			}
		}
		else
		{
			switch (uParam1->f_7)
			{
				case 0:
					if (uParam0->f_470 == 0)
					{
						func_1();
						func_3(1);
						__LIB_38__::func_220();
						uParam0->f_470 = 1;
					}
					break;
				}
			}
	}
}

void func_3(bool bParam0)//Position - 0xB61
{
	HUD::PAUSE_MENU_SET_BUSY_SPINNER(bParam0, 6, 0);
}

int func_6(var uParam0, bool bParam1)//Position - 0xC18
{
	int iVar0;
	int iVar1;
	iVar1 = uParam0;
	if (iVar1 == -1)
	{
		iVar1 = __LIB_0__::getGlobal_1574918();
	}
	if (Global_1575038[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574912[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

void func_15(var uParam0)//Position - 0xE9A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar3 = 0;
	if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPTShirtAwards2"))
	{
		iVar0 = 1;
	}
	if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPTshirtAwardLTS"))
	{
		iVar1 = 1;
	}
	if (iVar2 == 1)
	{
	}
	if (HUD::HAS_ADDITIONAL_TEXT_LOADED(8))
	{
		if (((((((GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPAwards1") && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPAwards2")) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPAwards3")) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPAwards4")) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPAwards5")) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPAwards6")) && iVar0) && iVar1)
		{
			iVar4 = 9;
			switch (uParam0->f_6)
			{
				case 0:
					if (!Global_262145.f_9035 /* Tunable: DISABLE_DAILY_OBJECTIVES */)
					{
						iLocal_110 = 25;
						iLocal_111 = 3;
					}
					else
					{
						iLocal_110 = 25;
						iLocal_111 = 7;
					}
					iVar3 = 0;
					if (!Global_262145.f_29728 /* Tunable: COLLECTABLES_TREASURE_CHESTS */)
					{
						iVar3++;
					}
					if (Global_262145.f_24746 /* Tunable: 1419194420 */)
					{
						iVar3++;
					}
					if (Global_262145.f_24747 /* Tunable: -2084724801 */)
					{
						iVar3++;
					}
					if (Global_262145.f_24745 /* Tunable: -2064797647 */)
					{
						iVar3++;
					}
					iLocal_111 = (iLocal_111 - iVar3);
					if (!Global_262145.f_30976 /* Tunable: TUNER_CABINET_CAMHEDZ_ENABLE */)
					{
						iLocal_111 = (iLocal_111 - 5);
					}
					if (Global_262145.f_31050[0] == 0f)
					{
						iLocal_111 = (iLocal_111 - 1);
					}
					if (Global_262145.f_31050[6] == 0f)
					{
						iLocal_111 = (iLocal_111 - 1);
					}
					if (iLocal_111 < 1)
					{
						iLocal_110 = (iLocal_110 - 1);
						iLocal_111 += 12;
					}
					break;
				case 1:
					iLocal_110 = 2;
					iLocal_111 = 7;
					iLocal_110 = 2;
					iLocal_111 = 9;
					break;
				case 2:
					iLocal_110 = 2;
					iLocal_111 = 4;
					break;
				case 3:
					iLocal_110 = 0;
					iLocal_111 = 8;
					break;
				case 4:
					iLocal_110 = 0;
					iLocal_111 = 12;
					break;
				case 5:
					iLocal_110 = 1;
					iLocal_111 = 11;
					iLocal_110 = 2;
					iLocal_111 = 2;
					break;
				case 6:
					if ((__LIB_0__::func_53() || __LIB_0__::func_52()) || MISC::IS_PC_VERSION())
					{
						iLocal_110 = 1;
						iLocal_111 = 8;
					}
					else
					{
						iLocal_110 = 1;
						iLocal_111 = 7;
					}
					break;
				case 8:
					iLocal_110 = 0;
					iLocal_111 = 8;
					if (Global_262145.f_24259 /* Tunable: 2120769116 */ == 0)
					{
						iLocal_111 = (iLocal_111 - 1);
					}
					if (Global_262145.f_24260 /* Tunable: -2003471690 */ == 0)
					{
						iLocal_111 = (iLocal_111 - 1);
					}
					if (Global_262145.f_24261 /* Tunable: -1697376461 */ == 0)
					{
						iLocal_111 = (iLocal_111 - 1);
					}
					if (Global_262145.f_24262 /* Tunable: -1526060129 */ == 0)
					{
						iLocal_111 = (iLocal_111 - 1);
					}
					if (((Global_262145.f_24259 /* Tunable: 2120769116 */ == 0 || Global_262145.f_24261 /* Tunable: -1697376461 */ == 0) || Global_262145.f_24260 /* Tunable: -2003471690 */ == 0) || Global_262145.f_24262 /* Tunable: -1526060129 */ == 0)
					{
						iLocal_111 = (iLocal_111 - 1);
					}
					break;
				case 7:
					iLocal_110 = 0;
					iLocal_111 = 11;
					break;
				case 9:
					iLocal_110 = 3;
					iLocal_111 = 4;
					break;
				case 10:
					iLocal_110 = 0;
					iLocal_111 = 11;
					break;
				case 11:
					iLocal_110 = 2;
					iLocal_111 = 12;
					break;
				case 12:
					iLocal_110 = 0;
					iLocal_111 = 6;
					break;
				case 13:
					iLocal_110 = 2;
					iLocal_111 = 2;
					iVar3 = 0;
					if (!Global_262145.f_29728 /* Tunable: COLLECTABLES_TREASURE_CHESTS */)
					{
						iVar3++;
					}
					if (Global_262145.f_24746 /* Tunable: 1419194420 */)
					{
						iVar3++;
						iVar3++;
					}
					if (Global_262145.f_24747 /* Tunable: -2084724801 */)
					{
						iVar3++;
						iVar3++;
					}
					if (Global_262145.f_24745 /* Tunable: -2064797647 */)
					{
						iVar3++;
					}
					iLocal_111 = (iLocal_111 - iVar3);
					if (iLocal_111 < 1)
					{
						iLocal_110 = (iLocal_110 - 1);
						iLocal_111 += 12;
					}
					break;
				case 14:
					iLocal_110 = 1;
					iLocal_111 = 12;
					if (!Global_262145.f_30976 /* Tunable: TUNER_CABINET_CAMHEDZ_ENABLE */)
					{
						iLocal_111 = (iLocal_111 - 5);
					}
					if (Global_262145.f_31050[0] == 0f)
					{
						iLocal_111 = (iLocal_111 - 1);
					}
					if (Global_262145.f_31050[6] == 0f)
					{
						iLocal_111 = (iLocal_111 - 1);
					}
					break;
				case 15:
					iLocal_110 = 1;
					iLocal_111 = 7;
					break;
				case 16:
					iLocal_110 = 4;
					iLocal_111 = 1;
					break;
			}
			switch (uParam0->f_5)
			{
				case 0:
					switch (uParam0->f_6)
					{
						case 0:
							func_114(9, 8, iVar4, &Global_1646672);
							func_114(1, 8, iVar4, &Global_1646672);
							func_114(4, 8, iVar4, &Global_1646672);
							func_114(5, 8, iVar4, &Global_1646672);
							func_114(2, 8, iVar4, &Global_1646672);
							func_114(8, 8, iVar4, &Global_1646672);
							func_114(7, 8, iVar4, &Global_1646672);
							func_114(3, 8, iVar4, &Global_1646672);
							func_114(6, 8, iVar4, &Global_1646672);
							func_114(10, 8, iVar4, &Global_1646672);
							func_114(19, 8, iVar4, &Global_1646672);
							func_114(24, 8, iVar4, &Global_1646672);
							break;
						case 1:
							func_114(40, 8, iVar4, &Global_1646672);
							func_114(41, 8, iVar4, &Global_1646672);
							func_114(42, 8, iVar4, &Global_1646672);
							func_114(21, 8, iVar4, &Global_1646672);
							func_114(58, 8, iVar4, &Global_1646672);
							func_114(57, 8, iVar4, &Global_1646672);
							func_114(37, 8, iVar4, &Global_1646672);
							func_101(20, 8, iVar4, &Global_1646672);
							func_114(51, 8, iVar4, &Global_1646672);
							func_114(52, 8, iVar4, &Global_1646672);
							func_114(54, 8, iVar4, &Global_1646672);
							func_101(14, 8, iVar4, &Global_1646672);
							break;
						case 2:
							func_101(15, 8, iVar4, &Global_1646672);
							func_101(16, 8, iVar4, &Global_1646672);
							func_114(29, 8, iVar4, &Global_1646672);
							func_114(28, 8, iVar4, &Global_1646672);
							func_114(47, 8, iVar4, &Global_1646672);
							func_101(6, 8, iVar4, &Global_1646672);
							func_101(7, 8, iVar4, &Global_1646672);
							func_114(30, 8, iVar4, &Global_1646672);
							func_101(2, 8, iVar4, &Global_1646672);
							func_114(36, 8, iVar4, &Global_1646672);
							func_114(49, 8, iVar4, &Global_1646672);
							func_114(15, 8, iVar4, &Global_1646672);
							break;
						case 3:
							func_114(60, 8, iVar4, &Global_1646672);
							func_114(19, 8, iVar4, &Global_1646672);
							func_114(53, 8, iVar4, &Global_1646672);
							func_114(12, 8, iVar4, &Global_1646672);
							func_114(11, 8, iVar4, &Global_1646672);
							func_114(14, 8, iVar4, &Global_1646672);
							break;
						case 4:
							func_114(10, 8, iVar4, &Global_1646672);
							func_114(17, 8, iVar4, &Global_1646672);
							func_114(61, 8, iVar4, &Global_1646672);
							func_114(0, 8, iVar4, &Global_1646672);
							func_114(16, 8, iVar4, &Global_1646672);
							func_101(13, 8, iVar4, &Global_1646672);
							func_114(20, 8, iVar4, &Global_1646672);
							func_114(62, 8, iVar4, &Global_1646672);
							func_114(63, 8, iVar4, &Global_1646672);
							func_101(23, 8, iVar4, &Global_1646672);
							break;
						case 5:
							func_114(9, 8, iVar4, &Global_1646672);
							func_114(56, 8, iVar4, &Global_1646672);
							func_114(55, 8, iVar4, &Global_1646672);
							func_114(45, 8, iVar4, &Global_1646672);
							func_114(43, 8, iVar4, &Global_1646672);
							func_114(46, 8, iVar4, &Global_1646672);
							func_114(44, 8, iVar4, &Global_1646672);
							func_101(22, 8, iVar4, &Global_1646672);
							func_101(17, 8, iVar4, &Global_1646672);
							func_101(18, 8, iVar4, &Global_1646672);
							func_114(59, 8, iVar4, &Global_1646672);
							func_114(1, 8, iVar4, &Global_1646672);
							break;
						case 6:
							func_114(120, 8, iVar4, &Global_1646672);
							func_85(12, 8, iVar4, &Global_1646672);
							func_85(13, 8, iVar4, &Global_1646672);
							func_85(14, 8, iVar4, &Global_1646672);
							func_85(15, 8, iVar4, &Global_1646672);
							func_85(16, 8, iVar4, &Global_1646672);
							func_114(121, 8, iVar4, &Global_1646672);
							func_85(17, 8, iVar4, &Global_1646672);
							func_85(18, 8, iVar4, &Global_1646672);
							func_85(19, 8, iVar4, &Global_1646672);
							func_114(125, 8, iVar4, &Global_1646672);
							func_101(144, 8, iVar4, &Global_1646672);
							break;
						case 7:
							if (!Global_1646672.f_1[0])
							{
								func_85(1, 8, iVar4, &Global_1646672);
								func_85(2, 8, iVar4, &Global_1646672);
								func_85(6, 8, iVar4, &Global_1646672);
								func_85(3, 8, iVar4, &Global_1646672);
								func_85(7, 8, iVar4, &Global_1646672);
								func_85(8, 8, iVar4, &Global_1646672);
								func_85(4, 8, iVar4, &Global_1646672);
								func_85(9, 8, iVar4, &Global_1646672);
								func_85(10, 8, iVar4, &Global_1646672);
								func_85(5, 8, iVar4, &Global_1646672);
								func_85(11, 8, iVar4, &Global_1646672);
							}
							break;
						case 8:
							if (!Global_1646672.f_1[0])
							{
								func_114(143, 8, iVar4, &Global_1646672);
								func_101(149, 8, iVar4, &Global_1646672);
								func_101(150, 8, iVar4, &Global_1646672);
								if (Global_262145.f_24259 /* Tunable: 2120769116 */ == 1)
								{
									func_114(139, 8, iVar4, &Global_1646672);
								}
								if (Global_262145.f_24261 /* Tunable: -1697376461 */ == 1)
								{
									func_114(140, 8, iVar4, &Global_1646672);
								}
								if (Global_262145.f_24260 /* Tunable: -2003471690 */ == 1)
								{
									func_114(141, 8, iVar4, &Global_1646672);
								}
								if (Global_262145.f_24262 /* Tunable: -1526060129 */ == 1)
								{
									func_114(142, 8, iVar4, &Global_1646672);
								}
								if (((Global_262145.f_24259 /* Tunable: 2120769116 */ == 1 && Global_262145.f_24261 /* Tunable: -1697376461 */ == 1) && Global_262145.f_24260 /* Tunable: -2003471690 */ == 1) && Global_262145.f_24262 /* Tunable: -1526060129 */ == 1)
								{
									func_101(151, 8, iVar4, &Global_1646672);
								}
							}
							break;
						case 9:
							if (!Global_1646672.f_1[0])
							{
								func_114(86, 8, iVar4, &Global_1646672);
								func_114(85, 8, iVar4, &Global_1646672);
								func_114(84, 8, iVar4, &Global_1646672);
								func_114(83, 8, iVar4, &Global_1646672);
								func_114(82, 8, iVar4, &Global_1646672);
								func_114(81, 8, iVar4, &Global_1646672);
								func_114(80, 8, iVar4, &Global_1646672);
								func_114(79, 8, iVar4, &Global_1646672);
								func_114(78, 8, iVar4, &Global_1646672);
								func_114(77, 8, iVar4, &Global_1646672);
								func_114(76, 8, iVar4, &Global_1646672);
								func_114(75, 8, iVar4, &Global_1646672);
							}
							break;
						case 10:
							if (!Global_1646672.f_1[0])
							{
								func_101(53, 8, iVar4, &Global_1646672);
								func_101(54, 8, iVar4, &Global_1646672);
								func_101(55, 8, iVar4, &Global_1646672);
								func_101(56, 8, iVar4, &Global_1646672);
								func_101(57, 8, iVar4, &Global_1646672);
								func_101(58, 8, iVar4, &Global_1646672);
								func_101(59, 8, iVar4, &Global_1646672);
								func_101(62, 8, iVar4, &Global_1646672);
								func_101(60, 8, iVar4, &Global_1646672);
								func_101(61, 8, iVar4, &Global_1646672);
								func_114(87, 8, iVar4, &Global_1646672);
							}
							break;
						case 11:
							if (!Global_1646672.f_1[0])
							{
								func_101(63, 8, iVar4, &Global_1646672);
								func_114(88, 8, iVar4, &Global_1646672);
								func_101(64, 8, iVar4, &Global_1646672);
								func_101(65, 8, iVar4, &Global_1646672);
								func_101(66, 8, iVar4, &Global_1646672);
								func_101(67, 8, iVar4, &Global_1646672);
								func_101(68, 8, iVar4, &Global_1646672);
								func_101(69, 8, iVar4, &Global_1646672);
								func_101(70, 8, iVar4, &Global_1646672);
								func_101(71, 8, iVar4, &Global_1646672);
								func_101(72, 8, iVar4, &Global_1646672);
								func_101(73, 8, iVar4, &Global_1646672);
							}
							break;
						case 12:
							if (!Global_1646672.f_1[0])
							{
								if (Global_262145.f_29264 /* Tunable: SUM_CABINET_QUB3D_ENABLE */)
								{
									func_101(89, 8, iVar4, &Global_1646672);
									func_101(90, 8, iVar4, &Global_1646672);
									func_101(92, 8, iVar4, &Global_1646672);
									func_101(91, 8, iVar4, &Global_1646672);
									func_101(94, 8, iVar4, &Global_1646672);
									func_101(93, 8, iVar4, &Global_1646672);
								}
							}
							break;
						case 13:
							if (!Global_1646672.f_1[0])
							{
								func_101(95, 8, iVar4, &Global_1646672);
								func_101(96, 8, iVar4, &Global_1646672);
								func_114(106, 8, iVar4, &Global_1646672);
								func_101(97, 8, iVar4, &Global_1646672);
								func_101(98, 8, iVar4, &Global_1646672);
								func_101(99, 8, iVar4, &Global_1646672);
								func_101(100, 8, iVar4, &Global_1646672);
								func_101(101, 8, iVar4, &Global_1646672);
								func_101(102, 8, iVar4, &Global_1646672);
								func_101(103, 8, iVar4, &Global_1646672);
								func_101(104, 8, iVar4, &Global_1646672);
								func_101(105, 8, iVar4, &Global_1646672);
							}
							break;
						case 14:
							if (!Global_1646672.f_1[0])
							{
								func_101(113, 8, iVar4, &Global_1646672);
								func_114(107, 8, iVar4, &Global_1646672);
								func_114(108, 8, iVar4, &Global_1646672);
								func_114(109, 8, iVar4, &Global_1646672);
								func_114(110, 8, iVar4, &Global_1646672);
								func_114(111, 8, iVar4, &Global_1646672);
								func_114(112, 8, iVar4, &Global_1646672);
								func_114(113, 8, iVar4, &Global_1646672);
								func_101(114, 8, iVar4, &Global_1646672);
								func_114(114, 8, iVar4, &Global_1646672);
								func_101(117, 8, iVar4, &Global_1646672);
								func_101(116, 8, iVar4, &Global_1646672);
							}
							break;
						case 15:
							if (!Global_1646672.f_1[0])
							{
								func_101(127, 8, iVar4, &Global_1646672);
								func_101(128, 8, iVar4, &Global_1646672);
								func_101(129, 8, iVar4, &Global_1646672);
								func_101(130, 8, iVar4, &Global_1646672);
								func_101(131, 8, iVar4, &Global_1646672);
								func_101(132, 8, iVar4, &Global_1646672);
								func_101(133, 8, iVar4, &Global_1646672);
								func_101(134, 8, iVar4, &Global_1646672);
								func_101(140, 8, iVar4, &Global_1646672);
								func_101(135, 8, iVar4, &Global_1646672);
								func_101(141, 8, iVar4, &Global_1646672);
								func_101(136, 8, iVar4, &Global_1646672);
							}
							break;
						case 16:
							func_79(4, 8, iVar4, &Global_1646672);
							func_79(2, 8, iVar4, &Global_1646672);
							func_79(7, 8, iVar4, &Global_1646672);
							func_79(0, 8, iVar4, &Global_1646672);
							func_79(6, 8, iVar4, &Global_1646672);
							func_79(8, 8, iVar4, &Global_1646672);
							func_79(5, 8, iVar4, &Global_1646672);
							func_79(1, 8, iVar4, &Global_1646672);
							func_79(54, 8, iVar4, &Global_1646672);
							func_79(57, 8, iVar4, &Global_1646672);
							func_79(58, 8, iVar4, &Global_1646672);
							func_79(59, 8, iVar4, &Global_1646672);
							break;
					}
					break;
				case 1:
					switch (uParam0->f_6)
					{
						case 0:
							func_114(17, 8, iVar4, &Global_1646672);
							func_114(12, 8, iVar4, &Global_1646672);
							func_114(40, 8, iVar4, &Global_1646672);
							func_114(31, 8, iVar4, &Global_1646672);
							func_114(37, 8, iVar4, &Global_1646672);
							func_114(34, 8, iVar4, &Global_1646672);
							func_114(33, 8, iVar4, &Global_1646672);
							func_114(32, 8, iVar4, &Global_1646672);
							func_114(41, 8, iVar4, &Global_1646672);
							func_114(35, 8, iVar4, &Global_1646672);
							func_114(63, 8, iVar4, &Global_1646672);
							func_67(1, 8, iVar4, &Global_1646672);
							break;
						case 1:
							func_114(39, 8, iVar4, &Global_1646672);
							func_101(11, 8, iVar4, &Global_1646672);
							func_114(38, 8, iVar4, &Global_1646672);
							func_101(10, 8, iVar4, &Global_1646672);
							func_114(48, 8, iVar4, &Global_1646672);
							func_114(22, 8, iVar4, &Global_1646672);
							func_114(23, 8, iVar4, &Global_1646672);
							func_114(31, 8, iVar4, &Global_1646672);
							func_114(35, 8, iVar4, &Global_1646672);
							func_101(4, 8, iVar4, &Global_1646672);
							func_101(5, 8, iVar4, &Global_1646672);
							func_114(32, 8, iVar4, &Global_1646672);
							break;
						case 2:
							if (!Global_1646672.f_1[0])
							{
								func_101(12, 8, iVar4, &Global_1646672);
								func_114(27, 8, iVar4, &Global_1646672);
								func_101(0, 8, iVar4, &Global_1646672);
								func_101(21, 8, iVar4, &Global_1646672);
								func_67(1, 8, iVar4, &Global_1646672);
								func_67(0, 8, iVar4, &Global_1646672);
								func_67(3, 8, iVar4, &Global_1646672);
								func_67(2, 8, iVar4, &Global_1646672);
								func_114(127, 8, iVar4, &Global_1646672);
								func_114(128, 8, iVar4, &Global_1646672);
								func_114(134, 8, iVar4, &Global_1646672);
								func_101(148, 8, iVar4, &Global_1646672);
							}
							break;
						case 5:
							if (!Global_1646672.f_1[0])
							{
								func_114(5, 8, iVar4, &Global_1646672);
								func_114(4, 8, iVar4, &Global_1646672);
								func_114(25, 8, iVar4, &Global_1646672);
								func_114(2, 8, iVar4, &Global_1646672);
								func_114(26, 8, iVar4, &Global_1646672);
								func_114(7, 8, iVar4, &Global_1646672);
								func_114(3, 8, iVar4, &Global_1646672);
								func_114(6, 8, iVar4, &Global_1646672);
								func_114(8, 8, iVar4, &Global_1646672);
								func_114(24, 8, iVar4, &Global_1646672);
								func_114(129, 8, iVar4, &Global_1646672);
								func_114(131, 8, iVar4, &Global_1646672);
							}
							break;
						case 6:
							if (!Global_1646672.f_1[0])
							{
								func_114(123, 8, iVar4, &Global_1646672);
								func_114(122, 8, iVar4, &Global_1646672);
								func_101(146, 8, iVar4, &Global_1646672);
								func_101(143, 8, iVar4, &Global_1646672);
								func_101(147, 8, iVar4, &Global_1646672);
								func_114(132, 8, iVar4, &Global_1646672);
								func_85(21, 8, iVar4, &Global_1646672);
								if ((__LIB_0__::func_53() || __LIB_0__::func_52()) || MISC::IS_PC_VERSION())
								{
									func_85(20, 8, iVar4, &Global_1646672);
								}
							}
							break;
						case 9:
							if (!Global_1646672.f_1[0])
							{
								func_114(74, 8, iVar4, &Global_1646672);
								func_114(73, 8, iVar4, &Global_1646672);
								func_114(72, 8, iVar4, &Global_1646672);
								func_101(52, 8, iVar4, &Global_1646672);
								func_101(51, 8, iVar4, &Global_1646672);
								func_114(71, 8, iVar4, &Global_1646672);
								func_114(70, 8, iVar4, &Global_1646672);
								func_101(50, 8, iVar4, &Global_1646672);
								func_101(30, 8, iVar4, &Global_1646672);
								func_101(31, 8, iVar4, &Global_1646672);
								func_101(32, 8, iVar4, &Global_1646672);
								func_101(33, 8, iVar4, &Global_1646672);
							}
							break;
						case 11:
							if (!Global_1646672.f_1[0])
							{
								func_101(74, 8, iVar4, &Global_1646672);
								func_101(75, 8, iVar4, &Global_1646672);
								func_114(89, 8, iVar4, &Global_1646672);
								func_114(90, 8, iVar4, &Global_1646672);
								func_114(91, 8, iVar4, &Global_1646672);
								func_101(76, 8, iVar4, &Global_1646672);
								func_101(77, 8, iVar4, &Global_1646672);
								func_101(78, 8, iVar4, &Global_1646672);
								func_114(92, 8, iVar4, &Global_1646672);
								func_114(93, 8, iVar4, &Global_1646672);
								func_101(79, 8, iVar4, &Global_1646672);
								func_101(80, 8, iVar4, &Global_1646672);
							}
							break;
						case 13:
							if (!Global_1646672.f_1[0])
							{
								func_114(105, 8, iVar4, &Global_1646672);
								func_101(106, 8, iVar4, &Global_1646672);
								func_101(107, 8, iVar4, &Global_1646672);
								func_101(108, 8, iVar4, &Global_1646672);
								func_114(101, 8, iVar4, &Global_1646672);
								func_101(111, 8, iVar4, &Global_1646672);
								func_114(99, 8, iVar4, &Global_1646672);
								func_101(112, 8, iVar4, &Global_1646672);
								if (!Global_262145.f_24745 /* Tunable: -2064797647 */)
								{
									func_114(104, 8, iVar4, &Global_1646672);
								}
								if (!Global_262145.f_24747 /* Tunable: -2084724801 */)
								{
									func_114(103, 8, iVar4, &Global_1646672);
									func_101(109, 8, iVar4, &Global_1646672);
								}
								if (!Global_262145.f_24746 /* Tunable: 1419194420 */)
								{
									func_114(102, 8, iVar4, &Global_1646672);
								}
							}
							break;
						case 14:
							if (!Global_1646672.f_1[0])
							{
								if (Global_262145.f_31050[0] != 0f)
								{
									func_101(115, 8, iVar4, &Global_1646672);
								}
								func_101(118, 8, iVar4, &Global_1646672);
								func_101(119, 8, iVar4, &Global_1646672);
								func_101(120, 8, iVar4, &Global_1646672);
								if (Global_262145.f_31050[6] != 0f)
								{
									func_101(121, 8, iVar4, &Global_1646672);
								}
								func_101(122, 8, iVar4, &Global_1646672);
								func_114(115, 8, iVar4, &Global_1646672);
								if (Global_262145.f_30976 /* Tunable: TUNER_CABINET_CAMHEDZ_ENABLE */)
								{
									func_114(116, 8, iVar4, &Global_1646672);
									func_101(123, 8, iVar4, &Global_1646672);
									func_101(124, 8, iVar4, &Global_1646672);
									func_101(125, 8, iVar4, &Global_1646672);
									func_101(126, 8, iVar4, &Global_1646672);
								}
							}
							break;
						case 15:
							if (!Global_1646672.f_1[0])
							{
								func_101(142, 8, iVar4, &Global_1646672);
								func_114(117, 8, iVar4, &Global_1646672);
								func_114(118, 8, iVar4, &Global_1646672);
								func_101(137, 8, iVar4, &Global_1646672);
								func_101(138, 8, iVar4, &Global_1646672);
								func_101(139, 8, iVar4, &Global_1646672);
								func_114(119, 8, iVar4, &Global_1646672);
							}
							break;
						case 16:
							func_79(60, 8, iVar4, &Global_1646672);
							func_79(12, 8, iVar4, &Global_1646672);
							func_79(56, 8, iVar4, &Global_1646672);
							func_79(55, 8, iVar4, &Global_1646672);
							func_79(25, 8, iVar4, &Global_1646672);
							func_79(34, 8, iVar4, &Global_1646672);
							func_79(45, 8, iVar4, &Global_1646672);
							func_79(48, 8, iVar4, &Global_1646672);
							func_79(49, 8, iVar4, &Global_1646672);
							func_79(65, 8, iVar4, &Global_1646672);
							func_79(46, 8, iVar4, &Global_1646672);
							func_79(9, 8, iVar4, &Global_1646672);
							break;
					}
					break;
				case 2:
					switch (uParam0->f_6)
					{
						case 0:
							func_114(48, 8, iVar4, &Global_1646672);
							func_114(14, 8, iVar4, &Global_1646672);
							func_114(25, 8, iVar4, &Global_1646672);
							func_114(26, 8, iVar4, &Global_1646672);
							func_114(15, 8, iVar4, &Global_1646672);
							func_114(22, 8, iVar4, &Global_1646672);
							func_114(27, 8, iVar4, &Global_1646672);
							func_114(21, 8, iVar4, &Global_1646672);
							func_114(11, 8, iVar4, &Global_1646672);
							func_114(62, 8, iVar4, &Global_1646672);
							func_114(23, 8, iVar4, &Global_1646672);
							func_114(0, 8, iVar4, &Global_1646672);
							break;
						case 1:
							if (!Global_1646672.f_1[0])
							{
								func_114(34, 8, iVar4, &Global_1646672);
								func_101(3, 8, iVar4, &Global_1646672);
								func_114(33, 8, iVar4, &Global_1646672);
								func_101(8, 8, iVar4, &Global_1646672);
								func_114(135, 8, iVar4, &Global_1646672);
								func_114(136, 8, iVar4, &Global_1646672);
								func_114(137, 8, iVar4, &Global_1646672);
								func_114(126, 8, iVar4, &Global_1646672);
								func_114(130, 8, iVar4, &Global_1646672);
							}
							break;
						case 2:
							if (!Global_1646672.f_1[0])
							{
								func_114(138, 8, iVar4, &Global_1646672);
								func_114(67, 8, iVar4, &Global_1646672);
								func_101(25, 8, iVar4, &Global_1646672);
								func_101(26, 8, iVar4, &Global_1646672);
							}
							break;
						case 5:
							if (!Global_1646672.f_1[0])
							{
								func_114(133, 8, iVar4, &Global_1646672);
							}
							break;
						case 9:
							if (!Global_1646672.f_1[0])
							{
								func_101(34, 8, iVar4, &Global_1646672);
								func_101(35, 8, iVar4, &Global_1646672);
								func_101(36, 8, iVar4, &Global_1646672);
								func_101(37, 8, iVar4, &Global_1646672);
								func_101(38, 8, iVar4, &Global_1646672);
								func_101(39, 8, iVar4, &Global_1646672);
								func_101(40, 8, iVar4, &Global_1646672);
								func_101(41, 8, iVar4, &Global_1646672);
								func_101(42, 8, iVar4, &Global_1646672);
								func_101(43, 8, iVar4, &Global_1646672);
								func_101(44, 8, iVar4, &Global_1646672);
								func_101(45, 8, iVar4, &Global_1646672);
							}
							break;
						case 11:
							if (!Global_1646672.f_1[0])
							{
								func_101(81, 8, iVar4, &Global_1646672);
								func_114(94, 8, iVar4, &Global_1646672);
								func_114(95, 8, iVar4, &Global_1646672);
								func_101(82, 8, iVar4, &Global_1646672);
								func_101(83, 8, iVar4, &Global_1646672);
								func_114(96, 8, iVar4, &Global_1646672);
								func_101(84, 8, iVar4, &Global_1646672);
								func_101(85, 8, iVar4, &Global_1646672);
								func_114(97, 8, iVar4, &Global_1646672);
								func_101(86, 8, iVar4, &Global_1646672);
								func_101(87, 8, iVar4, &Global_1646672);
								func_101(88, 8, iVar4, &Global_1646672);
							}
							break;
						case 13:
							if (!Global_1646672.f_1[0])
							{
								if (!Global_262145.f_24746 /* Tunable: 1419194420 */)
								{
									func_101(110, 8, iVar4, &Global_1646672);
								}
								if (Global_262145.f_29728 /* Tunable: COLLECTABLES_TREASURE_CHESTS */)
								{
									func_114(100, 8, iVar4, &Global_1646672);
								}
							}
							break;
						case 16:
							if (!Global_1646672.f_1[0])
							{
								func_79(10, 8, iVar4, &Global_1646672);
								func_79(11, 8, iVar4, &Global_1646672);
								func_79(87, 8, iVar4, &Global_1646672);
								func_79(89, 8, iVar4, &Global_1646672);
								iVar2 = 0;
								if (__LIB_0__::func_137(3608, -1))
								{
									iVar2 = 1;
								}
								func_62("CLO_LTS_T_0" /* GXT: Elitas T-Shirt */, "CLO_LTS_TD_0" /* GXT: Complete the San Andreas Flight School. */, "Elitas_Tshirt", "MPTshirtAwardLTS", 1, iVar2, -1, 1, &Global_1646672, 152, 144);
								func_59(0);
								func_59(1);
								func_59(2);
								iVar2 = 0;
								if (func_50(4))
								{
									iVar2 = 1;
								}
								func_62("CLO_HST_A_4" /* GXT: Can't Touch This T-Shirt */, "CLO_HST_AD_5" /* GXT: Complete the Can't Touch This platinum Award.~n~Complete a Heist Finale without taking any damage. */, "CantTouchThis", "MPTShirtAwards2", 1, iVar2, -1, 1, &Global_1646672, 152, 144);
								func_59(5);
								func_59(7);
								func_59(6);
							}
							break;
					}
					break;
				case 3:
					switch (uParam0->f_6)
					{
						case 0:
							func_114(16, 8, iVar4, &Global_1646672);
							func_114(45, 8, iVar4, &Global_1646672);
							func_114(43, 8, iVar4, &Global_1646672);
							func_114(46, 8, iVar4, &Global_1646672);
							func_114(44, 8, iVar4, &Global_1646672);
							func_114(30, 8, iVar4, &Global_1646672);
							func_101(2, 8, iVar4, &Global_1646672);
							func_114(39, 8, iVar4, &Global_1646672);
							func_114(38, 8, iVar4, &Global_1646672);
							func_101(3, 8, iVar4, &Global_1646672);
							func_114(42, 8, iVar4, &Global_1646672);
							func_114(36, 8, iVar4, &Global_1646672);
							break;
						case 1:
							if (!Global_1646672.f_1[0])
							{
							}
							break;
						case 9:
							if (!Global_1646672.f_1[0])
							{
								func_101(46, 8, iVar4, &Global_1646672);
								func_101(47, 8, iVar4, &Global_1646672);
								func_101(48, 8, iVar4, &Global_1646672);
								func_101(49, 8, iVar4, &Global_1646672);
							}
							break;
						case 16:
							func_59(8);
							iVar2 = 0;
							if (func_50(9))
							{
								iVar2 = 1;
							}
							func_62("CLO_HST_A_9" /* GXT: Showroom T-Shirt */, "CLO_HST_AD_9" /* GXT: Complete the Showroom platinum Award.~n~Store 30 vehicles. */, "Showroom", "MPTShirtAwards2", 1, iVar2, -1, 1, &Global_1646672, 152, 144);
							func_62("CHR_HST_A_0" /* GXT: Chrome Rims - Sport */, "CHR_HST_AD_0" /* GXT: Complete the Captured platinum Award to gain access to the Sport Chrome Rims for free.~n~Win 50 Captures. */, "SportMod", "MPAwardMods", __LIB_0__::func_264(126, 5, 0), __LIB_1__::func_677(126, -1), -1, 1, &Global_1646672, 152, 144);
							func_62("CHR_HST_A_1" /* GXT: Chrome Rims - Lowrider */, "CHR_HST_AD_1" /* GXT: Complete The Postman platinum Award to gain access to the Lowrider Chrome Rims for free.~n~Drop off 100 packages in Captures. */, "LowriderMod", "MPAwardMods", __LIB_0__::func_264(127, 5, 0), __LIB_1__::func_677(127, -1), -1, 1, &Global_1646672, 152, 144);
							func_62("CHR_HST_A_2" /* GXT: Chrome Rims - Offroad */, "CHR_HST_AD_2" /* GXT: Complete the No You Don't platinum Award to gain access to the Offroad Chrome Rims for free.~n~Kill 100 package carriers in Captures. */, "OffroadMod", "MPAwardMods", __LIB_0__::func_264(129, 5, 0), __LIB_1__::func_677(129, -1), -1, 1, &Global_1646672, 152, 144);
							func_62("CHR_HST_A_3" /* GXT: Chrome Rims - High End */, "CHR_HST_AD_3" /* GXT: Complete The Big Time platinum Award to gain access to the High End Chrome Rims for free.~n~Complete 50 Heist Finales. */, "HighendMod", "MPAwardMods", __LIB_0__::func_264(120, 5, 0), __LIB_1__::func_677(120, -1), -1, 1, &Global_1646672, 152, 144);
							func_62("CHR_HST_A_4" /* GXT: Chrome Rims - Tuner */, "CHR_HST_AD_4" /* GXT: Complete the Be Prepared platinum Award to gain access to the Tuner Chrome Rims for free.~n~Complete 50 Heist Setups. */, "TunerMod", "MPAwardMods", __LIB_0__::func_264(121, 5, 0), __LIB_1__::func_677(121, -1), -1, 1, &Global_1646672, 152, 144);
							func_62("CHR_HST_A_5" /* GXT: Chrome Rims - Bike */, "CHR_HST_AD_5" /* GXT: Complete the Lights Out platinum Award to gain access to the Bike Chrome Rims for free.~n~Get 100 kills while wearing Night Vision. */, "BikeMod", "MPAwardMods", __LIB_0__::func_264(131, 5, 0), __LIB_1__::func_677(131, -1), -1, 1, &Global_1646672, 152, 144);
							func_62("CHR_HST_A_6" /* GXT: Chrome Rims - SUV */, "CHR_HST_AD_6" /* GXT: Complete the Still Standing platinum Award to gain access to the SUV Chrome Rims for free.~n~Win 50 LTS matches. */, "SUVMod", "MPAwardMods", __LIB_0__::func_264(135, 5, 0), __LIB_1__::func_677(135, -1), -1, 1, &Global_1646672, 152, 144);
							func_62("CHR_HST_A_7" /* GXT: Chrome Rims - Muscle */, "CHR_HST_AD_7" /* GXT: Complete the One and Only platinum Award to gain access to the Muscle Chrome Rims for free.~n~Be the last player alive in an LTS 50 times. */, "MuscleMod", "MPAwardMods", __LIB_0__::func_264(136, 5, 0), __LIB_1__::func_677(136, -1), -1, 1, &Global_1646672, 152, 144);
							func_59(34);
							func_62("CLO_S1M_DEC_25" /* GXT: White Benny's T-Shirt */, "CLO_S1M_D_24_25" /* GXT: Complete all the Lowriders Lamar missions. */, "BennyTshirt01", "MPTShirtAwards4", 8, iVar2, -1, 1, &Global_1646672, 152, 144);
							break;
					}
					break;
				case 4:
					switch (uParam0->f_6)
					{
						case 0:
							func_101(15, 8, iVar4, &Global_1646672);
							func_101(4, 8, iVar4, &Global_1646672);
							func_101(5, 8, iVar4, &Global_1646672);
							func_101(7, 8, iVar4, &Global_1646672);
							func_101(6, 8, iVar4, &Global_1646672);
							func_114(29, 8, iVar4, &Global_1646672);
							func_114(28, 8, iVar4, &Global_1646672);
							func_114(20, 8, iVar4, &Global_1646672);
							func_101(0, 8, iVar4, &Global_1646672);
							func_101(8, 8, iVar4, &Global_1646672);
							func_114(61, 8, iVar4, &Global_1646672);
							func_67(3, 8, iVar4, &Global_1646672);
							break;
						case 16:
							if (!Global_1646672.f_1[0])
							{
								if (__LIB_1__::func_360(2934, -1, 0) == 1)
								{
									iVar2 = 8;
								}
								else
								{
									iVar2 = __LIB_2__::func_464(0);
									if (iVar2 > 0)
									{
										iVar2 = (iVar2 - 1);
									}
								}
								func_62("CLO_S1M_DEC_24" /* GXT: Black Benny's T-Shirt */, "CLO_S1M_D_24_25" /* GXT: Complete all the Lowriders Lamar missions. */, "BennyTshirt02", "MPTShirtAwards4", 8, iVar2, -1, 1, &Global_1646672, 152, 144);
							}
							break;
					}
					break;
				case 5:
					switch (uParam0->f_6)
					{
						case 0:
							func_101(22, 8, iVar4, &Global_1646672);
							func_101(17, 8, iVar4, &Global_1646672);
							func_101(18, 8, iVar4, &Global_1646672);
							func_67(2, 8, iVar4, &Global_1646672);
							func_67(0, 8, iVar4, &Global_1646672);
							func_101(16, 8, iVar4, &Global_1646672);
							func_101(12, 8, iVar4, &Global_1646672);
							func_101(13, 8, iVar4, &Global_1646672);
							func_114(55, 8, iVar4, &Global_1646672);
							func_114(56, 8, iVar4, &Global_1646672);
							func_114(53, 8, iVar4, &Global_1646672);
							func_101(20, 8, iVar4, &Global_1646672);
							break;
					}
					break;
				case 6:
					switch (uParam0->f_6)
					{
						case 0:
							func_101(10, 8, iVar4, &Global_1646672);
							func_101(21, 8, iVar4, &Global_1646672);
							func_114(60, 8, iVar4, &Global_1646672);
							func_101(11, 8, iVar4, &Global_1646672);
							func_114(51, 8, iVar4, &Global_1646672);
							func_114(52, 8, iVar4, &Global_1646672);
							func_114(59, 8, iVar4, &Global_1646672);
							func_114(58, 8, iVar4, &Global_1646672);
							func_101(14, 8, iVar4, &Global_1646672);
							func_114(54, 8, iVar4, &Global_1646672);
							func_114(57, 8, iVar4, &Global_1646672);
							func_114(47, 8, iVar4, &Global_1646672);
							break;
					}
					break;
				case 7:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1646672.f_1[0])
							{
								func_101(23, 8, iVar4, &Global_1646672);
								func_114(49, 8, iVar4, &Global_1646672);
								func_114(126, 8, iVar4, &Global_1646672);
								func_114(127, 8, iVar4, &Global_1646672);
								func_114(128, 8, iVar4, &Global_1646672);
								func_114(129, 8, iVar4, &Global_1646672);
								func_114(130, 8, iVar4, &Global_1646672);
								func_114(120, 8, iVar4, &Global_1646672);
								func_114(121, 8, iVar4, &Global_1646672);
								func_114(122, 8, iVar4, &Global_1646672);
								func_114(123, 8, iVar4, &Global_1646672);
								func_101(144, 8, iVar4, &Global_1646672);
							}
							break;
					}
					break;
				case 8:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1646672.f_1[0])
							{
								func_114(125, 8, iVar4, &Global_1646672);
								func_101(143, 8, iVar4, &Global_1646672);
								func_114(131, 8, iVar4, &Global_1646672);
								func_101(147, 8, iVar4, &Global_1646672);
								func_114(132, 8, iVar4, &Global_1646672);
								func_114(133, 8, iVar4, &Global_1646672);
								func_114(134, 8, iVar4, &Global_1646672);
								func_114(135, 8, iVar4, &Global_1646672);
								func_114(136, 8, iVar4, &Global_1646672);
								func_114(137, 8, iVar4, &Global_1646672);
								func_101(148, 8, iVar4, &Global_1646672);
								func_114(138, 8, iVar4, &Global_1646672);
							}
							break;
					}
					break;
				case 9:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1646672.f_1[0])
							{
								func_101(146, 8, iVar4, &Global_1646672);
								func_85(12, 8, iVar4, &Global_1646672);
								func_85(13, 8, iVar4, &Global_1646672);
								func_85(14, 8, iVar4, &Global_1646672);
								func_85(15, 8, iVar4, &Global_1646672);
								func_85(16, 8, iVar4, &Global_1646672);
								func_85(17, 8, iVar4, &Global_1646672);
								func_85(18, 8, iVar4, &Global_1646672);
								func_85(19, 8, iVar4, &Global_1646672);
								if (!Global_262145.f_9035 /* Tunable: DISABLE_DAILY_OBJECTIVES */)
								{
									func_114(67, 8, iVar4, &Global_1646672);
									func_101(25, 8, iVar4, &Global_1646672);
									func_101(26, 8, iVar4, &Global_1646672);
								}
							}
							break;
					}
					break;
				case 10:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1646672.f_1[0])
							{
								func_85(21, 8, iVar4, &Global_1646672);
								if ((__LIB_0__::func_53() || __LIB_0__::func_52()) || MISC::IS_PC_VERSION())
								{
									func_85(20, 8, iVar4, &Global_1646672);
								}
								func_85(1, 8, iVar4, &Global_1646672);
								func_85(2, 8, iVar4, &Global_1646672);
								func_85(6, 8, iVar4, &Global_1646672);
								func_85(3, 8, iVar4, &Global_1646672);
								func_85(7, 8, iVar4, &Global_1646672);
								func_85(8, 8, iVar4, &Global_1646672);
								func_85(4, 8, iVar4, &Global_1646672);
								func_85(9, 8, iVar4, &Global_1646672);
								func_85(10, 8, iVar4, &Global_1646672);
								func_85(5, 8, iVar4, &Global_1646672);
							}
							break;
					}
					break;
				case 11:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1646672.f_1[0])
							{
								func_85(11, 8, iVar4, &Global_1646672);
								func_114(143, 8, iVar4, &Global_1646672);
								func_101(149, 8, iVar4, &Global_1646672);
								func_101(150, 8, iVar4, &Global_1646672);
								if (Global_262145.f_24259 /* Tunable: 2120769116 */ == 1)
								{
									func_114(139, 8, iVar4, &Global_1646672);
								}
								if (Global_262145.f_24261 /* Tunable: -1697376461 */ == 1)
								{
									func_114(140, 8, iVar4, &Global_1646672);
								}
								if (Global_262145.f_24260 /* Tunable: -2003471690 */ == 1)
								{
									func_114(141, 8, iVar4, &Global_1646672);
								}
								if (Global_262145.f_24262 /* Tunable: -1526060129 */ == 1)
								{
									func_114(142, 8, iVar4, &Global_1646672);
								}
								if (((Global_262145.f_24259 /* Tunable: 2120769116 */ == 1 && Global_262145.f_24261 /* Tunable: -1697376461 */ == 1) && Global_262145.f_24260 /* Tunable: -2003471690 */ == 1) && Global_262145.f_24262 /* Tunable: -1526060129 */ == 1)
								{
									func_101(151, 8, iVar4, &Global_1646672);
								}
								func_114(86, 8, iVar4, &Global_1646672);
								func_114(85, 8, iVar4, &Global_1646672);
								func_114(84, 8, iVar4, &Global_1646672);
							}
							break;
					}
					break;
				case 12:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1646672.f_1[0])
							{
								func_114(83, 8, iVar4, &Global_1646672);
								func_114(82, 8, iVar4, &Global_1646672);
								func_114(81, 8, iVar4, &Global_1646672);
								func_114(80, 8, iVar4, &Global_1646672);
								func_114(79, 8, iVar4, &Global_1646672);
								func_114(78, 8, iVar4, &Global_1646672);
								func_114(77, 8, iVar4, &Global_1646672);
								func_114(76, 8, iVar4, &Global_1646672);
								func_114(75, 8, iVar4, &Global_1646672);
								func_114(74, 8, iVar4, &Global_1646672);
								func_114(73, 8, iVar4, &Global_1646672);
								func_114(72, 8, iVar4, &Global_1646672);
							}
							break;
					}
					break;
				case 13:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1646672.f_1[0])
							{
								func_101(52, 8, iVar4, &Global_1646672);
								func_101(51, 8, iVar4, &Global_1646672);
								func_114(71, 8, iVar4, &Global_1646672);
								func_114(70, 8, iVar4, &Global_1646672);
								func_101(50, 8, iVar4, &Global_1646672);
								func_101(30, 8, iVar4, &Global_1646672);
								func_101(31, 8, iVar4, &Global_1646672);
								func_101(32, 8, iVar4, &Global_1646672);
								func_101(33, 8, iVar4, &Global_1646672);
								func_101(34, 8, iVar4, &Global_1646672);
								func_101(35, 8, iVar4, &Global_1646672);
								func_101(36, 8, iVar4, &Global_1646672);
							}
							break;
					}
					break;
				case 14:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1646672.f_1[0])
							{
								func_101(37, 8, iVar4, &Global_1646672);
								func_101(38, 8, iVar4, &Global_1646672);
								func_101(39, 8, iVar4, &Global_1646672);
								func_101(40, 8, iVar4, &Global_1646672);
								func_101(41, 8, iVar4, &Global_1646672);
								func_101(42, 8, iVar4, &Global_1646672);
								func_101(43, 8, iVar4, &Global_1646672);
								func_101(44, 8, iVar4, &Global_1646672);
								func_101(45, 8, iVar4, &Global_1646672);
								func_101(46, 8, iVar4, &Global_1646672);
								func_101(47, 8, iVar4, &Global_1646672);
								func_101(48, 8, iVar4, &Global_1646672);
							}
							break;
					}
					break;
				case 15:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1646672.f_1[0])
							{
								func_101(49, 8, iVar4, &Global_1646672);
							}
							func_101(53, 8, iVar4, &Global_1646672);
							func_101(54, 8, iVar4, &Global_1646672);
							func_101(55, 8, iVar4, &Global_1646672);
							func_101(56, 8, iVar4, &Global_1646672);
							func_101(57, 8, iVar4, &Global_1646672);
							func_101(58, 8, iVar4, &Global_1646672);
							func_101(59, 8, iVar4, &Global_1646672);
							func_101(62, 8, iVar4, &Global_1646672);
							func_101(60, 8, iVar4, &Global_1646672);
							func_101(61, 8, iVar4, &Global_1646672);
							func_114(87, 8, iVar4, &Global_1646672);
							break;
					}
					break;
				case 16:
					switch (uParam0->f_6)
					{
						case 0:
							func_114(88, 8, iVar4, &Global_1646672);
							func_114(89, 8, iVar4, &Global_1646672);
							func_114(90, 8, iVar4, &Global_1646672);
							func_114(91, 8, iVar4, &Global_1646672);
							func_114(92, 8, iVar4, &Global_1646672);
							func_114(93, 8, iVar4, &Global_1646672);
							func_114(94, 8, iVar4, &Global_1646672);
							func_114(95, 8, iVar4, &Global_1646672);
							func_114(96, 8, iVar4, &Global_1646672);
							func_114(97, 8, iVar4, &Global_1646672);
							func_101(63, 8, iVar4, &Global_1646672);
							func_101(64, 8, iVar4, &Global_1646672);
							break;
					}
					break;
				case 17:
					switch (uParam0->f_6)
					{
						case 0:
							func_101(65, 8, iVar4, &Global_1646672);
							func_101(66, 8, iVar4, &Global_1646672);
							func_101(67, 8, iVar4, &Global_1646672);
							func_101(68, 8, iVar4, &Global_1646672);
							func_101(69, 8, iVar4, &Global_1646672);
							func_101(70, 8, iVar4, &Global_1646672);
							func_101(71, 8, iVar4, &Global_1646672);
							func_101(72, 8, iVar4, &Global_1646672);
							func_101(73, 8, iVar4, &Global_1646672);
							func_101(74, 8, iVar4, &Global_1646672);
							func_101(75, 8, iVar4, &Global_1646672);
							func_101(76, 8, iVar4, &Global_1646672);
							break;
					}
					break;
				case 18:
					switch (uParam0->f_6)
					{
						case 0:
							func_101(77, 8, iVar4, &Global_1646672);
							func_101(78, 8, iVar4, &Global_1646672);
							func_101(79, 8, iVar4, &Global_1646672);
							func_101(80, 8, iVar4, &Global_1646672);
							func_101(81, 8, iVar4, &Global_1646672);
							func_101(82, 8, iVar4, &Global_1646672);
							func_101(83, 8, iVar4, &Global_1646672);
							func_101(84, 8, iVar4, &Global_1646672);
							func_101(85, 8, iVar4, &Global_1646672);
							func_101(86, 8, iVar4, &Global_1646672);
							func_101(87, 8, iVar4, &Global_1646672);
							func_101(88, 8, iVar4, &Global_1646672);
							break;
					}
					break;
				case 19:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1646672.f_1[0])
							{
								if (Global_262145.f_29264 /* Tunable: SUM_CABINET_QUB3D_ENABLE */)
								{
									func_101(89, 8, iVar4, &Global_1646672);
									func_101(90, 8, iVar4, &Global_1646672);
									func_101(92, 8, iVar4, &Global_1646672);
									func_101(91, 8, iVar4, &Global_1646672);
									func_101(94, 8, iVar4, &Global_1646672);
									func_101(93, 8, iVar4, &Global_1646672);
								}
								func_101(95, 8, iVar4, &Global_1646672);
								func_101(96, 8, iVar4, &Global_1646672);
								func_114(106, 8, iVar4, &Global_1646672);
								func_101(97, 8, iVar4, &Global_1646672);
								func_101(98, 8, iVar4, &Global_1646672);
								func_101(99, 8, iVar4, &Global_1646672);
							}
							break;
					}
					break;
				case 20:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1646672.f_1[0])
							{
								func_101(100, 8, iVar4, &Global_1646672);
								func_101(101, 8, iVar4, &Global_1646672);
								func_101(102, 8, iVar4, &Global_1646672);
								func_101(103, 8, iVar4, &Global_1646672);
								func_101(104, 8, iVar4, &Global_1646672);
								func_101(105, 8, iVar4, &Global_1646672);
								func_114(105, 8, iVar4, &Global_1646672);
								func_101(106, 8, iVar4, &Global_1646672);
								func_101(107, 8, iVar4, &Global_1646672);
								func_101(108, 8, iVar4, &Global_1646672);
								func_114(101, 8, iVar4, &Global_1646672);
								func_101(111, 8, iVar4, &Global_1646672);
							}
							break;
					}
					break;
				case 21:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1646672.f_1[0])
							{
								func_114(99, 8, iVar4, &Global_1646672);
								func_101(112, 8, iVar4, &Global_1646672);
								if (!Global_262145.f_24745 /* Tunable: -2064797647 */)
								{
									func_114(104, 8, iVar4, &Global_1646672);
								}
								if (!Global_262145.f_24747 /* Tunable: -2084724801 */)
								{
									func_101(109, 8, iVar4, &Global_1646672);
									func_114(103, 8, iVar4, &Global_1646672);
								}
								if (!Global_262145.f_24746 /* Tunable: 1419194420 */)
								{
									func_101(110, 8, iVar4, &Global_1646672);
									func_114(102, 8, iVar4, &Global_1646672);
								}
								if (Global_262145.f_29728 /* Tunable: COLLECTABLES_TREASURE_CHESTS */)
								{
									func_114(100, 8, iVar4, &Global_1646672);
								}
								func_101(113, 8, iVar4, &Global_1646672);
								func_114(107, 8, iVar4, &Global_1646672);
								func_114(108, 8, iVar4, &Global_1646672);
								func_114(109, 8, iVar4, &Global_1646672);
							}
							break;
					}
					break;
				case 22:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1646672.f_1[0])
							{
								func_114(110, 8, iVar4, &Global_1646672);
								func_114(111, 8, iVar4, &Global_1646672);
								func_114(112, 8, iVar4, &Global_1646672);
								func_114(113, 8, iVar4, &Global_1646672);
								func_101(114, 8, iVar4, &Global_1646672);
								func_114(114, 8, iVar4, &Global_1646672);
								func_101(116, 8, iVar4, &Global_1646672);
								func_101(117, 8, iVar4, &Global_1646672);
								func_101(118, 8, iVar4, &Global_1646672);
								func_101(119, 8, iVar4, &Global_1646672);
								func_101(120, 8, iVar4, &Global_1646672);
								func_101(122, 8, iVar4, &Global_1646672);
							}
							break;
					}
					break;
				case 23:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1646672.f_1[0])
							{
								if (Global_262145.f_31050[0] != 0f)
								{
									func_101(115, 8, iVar4, &Global_1646672);
								}
								if (Global_262145.f_31050[6] != 0f)
								{
									func_101(121, 8, iVar4, &Global_1646672);
								}
								func_114(115, 8, iVar4, &Global_1646672);
								if (Global_262145.f_30976 /* Tunable: TUNER_CABINET_CAMHEDZ_ENABLE */)
								{
									func_114(116, 8, iVar4, &Global_1646672);
									func_101(123, 8, iVar4, &Global_1646672);
									func_101(124, 8, iVar4, &Global_1646672);
									func_101(125, 8, iVar4, &Global_1646672);
									func_101(126, 8, iVar4, &Global_1646672);
								}
								func_101(127, 8, iVar4, &Global_1646672);
								func_101(128, 8, iVar4, &Global_1646672);
								func_101(129, 8, iVar4, &Global_1646672);
								func_101(130, 8, iVar4, &Global_1646672);
								func_101(131, 8, iVar4, &Global_1646672);
							}
							break;
					}
					break;
				case 24:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1646672.f_1[0])
							{
								func_101(132, 8, iVar4, &Global_1646672);
								func_101(133, 8, iVar4, &Global_1646672);
								func_101(134, 8, iVar4, &Global_1646672);
								func_101(140, 8, iVar4, &Global_1646672);
								func_101(135, 8, iVar4, &Global_1646672);
								func_101(141, 8, iVar4, &Global_1646672);
								func_101(136, 8, iVar4, &Global_1646672);
								func_101(142, 8, iVar4, &Global_1646672);
								func_114(117, 8, iVar4, &Global_1646672);
								func_114(118, 8, iVar4, &Global_1646672);
								func_101(137, 8, iVar4, &Global_1646672);
								func_101(138, 8, iVar4, &Global_1646672);
							}
							break;
					}
					break;
				case 25:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1646672.f_1[0])
							{
								func_101(139, 8, iVar4, &Global_1646672);
								func_114(119, 8, iVar4, &Global_1646672);
							}
							break;
					}
					break;
			}
			func_29(&Global_1646672, func_41(&Global_1646672));
			func_28(1, &Global_1647601);
			func_27(1, &Global_1647601);
			func_26(1, &Global_1647601);
			func_25(0, "HUD_AWDLIST1" /* GXT: All Awards */, &Global_1647601);
			func_25(1, "HUD_AWDLIST12" /* GXT: Victory */, &Global_1647601);
			func_25(2, "HUD_AWDLIST3b" /* GXT: General */, &Global_1647601);
			func_25(3, "HUD_AWDLIST6" /* GXT: Crimes */, &Global_1647601);
			func_25(4, "HUD_AWDLIST9" /* GXT: Vehicle */, &Global_1647601);
			func_25(5, "HUD_AWDLIST10" /* GXT: Combat */, &Global_1647601);
			func_25(6, "HUD_AWDLIST13" /* GXT: Heists */, &Global_1647601);
			func_25(7, "HUD_AWD_GANGOP" /* GXT: The Doomsday Heist */, &Global_1647601);
			func_25(8, "HUD_AWD_NIGHTCLUB" /* GXT: After Hours */, &Global_1647601);
			func_25(9, "PM_ARENA" /* GXT: Arena War */, &Global_1647601);
			func_25(10, "AWDGBC_VC" /* GXT: The Diamond Casino & Resort */, &Global_1647601);
			func_25(11, "FMMC_CH_DN" /* GXT: The Diamond Casino Heist */, &Global_1647601);
			if (Global_262145.f_29264 /* Tunable: SUM_CABINET_QUB3D_ENABLE */)
			{
				func_25(12, "SUM20AWARDPAGE" /* GXT: Los Santos Summer Special */, &Global_1647601);
			}
			func_25(13, "HEISTISLAWDPAGE" /* GXT: The Cayo Perico Heist */, &Global_1647601);
			func_25(14, "TUNEAWDPAGE" /* GXT: Los Santos Tuners */, &Global_1647601);
			func_25(15, "FIXAWDPAGE" /* GXT: The Contract */, &Global_1647601);
			func_25(16, "HUD_AWDLIST6b" /* GXT: Rewards */, &Global_1647601);
			func_16(&Global_1647601, func_24(&Global_1647601));
		}
	}
}

void func_16(var uParam0, int iParam1)//Position - 0x3E22
{
	int iVar0;
	int iVar1;
	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_23(uParam0);
	}
	if (*uParam0 == 0)
	{
		iVar1 = uParam0->f_309[iVar0];
		iVar0 = 0;
		while (iVar0 <= 17)
		{
			if (uParam0->f_1[iVar0] == 1)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DATA_SLOT");
				if (uParam0->f_425 == 1)
				{
					if (uParam0->f_426 == iVar0)
					{
						iVar1 = 0;
					}
					else
					{
						iVar1 = 4;
					}
				}
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_347[iVar0]);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
				if (uParam0->f_424)
				{
					__LIB_0__::func_610(&(uParam0->f_20[iVar0 /*16*/]));
				}
				else
				{
					__LIB_0__::func_700(&(uParam0->f_20[iVar0 /*16*/]));
				}
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_328[iVar0]);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_385[iVar0]);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_404[iVar0]);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_366[iVar0]);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			*uParam0 = 1;
			iVar0++;
		}
		__LIB_37__::func_521(0);
	}
	func_17(uParam0, func_19(uParam0));
}

void func_17(var uParam0, int iParam1)//Position - 0x3F42
{
	if (iParam1 == 1)
	{
		uParam0->f_427 = 0;
		func_18(uParam0);
	}
	if (uParam0->f_427 == 0)
	{
		if (uParam0->f_426 != -1)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_HIGHLIGHT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_426);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			uParam0->f_426 = -1;
			uParam0->f_427 = 1;
		}
	}
}

void func_18(var uParam0)//Position - 0x3F95
{
	uParam0->f_429 = 0;
}

int func_19(var uParam0)//Position - 0x3FA3
{
	return uParam0->f_429;
}

void func_23(var uParam0)//Position - 0x3FED
{
	uParam0->f_428 = 0;
}

int func_24(var uParam0)//Position - 0x3FFB
{
	return uParam0->f_428;
}

void func_25(int iParam0, char* sParam1, var uParam2)//Position - 0x400D
{
	StringCopy(&(uParam2->f_20[iParam0 /*16*/]), sParam1, 64);
	uParam2->f_1[iParam0] = 1;
}

void func_26(int iParam0, var uParam1)//Position - 0x402A
{
	uParam1->f_425 = iParam0;
}

void func_27(int iParam0, var uParam1)//Position - 0x4039
{
	uParam1->f_423 = iParam0;
}

void func_28(int iParam0, var uParam1)//Position - 0x4048
{
	uParam1->f_424 = iParam0;
}

void func_29(var uParam0, int iParam1)//Position - 0x4057
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_1();
		func_40(uParam0);
	}
	if (*uParam0 == 0)
	{
		if (func_39(uParam0))
		{
			iVar0 = 0;
			while (iVar0 <= 11)
			{
				iVar1 = -1;
				iVar1 = SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(uParam0->f_221[iVar0]) / SYSTEM::TO_FLOAT(uParam0->f_208[iVar0])) * 100f));
				iVar1 = uParam0->f_441[iVar0];
				iVar2 = -1;
				switch (uParam0->f_428[iVar0])
				{
					case 107:
						iVar2 = 100;
						break;
					case 108:
						iVar2 = 200;
						break;
					case 109:
						iVar2 = 400;
						break;
					case 110:
						iVar2 = 800;
						break;
				}
				StringCopy(&Var3, func_38(uParam0->f_428[iVar0]), 32);
				if (uParam0->f_1[iVar0] == 1)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					__LIB_0__::func_610(&(uParam0->f_14[iVar0 /*8*/]));
					__LIB_0__::func_610(&(uParam0->f_111[iVar0 /*8*/]));
					__LIB_0__::func_700(&(uParam0->f_331[iVar0 /*8*/]));
					__LIB_0__::func_700(&(uParam0->f_234[iVar0 /*8*/]));
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_428[iVar0]);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					if (__LIB_1__::func_76(&Var3))
					{
						__LIB_0__::func_610("HUD_AWDPROG_S" /* GXT: Progress */);
					}
					else
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("HUD_AWDPROG" /* GXT: ~a~ Progress */);
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Var3);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					if (uParam0->f_221[iVar0] >= uParam0->f_208[iVar0])
					{
						__LIB_0__::func_610("TR_COMPLETE" /* GXT: Completed */);
					}
					else
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("TIMER_DASHES" /* GXT: ~1~/~1~ */);
						HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_221[iVar0]);
						HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_208[iVar0]);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					if (iVar2 >= 0)
					{
						__LIB_0__::func_610("HUD_AWDAWARD" /* GXT: Award */);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				iVar0++;
			}
			__LIB_37__::func_521(1);
			*uParam0 = 1;
		}
	}
	func_33(uParam0, func_36(uParam0));
	func_30(uParam0, func_32(uParam0));
}

void func_30(var uParam0, int iParam1)//Position - 0x4240
{
	if (iParam1 == 1)
	{
		uParam0->f_458 = 0;
		func_31(uParam0);
	}
	if (uParam0->f_458 == 0)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_HIGHLIGHT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_455);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		uParam0->f_455 = -1;
		uParam0->f_458 = 1;
	}
}

void func_31(var uParam0)//Position - 0x428A
{
	uParam0->f_462 = 0;
}

int func_32(var uParam0)//Position - 0x4298
{
	return uParam0->f_462;
}

void func_33(var uParam0, int iParam1)//Position - 0x42A5
{
	if (iParam1 == 1)
	{
		uParam0->f_459 = 0;
		func_35(uParam0);
	}
	if (uParam0->f_459 == 0)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DESCRIPTION");
		if (uParam0->f_456 < 0)
		{
			__LIB_0__::func_610("");
			__LIB_0__::func_610("");
		}
		else if (uParam0->f_456 < 12)
		{
			__LIB_0__::func_610(&(uParam0->f_14[uParam0->f_456 /*8*/]));
			if (uParam0->f_208[uParam0->f_456] > -1)
			{
				func_34(&(uParam0->f_111[uParam0->f_456 /*8*/]), uParam0->f_208[uParam0->f_456]);
			}
			else
			{
				__LIB_0__::func_610(&(uParam0->f_111[uParam0->f_456 /*8*/]));
			}
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		uParam0->f_456 = -1;
		uParam0->f_459 = 1;
	}
}

void func_34(char* sParam0, int iParam1)//Position - 0x4351
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_35(var uParam0)//Position - 0x4369
{
	uParam0->f_463 = 0;
}

int func_36(var uParam0)//Position - 0x4377
{
	return uParam0->f_463;
}

char* func_38(int iParam0)//Position - 0x43BE
{
	switch (iParam0)
	{
		case 107:
			return "HUD_MED_BRON" /* GXT: Bronze */;
			break;
		case 108:
			return "HUD_MED_SILV" /* GXT: Silver */;
			break;
		case 109:
			return "HUD_MED_GOLD" /* GXT: Gold */;
			break;
		case 110:
			return "HUD_MED_PLAT" /* GXT: Platinum */;
			break;
	}
	return "";
}

int func_39(var uParam0)//Position - 0x4411
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if (uParam0->f_1[iVar0] == 1)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_331[iVar0 /*8*/])))
			{
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(&(uParam0->f_331[iVar0 /*8*/]), false);
				if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(&(uParam0->f_331[iVar0 /*8*/])))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

void func_40(var uParam0)//Position - 0x446D
{
	uParam0->f_460 = 0;
}

int func_41(var uParam0)//Position - 0x447B
{
	return uParam0->f_460;
}

int func_50(int iParam0)//Position - 0x70A9
{
	bool bVar0;
	bVar0 = __LIB_0__::func_253(386, -1) == false;
	if (bVar0)
	{
		if (__LIB_2__::func_596(__LIB_0__::func_266(__LIB_37__::func_600(iParam0, bVar0), 3), -1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (__LIB_2__::func_596(__LIB_0__::func_266(__LIB_37__::func_600(iParam0, bVar0), 4), -1))
	{
		return 1;
	}
	return 0;
}

void func_59(int iParam0)//Position - 0x7994
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	switch (iParam0)
	{
		case 0:
			sVar0 = "CLO_HST_A_0" /* GXT: Death Defying T-Shirt */;
			sVar1 = "CLO_HST_AD_0" /* GXT: Complete the Death Defying platinum Award.~n~Win 25 Captures without dying. */;
			sVar2 = "DeathDefying";
			sVar3 = "MPTShirtAwards2";
			iVar4 = 130;
			break;
		case 1:
			sVar0 = "CLO_HST_A_1" /* GXT: For Hire T-Shirt */;
			sVar1 = "CLO_HST_AD_1" /* GXT: Complete the For Hire platinum Award.~n~Be a Heist crew member 25 times. */;
			sVar2 = "ForHire";
			sVar3 = "MPTShirtAwards2";
			iVar4 = 122;
			break;
		case 2:
			sVar0 = "CLO_HST_A_2" /* GXT: Gimme That T-Shirt */;
			sVar1 = "CLO_HST_AD_3" /* GXT: Complete the Gimme That platinum Award.~n~Collect 100 packages in any Capture mode. */;
			sVar2 = "LiveALittle";
			sVar3 = "MPTShirtAwards2";
			iVar4 = 128;
			break;
		case 5:
			sVar0 = "CLO_HST_A_5" /* GXT: Decorated T-Shirt */;
			sVar1 = "CLO_HST_AD_6" /* GXT: Complete the Decorated platinum Award.~n~Win 25 platinum medals during Heist Setups and Heist Finales. */;
			sVar2 = "Decorated";
			sVar3 = "MPTShirtAwards2";
			iVar4 = 125;
			break;
		case 7:
			sVar0 = "CLO_HST_A_7" /* GXT: One Man Army T-Shirt */;
			sVar1 = "CLO_HST_AD_8" /* GXT: Complete the One Man Army platinum Award.~n~Kill the entire opposing team yourself in LTS matches 25 times. */;
			sVar2 = "OneManArmy";
			sVar3 = "MPTShirtAwards2";
			iVar4 = 137;
			break;
		case 6:
			sVar0 = "CLO_HST_A_6" /* GXT: Psycho Killer T-Shirt */;
			sVar1 = "CLO_HST_AD_7" /* GXT: Complete the Psycho Killer platinum Award.~n~Kill 100 players with Psychopath Mental State. */;
			sVar2 = "PsychoKiller";
			sVar3 = "MPTShirtAwards2";
			iVar4 = 133;
			break;
		case 8:
			sVar0 = "CLO_HST_A_8" /* GXT: Shot Caller T-Shirt */;
			sVar1 = "CLO_HST_AD_2" /* GXT: Complete the Shot Caller platinum Award.~n~Be the Heist leader 25 times. */;
			sVar2 = "ShotCaller";
			sVar3 = "MPTShirtAwards2";
			iVar4 = 123;
			break;
		case 34:
			sVar0 = "CLO_HSTM_U_3_0" /* GXT: Elite Challenge T-Shirt */;
			sVar1 = "CLO_HST_AD_10" /* GXT: Complete the Elite Heist Challenges. */;
			sVar2 = "EliteTshirt1";
			sVar3 = "MPTShirtAwards2";
			break;
	}
	iVar6 = 5;
	if (__LIB_28__::func_875(iVar4, 9) != 1)
	{
		iVar5 = 1;
	}
	if (iParam0 != 34)
	{
		iVar7 = __LIB_0__::func_264(iVar4, iVar6, 9);
		iVar8 = __LIB_1__::func_677(iVar4, -1);
	}
	else
	{
		iVar7 = 5;
		iVar8 = func_60();
	}
	func_62(sVar0, sVar1, sVar2, sVar3, iVar7, iVar8, -1, iVar5, &Global_1646672, 152, 144);
}

int func_60()//Position - 0x7B13
{
	int iVar0;
	if (__LIB_0__::func_137(3765, -1))
	{
		iVar0++;
	}
	if (__LIB_0__::func_137(3766, -1))
	{
		iVar0++;
	}
	if (__LIB_0__::func_137(3767, -1))
	{
		iVar0++;
	}
	if (__LIB_0__::func_137(3768, -1))
	{
		iVar0++;
	}
	if (__LIB_0__::func_137(3769, -1))
	{
		iVar0++;
	}
	return iVar0;
}

void func_62(char* sParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, int iParam9, int iParam10)//Position - 0x805B
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if (uParam8->f_1[iVar0] == 0)
		{
			func_64(iVar0, sParam2, sParam3, iParam6, iParam7, uParam8);
			func_63(iVar0, sParam0, sParam1, iParam4, iParam5, uParam8);
			uParam8->f_1[iVar0] = 1;
			uParam8->f_473[iVar0] = iParam9;
			uParam8->f_486[iVar0] = iParam10;
			iVar0 = 12;
		}
		iVar0++;
	}
}

void func_63(int iParam0, char* sParam1, char* sParam2, var uParam3, var uParam4, var uParam5)//Position - 0x80C5
{
	StringCopy(&(uParam5->f_14[iParam0 /*8*/]), sParam1, 32);
	StringCopy(&(uParam5->f_111[iParam0 /*8*/]), sParam2, 32);
	uParam5->f_208[iParam0] = uParam3;
	uParam5->f_221[iParam0] = uParam4;
}

void func_64(int iParam0, char* sParam1, char* sParam2, var uParam3, int iParam4, var uParam5)//Position - 0x80F9
{
	StringCopy(&(uParam5->f_234[iParam0 /*8*/]), sParam1, 32);
	StringCopy(&(uParam5->f_331[iParam0 /*8*/]), sParam2, 32);
	uParam5->f_428[iParam0] = func_65(iParam4);
	uParam5->f_441[iParam0] = uParam3;
}

int func_65(int iParam0)//Position - 0x8134
{
	switch (iParam0)
	{
		case 2:
			return 107;
			break;
		case 3:
			return 108;
			break;
		case 4:
			return 109;
			break;
		case 5:
			return 110;
			break;
		default:
			return 0;
			break;
	}
	return 0;
}

void func_67(int iParam0, int iParam1, int iParam2, var uParam3)//Position - 0x819F
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	switch (iParam1)
	{
		case 0:
			iParam1 = 0;
			break;
		case 1:
			iParam1 = 1;
			break;
		case 2:
			iParam1 = 2;
			break;
		case 3:
			iParam1 = 3;
			break;
		case 4:
			iParam1 = 4;
			break;
		case 5:
			iParam1 = 5;
			break;
		case 6:
			iParam1 = func_78(iParam0, iParam2);
			break;
		case 7:
		case 8:
			iParam1 = func_76(iParam0, iParam2);
			break;
	}
	iVar0 = func_76(iParam0, iParam2);
	if (iParam1 != 0)
	{
		if (iParam1 != 1)
		{
			if (__LIB_28__::func_873(iParam0, iParam2) != 1)
			{
				iParam1 = 1;
			}
		}
	}
	sVar1 = __LIB_38__::func_190(iParam0, iParam2, 0);
	sVar2 = func_73(iParam0, iParam1, iParam2, 0);
	sVar3 = __LIB_38__::func_189(iParam0, iParam2);
	sVar4 = __LIB_38__::func_188(iParam0, iParam2);
	iVar5 = __LIB_38__::func_187(iParam0, iVar0, iParam2);
	iVar6 = __LIB_19__::func_115(iParam0);
	iVar7 = func_68(iParam1);
	iVar8 = __LIB_38__::func_187(iParam0, iVar7, iParam2);
	iVar9 = (iVar5 - iVar8);
	iVar10 = (iVar6 - iVar8);
	iVar11 = SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(iVar10) / SYSTEM::TO_FLOAT(iVar9)) * 100f));
	func_62(sVar1, sVar2, sVar3, sVar4, iVar5, iVar6, iVar11, iParam1, uParam3, 152, 144);
}

int func_68(int iParam0)//Position - 0x82DB
{
	int iVar0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		case 1:
			iVar0 = 0;
			break;
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
	}
	return iVar0;
}

char* func_73(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x854E
{
	if (iParam2 == 9)
	{
	}
	if (bParam3)
	{
	}
	if (__LIB_38__::func_187(iParam0, iParam1, iParam2) == 1)
	{
	}
	switch (iParam0)
	{
		case 0:
			return "AWS_686";
		case 1:
			return "AWS_688";
		case 2:
			return "AWS_689";
		case 3:
			return "AWS_690";
		default:
	}
	return "";
}

int func_76(int iParam0, int iParam1)//Position - 0x8641
{
	if (__LIB_2__::func_210(__LIB_19__::func_115(iParam0), __LIB_38__::func_187(iParam0, 5, iParam1)))
	{
		return 5;
	}
	if (__LIB_2__::func_210(__LIB_19__::func_115(iParam0), __LIB_38__::func_187(iParam0, 4, iParam1)))
	{
		return 5;
	}
	if (__LIB_2__::func_210(__LIB_19__::func_115(iParam0), __LIB_38__::func_187(iParam0, 3, iParam1)))
	{
		return 4;
	}
	if (__LIB_2__::func_210(__LIB_19__::func_115(iParam0), __LIB_38__::func_187(iParam0, 2, iParam1)))
	{
		return 3;
	}
	return 2;
}

int func_78(int iParam0, int iParam1)//Position - 0x86C6
{
	if (!__LIB_2__::func_210(__LIB_19__::func_115(iParam0), __LIB_38__::func_187(iParam0, 5, iParam1)))
	{
		return 0;
	}
	if (!__LIB_2__::func_210(__LIB_19__::func_115(iParam0), __LIB_38__::func_187(iParam0, 4, iParam1)))
	{
		return 2;
	}
	if (!__LIB_2__::func_210(__LIB_19__::func_115(iParam0), __LIB_38__::func_187(iParam0, 3, iParam1)))
	{
		return 3;
	}
	if (!__LIB_2__::func_210(__LIB_19__::func_115(iParam0), __LIB_38__::func_187(iParam0, 2, iParam1)))
	{
		return 4;
	}
	return 5;
}

void func_79(int iParam0, int iParam1, int iParam2, var uParam3)//Position - 0x873B
{
	int iVar0;
	int iVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	switch (iParam1)
	{
		case 6:
		case 8:
			if (__LIB_2__::func_596(iParam0, -1))
			{
				iParam1 = 0;
			}
			break;
		case 7:
			if (__LIB_2__::func_596(iParam0, -1) == 0)
			{
				iParam1 = 5;
			}
			break;
	}
	iVar1 = func_84(iParam0);
	switch (iParam2)
	{
		case 9:
			iVar0 = 3;
			break;
	}
	if (iParam0 == 57)
	{
		iParam1 = 2;
	}
	else if (iParam0 == 58 || iParam0 == 9)
	{
		iParam1 = 3;
	}
	else if (iParam0 == 59 || iParam0 == 10)
	{
		iParam1 = 4;
	}
	else
	{
		iParam1 = 5;
	}
	sVar2 = __LIB_16__::func_404(iParam0, iVar0);
	sVar3 = func_82(iParam0, iVar0);
	sVar4 = __LIB_16__::func_402(iParam0, iVar0);
	sVar5 = __LIB_16__::func_401(iParam0, iVar0);
	iVar6 = __LIB_0__::func_264(iVar1, iParam1, 0);
	iVar7 = __LIB_1__::func_677(iVar1, -1);
	if (iVar1 == 64)
	{
		iVar6 = 1;
		iVar7 = 0;
	}
	iVar8 = -1;
	if (__LIB_2__::func_596(iParam0, -1))
	{
		iVar7 = __LIB_0__::func_264(func_84(iParam0), iParam1, 0);
		if (iVar1 == 64)
		{
			iVar7 = 1;
		}
	}
	iParam1 = 1;
	func_62(sVar2, sVar3, sVar4, sVar5, iVar6, iVar7, iVar8, iParam1, uParam3, 152, 144);
}

char* func_82(int iParam0, int iParam1)//Position - 0x8DF6
{
	char* sVar0;
	sVar0 = "";
	if (iParam0 == iParam0)
	{
	}
	if (iParam1 == iParam1)
	{
	}
	switch (iParam0)
	{
		case 7:
			return "TAT_FM_REVENKIL_D" /* GXT: Complete The Equalizer platinum Award. ~n~Get 50 Revenge kills in Deathmatch. */;
			break;
		case 6:
			return "TAT_FM_RECHOLD_d" /* GXT: Complete The Record Holder platinum Award. ~n~Hold a World Record in a Rockstar Race. */;
			break;
		case 8:
			return "TAT_FM_KIL3RACE_D" /* GXT: Complete the Road Rage platinum Award. ~n~Kill at least 3 other racers in a GTA Race and win. */;
			break;
		case 5:
			return "TAT_FM_KILb_D" /* GXT: Complete The Bounty Hunter platinum Award. ~n~Kill 25 Bounty Targets. */;
			break;
		case 0:
			return "TAT_FM_HEADBANG_D" /* GXT: Complete the Head Banger platinum Award. ~n~Get 500 player headshots. */;
			break;
		case 12:
			return "TAT_RACE50_D" /* GXT: Complete The Champion platinum Award. ~n~Win 50 Races. */;
			break;
		case 2:
			return "TAT_CLEAROUT_D" /* GXT: Complete the Clear Out platinum Award. ~n~Clear 5 Gang Attacks in one day, in a single session. */;
			break;
		case 9:
			return "TAT_FM_RANK1_D" /* GXT: Complete The Widow Maker silver Award. ~n~Get 250 player kills. */;
			break;
		case 10:
			return "TAT_FM_RANK2_D" /* GXT: Complete The Widow Maker gold Award. ~n~Get 500 player kills. */;
			break;
		case 11:
			return "TAT_FM_RANK3_D" /* GXT: Complete The Widow Maker platinum Award. ~n~Get 1000 player kills. */;
			break;
		case 4:
			return "TAT_FM_HUST_D" /* GXT: Complete The Hustler platinum Award. ~n~Earn $50,000 winnings from betting. */;
			break;
		case 1:
			return "TAT_FM_SLAY_D" /* GXT: Complete The Slayer platinum Award. ~n~Win 50 Deathmatches. */;
			break;
		case 54:
			return "TAT_FM_EVERMODE1_D" /* GXT: Complete the All Rounder platinum Award. ~n~Win every game mode. */;
			break;
		case 3:
			return "TAT_FM_ARVANTAKE_D" /* GXT: Complete the Full Metal Jacket platinum Award. ~n~Rob 25 Armored Trucks. */;
			break;
		case 56:
			return "TAT_CHEATER_D" /* GXT: Complete The Car Bomber platinum Award. ~n~Kill 25 players using vehicle explosives. */;
			break;
		case 13:
			return "TAT_CRANKA_D" /* GXT: Reached Crew Rank 26. */;
			break;
		case 14:
			return "TAT_CRANKB_D" /* GXT: Reached Crew Rank 45. */;
			break;
		case 15:
			return "TAT_CRANKC_D" /* GXT: Reached Crew Rank 18. */;
			break;
		case 16:
			return "TAT_CRANKD_D" /* GXT: Reached Crew Rank 52. */;
			break;
		case 89:
			return "TAT_FM_ROCKSTAR_D" /* GXT: Create a Race, Deathmatch, Capture, or Last Team Standing and get it verified by Rockstar Games. */;
			break;
		case 87:
			return "TAT_FM_REDSKULL_D" /* GXT: Complete The Survivor platinum Award. ~n~Complete a Survival. */;
			break;
		case 55:
			return "TAT_FM_MODDED_D" /* GXT: Complete the Suped Up platinum Award. ~n~Apply each type of mod to a single vehicle. */;
			break;
	}
	switch (iParam0)
	{
		case 17:
			return "TAT_RANK10_D" /* GXT: Reach Rank 10 To Unlock Tattoo. */;
			break;
		case 18:
			return "TAT_RANK20_D" /* GXT: Reach Rank 20 To Unlock Tattoo. */;
			break;
		case 19:
			return "TAT_RANK20_D" /* GXT: Reach Rank 20 To Unlock Tattoo. */;
			break;
		case 20:
			return "TAT_RANK10_D" /* GXT: Reach Rank 10 To Unlock Tattoo. */;
			break;
		case 21:
			return "TAT_RANK20_D" /* GXT: Reach Rank 20 To Unlock Tattoo. */;
			break;
		case 22:
			return "TAT_RANK10_D" /* GXT: Reach Rank 10 To Unlock Tattoo. */;
			break;
		case 23:
			return "TAT_RANK10_D" /* GXT: Reach Rank 10 To Unlock Tattoo. */;
			break;
		case 24:
			return "TAT_RANK20_D" /* GXT: Reach Rank 20 To Unlock Tattoo. */;
			break;
		case 25:
			return "TAT_FM_TAT9D" /* GXT: Complete the Death Toll platinum Award. ~n~Get 500 kills in Deathmatch. */;
			break;
		case 26:
			return "TAT_RANK20_D" /* GXT: Reach Rank 20 To Unlock Tattoo. */;
			break;
		case 27:
			return "TAT_RANK20_D" /* GXT: Reach Rank 20 To Unlock Tattoo. */;
			break;
		case 28:
			return "TAT_RANK10_D" /* GXT: Reach Rank 10 To Unlock Tattoo. */;
			break;
		case 61:
			return "TAT_RANK10_D" /* GXT: Reach Rank 10 To Unlock Tattoo. */;
			break;
		case 62:
			return "TAT_RANK10_D" /* GXT: Reach Rank 10 To Unlock Tattoo. */;
			break;
		case 63:
			return "TAT_RANK10_D" /* GXT: Reach Rank 10 To Unlock Tattoo. */;
			break;
		case 64:
			return "TAT_RANK10_D" /* GXT: Reach Rank 10 To Unlock Tattoo. */;
			break;
		case 65:
			return "TAT_FM_TAT17D" /* GXT: Complete the Bloodiest Of The Bunch platinum Award. ~n~Get the most kills in a 4 player Survival. */;
			break;
		case 29:
			return "TAT_RANK10_D" /* GXT: Reach Rank 10 To Unlock Tattoo. */;
			break;
		case 30:
			return "TAT_RANK10_D" /* GXT: Reach Rank 10 To Unlock Tattoo. */;
			break;
		case 31:
			return "TAT_RANK10_D" /* GXT: Reach Rank 10 To Unlock Tattoo. */;
			break;
		case 66:
			return "TAT_RANK20_D" /* GXT: Reach Rank 20 To Unlock Tattoo. */;
			break;
		case 32:
			return "TAT_RANK20_D" /* GXT: Reach Rank 20 To Unlock Tattoo. */;
			break;
		case 33:
			return "TAT_RANK20_D" /* GXT: Reach Rank 20 To Unlock Tattoo. */;
			break;
		case 34:
			return "TAT_FM_TAT24D" /* GXT: Complete the Lapping It Up platinum Award. ~n~Get 25 Private Dances. */;
			break;
		case 35:
			return "TAT_RANK20_D" /* GXT: Reach Rank 20 To Unlock Tattoo. */;
			break;
		case 36:
			return "TAT_RANK20_D" /* GXT: Reach Rank 20 To Unlock Tattoo. */;
			break;
		case 37:
			return "TAT_RANK20_D" /* GXT: Reach Rank 20 To Unlock Tattoo. */;
			break;
		case 38:
			return "TAT_RANK20_D" /* GXT: Reach Rank 20 To Unlock Tattoo. */;
			break;
		case 39:
			return "TAT_RANK20_D" /* GXT: Reach Rank 20 To Unlock Tattoo. */;
			break;
		case 40:
			return "TAT_RANK20_D" /* GXT: Reach Rank 20 To Unlock Tattoo. */;
			break;
		case 67:
			return "TAT_RANK20_D" /* GXT: Reach Rank 20 To Unlock Tattoo. */;
			break;
		case 41:
			return "TAT_RANK20_D" /* GXT: Reach Rank 20 To Unlock Tattoo. */;
			break;
		case 68:
			return "TAT_RANK20_D" /* GXT: Reach Rank 20 To Unlock Tattoo. */;
			break;
		case 42:
			return "TAT_RANK20_D" /* GXT: Reach Rank 20 To Unlock Tattoo. */;
			break;
		case 43:
			return "TAT_RANK20_D" /* GXT: Reach Rank 20 To Unlock Tattoo. */;
			break;
		case 44:
			return "TAT_RANK20_D" /* GXT: Reach Rank 20 To Unlock Tattoo. */;
			break;
		case 45:
			return "TAT_FM_TAT37D" /* GXT: Complete the Pistol Whipped platinum Award. ~n~Get 500 Pistol kills. */;
			break;
		case 46:
			return "TAT_FM_TAT38D" /* GXT: Complete the Team Carrier platinum Award. ~n~Earn 50 MVPs in Team Deathmatch. */;
			break;
		case 47:
			return "TAT_RANK20_D" /* GXT: Reach Rank 20 To Unlock Tattoo. */;
			break;
		case 48:
			return "TAT_FM_TAT40D" /* GXT: Complete the Scoping Out platinum Award. ~n~Get 100 Sniper kills. */;
			break;
		case 49:
			return "TAT_FM_TAT41D" /* GXT: Complete the Killstreaker platinum Award. ~n~Earn a 10 plus killstreak in Deathmatch. */;
			break;
		case 50:
			return "TAT_RANK20_D" /* GXT: Reach Rank 20 To Unlock Tattoo. */;
			break;
		case 51:
			return "TAT_RANK20_D" /* GXT: Reach Rank 20 To Unlock Tattoo. */;
			break;
		case 52:
			return "TAT_RANK20_D" /* GXT: Reach Rank 20 To Unlock Tattoo. */;
			break;
		case 53:
			return "TAT_RANK20_D" /* GXT: Reach Rank 20 To Unlock Tattoo. */;
			break;
		case 69:
			return "TAT_RANK20_D" /* GXT: Reach Rank 20 To Unlock Tattoo. */;
			break;
		case 57:
			return "TAT_HOLDUP1V_D" /* GXT: Complete the Armed Robber bronze Award. ~n~Hold up 5 stores. */;
			break;
		case 58:
			return "TAT_HOLDUP5V_D" /* GXT: Complete the Armed Robber silver Award. ~n~Hold up 10 stores. */;
			break;
		case 59:
			return "TAT_HOLDUP10V_D" /* GXT: Complete the Armed Robber gold Award. ~n~Hold up 15 stores. */;
			break;
		case 60:
			return "TAT_HOLDUP20V_D" /* GXT: Complete the Armed Robber platinum Award. ~n~Hold up 20 stores. */;
			break;
	}
	return sVar0;
}

int func_84(int iParam0)//Position - 0x975E
{
	switch (iParam0)
	{
		case 4:
			return 49;
		case 7:
			return 59;
		case 0:
			return 9;
		case 5:
			return 55;
		case 1:
			return 40;
		case 57:
			return 14;
		case 58:
			return 14;
		case 59:
			return 14;
		case 60:
			return 14;
		case 12:
			return 21;
		case 56:
			return 24;
		case 25:
			return 44;
		case 34:
			return 15;
		case 45:
			return 1;
		case 48:
			return 2;
		case 46:
			return 42;
		case 9:
			return 56;
		case 10:
			return 56;
		case 11:
			return 56;
		case 87:
			return 48;
		default:
	}
	return 64;
}

void func_85(int iParam0, int iParam1, int iParam2, var uParam3)//Position - 0x9849
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	var uVar13;
	switch (iParam1)
	{
		case 0:
			iParam1 = 0;
			break;
		case 1:
			iParam1 = 1;
			break;
		case 2:
			iParam1 = 2;
			break;
		case 3:
			iParam1 = 3;
			break;
		case 4:
			iParam1 = 4;
			break;
		case 5:
			iParam1 = 5;
			break;
		case 6:
			iParam1 = func_100(iParam0);
			break;
		case 7:
		case 8:
			iParam1 = __LIB_3__::func_939();
			break;
	}
	if (iParam1 != 0)
	{
		if (iParam1 != 1)
		{
			if (__LIB_28__::func_874(iParam0, iParam2) != 1)
			{
				iParam1 = 1;
			}
		}
	}
	iVar1 = __LIB_3__::func_939();
	sVar2 = __LIB_38__::func_200(iParam0, iParam2, 0);
	sVar3 = func_95(iParam0, iParam1, iParam2, 0);
	sVar4 = __LIB_38__::func_193(iParam0, iParam2);
	sVar5 = __LIB_38__::func_192(iParam0, iParam2);
	iVar6 = __LIB_42__::func_472(iParam0, iVar1, iParam2);
	iVar7 = func_88(iParam0, iVar1, iParam2);
	iVar8 = func_68(iParam1);
	iVar9 = __LIB_42__::func_472(iParam0, iVar8, iParam2);
	iVar10 = (iVar6 - iVar9);
	iVar11 = (iVar7 - iVar9);
	if (__LIB_13__::func_412(iParam0))
	{
		iVar12 = 100;
		switch (iParam0)
		{
			case 17:
				iVar7 = 26;
				iVar6 = 26;
				break;
			case 18:
				iVar7 = 26;
				iVar6 = 26;
				break;
			case 19:
				iVar7 = 26;
				iVar6 = 26;
				break;
			case 20:
				iVar7 = 26;
				iVar6 = 26;
				break;
			case 21:
				iVar7 = 26;
				iVar6 = 26;
				break;
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
				iVar7 = 26;
				iVar6 = 26;
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 17:
				iVar11 = 0;
				uVar13 = __LIB_0__::func_991(joaat("MPPLY_HEISTFLOWORDERPROGRESS"));
				bVar0 = false;
				while (bVar0 < 28)
				{
					if (BitTest(uVar13, bVar0))
					{
						iVar11++;
					}
					bVar0++;
				}
				if (BitTest(uVar13, 9))
				{
					iVar11 = (iVar11 - 1);
				}
				if (BitTest(uVar13, 26))
				{
					iVar11 = (iVar11 - 1);
				}
				if (iVar11 < 0)
				{
					iVar11 = 0;
				}
				iVar7 = iVar11;
				iVar6 = 26;
				iVar10 = 26;
				break;
			case 18:
				iVar11 = 0;
				uVar13 = __LIB_0__::func_991(joaat("MPPLY_HEISTTEAMPROGRESSBITSET"));
				bVar0 = false;
				while (bVar0 < 28)
				{
					if (BitTest(uVar13, bVar0))
					{
						iVar11++;
					}
					bVar0++;
				}
				if (BitTest(uVar13, 9))
				{
					iVar11 = (iVar11 - 1);
				}
				if (BitTest(uVar13, 26))
				{
					iVar11 = (iVar11 - 1);
				}
				if (iVar11 < 0)
				{
					iVar11 = 0;
				}
				iVar7 = iVar11;
				iVar6 = 26;
				iVar10 = 26;
				break;
			case 19:
				iVar11 = 0;
				uVar13 = __LIB_0__::func_991(joaat("MPPLY_HEISTNODEATHPROGREITSET"));
				bVar0 = false;
				while (bVar0 < 28)
				{
					if (BitTest(uVar13, bVar0))
					{
						iVar11++;
					}
					bVar0++;
				}
				if (BitTest(uVar13, 9))
				{
					iVar11 = (iVar11 - 1);
				}
				if (BitTest(uVar13, 26))
				{
					iVar11 = (iVar11 - 1);
				}
				if (iVar11 < 0)
				{
					iVar11 = 0;
				}
				iVar7 = iVar11;
				iVar6 = 26;
				iVar10 = 26;
				break;
			case 20:
				iVar11 = 0;
				uVar13 = __LIB_0__::func_991(joaat("MPPLY_HEIST_1STPERSON_PROG"));
				bVar0 = false;
				while (bVar0 < 28)
				{
					if (BitTest(uVar13, bVar0))
					{
						iVar11++;
					}
					bVar0++;
				}
				if (BitTest(uVar13, 9))
				{
					iVar11 = (iVar11 - 1);
				}
				if (BitTest(uVar13, 26))
				{
					iVar11 = (iVar11 - 1);
				}
				if (iVar11 < 0)
				{
					iVar11 = 0;
				}
				iVar7 = iVar11;
				iVar6 = 26;
				iVar10 = 26;
				break;
			case 21:
				iVar11 = 0;
				uVar13 = __LIB_0__::func_991(joaat("MPPLY_HEISTMEMBERPROGRESSBITSET"));
				bVar0 = false;
				while (bVar0 < 28)
				{
					if (BitTest(uVar13, bVar0))
					{
						iVar11++;
					}
					bVar0++;
				}
				if (BitTest(uVar13, 9))
				{
					iVar11 = (iVar11 - 1);
				}
				if (BitTest(uVar13, 26))
				{
					iVar11 = (iVar11 - 1);
				}
				if (iVar11 < 0)
				{
					iVar11 = 0;
				}
				iVar7 = iVar11;
				iVar6 = 26;
				iVar10 = 26;
				break;
			case 3:
			case 4:
			case 5:
			case 7:
			case 8:
			case 9:
			case 10:
			case 11:
				iVar10 = __LIB_42__::func_472(iParam0, iVar8, iParam2);
				iVar11 = func_88(iParam0, iVar1, iParam2);
				break;
		}
		iVar12 = SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(iVar11) / SYSTEM::TO_FLOAT(iVar10)) * 100f));
	}
	func_62(sVar2, sVar3, sVar4, sVar5, iVar6, iVar7, iVar12, iParam1, uParam3, 152, 144);
}

int func_88(int iParam0, int iParam1, int iParam2)//Position - 0x9CDD
{
	if (iParam1 == 5)
	{
	}
	if (iParam2 == 0)
	{
	}
	if (__LIB_13__::func_412(iParam0))
	{
	}
	switch (iParam0)
	{
		case 3:
			return func_89(iParam0);
		case 4:
			return func_89(iParam0);
		case 5:
			return func_89(iParam0);
		case 7:
			return func_89(iParam0);
		case 8:
			return func_89(iParam0);
		case 9:
			return func_89(iParam0);
		case 10:
			return func_89(iParam0);
		case 11:
			return func_89(iParam0);
		default:
	}
	if (__LIB_13__::func_412(iParam0) == 1)
	{
		return 1;
	}
	return 0;
}

int func_89(int iParam0)//Position - 0x9D8B
{
	int iVar0;
	var uVar1;
	bool bVar2;
	uVar1 = __LIB_0__::func_991(__LIB_25__::func_322(iParam0));
	bVar2 = false;
	while (bVar2 < 29)
	{
		if (BitTest(uVar1, bVar2))
		{
			iVar0++;
		}
		bVar2++;
	}
	return iVar0;
}

char* func_95(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0xA133
{
	if (iParam2 == 9)
	{
	}
	if (bParam3)
	{
	}
	if (__LIB_42__::func_472(iParam0, iParam1, iParam2) == 1)
	{
	}
	switch (iParam0)
	{
		case 12:
			return "AWS_775" /* GXT: Learn the ropes in this two man bank Heist. It will help prepare you for the bigger Heists that Lester may pass your way. Complete The Fleeca Job Heist Finale. */;
		case 13:
			return "AWS_767" /* GXT: Most Los Santos citizens plan to stay out of jail, but this Heist sends you straight to Bolingbroke Penitentiary. Complete The Prison Break Heist Finale. */;
		case 14:
			return "AWS_768" /* GXT: The research facility is heavily protected so you'll need some serious muscle to pull this off. Complete The Humane Labs Raid Heist Finale. */;
		case 15:
			return "AWS_776" /* GXT: This Heist is all about redistribution of assets and it looks like you'll need to get your hands dirty. Complete Series A Funding Heist Finale. */;
		case 16:
			return "AWS_780" /* GXT: Prove your ability to pull off the classic bank job. Crack the vault, grab the cash and get out of there. Complete The Pacific Standard Job Heist Finale. */;
		case 17:
			return "AWS_777" /* GXT: See all the Heists through from beginning to end and earn a handsome cash bonus. Complete all 5 Heists in order including all Setups and Finales. */;
		case 18:
			return "AWS_778" /* GXT: Trusting a stranger as back up on a Heist could go disastrously wrong. Find a loyal crew and pull off all 5 Heists back to back with the same team of players. */;
		case 19:
			return "AWS_779" /* GXT: Only professionals need apply. This is the ultimate challenge. Complete all 5 Heists in full on hard difficulty, in order, with the same team and without losing a single life. */;
		case 20:
			return "AWS_785" /* GXT: Complete all Heist setups and Finales in first person mode. The leader must lock the camera option to first person when setting up the Heist. */;
		case 21:
			return "AWS_786" /* GXT: Leave the logistics to the leader. Get your hands dirty and get paid for it. Complete all Heist Setups and Finales as a member. */;
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

int func_100(int iParam0)//Position - 0xA4F0
{
	if (__LIB_13__::func_412(iParam0))
	{
		return 5;
	}
	return 0;
}

void func_101(int iParam0, int iParam1, int iParam2, var uParam3)//Position - 0xA506
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	switch (iParam1)
	{
		case 0:
			iParam1 = 0;
			break;
		case 1:
			iParam1 = 1;
			break;
		case 2:
			iParam1 = 2;
			break;
		case 3:
			iParam1 = 3;
			break;
		case 4:
			iParam1 = 4;
			break;
		case 5:
			iParam1 = 5;
			break;
		case 6:
			iParam1 = func_113(iParam0);
			break;
		case 7:
		case 8:
			iParam1 = __LIB_3__::func_939();
			break;
	}
	if (iParam1 != 0)
	{
		if (iParam1 != 1)
		{
			if (__LIB_28__::func_876(iParam0, iParam2) != 1)
			{
				iParam1 = 1;
			}
		}
	}
	iVar0 = __LIB_3__::func_939();
	sVar1 = __LIB_38__::func_197(iParam0, iParam2, 0);
	sVar2 = func_109(iParam0, iParam1, iParam2, 0);
	sVar3 = __LIB_38__::func_196(iParam0, iParam2);
	sVar4 = __LIB_38__::func_195(iParam0, iParam2);
	iVar5 = func_106(iParam0, iVar0, iParam2);
	if (__LIB_1__::func_676(iParam0, -1) == 1)
	{
		iVar6 = 1;
	}
	else
	{
		iVar6 = 0;
	}
	iVar8 = func_68(iParam1);
	iVar9 = func_106(iParam0, iVar8, iParam2);
	iVar10 = (iVar5 - iVar9);
	iVar11 = (iVar6 - iVar9);
	switch (iParam0)
	{
		case 15:
			iVar6 = __LIB_1__::func_360(1153, -1, 0);
			if (iVar6 > 25)
			{
				iVar6 = 25;
			}
			iVar10 = 25;
			iVar11 = iVar6;
			break;
		case 16:
			iVar6 = __LIB_1__::func_360(1152, -1, 0);
			if (iVar6 > 25)
			{
				iVar6 = 25;
			}
			iVar10 = 25;
			iVar11 = iVar6;
			break;
		case 12:
			iVar6 = __LIB_1__::func_360(1088, -1, 0);
			if (iVar6 > 25)
			{
				iVar6 = 25;
			}
			iVar10 = 25;
			iVar11 = iVar6;
			break;
		case 25:
			if (__LIB_1__::func_676(iParam0, -1))
			{
				iVar6 = __LIB_1__::func_360(2117, -1, 0) * 7;
				iVar7 = __LIB_1__::func_360(2116, -1, 0);
				iVar6 = 7;
				iVar10 = 7;
				iVar11 = iVar6;
			}
			else
			{
				iVar6 = __LIB_1__::func_360(2117, -1, 0) * 7;
				iVar7 = __LIB_1__::func_360(2116, -1, 0);
				iVar6 = (iVar6 + iVar7);
				if (iVar6 > 7)
				{
					iVar6 = 7;
				}
				iVar10 = 7;
				iVar11 = iVar6;
			}
			break;
		case 26:
			if (__LIB_1__::func_676(iParam0, -1))
			{
				iVar6 = __LIB_1__::func_360(2117, -1, 0) * 7;
				iVar7 = __LIB_1__::func_360(2116, -1, 0);
				iVar6 = 28;
				iVar10 = 28;
				iVar11 = iVar6;
			}
			else
			{
				iVar6 = __LIB_1__::func_360(2117, -1, 0) * 7;
				iVar7 = __LIB_1__::func_360(2116, -1, 0);
				iVar6 = (iVar6 + iVar7);
				if (iVar6 > 28)
				{
					iVar6 = 28;
				}
				iVar10 = 28;
				iVar11 = iVar6;
			}
			break;
		case 146:
			if (__LIB_1__::func_676(iParam0, -1))
			{
				iVar6 = 43;
				iVar10 = 43;
				iVar11 = iVar6;
			}
			else
			{
				iVar6 = __LIB_42__::func_473();
				iVar10 = 43;
				iVar11 = iVar6;
			}
			break;
		case 151:
			if (__LIB_1__::func_676(iParam0, -1))
			{
				iVar6 = 4;
				iVar10 = 4;
				iVar11 = iVar6;
			}
			else
			{
				iVar6 = __LIB_1__::func_360(7254, -1, 0);
				iVar10 = 4;
				iVar11 = iVar6;
			}
			break;
		case 150:
			if (__LIB_1__::func_676(iParam0, -1))
			{
				iVar6 = 100;
				iVar10 = 100;
				iVar11 = iVar6;
			}
			else
			{
				iVar6 = __LIB_1__::func_360(7238, -1, 0);
				iVar10 = 100;
				iVar11 = iVar6;
			}
			break;
		case 59:
			if (__LIB_1__::func_676(iParam0, -1))
			{
				iVar6 = 6;
				iVar10 = 6;
				iVar11 = iVar6;
			}
			else
			{
				iVar6 = func_102();
				iVar10 = 6;
				iVar11 = iVar6;
			}
			break;
	}
	if (__LIB_1__::func_676(iParam0, -1))
	{
		iVar12 = 100;
	}
	else
	{
		iVar12 = SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(iVar11) / SYSTEM::TO_FLOAT(iVar10)) * 100f));
	}
	func_62(sVar1, sVar2, sVar3, sVar4, iVar5, iVar6, iVar12, iParam1, uParam3, iParam0, 144);
}

int func_102()//Position - 0xA869
{
	int iVar0;
	iVar0 = __LIB_1__::func_360(8283, -1, 0);
	if (BitTest(iVar0, 19))
	{
		return 6;
	}
	else if (BitTest(iVar0, 4))
	{
		return 5;
	}
	else if (BitTest(iVar0, 3))
	{
		return 4;
	}
	else if (BitTest(iVar0, 2))
	{
		return 3;
	}
	else if (BitTest(iVar0, 1))
	{
		return 2;
	}
	else if (BitTest(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_106(int iParam0, int iParam1, int iParam2)//Position - 0xACBF
{
	if (iParam1 == 5)
	{
	}
	if (iParam2 == 0)
	{
	}
	switch (iParam0)
	{
		case 15:
			return 25;
			break;
		case 16:
			return 25;
			break;
		case 12:
			return 25;
			break;
		case 25:
			return 7;
			break;
		case 26:
			return 28;
			break;
		case 146:
			return 43;
			break;
		case 151:
			return 4;
			break;
		case 150:
			return 100;
			break;
		case 59:
			return 6;
			break;
	}
	return 1;
}

char* func_109(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0xBB79
{
	if (iParam2 == 9)
	{
	}
	if (bParam3)
	{
	}
	if (iParam1 == 5)
	{
	}
	switch (iParam0)
	{
		case 0:
			return "AWS_521";
		case 2:
			return "AWS_660";
		case 3:
			return "AWS_667";
		case 4:
			return "AWS_670";
		case 5:
			return "AWS_671";
		case 6:
			return "AWS_691";
		case 7:
			return "AWS_697";
		case 8:
			return "AWS_701";
		case 10:
			return "AWS_705";
		case 11:
			return "AWS_706";
		case 12:
			return "AWS_709";
		case 13:
			return "AWS_711";
		case 14:
			return "AWS_712";
		case 15:
			return "AWS_714";
		case 16:
			return "AWS_715";
		case 17:
			return "AWS_718";
		case 18:
			return "AWS_719";
		case 20:
			return "AWS_725";
		case 21:
			return "AWS_727";
		case 22:
			return "AWS_717";
		case 23:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				return "AWS_729_M";
			}
			else
			{
				return "AWS_729";
			}
			break;
		case 25:
			return "AWS_783";
		case 26:
			return "AWS_784";
		case 27:
			return "AWS_771";
		case 144:
			return "AWS_751" /* GXT: Take your time and complete a Heist Finale without taking any damage. Be cautious but don't be a coward, your team still need you. */;
		case 148:
			return "AWS_763" /* GXT: Every car enthusiast would love to have 30 modded rides at their fingertips. Fill out three of the large Garages that Los Santos has to offer. */;
		case 143:
			return "AWS_754" /* GXT: Good karma may come your way if you share more of your profits with your Heist crew members. Split a Finale take evenly between 4 players. */;
		case 146:
			return "AWS_765" /* GXT: Versatility is the key. Perform every possible role in The Prison Break, The Humane Labs Raid, Series A Funding and The Pacific Standard Job Heists. */;
		case 147:
			return "AWS_756" /* GXT: You can't do this alone. Activate a two person key switch. */;
		case 149:
			return "AWS_793";
		case 150:
			return "AWS_794";
		case 151:
			return "AWS_795";
		case 30:
			return "AWS_796";
		case 31:
			return "AWS_797";
		case 32:
			return "AWS_798";
		case 33:
			return "AWS_799";
		case 34:
			return "AWS_800";
		case 35:
			return "AWS_801";
		case 36:
			return "AWS_802";
		case 37:
			return "AWS_803";
		case 38:
			return "AWS_804";
		case 39:
			return "AWS_805";
		case 40:
			return "AWS_806";
		case 41:
			return "AWS_807";
		case 42:
			return "AWS_808";
		case 43:
			return "AWS_809";
		case 44:
			return "AWS_810";
		case 45:
			return "AWS_811";
		case 46:
			return "AWS_812";
		case 47:
			return "AWS_813";
		case 48:
			return "AWS_814";
		case 49:
			return "AWS_815";
		case 50:
			return "AWS_816";
		case 51:
			return "AWS_819";
		case 52:
			return "AWS_820";
		case 53:
			return "AWS_836" /* GXT: Complete Loose Cheng for the first time and earn $50,000. */;
		case 54:
			return "AWS_837" /* GXT: Complete House Keeping for the first time and earn $50,000. */;
		case 55:
			return "AWS_838" /* GXT: Complete Strong Arm Tactics for the first time and earn $50,000. */;
		case 56:
			return "AWS_839" /* GXT: Complete Play to Win for the first time and earn $50,000. */;
		case 57:
			return "AWS_840" /* GXT: Complete Bad Beat for the first time and earn $50,000. */;
		case 58:
			return "AWS_841" /* GXT: Complete Cashing Out for the first time and earn $100,000. */;
		case 59:
			return "AWS_842" /* GXT: Complete all Casino Story Missions in order and earn $500,000. */;
		case 62:
			return "AWS_846" /* GXT: Complete a Casino Story Mission without losing a life and earn $50,000. */;
		case 60:
			return "AWS_843" /* GXT: Complete all Casino Story Missions as a Crew member and earn $100,000. */;
		case 61:
			return "AWS_844" /* GXT: Complete all Casino Story Missions as Leader to earn $100,000 and a bonus item. */;
		case 63:
			return "AWS_857" /* GXT: Scope all entrances and exits for The Diamond Casino Heist. */;
		case 64:
			return "AWS_858" /* GXT: Unlock all possible crew members for The Diamond Casino Heist. */;
		case 65:
			return "AWS_859" /* GXT: Stop a mall cop being fired again during The Diamond Casino Heist. */;
		case 66:
			return "AWS_860" /* GXT: Use someone famous to get into the Casino back area. */;
		case 67:
			return "AWS_861" /* GXT: Find and help break out an old accomplice for The Diamond Casino Heist. */;
		case 68:
			return "AWS_862" /* GXT: Complete the Aggressive approach to The Diamond Casino Heist and earn $100000. */;
		case 69:
			return "AWS_863" /* GXT: Complete The Big Con approach to The Diamond Casino Heist without breaking your disguise inside the Casino and earn $150000. */;
		case 70:
			return "AWS_864" /* GXT: Complete the Silent & Sneaky approach to The Diamond Casino Heist without ever being detected and earn $200000. */;
		case 71:
			return "AWS_865" /* GXT: Complete the Aggressive, The Big Con and Silent & Sneaky approaches to The Diamond Casino Heist and earn $300000. */;
		case 72:
			return "AWS_866" /* GXT: Complete the elite challenges for the Aggressive, The Big Con and Silent & Sneaky approaches to The Diamond Casino Heist and earn $350000. */;
		case 73:
			return "AWS_867" /* GXT: Complete The Diamond Casino Heist on Hard and without losing a life and earn $250,000. */;
		case 74:
			return "AWS_868" /* GXT: Complete The Diamond Casino Heist as a crew member. */;
		case 75:
			return "AWS_869" /* GXT: Use the elevator shaft to reach the staff lobby during The Diamond Casino Heist. */;
		case 76:
			return "AWS_870" /* GXT: Steal all variations of loot from the vault during The Diamond Casino Heist. */;
		case 77:
			return "AWS_871" /* GXT: Get over 90% accuracy for an entire playthrough of Badlands Revenge II. */;
		case 78:
			return "AWS_872" /* GXT: Complete Badlands Revenge II using only pistols. */;
		case 79:
			return "AWS_873" /* GXT: Complete the full race without crashing in Race And Chase. */;
		case 80:
			return "AWS_874" /* GXT: Complete Race And Chase with all vehicle types. */;
		case 81:
			return "AWS_875" /* GXT: Complete The Wizard's Ruin adventure as Grog. */;
		case 82:
			return "AWS_876" /* GXT: Survive any stage without taking any damage in Space Monkey 3: Bananas Gone Bad. */;
		case 83:
			return "AWS_877" /* GXT: Complete Space Monkey 3: Bananas Gone Bad without the use of any powerups or pickups. */;
		case 84:
			return "AWS_878" /* GXT: Complete the underwater level in Monkey Paradise. */;
		case 85:
			return "AWS_879" /* GXT: Complete a level of Defender of the Faith by only pressing right. */;
		case 86:
			return "AWS_880" /* GXT: Get a true love rating on The Love Professor. */;
		case 87:
			return "AWS_881" /* GXT: Find your nemesis using The Love Professor Cabinet. */;
		case 88:
			return "AWS_882" /* GXT: The friendzone doesn't exist but perhaps you can find yourself in it using The Love Professor. */;
		case 89:
			return "AWS_886" /* GXT: Get first place on the QUB3D leaderboard. */;
		case 90:
			return "AWS_887" /* GXT: Reach level 20 in QUB3D without using special abilities. */;
		case 93:
			return "AWS_888" /* GXT: Get the highest score in Axe of Fury. */;
		case 92:
			return "AWS_889" /* GXT: Get a score of 19000 in a single play of QUB3D. */;
		case 91:
			return "AWS_890" /* GXT: Reach level 20 without removing any blocks from play. */;
		case 94:
			return "AWS_891" /* GXT: Get the highest score in Axe of Fury 11 times. */;
		case 95:
			return "AWS_917" /* GXT: Scope out all infiltration and escape points on Cayo Perico. */;
		case 96:
			return "AWS_918" /* GXT: Scope out all entry points into El Rubio's compound on Cayo Perico. */;
		case 97:
			return "AWS_919" /* GXT: Scope out all the secondary target locations in a single playthrough of The Cayo Perico Heist. */;
		case 98:
			return "AWS_920" /* GXT: Complete all three disruption prep missions in a single playthrough of The Cayo Perico Heist. */;
		case 99:
			return "AWS_921" /* GXT: Complete The Cayo Perico Heist for the first time to earn $200,000. */;
		case 100:
			return "AWS_922" /* GXT: Complete The Cayo Perico Heist with one player to earn $100,000. */;
		case 101:
			return "AWS_923" /* GXT: Complete The Cayo Perico Heist with four players to earn $100,000. */;
		case 102:
			return "AWS_924" /* GXT: Approach The Cayo Perico Heist using all of the different vehicles to earn $250,000. */;
		case 103:
			return "AWS_925" /* GXT: Steal all variations of the primary target during The Cayo Perico Heist to earn $150,000. */;
		case 104:
			return "AWS_926" /* GXT: Complete The Cayo Perico Heist without ever alerting the guards to earn $200,000. */;
		case 105:
			return "AWS_927" /* GXT: Enter the compound using a stolen disguise during The Cayo Perico Heist. */;
		case 106:
			return "AWS_928" /* GXT: Steal El Rubio's prized weapon during The Cayo Perico Heist. */;
		case 107:
			return "AWS_929" /* GXT: Complete the elite challenge for The Cayo Perico Heist to earn $200,000. */;
		case 108:
			return "AWS_930" /* GXT: Complete The Cayo Perico Heist on Hard and without losing a life to earn $200,000. */;
		case 109:
			return "AWS_931" /* GXT: Complete all Palms Trax requests sent by Tom Connors. */;
		case 110:
			return "AWS_932" /* GXT: Complete all Keinemusik's requests sent by English Dave. */;
		case 111:
			return "AWS_933" /* GXT: Revisit the Cayo Perico beach party after completing The Cayo Perico Heist. */;
		case 112:
			return "AWS_934" /* GXT: Complete all Moodymann's requests sent by Tom Connors. */;
		case 113:
			return "AWS_944" /* GXT: Visit The LS Car Meet for the first time. */;
		case 114:
			return "AWS_951" /* GXT: Deliver all 10 Exotic Exports Vehicles to the Docks in a single day. */;
		case 115:
			return "AWS_953" /* GXT: Complete The Union Depository Contract as leader to earn $75,000. */;
		case 116:
			return "AWS_954" /* GXT: Complete The Superdollar Deal as leader to earn $75,000. */;
		case 117:
			return "AWS_955" /* GXT: Complete The Bank Contract as leader to earn $75,000. */;
		case 118:
			return "AWS_956" /* GXT: Complete The E.C.U. Job as leader to earn $75,000. */;
		case 119:
			return "AWS_957" /* GXT: Complete The Prison Contract as leader to earn $75,000. */;
		case 120:
			return "AWS_958" /* GXT: Complete The Agency Deal as leader to earn $75,000. */;
		case 121:
			return "AWS_959" /* GXT: Complete The Lost Contract as leader to earn $75,000. */;
		case 122:
			return "AWS_960" /* GXT: Complete The Data Contract as leader to earn $75,000. */;
		case 123:
			return "AWS_963" /* GXT: Complete all levels using only the pistol in Camhedz. */;
		case 124:
			return "AWS_964" /* GXT: Kill all costumed weirdos across all scenes in Camhedz. */;
		case 125:
			return "AWS_965" /* GXT: Get an average of 60% accuracy across all scenes in Camhedz. */;
		case 126:
			return "AWS_966" /* GXT: Get a 5-star rating on each of the scenes in Camhedz. */;
		case 127:
			return "AWS_968" /* GXT: Meet Dr. Dre at the Los Santos Golf Club as leader to earn $50,000. */;
		case 128:
			return "AWS_969" /* GXT: Locate this copy of Dr. Dre's stolen music as leader to earn $100,000. */;
		case 129:
			return "AWS_970" /* GXT: Locate this copy of Dr. Dre's stolen music as leader to earn $100,000. */;
		case 130:
			return "AWS_971" /* GXT: Locate this copy of Dr. Dre's stolen music as leader to earn $100,000. */;
		case 131:
			return "AWS_972" /* GXT: Help Dr. Dre at Record A Studios as leader to earn $100,000. */;
		case 132:
			return "AWS_973" /* GXT: Track down the thief who stole Dr. Dre's music as leader to earn $250,000. */;
		case 133:
			return "AWS_974" /* GXT: Complete all of Dr. Dre's Story missions as a member of an Organization or Motorcycle Club to earn $100,000. */;
		case 134:
			return "AWS_975" /* GXT: Complete Seed Capital as Franklin to earn $100,000. */;
		case 135:
			return "AWS_977" /* GXT: Complete Fire It Up as Franklin to earn $100,000. */;
		case 136:
			return "AWS_984" /* GXT: Complete OG Kush as Franklin to earn $100,000. */;
		case 137:
			return "AWS_980" /* GXT: Complete every Payphone Hit with the Assassination Bonus. */;
		case 138:
			return "AWS_981" /* GXT: Pet Chop. */;
		case 139:
			return "AWS_982" /* GXT: Visit Record A Studios. */;
		case 140:
			return "AWS_976" /* GXT: Complete Seed Capital as Lamar to earn $100,000. */;
		case 141:
			return "AWS_986" /* GXT: Complete Fire It Up as Lamar to earn $100,000. */;
		case 142:
			return "AWS_985" /* GXT: Complete OG Kush as Lamar to earn $100,000. */;
	}
	return "";
}

int func_113(int iParam0)//Position - 0xCFDB
{
	if (__LIB_1__::func_676(iParam0, -1))
	{
		return 5;
	}
	return 0;
}

void func_114(int iParam0, int iParam1, int iParam2, var uParam3)//Position - 0xCFF2
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	switch (iParam1)
	{
		case 0:
			iParam1 = 0;
			break;
		case 1:
			iParam1 = 1;
			break;
		case 2:
			iParam1 = 2;
			break;
		case 3:
			iParam1 = 3;
			break;
		case 4:
			iParam1 = 4;
			break;
		case 5:
			iParam1 = 5;
			break;
		case 6:
			iParam1 = func_120(iParam0, iParam2);
			break;
		case 7:
		case 8:
			iParam1 = func_119(iParam0, iParam2);
			break;
	}
	iVar0 = func_119(iParam0, iParam2);
	if (iParam1 != 0)
	{
		if (iParam1 != 1)
		{
			if (__LIB_28__::func_875(iParam0, iParam2) != 1)
			{
				iParam1 = 1;
			}
		}
	}
	sVar1 = __LIB_2__::func_198(iParam0, iParam2);
	sVar2 = func_117(iParam0, iParam1, iParam2);
	sVar3 = __LIB_2__::func_196(iParam0, iParam1, iParam2);
	sVar4 = __LIB_2__::func_195(iParam0, iParam1, iParam2);
	iVar5 = __LIB_0__::func_264(iParam0, iVar0, iParam2);
	iVar6 = __LIB_1__::func_677(iParam0, -1);
	iVar7 = func_68(iParam1);
	iVar8 = __LIB_0__::func_264(iParam0, iVar7, iParam2);
	iVar9 = (iVar5 - iVar8);
	iVar10 = (iVar6 - iVar8);
	iVar11 = SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(iVar10) / SYSTEM::TO_FLOAT(iVar9)) * 100f));
	func_62(sVar1, sVar2, sVar3, sVar4, iVar5, iVar6, iVar11, iParam1, uParam3, 152, iParam0);
}

char* func_117(int iParam0, int iParam1, int iParam2)//Position - 0xDEA8
{
	if (iParam1 == 5)
	{
	}
	if (iParam2 == 9)
	{
	}
	switch (iParam0)
	{
		case 53:
			return "AWS_721";
		case 60:
			return "AWS_728";
		case 61:
			return "AWS_730";
		case 62:
			return "AWS_731";
		case 63:
			return "AWS_732";
		case 16:
			return "AWS_550";
		case 0:
			return "AWS_282";
		case 51:
			return "AWS_707";
		case 52:
			return "AWS_708";
		case 12:
			return "AWS_581";
		case 11:
			return "AWS_582";
		case 19:
			return "AWS_534";
		case 20:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				return "AWS_509_M";
			}
			else
			{
				return "AWS_509";
			}
			break;
		case 39:
			return "AWS_678";
		case 15:
			return "AWS_559";
		case 17:
			return "AWS_535";
		case 21:
			return "AWS_586";
		case 14:
			return "AWS_566";
		case 22:
			return "AWS_589";
		case 1:
			return "AWS_506";
		case 2:
			return "AWS_585";
		case 3:
			return "AWS_541";
		case 4:
			return "AWS_584";
		case 5:
			return "AWS_540";
		case 6:
			return "AWS_539";
		case 7:
			return "AWS_538";
		case 8:
			return "AWS_537";
		case 9:
			return "AWS_536";
		case 10:
			return "AWS_583";
		case 23:
			return "AWS_610";
		case 24:
			return "AWS_611";
		case 25:
			return "AWS_631";
		case 26:
			return "AWS_632";
		case 27:
			return "AWS_639";
		case 28:
			return "AWS_640";
		case 29:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				return "AWS_699_m";
			}
			else
			{
				return "AWS_699";
			}
			break;
		case 30:
			return "AWS_661";
		case 31:
			return "AWS_662";
		case 32:
			return "AWS_663";
		case 33:
			return "AWS_665";
		case 34:
			return "AWS_666";
		case 35:
			return "AWS_668";
		case 36:
			return "AWS_669";
		case 37:
			return "AWS_675";
		case 38:
			return "AWS_676";
		case 40:
			return "AWS_679";
		case 41:
			return "AWS_681";
		case 42:
			return "AWS_682";
		case 43:
			return "AWS_677";
		case 44:
			return "AWS_683";
		case 45:
			return "AWS_684";
		case 46:
			return "AWS_685";
		case 47:
			return "AWS_692";
		case 48:
			return "AWS_696";
		case 49:
			return "AWS_693";
		case 54:
			return "AWS_710";
		case 55:
			return "AWS_703";
		case 56:
			return "AWS_704";
		case 57:
			return "AWS_722";
		case 58:
			return "AWS_723";
		case 59:
			return "AWS_716";
		case 126:
			return "AWS_740" /* GXT: This mode is all about teamwork, whether you choose to attack or defend, everyone has a part to play. Get a team together and win Captures. */;
		case 127:
			return "AWS_741" /* GXT: Watch your back when transporting a package or vehicle. The opposition will be after you. Drop off packages in any Capture mode. */;
		case 128:
			return "AWS_742" /* GXT: In order to win at Capture, someone has to get the goods. Pick up a package or vehicle in any Capture mode. */;
		case 129:
			return "AWS_743" /* GXT: Don't let the enemy get the merchandise back to their base. A strategic ambush could turn the match in your favor. Kill package carriers. */;
		case 130:
			return "AWS_744" /* GXT: Whether you choose a stealthy approach or a full on assault, assert your dominance by winning Capture without dying. */;
		case 67:
			return "AWS_782";
		case 120:
			return "AWS_745" /* GXT: Pulling off a Heist is the ultimate Job. With the right team and some cooperation you will reap the rewards. Successfully complete Heist Finales. */;
		case 121:
			return "AWS_746" /* GXT: Every Heist requires planning. Help with the Heist Setups in the run up to the final showdown. */;
		case 122:
			return "AWS_747" /* GXT: Leaders need to hire a solid crew. Crew members get paid for Heist Setups and can negotiate a share of the profits in the Finale. Be a Heist crew member. */;
		case 123:
			return "AWS_748" /* GXT: The Heist leader needs to stump up the cash to cover the costs, on the plus side, they have full control of the rewards. Be the Heist leader. */;
		case 124:
			return "AWS_749";
		case 125:
			return "AWS_752" /* GXT: If something is worth doing, it is worth doing right. Earn platinum medals for your performance during a Heist. The Bonus RP may come in handy. */;
		case 131:
			return "AWS_755" /* GXT: This new kit will give you the advantage over your enemies. Get kills while wearing Night Vision. */;
		case 132:
			return "AWS_757" /* GXT: Shoot, aim, shout at the crowd to keep them under control. If an alarm is raised or the police are called, you have failed. */;
		case 133:
			return "AWS_758" /* GXT: Psychopaths are marked as red blips on the Radar in Freemode. Kill them for an RP reward and a sense of satisfaction. */;
		case 134:
			return "AWS_759" /* GXT: Becoming Unstable encourages others to play rough with you. Try to stay calm for an easier life. Return your Mental State to Normal. */;
		case 135:
			return "AWS_760" /* GXT: No respawns in this mode. You will have to cheer on your teammates if you are out of the game. Win Last Team Standings. */;
		case 136:
			return "AWS_761" /* GXT: The true definition of Last Man Standing. Be the last player alive at the end of the match. */;
		case 137:
			return "AWS_762" /* GXT: Sometimes you have to take matters into your own hands. Wipe out an entire enemy team yourself in LTS. */;
		case 138:
			return "AWS_764" /* GXT: Staying in the same place for too long can become dull.  Either move up the property ladder or downscale for some cash. Trade in your property. */;
		case 139:
			if (iParam1 == 5)
			{
				return "AWS_788_4";
			}
			else if (iParam1 == 4)
			{
				return "AWS_788_3";
			}
			else if (iParam1 == 3)
			{
				return "AWS_788_2";
			}
			else
			{
				return "AWS_788_1";
			}
			break;
		case 140:
			if (iParam1 == 5)
			{
				return "AWS_789_4";
			}
			else if (iParam1 == 4)
			{
				return "AWS_789_3";
			}
			else if (iParam1 == 3)
			{
				return "AWS_789_2";
			}
			else
			{
				return "AWS_789_1";
			}
			break;
		case 141:
			if (iParam1 == 5)
			{
				return "AWS_790_4";
			}
			else if (iParam1 == 4)
			{
				return "AWS_790_3";
			}
			else if (iParam1 == 3)
			{
				return "AWS_790_2";
			}
			else
			{
				return "AWS_790_1";
			}
			break;
		case 142:
			if (iParam1 == 5)
			{
				return "AWS_791_4";
			}
			else if (iParam1 == 4)
			{
				return "AWS_791_3";
			}
			else if (iParam1 == 3)
			{
				return "AWS_791_2";
			}
			else
			{
				return "AWS_791_1";
			}
			break;
		case 143:
			return "AWS_792";
		case 70:
			return "AWS_817";
		case 71:
			return "AWS_818";
		case 72:
			return "AWS_821";
		case 73:
			return "AWS_822";
		case 74:
			return "AWS_823";
		case 75:
			return "AWS_824";
		case 76:
			return "AWS_825";
		case 77:
			return "AWS_826";
		case 78:
			return "AWS_827";
		case 79:
			return "AWS_828";
		case 80:
			return "AWS_829";
		case 81:
			return "AWS_830";
		case 82:
			return "AWS_831";
		case 83:
			return "AWS_832";
		case 84:
			return "AWS_833";
		case 85:
			return "AWS_834";
		case 86:
			return "AWS_835";
		case 87:
			if (iParam1 == 5)
			{
				return "AWS_845_4" /* GXT: Complete 50 Casino Work missions for Agatha and earn $100,000. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_845_3" /* GXT: Complete 25 Casino Work missions for Agatha and earn $50,000. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_845_2" /* GXT: Complete 10 Casino Work missions for Agatha and earn $20,000. */;
			}
			else
			{
				return "AWS_845_1" /* GXT: Complete 5 Casino Work missions for Agatha and earn $10,000. */;
			}
			break;
		case 88:
			if (iParam1 == 5)
			{
				return "AWS_847_4" /* GXT: Complete 40 prep missions as part of The Diamond Casino Heist. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_847_3" /* GXT: Complete 20 prep missions as part of The Diamond Casino Heist. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_847_2" /* GXT: Complete 10 prep missions as part of The Diamond Casino Heist. */;
			}
			else
			{
				return "AWS_847_1" /* GXT: Complete 5 prep missions as part of The Diamond Casino Heist. */;
			}
			break;
		case 89:
			if (iParam1 == 5)
			{
				return "AWS_848_4" /* GXT: Use the Drone to tranquilize 20 guards during The Diamond Casino Heist. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_848_3" /* GXT: Use the Drone to tranquilize 15 guards during The Diamond Casino Heist. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_848_2" /* GXT: Use the Drone to tranquilize 10 guards during The Diamond Casino Heist. */;
			}
			else
			{
				return "AWS_848_1" /* GXT: Use the Drone to tranquilize 5 guards during The Diamond Casino Heist. */;
			}
			break;
		case 90:
			if (iParam1 == 5)
			{
				return "AWS_849_4" /* GXT: Steal a total of $100000 from the Daily Vault during The Diamond Casino Heist. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_849_3" /* GXT: Steal a total of $75000 from the Daily Vault during The Diamond Casino Heist. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_849_2" /* GXT: Steal a total of $50000 from the Daily Vault during The Diamond Casino Heist. */;
			}
			else
			{
				return "AWS_849_1" /* GXT: Steal a total of $25000 from the Daily Vault during The Diamond Casino Heist. */;
			}
			break;
		case 91:
			if (iParam1 == 5)
			{
				return "AWS_850_4" /* GXT: Destroy 40 security cameras during The Diamond Casino Heist. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_850_3" /* GXT: Destroy 30 security cameras during The Diamond Casino Heist. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_850_2" /* GXT: Destroy 20 security cameras during The Diamond Casino Heist. */;
			}
			else
			{
				return "AWS_850_1" /* GXT: Destroy 10 security cameras during The Diamond Casino Heist. */;
			}
			break;
		case 92:
			if (iParam1 == 5)
			{
				return "AWS_851_4" /* GXT: Kill 40 flying critters across all levels of Badlands Revenge II. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_851_3" /* GXT: Kill 20 flying critters across all levels of Badlands Revenge II. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_851_2" /* GXT: Kill 10 flying critters across all levels of Badlands Revenge II. */;
			}
			else
			{
				return "AWS_851_1" /* GXT: Kill 5 flying critters across all levels of Badlands Revenge II. */;
			}
			break;
		case 93:
			if (iParam1 == 5)
			{
				return "AWS_852_4" /* GXT: Win 40 races against an opponent in Race And Chase. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_852_3" /* GXT: Win 20 races against an opponent in Race And Chase. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_852_2" /* GXT: Win 10 races against an opponent in Race And Chase. */;
			}
			else
			{
				return "AWS_852_1" /* GXT: Win 5 races against an opponent in Race And Chase. */;
			}
			break;
		case 94:
			if (iParam1 == 5)
			{
				return "AWS_853_4" /* GXT: Score at least 1000000 during a single play of The Wizard's Ruin. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_853_3" /* GXT: Score at least 750000 during a single play of The Wizard's Ruin. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_853_2" /* GXT: Score at least 500000 during a single play of The Wizard's Ruin. */;
			}
			else
			{
				return "AWS_853_1" /* GXT: Score at least 250000 during a single play of The Wizard's Ruin. */;
			}
			break;
		case 95:
			if (iParam1 == 5)
			{
				return "AWS_854_4" /* GXT: Collect 950000 treasures during a single play of The Wizard's Ruin. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_854_3" /* GXT: Collect 700000 treasures during a single play of The Wizard's Ruin. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_854_2" /* GXT: Collect 450000 treasures during a single play of The Wizard's Ruin. */;
			}
			else
			{
				return "AWS_854_1" /* GXT: Collect 200000 treasures during a single play of The Wizard's Ruin. */;
			}
			break;
		case 96:
			if (iParam1 == 5)
			{
				return "AWS_855_4" /* GXT: Score over 3000000 points in a single game of Space Monkey 3: Bananas Gone Bad. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_855_3" /* GXT: Score over 2500000 points in a single game of Space Monkey 3: Bananas Gone Bad. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_855_2" /* GXT: Score over 2000000 points in a single game of Space Monkey 3: Bananas Gone Bad. */;
			}
			else
			{
				return "AWS_855_1" /* GXT: Score over 1500000 points in a single game of Space Monkey 3: Bananas Gone Bad. */;
			}
			break;
		case 97:
			if (iParam1 == 5)
			{
				return "AWS_856_4" /* GXT: Score over 40000 points in a single play of Penetrator. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_856_3" /* GXT: Score over 20000 points in a single play of Penetrator. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_856_2" /* GXT: Score over 10000 points in a single play of Penetrator. */;
			}
			else
			{
				return "AWS_856_1" /* GXT: Score over 5000 points in a single play of Penetrator. */;
			}
			break;
		case 99:
			if (iParam1 == 5)
			{
				return "AWS_936d" /* GXT: Dance to Keinemusik's set at the Cayo Perico beach party for 60 minutes. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_936c" /* GXT: Dance to Keinemusik's set at the Cayo Perico beach party for 30 minutes. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_936b" /* GXT: Dance to Keinemusik's set at the Cayo Perico beach party for 15 minutes. */;
			}
			else
			{
				return "AWS_936a" /* GXT: Dance to Keinemusik's set at the Cayo Perico beach party for 5 minutes. */;
			}
			break;
		case 100:
			if (iParam1 == 5)
			{
				return "AWS_937d" /* GXT: Steal the loot from 50 treasure chests found on Cayo Perico. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_937c" /* GXT: Steal the loot from 20 treasure chests found on Cayo Perico. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_937b" /* GXT: Steal the loot from 10 treasure chests found on Cayo Perico. */;
			}
			else
			{
				return "AWS_937a" /* GXT: Steal the loot from 5 treasure chests found on Cayo Perico. */;
			}
			break;
		case 101:
			if (iParam1 == 5)
			{
				return "AWS_938d" /* GXT: Steal a total of $1,000,000 from hidden caches found around the San Andreas coast. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_938c" /* GXT: Steal a total of $750,000 from hidden caches found around the San Andreas coast. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_938b" /* GXT: Steal a total of $250,000 from hidden caches found around the San Andreas coast. */;
			}
			else
			{
				return "AWS_938a" /* GXT: Steal a total of $50,000 from hidden caches found around the San Andreas coast. */;
			}
			break;
		case 102:
			if (iParam1 == 5)
			{
				return "AWS_939d" /* GXT: Dance to Keinemusik's set in The Music Locker for 60 minutes. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_939c" /* GXT: Dance to Keinemusik's set in The Music Locker for 30 minutes. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_939b" /* GXT: Dance to Keinemusik's set in The Music Locker for 15 minutes. */;
			}
			else
			{
				return "AWS_939a" /* GXT: Dance to Keinemusik's set in The Music Locker for 5 minutes. */;
			}
			break;
		case 103:
			if (iParam1 == 5)
			{
				return "AWS_940d" /* GXT: Dance to Palms Trax set in The Music Locker for 60 minutes. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_940c" /* GXT: Dance to Palms Trax set in The Music Locker for 30 minutes. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_940b" /* GXT: Dance to Palms Trax set in The Music Locker for 15 minutes. */;
			}
			else
			{
				return "AWS_940a" /* GXT: Dance to Palms Trax set in The Music Locker for 5 minutes. */;
			}
			break;
		case 104:
			if (iParam1 == 5)
			{
				return "AWS_941d" /* GXT: Dance to Moodymann's set in The Music Locker for 60 minutes. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_941c" /* GXT: Dance to Moodymann's set in The Music Locker for 30 minutes. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_941b" /* GXT: Dance to Moodymann's set in The Music Locker for 15 minutes. */;
			}
			else
			{
				return "AWS_941a" /* GXT: Dance to Moodymann's set in The Music Locker for 5 minutes. */;
			}
			break;
		case 105:
			if (iParam1 == 5)
			{
				return "AWS_942d" /* GXT: Steal a total of $20,000,000 in secondary targets during The Cayo Perico Heist. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_942c" /* GXT: Steal a total of $10,000,000 in secondary targets during The Cayo Perico Heist. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_942b" /* GXT: Steal a total of $5,000,000 in secondary targets during The Cayo Perico Heist. */;
			}
			else
			{
				return "AWS_942a" /* GXT: Steal a total of $1,000,000 in secondary targets during The Cayo Perico Heist. */;
			}
			break;
		case 106:
			if (iParam1 == 5)
			{
				return "AWS_943d" /* GXT: Complete 50 prep missions as part of The Cayo Perico Heist. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_943c" /* GXT: Complete 20 prep missions as part of The Cayo Perico Heist. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_943b" /* GXT: Complete 10 prep missions as part of The Cayo Perico Heist. */;
			}
			else
			{
				return "AWS_943a" /* GXT: Complete 5 prep missions as part of The Cayo Perico Heist. */;
			}
			break;
		case 107:
			if (iParam1 == 5)
			{
				return "AWS_945d" /* GXT: Reach LS Car Meet Reputation Level 100. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_945c" /* GXT: Reach LS Car Meet Reputation Level 50. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_945b" /* GXT: Reach LS Car Meet Reputation Level 25. */;
			}
			else
			{
				return "AWS_945a" /* GXT: Reach LS Car Meet Reputation Level 5. */;
			}
			break;
		case 108:
			if (iParam1 == 5)
			{
				return "AWS_967d" /* GXT: Win 50 Sprints. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_967c" /* GXT: Win 25 Sprints. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_967b" /* GXT: Win 10 Sprints. */;
			}
			else
			{
				return "AWS_967a" /* GXT: Win 5 Sprints. */;
			}
			break;
		case 109:
			if (iParam1 == 5)
			{
				return "AWS_946d" /* GXT: Win 50 races in the Street Race Series. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_946c" /* GXT: Win 25 races in the Street Race Series. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_946b" /* GXT: Win 10 races in the Street Race Series. */;
			}
			else
			{
				return "AWS_946a" /* GXT: Win 5 races in the Street Race Series. */;
			}
			break;
		case 110:
			if (iParam1 == 5)
			{
				return "AWS_947d" /* GXT: Win 50 races in the Pursuit Series. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_947c" /* GXT: Win 25 races in the Pursuit Series. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_947b" /* GXT: Win 10 races in the Pursuit Series. */;
			}
			else
			{
				return "AWS_947a" /* GXT: Win 5 races in the Pursuit Series. */;
			}
			break;
		case 112:
			if (iParam1 == 5)
			{
				return "AWS_949d" /* GXT: Successfully mod and deliver 50 customer vehicles from your Auto Shop. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_949c" /* GXT: Successfully mod and deliver 25 customer vehicles from your Auto Shop. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_949b" /* GXT: Successfully mod and deliver 10 customer vehicles from your Auto Shop. */;
			}
			else
			{
				return "AWS_949a" /* GXT: Successfully mod and deliver 5 customer vehicles from your Auto Shop. */;
			}
			break;
		case 114:
			if (iParam1 == 5)
			{
				return "AWS_952d" /* GXT: Complete 40 Planning Work missions as leader as part of the Contracts for KDJ and Sessanta. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_952c" /* GXT: Complete 20 Planning Work missions as leader as part of the Contracts for KDJ and Sessanta. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_952b" /* GXT: Complete 10 Planning Work missions as leader as part of the Contracts for KDJ and Sessanta. */;
			}
			else
			{
				return "AWS_952a" /* GXT: Complete 5 Planning Work missions as leader as part of the Contracts for KDJ and Sessanta. */;
			}
			break;
		case 115:
			if (iParam1 == 5)
			{
				return "AWS_961d" /* GXT: Complete 100 Contracts for KDJ and Sessanta. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_961c" /* GXT: Complete 50 Contracts for KDJ and Sessanta. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_961b" /* GXT: Complete 25 Contracts for KDJ and Sessanta. */;
			}
			else
			{
				return "AWS_961a" /* GXT: Complete 5 Contracts for KDJ and Sessanta. */;
			}
			break;
		case 116:
			if (iParam1 == 5)
			{
				return "AWS_962d" /* GXT: Carry out over 30 headshots across all scenes in Camhedz. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_962c" /* GXT: Carry out over 20 headshots across all scenes in Camhedz. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_962b" /* GXT: Carry out over 10 headshots across all scenes in Camhedz. */;
			}
			else
			{
				return "AWS_962a" /* GXT: Carry out over 5 headshots across all scenes in Camhedz. */;
			}
			break;
		case 111:
			if (iParam1 == 5)
			{
				return "AWS_948d" /* GXT: Drive one of the test rides for 240 minutes inside the Test Track. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_948c" /* GXT: Drive one of the test rides for 120 minutes inside the Test Track. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_948b" /* GXT: Drive one of the test rides for 60 minutes inside the Test Track. */;
			}
			else
			{
				return "AWS_948a" /* GXT: Drive one of the test rides for 30 minutes inside the Test Track. */;
			}
			break;
		case 113:
			if (iParam1 == 5)
			{
				return "AWS_950d" /* GXT: Deliver 100 Exotic Exports Vehicles to the Docks for Sessanta's partner. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_950c" /* GXT: Deliver 50 Exotic Exports Vehicles to the Docks for Sessanta's partner. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_950b" /* GXT: Deliver 25 Exotic Exports Vehicles to the Docks for Sessanta's partner. */;
			}
			else
			{
				return "AWS_950a" /* GXT: Deliver 10 Exotic Exports Vehicles to the Docks for Sessanta's partner. */;
			}
			break;
		case 117:
			if (iParam1 == 5)
			{
				return "AWS_978d" /* GXT: Complete 50 Security Contracts. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_978c" /* GXT: Complete 25 Security Contracts. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_978b" /* GXT: Complete 15 Security Contracts. */;
			}
			else
			{
				return "AWS_978a" /* GXT: Complete 5 Security Contracts. */;
			}
			break;
		case 118:
			if (iParam1 == 5)
			{
				return "AWS_979d" /* GXT: Complete 50 Payphone Hits. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_979c" /* GXT: Complete 25 Payphone Hits. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_979b" /* GXT: Complete 15 Payphone Hits. */;
			}
			else
			{
				return "AWS_979a" /* GXT: Complete 5 Payphone Hits. */;
			}
			break;
		case 119:
			return "AWS_983" /* GXT: Watch Dr. Dre working in Record A Studios. */;
			break;
	}
	return "";
}

int func_119(int iParam0, int iParam1)//Position - 0xF3F7
{
	if (__LIB_2__::func_210(__LIB_1__::func_677(iParam0, -1), __LIB_0__::func_264(iParam0, 5, iParam1)))
	{
		return 5;
	}
	if (__LIB_2__::func_210(__LIB_1__::func_677(iParam0, -1), __LIB_0__::func_264(iParam0, 4, iParam1)))
	{
		return 5;
	}
	if (__LIB_2__::func_210(__LIB_1__::func_677(iParam0, -1), __LIB_0__::func_264(iParam0, 3, iParam1)))
	{
		return 4;
	}
	if (__LIB_2__::func_210(__LIB_1__::func_677(iParam0, -1), __LIB_0__::func_264(iParam0, 2, iParam1)))
	{
		return 3;
	}
	return 2;
}

int func_120(int iParam0, int iParam1)//Position - 0xF46C
{
	if (!__LIB_2__::func_210(__LIB_1__::func_677(iParam0, -1), __LIB_0__::func_264(iParam0, 2, iParam1)))
	{
		return 0;
	}
	if (!__LIB_2__::func_210(__LIB_1__::func_677(iParam0, -1), __LIB_0__::func_264(iParam0, 3, iParam1)))
	{
		return 2;
	}
	if (!__LIB_2__::func_210(__LIB_1__::func_677(iParam0, -1), __LIB_0__::func_264(iParam0, 4, iParam1)))
	{
		return 3;
	}
	if (!__LIB_2__::func_210(__LIB_1__::func_677(iParam0, -1), __LIB_0__::func_264(iParam0, 5, iParam1)))
	{
		return 4;
	}
	return 5;
}

void func_123(var uParam0, var uParam1)//Position - 0xF511
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	iVar0 = 12;
	iVar1 = uParam0->f_455;
	switch (uParam1->f_5)
	{
		case 0:
			iVar1 = iVar1;
			break;
		default:
			if (uParam1->f_5 < iLocal_110)
			{
				iVar1 = (iVar1 + (iVar0 * uParam1->f_5));
			}
			else
			{
				iVar1 = (iVar1 + (iVar0 * uParam1->f_5));
			}
			break;
	}
	if (__LIB_38__::func_199(Global_1646672.f_473[uParam0->f_455]) || func_130(Global_1646672.f_486[uParam0->f_455]))
	{
		bVar2 = false;
		bVar3 = false;
		if (__LIB_38__::func_199(Global_1646672.f_473[uParam0->f_455]))
		{
			bVar2 = func_129(Global_1646672.f_473[uParam0->f_455]);
			bVar3 = __LIB_1__::func_676(Global_1646672.f_473[uParam0->f_455], -1);
		}
		if (func_130(Global_1646672.f_486[uParam0->f_455]))
		{
			bVar2 = func_128(Global_1646672.f_486[uParam0->f_455]);
			if (func_125(Global_1646672.f_486[uParam0->f_455]))
			{
				bVar3 = true;
			}
		}
		if (!BitTest(Global_1646672.f_471, bVar2))
		{
			MISC::SET_BIT(&(Global_1646672.f_471), bVar2);
		}
		if (bVar3)
		{
			if (!BitTest(Global_1646672.f_472, bVar2))
			{
				MISC::SET_BIT(&(Global_1646672.f_472), bVar2);
			}
		}
	}
	iVar4 = uParam1->f_5 + 1;
	iVar5 = iLocal_110 + 1;
	__LIB_38__::func_198(0, iVar4, iVar5, "HUD_PAGE" /* GXT: Page ~1~ of ~1~ */, 0);
}

bool func_125(var uParam0)//Position - 0xF6C7
{
	var uVar0;
	int iVar1;
	uVar0 = __LIB_2__::func_565(uParam0);
	iVar1 = uParam0;
	return BitTest(uVar0, __LIB_0__::func_160(iVar1));
}

int func_128(int iParam0)//Position - 0xF7C5
{
	switch (iParam0)
	{
		case 117:
			return 13;
			break;
		case 118:
			return 14;
			break;
		case 119:
			return 18;
			break;
	}
	return 0;
}

int func_129(int iParam0)//Position - 0xF7FF
{
	switch (iParam0)
	{
		case 127:
			return 0;
			break;
		case 128:
			return 1;
			break;
		case 129:
			return 2;
			break;
		case 130:
			return 3;
			break;
		case 131:
			return 4;
			break;
		case 132:
			return 5;
			break;
		case 133:
			return 6;
			break;
		case 134:
			return 7;
			break;
		case 135:
			return 8;
			break;
		case 136:
			return 9;
			break;
		case 140:
			return 10;
			break;
		case 141:
			return 11;
			break;
		case 142:
			return 12;
			break;
		case 137:
			return 15;
			break;
		case 138:
			return 16;
			break;
		case 139:
			return 17;
			break;
	}
	return 0;
}

int func_130(int iParam0)//Position - 0xF8E7
{
	switch (iParam0)
	{
		case 117:
		case 118:
		case 119:
			return 1;
			break;
	}
	return 0;
}

int func_132(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0xF987
{
	int iVar0;
	int iVar1;
	iVar0 = (*uParam0 + *uParam1 * 4);
	switch (iParam3)
	{
		case 188:
			if (iParam2 == iLocal_110)
			{
				if (iVar0 < 0 || iVar0 > (iLocal_111 - 1))
				{
					iVar1 = 0;
					while (iVar1 <= 3)
					{
						if (iVar0 < 0 || iVar0 > (iLocal_111 - 1))
						{
							*uParam1 = (3 - iVar1);
							iVar0 = (*uParam0 + *uParam1 * 4);
						}
						else
						{
							iVar1 = 3;
						}
						iVar1++;
					}
				}
			}
			break;
		case 187:
			if (iParam2 == iLocal_110)
			{
				if (iVar0 < 0 || iVar0 > (iLocal_111 - 1))
				{
					iVar1 = 0;
					while (iVar1 <= 3)
					{
						if (iVar0 < 0 || iVar0 > (iLocal_111 - 1))
						{
							*uParam1 = iVar1;
							iVar0 = (*uParam0 + *uParam1 * 4);
						}
						else
						{
							iVar1 = 3;
						}
						iVar1++;
					}
				}
			}
			break;
		case 189:
			break;
		case 190:
			if (iParam2 == iLocal_110)
			{
				if (*uParam0 == 0)
				{
					iVar0 = (*uParam0 + *uParam1 * 4);
					iVar1 = 0;
					while (iVar1 <= 3)
					{
						if (iVar0 > (iLocal_111 - 1))
						{
							*uParam1 = (*uParam1 - 1);
							iVar0 = (*uParam0 + *uParam1 * 4);
						}
						else
						{
							iVar1 = 3;
						}
						iVar1++;
					}
				}
				else if (iVar0 > (iLocal_111 - 1))
				{
					if (*uParam0 > 0)
					{
						*uParam0 = (*uParam0 - 1);
					}
					else
					{
						*uParam0 = 0;
					}
					iVar0 = (*uParam0 + *uParam1 * 4);
				}
			}
			break;
	}
	return iVar0;
}

void func_133(var uParam0, var uParam1)//Position - 0xFAF1
{
	if (uParam1->f_5 > iLocal_110)
	{
		func_142(uParam0);
		uParam1->f_5 = 0;
		uParam1->f_1 = 0;
	}
}

void func_135()//Position - 0xFB23
{
	func_136();
	__LIB_38__::func_198(0, -1, -1, 0, 0);
}

void func_136()//Position - 0xFB38
{
	__LIB_38__::func_221(0);
}

void func_139(var uParam0)//Position - 0xFBAC
{
	uParam0->f_463 = 1;
}

void func_140(var uParam0)//Position - 0xFBBA
{
	uParam0->f_462 = 1;
}

void func_141(int iParam0, var uParam1)//Position - 0xFBC8
{
	uParam1->f_455 = iParam0;
	uParam1->f_456 = iParam0;
}

void func_142(var uParam0)//Position - 0xFBDE
{
	func_143(uParam0);
	uParam0->f_460 = 1;
}

void func_143(var uParam0)//Position - 0xFBF2
{
	struct<499> Var0;
	Var0.f_1 = 12;
	Var0.f_14 = 12;
	Var0.f_111 = 12;
	Var0.f_208 = 12;
	Var0.f_221 = 12;
	Var0.f_234 = 12;
	Var0.f_331 = 12;
	Var0.f_428 = 12;
	Var0.f_441 = 12;
	Var0.f_473 = 12;
	Var0.f_486 = 12;
	*uParam0 = { Var0 };
}

void func_144(var uParam0)//Position - 0xFC5B
{
	uParam0->f_429 = 1;
}

void func_145(int iParam0, var uParam1)//Position - 0xFC69
{
	uParam1->f_426 = iParam0;
}

void func_146(var uParam0)//Position - 0xFC78
{
	func_147(uParam0);
	uParam0->f_428 = 1;
}

void func_147(var uParam0)//Position - 0xFC8C
{
	struct<430> Var0;
	Var0.f_1 = 18;
	Var0.f_20 = 18;
	Var0.f_309 = 18;
	Var0.f_328 = 18;
	Var0.f_347 = 18;
	Var0.f_366 = 18;
	Var0.f_385 = 18;
	Var0.f_404 = 18;
	*uParam0 = { Var0 };
}

