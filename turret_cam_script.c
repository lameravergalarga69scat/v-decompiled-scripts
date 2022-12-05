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
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
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
	int iLocal_50 = 0;
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
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	struct<96> Local_64 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 3, 3, 3, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<62> Local_65 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0 } ;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
#endregion
void __EntryFunction__()//Position - 0x0
{
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
	sLocal_20 = "NULL";
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
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_134(&uScriptParam_68);
	}
	else
	{
		func_125();
	}
	while (true)
	{
		__LIB_0__.func_671();
		PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
		PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
		if (__LIB_6__.func_949())
		{
			func_125();
		}
		if (func_115())
		{
			func_125();
		}
		func_1();
	}
}

void func_1()//Position - 0xBA
{
	__LIB_8__.func_611(0);
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
	switch (Local_65.f_16)
	{
		case 0:
			func_106();
			break;
		case 1:
			func_2();
			break;
	}
}

void func_2()//Position - 0xEF
{
	if (BitTest(Global_2788035, 1))
	{
		MISC::CLEAR_BIT(&Global_2788035, 1);
		func_96(Global_2788034);
	}
	if (Local_65.f_61 != Global_2788165)
	{
		Local_65.f_61 = { Global_2788165 };
	}
	else
	{
		Local_65.f_61.f_1 = 0;
		Local_65.f_61.f_2 = 0;
	}
	if (!HUD::IS_PAUSE_MENU_ACTIVE() && !__LIB_0__.func_661())
	{
		func_50();
		func_41();
		func_37();
		func_34();
		func_33();
		func_13();
	}
	func_10(&(Local_64.f_67), BitTest(Local_65.f_60, 3));
	func_3(&(Local_65.f_38), &(Local_65.f_39));
	MISC::CLEAR_BIT(&Global_2788035, 4);
	MISC::CLEAR_BIT(&(Local_65.f_60), 1);
	MISC::CLEAR_BIT(&(Local_65.f_60), 2);
	MISC::CLEAR_BIT(&(Local_65.f_60), 3);
	MISC::CLEAR_BIT(&(Local_65.f_60), 6);
	MISC::CLEAR_BIT(&(Local_65.f_60), 7);
}

void func_3(var uParam0, var uParam1)//Position - 0x1B3
{
	struct<3> Var0;
	int iVar1;
	struct<3> Var2;
	__LIB_6__.func_359();
	Var0 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
	if ((((HUD::IS_PAUSE_MENU_ACTIVE() || __LIB_2__.func_368()) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/)) || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/)) || PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/))
	{
		HUD::SET_FAKE_PAUSEMAP_PLAYER_POSITION_THIS_FRAME(Var0.f_0, Var0.f_1);
		HUD::SET_FAKE_GPS_PLAYER_POSITION_THIS_FRAME(Var0.f_0, Var0.f_1, 0);
		if (HUD::IS_PAUSE_MENU_ACTIVE() || __LIB_2__.func_368())
		{
			if (HUD::DOES_BLIP_EXIST(HUD::GET_MAIN_PLAYER_BLIP_ID()))
			{
				HUD::SET_BLIP_ALPHA(HUD::GET_MAIN_PLAYER_BLIP_ID(), 255);
			}
		}
	}
	else if (HUD::DOES_BLIP_EXIST(HUD::GET_MAIN_PLAYER_BLIP_ID()))
	{
		HUD::SET_BLIP_ALPHA(HUD::GET_MAIN_PLAYER_BLIP_ID(), 0);
	}
	HUD::LOCK_MINIMAP_POSITION(Var0.f_0, Var0.f_1);
	iVar1 = CAM::GET_RENDERING_CAM();
	if (CAM::DOES_CAM_EXIST(iVar1))
	{
		CAM::SET_CAM_CONTROLS_MINI_MAP_HEADING(iVar1, true);
	}
	Var2 = { CAM::GET_FINAL_RENDERED_CAM_ROT(0) };
	Var2 = { __LIB_9__.func_240(Var2) };
	if (!HUD::DOES_BLIP_EXIST(*uParam0))
	{
		*uParam1 = __LIB_0__.func_392(Var0, 0);
		HUD::SET_BLIP_SPRITE(*uParam1, 425);
		HUD::SHOW_HEIGHT_ON_BLIP(*uParam1, false);
		HUD::SET_BLIP_DISPLAY(*uParam1, 4);
		HUD::SET_BLIP_COLOUR(*uParam1, __LIB_1__.func_48(2));
		HUD::SET_BLIP_SHOW_CONE(*uParam1, true, 11);
		HUD::SET_BLIP_SCALE(*uParam1, 0.54f);
		HUD::SET_BLIP_PRIORITY(*uParam1, 13 + 1);
		*uParam0 = __LIB_0__.func_392(Var0, 0);
		HUD::SET_BLIP_SPRITE(*uParam0, 425);
		HUD::SHOW_HEIGHT_ON_BLIP(*uParam0, false);
		HUD::SET_BLIP_DISPLAY(*uParam0, 4);
		HUD::SET_BLIP_COLOUR(*uParam0, __LIB_1__.func_48(18));
		HUD::SET_BLIP_SHOW_CONE(*uParam0, true, 11);
		HUD::SET_BLIP_SCALE(*uParam0, 0.44f);
		HUD::SET_BLIP_PRIORITY(*uParam0, 13 + 1);
		HUD::SET_BLIP_HIDDEN_ON_LEGEND(*uParam0, true);
		HUD::SET_BLIP_ROTATION(*uParam0, SYSTEM::ROUND(MISC::GET_HEADING_FROM_VECTOR_2D(Var2.f_0, Var2.f_1)));
		HUD::SET_BLIP_HIDDEN_ON_LEGEND(*uParam1, true);
		HUD::SET_BLIP_ROTATION(*uParam1, SYSTEM::ROUND(MISC::GET_HEADING_FROM_VECTOR_2D(Var2.f_0, Var2.f_1)));
	}
	else
	{
		HUD::SET_BLIP_COORDS(*uParam0, Var0);
		HUD::SET_BLIP_ROTATION(*uParam0, SYSTEM::ROUND(MISC::GET_HEADING_FROM_VECTOR_2D(Var2.f_0, Var2.f_1)));
		HUD::SET_BLIP_DISPLAY(*uParam0, 5);
		HUD::SET_BLIP_COORDS(*uParam1, Var0);
		HUD::SET_BLIP_ROTATION(*uParam1, SYSTEM::ROUND(MISC::GET_HEADING_FROM_VECTOR_2D(Var2.f_0, Var2.f_1)));
		HUD::SET_BLIP_DISPLAY(*uParam1, 5);
	}
}

void func_10(char* sParam0, bool bParam1)//Position - 0x6CE
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (__LIB_0__.func_1(sParam0))
		{
			HUD::CLEAR_HELP(true);
		}
		return;
	}
	if (!__LIB_0__.func_1(sParam0))
	{
		HUD::CLEAR_HELP(true);
		__LIB_0__.func_187(sParam0);
	}
}

void func_13()//Position - 0x736
{
	if (BitTest(Global_2788035, 5))
	{
		MISC::CLEAR_BIT(&Global_2788035, 5);
		Local_65.f_35 = 0;
	}
	func_14(&(Local_64.f_24), &(Local_65.f_35));
}

void func_14(var uParam0, var uParam1)//Position - 0x761
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (*uParam0 > 0)
	{
		bVar0 = __LIB_7__.func_161(0, -1, 0);
		if (bVar0)
		{
			if ((!*uParam1 || PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/)) || PAD::HAVE_CONTROLS_CHANGED(0 /*PLAYER_CONTROL*/))
			{
				__LIB_4__.func_222(-1);
				iVar1 = 0;
				while (iVar1 < *uParam0)
				{
					iVar2 = uParam0->f_34[iVar1];
					if (iVar2 < 32)
					{
						__LIB_4__.func_221(iVar2, &(uParam0->f_1[iVar1 /*4*/]), -1);
					}
					else
					{
						iVar3 = (iVar2 - 32);
						__LIB_1__.func_345(iVar3, &(uParam0->f_1[iVar1 /*4*/]), -1, 0);
					}
					iVar1++;
				}
				*uParam1 = 1;
			}
			__LIB_0__.func_660(1);
			__LIB_18__.func_365(0, -1, 0, 1, 0, 0, 1, 1, 0);
		}
	}
}

void func_33()//Position - 0x137B
{
	int iVar0;
	if (!BitTest(Local_65.f_60, 7))
	{
		iVar0 = GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX();
		if (Local_65.f_56 != iVar0)
		{
			GRAPHICS::SET_TIMECYCLE_MODIFIER("eyeinthesky");
			Local_65.f_56 = GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX();
		}
	}
}

void func_34()//Position - 0x13AB
{
	if (BitTest(Local_65.f_60, 6))
	{
		if (BitTest(Local_65.f_60, 5))
		{
			func_36();
		}
	}
	else if (!BitTest(Local_65.f_60, 5) && !MISC::IS_STRING_NULL_OR_EMPTY(&(Local_64.f_80)))
	{
		func_35(&(Local_64.f_80));
	}
}

void func_35(char* sParam0)//Position - 0x13EC
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (BitTest(Local_65.f_60, 5))
	{
	}
	else
	{
		PAD::INIT_PC_SCRIPTED_CONTROLS(sParam0);
		MISC::SET_BIT(&(Local_65.f_60), 5);
	}
}

void func_36()//Position - 0x141C
{
	if (BitTest(Local_65.f_60, 5))
	{
		PAD::SHUTDOWN_PC_SCRIPTED_CONTROLS();
		MISC::CLEAR_BIT(&(Local_65.f_60), 5);
	}
}

void func_37()//Position - 0x143D
{
	struct<3> Var0;
	if (Local_64.f_17 == 4)
	{
		return;
	}
	if (BitTest(Local_65.f_60, 1))
	{
		return;
	}
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Local_65.f_36))
	{
		Local_65.f_36 = GRAPHICS::REQUEST_SCALEFORM_MOVIE(Local_64.f_86.f_1);
		return;
	}
	Var0 = { CAM::GET_CAM_ROT(Local_65.f_0, 2) };
	switch (Local_64.f_17)
	{
		case 1:
		case 2:
		case 3:
			if (!Local_65.f_37)
			{
				Local_65.f_37 = 1;
				__LIB_31__.func_817(Local_65.f_36, Local_64.f_20);
				__LIB_31__.func_816(Local_65.f_36, Local_64.f_20.f_1, Local_64.f_20.f_2, Local_64.f_20.f_3);
			}
		case 0:
			__LIB_31__.func_815(Local_65.f_36, 0f, CAM::GET_CAM_FOV(Local_65.f_0), Local_64.f_4, Local_64.f_5, Var0.f_2);
			break;
	}
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(0);
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Local_65.f_36, 255, 255, 255, 0, 0);
}

void func_41()//Position - 0x1582
{
	struct<4> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	if (Local_64.f_94 != 0)
	{
		Local_65.f_4 = { ENTITY::GET_ENTITY_COORDS(Local_64.f_95, true) };
		Local_65.f_4.f_3 = { ENTITY::GET_ENTITY_ROTATION(Local_64.f_95, 2) };
	}
	if (!BitTest(Local_65.f_60, 2))
	{
		Var0 = { func_46(Local_65.f_0, &(Local_65.f_1), Local_64, Local_64.f_6.f_1, Local_64.f_6) };
	}
	Var1 = { Local_64.f_91 + Local_65.f_1 };
	Var2 = { __LIB_0__.func_298(Local_64.f_71, Var1.f_2) };
	Var3 = { Local_64.f_88 + Var2 };
	switch (Local_64.f_94)
	{
		case 0:
			func_44(Local_65.f_0, Var3, Var1);
			break;
		case 1:
			func_43(Local_65.f_0, Var3, Var1, Local_64.f_95);
			break;
	}
	func_42(Local_65.f_40, Local_65.f_40.f_2, Local_65.f_40.f_8, Local_65.f_40.f_3, Local_65.f_40.f_9, Local_65.f_40.f_4, Local_65.f_40.f_10, Local_65.f_40.f_5, Local_65.f_40.f_11, Local_65.f_40.f_6, Local_65.f_40.f_12, Local_65.f_40.f_7, Var0.f_0, Var0.f_1, Local_65.f_61.f_1, Local_65.f_61.f_2 > 0);
	Local_65.f_4.f_6 = { CAM::GET_CAM_COORD(Local_65.f_0) };
	Local_65.f_4.f_9 = { CAM::GET_CAM_ROT(Local_65.f_0, 2) };
}

void func_42(char* sParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, char* sParam7, int iParam8, char* sParam9, int iParam10, char* sParam11, float fParam12, struct<3> Param13, int iParam14, bool bParam15)//Position - 0x16C2
{
	float fVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	float fVar4;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0) || AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam0, false, -1))
	{
		if (fParam12 != 0f)
		{
			if (iParam4 != -1)
			{
				if (AUDIO::HAS_SOUND_FINISHED(iParam4))
				{
					AUDIO::PLAY_SOUND_FRONTEND(iParam4, sParam5, sParam1, true);
				}
				AUDIO::SET_VARIABLE_ON_SOUND(iParam4, "Ctrl", fParam12);
				if (fParam12 < 0f)
				{
					AUDIO::SET_VARIABLE_ON_SOUND(iParam4, "Dir", -1f);
				}
				else
				{
					AUDIO::SET_VARIABLE_ON_SOUND(iParam4, "Dir", 1f);
				}
			}
		}
		else if (iParam4 != -1)
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iParam4))
			{
				AUDIO::STOP_SOUND(iParam4);
			}
		}
		fVar0 = SYSTEM::VMAG(Param13);
		if (fVar0 > 0f)
		{
			if (iParam2 != -1)
			{
				if (AUDIO::HAS_SOUND_FINISHED(iParam2))
				{
					AUDIO::PLAY_SOUND_FRONTEND(iParam2, sParam3, sParam1, true);
				}
				AUDIO::SET_VARIABLE_ON_SOUND(iParam2, "Ctrl", fVar0);
			}
		}
		else if (iParam2 != -1)
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iParam2))
			{
				AUDIO::STOP_SOUND(iParam2);
			}
		}
		if (iParam6 != -1)
		{
			if (AUDIO::HAS_SOUND_FINISHED(iParam6))
			{
				AUDIO::PLAY_SOUND_FRONTEND(iParam6, sParam7, sParam1, true);
			}
		}
		iVar1 = PLAYER::PLAYER_PED_ID();
		if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
		{
			iVar2 = PED::GET_VEHICLE_PED_IS_IN(iVar1, false);
		}
		else
		{
			iVar2 = iVar1;
		}
		if (iParam8 != -1)
		{
			bVar3 = bParam15;
			if (!bVar3)
			{
				fVar4 = SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(iVar2));
				bVar3 = (IntToFloat(iParam14) / fVar4) > 0.1f;
			}
			if (bVar3)
			{
				if (AUDIO::HAS_SOUND_FINISHED(iParam8))
				{
					AUDIO::PLAY_SOUND_FRONTEND(iParam8, sParam9, sParam9, true);
				}
			}
		}
		if (iParam10 != -1)
		{
			if ((IntToFloat(ENTITY::GET_ENTITY_HEALTH(iVar1)) / SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(iVar1))) < 0.15f || (IntToFloat(ENTITY::GET_ENTITY_HEALTH(iVar2)) / SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(iVar2))) < 0.15f)
			{
				if (AUDIO::HAS_SOUND_FINISHED(iParam10))
				{
					AUDIO::PLAY_SOUND_FRONTEND(iParam10, sParam11, sParam1, true);
				}
			}
			else if (!AUDIO::HAS_SOUND_FINISHED(iParam10))
			{
				AUDIO::STOP_SOUND(iParam10);
			}
		}
	}
}

void func_43(int iParam0, struct<3> Param1, struct<3> Param2, int iParam3)//Position - 0x1878
{
	CAM::ATTACH_CAM_TO_ENTITY(iParam0, iParam3, Param1, true);
	CAM::SET_CAM_ROT(iParam0, Param2 + ENTITY::GET_ENTITY_ROTATION(iParam3, 2), 2);
}

void func_44(int iParam0, struct<3> Param1, struct<3> Param2)//Position - 0x18A0
{
	CAM::SET_CAM_COORD(iParam0, Param1);
	CAM::SET_CAM_ROT(iParam0, Param2, 2);
}

struct<4> func_46(int iParam0, var uParam1, struct<6> Param2, float fParam3, float fParam4)//Position - 0x1901
{
	float fVar0;
	struct<4> Var1;
	float fVar2;
	struct<3> Var3;
	float fVar4;
	float fVar5;
	float fVar6;
	struct<3> Var7;
	struct<3> Var8;
	float fVar9;
	struct<3> Var10;
	bool bVar11;
	fVar0 = CAM::GET_CAM_FOV(iParam0);
	Var1.f_0 = -fVar0;
	Var1.f_1 = { -*uParam1 };
	fVar2 = PAD::GET_DISABLED_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 39 /*INPUT_SNIPER_ZOOM*/);
	Var3 = { -Vector(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 290 /*INPUT_SCALED_LOOK_LR*/), 0f, PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 291 /*INPUT_SCALED_LOOK_UD*/)) };
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		fParam3 = (fParam3 * 8f);
	}
	else
	{
		if (MISC::ABSF(fVar2) < 0.06f)
		{
			fVar2 = 0f;
		}
		if (SYSTEM::VMAG(Var3) < 0.06f)
		{
			Var3 = { 0f, 0f, 0f };
		}
	}
	fVar4 = MISC::GET_FRAME_TIME();
	fVar5 = __LIB_0__.func_301((fVar0 + ((fVar2 * fParam4) * fVar4)), Param2.f_4, Param2.f_5);
	CAM::SET_CAM_FOV(iParam0, fVar5);
	CAM::SET_CAM_NEAR_CLIP(iParam0, 0.01f);
	fVar6 = ((fVar5 - 5f) / 42f);
	CAM::SET_GAMEPLAY_CAM_MOTION_BLUR_SCALING_THIS_UPDATE(1f);
	GRAPHICS::SET_DISTANCE_BLUR_STRENGTH_OVERRIDE(fVar6);
	Var7.f_0 = Param2.f_2;
	Var7.f_1 = 0f;
	Var7.f_2 = Param2.f_0;
	Var8.f_0 = Param2.f_3;
	Var8.f_1 = 0f;
	Var8.f_2 = Param2.f_1;
	fVar9 = (((fVar4 * fVar5) * fParam3) * (1f + ((fVar5 - Param2.f_4) / (Param2.f_5 - Param2.f_4))));
	Var10 = { Var3 };
	Var10.f_2 = (Var10.f_2 * fVar9);
	Var10.f_0 = (Var10.f_0 * fVar9);
	*uParam1 = { *uParam1 + Var10 };
	bVar11 = Var7.f_2 > Var8.f_2;
	if (bVar11)
	{
		*uParam1 = __LIB_0__.func_301(*uParam1, Var7.f_0, Var8.f_0);
		uParam1->f_1 = __LIB_0__.func_301(uParam1->f_1, Var7.f_1, Var8.f_1);
		uParam1->f_2 = __LIB_2__.func_365(uParam1->f_2);
	}
	else
	{
		*uParam1 = { __LIB_6__.func_715(*uParam1, Var7, Var8) };
	}
	Var1.f_0 = (Var1.f_0 + fVar5);
	Var1.f_1 = { Var1.f_1 + *uParam1 };
	return Var1;
}

void func_50()//Position - 0x1B43
{
	switch (Local_64.f_8.f_1)
	{
		case 1:
			func_85();
			break;
		case 2:
			func_70();
			break;
		case 3:
			func_51();
			break;
	}
}

void func_51()//Position - 0x1B7D
{
	var uVar0;
	var uVar1;
	struct<3> Var2;
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("am_mp_drone")) < 1)
	{
		if (!Local_65.f_29.f_5)
		{
			Local_65.f_29.f_5 = 1;
		}
		if (!func_65(4, 0f, 0f, 0f, Local_65.f_4.f_6, 0f, 0f, 0f))
		{
			if (func_64())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			}
			return;
		}
	}
	if (Local_65.f_29)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (Local_65.f_29.f_1)
			{
				if (__LIB_4__.func_81(PLAYER::PLAYER_ID()))
				{
					CAM::DO_SCREEN_FADE_IN(250);
					AUDIO::PLAY_SOUND_FROM_COORD(Local_65.f_40.f_13.f_2, Local_65.f_40.f_13.f_1, Local_65.f_29.f_2, Local_65.f_40.f_13, true, 500, false);
					Local_65.f_29.f_1 = 0;
					Local_65.f_29 = 0;
				}
			}
			else
			{
				Local_65.f_29.f_1 = 1;
				__LIB_0__.func_495(&(Local_65.f_17), 0, 0);
				MISC::SET_BIT(&Global_2788035, 0);
				func_58(3f, 100f, &(Local_65.f_29.f_2), &uVar0, &uVar1, &Var2);
				__LIB_31__.func_818(1);
				__LIB_22__.func_496(Local_65.f_29.f_2, Var2);
			}
		}
	}
	if (__LIB_0__.func_93() || Local_65.f_29)
	{
		MISC::SET_BIT(&(Local_65.f_60), 1);
		MISC::SET_BIT(&(Local_65.f_60), 2);
		MISC::SET_BIT(&(Local_65.f_60), 3);
		if (!Local_65.f_29)
		{
			MISC::SET_BIT(&(Local_65.f_60), 6);
			MISC::SET_BIT(&(Local_65.f_60), 7);
		}
		return;
	}
	if (func_64())
	{
		if (__LIB_2__.func_47(&(Local_65.f_17), Local_64.f_8.f_2, 0))
		{
			Local_65.f_29 = 1;
			CAM::DO_SCREEN_FADE_OUT(250);
		}
		else
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
		}
	}
}

void func_58(float fParam0, float fParam1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x1E78
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	int iVar4;
	float fVar5;
	int iVar6;
	float fVar7;
	if (Local_64.f_74 == 0)
	{
		*uParam5 = { CAM::GET_CAM_ROT(Local_65.f_0, 2) };
		*uParam4 = { __LIB_9__.func_240(*uParam5) };
		*uParam2 = { Local_65.f_4.f_6 + Vector(fParam0, fParam0, fParam0) * *uParam4 };
		*uParam3 = { func_60(*uParam2, fParam1) };
	}
	else
	{
		Var0 = { __LIB_9__.func_240(CAM::GET_CAM_ROT(Local_65.f_0, 2)) };
		Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_64.f_95, Local_64.f_88) };
		Var2 = { ENTITY::GET_ENTITY_BONE_POSTION(Local_64.f_95, Local_64.f_74.f_1[0]) };
		Var3 = { Var2 - Var1 };
		*uParam2 = { Var2 };
		iVar4 = 0;
		fVar5 = __LIB_0__.func_156(Var3, Var0);
		iVar6 = 1;
		while (iVar6 <= (Local_64.f_74 - 1))
		{
			Var2 = { ENTITY::GET_ENTITY_BONE_POSTION(Local_64.f_95, Local_64.f_74.f_1[iVar6]) };
			Var3 = { Var2 - Var1 };
			fVar7 = __LIB_0__.func_156(Var3, Var0);
			if (fVar7 > fVar5)
			{
				fVar5 = fVar7;
				iVar4 = iVar6;
				*uParam2 = { Var2 };
			}
			iVar6++;
		}
		*uParam5 = { ENTITY::GET_ENTITY_BONE_ROTATION(Local_64.f_95, Local_64.f_74.f_1[iVar4]) };
		*uParam4 = { __LIB_9__.func_240(*uParam5) };
		*uParam2 = { *uParam2 + Vector(fParam0, fParam0, fParam0) * *uParam4 };
		*uParam3 = { *uParam2 + Vector(fParam1, fParam1, fParam1) * *uParam4 };
	}
}

Vector3 func_60(struct<3> Param0, float fParam1)//Position - 0x1FE6
{
	struct<3> Var0;
	struct<3> Var1;
	Var0 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
	Var1 = { __LIB_9__.func_240(Var0) };
	return Param0 + Vector(fParam1, fParam1, fParam1) * Var1;
}

bool func_64()//Position - 0x207D
{
	return (BitTest(Global_2788035, 4) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 229 /*INPUT_SCRIPT_RT*/));
}

int func_65(int iParam0, struct<3> Param1, struct<3> Param2, struct<3> Param3)//Position - 0x2098
{
	struct<9> Var0;
	if (__LIB_3__.func_764())
	{
		if (!__LIB_0__.func_649(&uLocal_48))
		{
			__LIB_0__.func_580(&uLocal_48, 0, 0);
		}
		else if (__LIB_2__.func_47(&uLocal_48, 8000, 0))
		{
			__LIB_0__.func_579(&uLocal_48);
			__LIB_7__.func_352(0);
		}
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(iLocal_50) && !SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("am_mp_drone")))
	{
		SCRIPT::REQUEST_SCRIPT("AM_MP_DRONE");
	}
	if ((SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("am_mp_drone")) && !SCRIPT::IS_THREAD_ACTIVE(iLocal_50)) && !__LIB_3__.func_764())
	{
		Var0.f_1 = -1;
		Var0.f_0 = 0;
		Var0.f_2 = { Param1 };
		Var0.f_5 = { Param2 };
		Var0.f_8 = { Param3 };
		Var0.f_1 = iParam0;
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("am_mp_drone")) < 1)
		{
			if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE("AM_MP_DRONE", Var0.f_0, true, 0))
			{
				iLocal_50 = SYSTEM::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(joaat("am_mp_drone"), &Var0, 12, 1424);
				SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("am_mp_drone"));
				__LIB_0__.func_579(&uLocal_48);
			}
			else
			{
				return 1;
			}
		}
	}
	else if (SCRIPT::IS_THREAD_ACTIVE(iLocal_50) && !__LIB_3__.func_764())
	{
		return 1;
	}
	return 0;
}

void func_70()//Position - 0x2212
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var5;
	func_77();
	if (Local_65.f_22 != -1)
	{
		bVar0 = __LIB_2__.func_47(&(Local_65.f_22.f_2), 2000, 0);
		if (bVar0)
		{
			if (ENTITY::IS_ENTITY_A_VEHICLE(Local_65.f_22.f_4))
			{
				iVar2 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Local_65.f_22.f_4);
				VEHICLE::SET_VEHICLE_HOMING_LOCKEDONTO_STATE(iVar2, 2);
			}
			__LIB_6__.func_352(&(Local_65.f_22.f_5));
			func_75(&(Local_65.f_22.f_6), "Bleep", "DLC_IE_Steal_EITS_Sounds", 1);
			iVar1 = 6;
		}
		else
		{
			if (ENTITY::IS_ENTITY_A_VEHICLE(Local_65.f_22.f_4))
			{
				iVar3 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Local_65.f_22.f_4);
				VEHICLE::SET_VEHICLE_HOMING_LOCKEDONTO_STATE(iVar3, 1);
			}
			func_75(&(Local_65.f_22.f_5), "VULKAN_LOCK_ON_AMBER", 0, 1);
			iVar1 = 9;
		}
		func_72(Local_65.f_22.f_4, !bVar0, iVar1);
		if (func_64())
		{
			if (Local_64.f_16 != 0 && !STREAMING::HAS_MODEL_LOADED(Local_64.f_16))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				return;
			}
			if (bVar0 && __LIB_2__.func_47(&(Local_65.f_17), Local_64.f_8.f_2, 0))
			{
				__LIB_0__.func_495(&(Local_65.f_17), 0, 0);
				func_71(1f, &Var4, &Var5);
				MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(Var4, Var5, Local_64.f_8.f_3, true, Local_64.f_8, PLAYER::PLAYER_PED_ID(), true, true, -1f, Local_64.f_95, false, false, Local_65.f_22, true, 0, Local_64.f_94 != 0, 0);
				AUDIO::PLAY_SOUND_FROM_COORD(Local_65.f_40.f_13.f_2, Local_65.f_40.f_13.f_1, Var4, Local_65.f_40.f_13, true, 500, false);
			}
			else
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			}
		}
	}
}

void func_71(float fParam0, var uParam1, var uParam2)//Position - 0x2385
{
	var uVar0;
	func_58(0f, fParam0, uParam1, uParam2, &uVar0, &uVar0);
}

void func_72(int iParam0, bool bParam1, int iParam2)//Position - 0x239C
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("helicopterhud"))
	{
		return;
	}
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	Var2 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	GRAPHICS::SET_DRAW_ORIGIN(Var2, false);
	fVar0 = func_74(iParam0, Local_65.f_0, 0.5f);
	fVar0 = __LIB_0__.func_301(fVar0, 0.015f, fVar0);
	fVar1 = (fVar0 * GRAPHICS::GET_ASPECT_RATIO(false));
	HUD::GET_HUD_COLOUR(iParam2, &iVar3, &iVar4, &iVar5, &iVar6);
	iVar7 = __LIB_0__.func_138((bParam1 && (MISC::GET_GAME_TIMER() % 300) < 150), SYSTEM::CEIL((SYSTEM::TO_FLOAT(iVar6) / 4f)), iVar6);
	GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_outline", 0f, 0f, fVar0, fVar1, 0f, iVar3, iVar4, iVar5, iVar7, false, 0);
	GRAPHICS::CLEAR_DRAW_ORIGIN();
}

float func_74(int iParam0, int iParam1, float fParam2)//Position - 0x2460
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	Var0 = { CAM::GET_CAM_COORD(iParam1) };
	Var1 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var1, true);
	fVar3 = CAM::GET_CAM_FOV(iParam1);
	fVar4 = 1f;
	fVar5 = (fVar4 / MISC::TAN((fVar3 / 2f)));
	fVar6 = ((fVar5 * fParam2) / fVar2);
	return fVar6;
}

void func_75(var uParam0, char* sParam1, char* sParam2, bool bParam3)//Position - 0x24B0
{
	if (*uParam0 == -1)
	{
		*uParam0 = AUDIO::GET_SOUND_ID();
		AUDIO::PLAY_SOUND_FRONTEND(*uParam0, sParam1, sParam2, bParam3);
	}
}

void func_77()//Position - 0x24F4
{
	bool bVar0;
	var uVar1;
	if (func_84(&(Local_65.f_22.f_1), Local_65.f_22.f_4, &bVar0))
	{
		if (bVar0)
		{
			if (Local_65.f_22 != Local_65.f_22.f_4)
			{
				__LIB_0__.func_495(&(Local_65.f_22.f_2), 0, 0);
				__LIB_6__.func_352(&(Local_65.f_22.f_5));
				__LIB_6__.func_352(&(Local_65.f_22.f_6));
			}
			Local_65.f_22 = Local_65.f_22.f_4;
		}
		else
		{
			func_83();
			uVar1 = func_81(Local_64.f_8.f_4);
			Local_65.f_22.f_4 = uVar1;
		}
		if (Local_65.f_22.f_4 != -1)
		{
			func_79(Local_65.f_22.f_4);
		}
	}
	if (Local_65.f_22 != -1)
	{
		if (((Local_65.f_22.f_4 != Local_65.f_22 || ENTITY::IS_ENTITY_DEAD(Local_65.f_22, false)) || func_78(Local_65.f_22) > 0.04f) || SYSTEM::VMAG(ENTITY::GET_ENTITY_COORDS(Local_65.f_22, true) - Local_65.f_4.f_6) > Local_64.f_8.f_4)
		{
			func_83();
		}
	}
}

float func_78(int iParam0)//Position - 0x25DC
{
	struct<3> Var0;
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	if (!GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Var0, &Var0, &(Var0.f_1)))
	{
		return 1f;
	}
	Var0 = { Var0 - Vector(0f, 0.5f, 0.5f) };
	Var0.f_2 = 0f;
	return SYSTEM::VMAG2(Var0);
}

void func_79(int iParam0)//Position - 0x2626
{
	struct<3> Var0;
	struct<3> Var1;
	Var0 = { CAM::GET_CAM_COORD(Local_65.f_0) };
	Var1 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	Var1 = { Var1 + Vector(2f, 2f, 2f) * __LIB_0__.func_79(Var1 - Var0) };
	Local_65.f_22.f_1 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Var0, Var1, 511, 0, 4);
	if (Local_65.f_22.f_1 == 0)
	{
	}
}

int func_81(float fParam0)//Position - 0x26BC
{
	int iVar0;
	bool bVar1;
	int iVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	iVar0 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	bVar1 = iVar0 != -1;
	fVar3 = 0.005f;
	bVar4 = false;
	fVar5 = (fParam0 * fParam0);
	iVar6 = 0;
	while (iVar6 < 32)
	{
		iVar7 = iVar6;
		iVar8 = PLAYER::GET_PLAYER_PED(iVar7);
		if (((!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar7) || !__LIB_0__.func_154(iVar7, 1, 1)) || (bVar1 && PLAYER::GET_PLAYER_TEAM(iVar7) == iVar0)) || SYSTEM::VMAG2(Local_65.f_4.f_6 - ENTITY::GET_ENTITY_COORDS(iVar8, true)) > fVar5)
		{
		}
		else
		{
			fVar9 = func_78(iVar8);
			if (fVar9 < fVar3)
			{
				iVar2 = iVar7;
				fVar3 = fVar9;
				bVar4 = true;
			}
		}
		iVar6++;
	}
	if (bVar4)
	{
		iVar10 = PLAYER::GET_PLAYER_PED(iVar2);
		if (PED::IS_PED_IN_ANY_VEHICLE(iVar10, false))
		{
			iVar11 = PED::GET_VEHICLE_PED_IS_IN(iVar10, false);
			if (!ENTITY::IS_ENTITY_DEAD(iVar11, false))
			{
				return iVar11;
			}
		}
	}
	return -1;
}

void func_83()//Position - 0x27FF
{
	Local_65.f_22 = -1;
	Local_65.f_22.f_4 = -1;
	__LIB_6__.func_352(&(Local_65.f_22.f_5));
	__LIB_6__.func_352(&(Local_65.f_22.f_6));
}

int func_84(var uParam0, int iParam1, var uParam2)//Position - 0x2827
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	*uParam2 = 0;
	if (*uParam0 == 0 || iParam1 == -1)
	{
		return 1;
	}
	iVar4 = SHAPETEST::GET_SHAPE_TEST_RESULT(*uParam0, &iVar0, &uVar2, &uVar1, &iVar3);
	if (!ENTITY::IS_ENTITY_A_VEHICLE(iVar3))
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar3))
		{
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (PED::IS_PED_IN_ANY_VEHICLE(iVar5, false))
			{
				iVar3 = PED::GET_VEHICLE_PED_IS_IN(iVar5, false);
			}
		}
	}
	if (iVar4 == 2)
	{
		if (iVar0 != 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				*uParam2 = (iParam1 == iVar3 && !ENTITY::IS_ENTITY_DEAD(iVar3, false));
			}
		}
		return 1;
	}
	else if (iVar4 == 0)
	{
		return 1;
	}
	return 0;
}

void func_85()//Position - 0x28CA
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	int iVar5;
	struct<3> Var6;
	struct<3> Var7;
	var uVar8;
	struct<3> Var9;
	struct<3> Var10;
	PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 452, true);
	bVar0 = Local_64.f_13.f_1 > 0;
	bVar1 = (bVar0 && !__LIB_2__.func_47(&(Local_65.f_19), Local_64.f_13.f_2, 0));
	if (bVar0)
	{
		if (bVar1)
		{
			iVar2 = 6;
			sVar3 = "TC_RELOAD" /* GXT: RELOADING */;
			iVar5 = Local_64.f_13.f_2;
			iVar4 = __LIB_1__.func_295(&(Local_65.f_19), 0, 0);
		}
		else
		{
			iVar2 = 1;
			sVar3 = "TC_AMMO" /* GXT: AMMO */;
			iVar5 = Local_64.f_13.f_1;
			iVar4 = (iVar5 - Local_65.f_19.f_2);
		}
		__LIB_8__.func_79(iVar4, iVar5, sVar3, iVar2, -1, 11, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1);
	}
	if (bVar0 && !bVar1)
	{
		if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 225 /*INPUT_SCRIPT_RRIGHT*/))
		{
			func_90();
		}
	}
	if (!bVar1 && func_89())
	{
		Local_65.f_19.f_2 = (Local_65.f_19.f_2 + SYSTEM::ROUND((MISC::GET_FRAME_TIME() * 1000f)));
		if (__LIB_2__.func_47(&(Local_65.f_17), Local_64.f_8.f_2, 0))
		{
			__LIB_0__.func_495(&(Local_65.f_17), 0, 0);
			if (Local_64.f_13.f_1 > 0 && Local_65.f_19.f_2 >= Local_64.f_13.f_1)
			{
				__LIB_0__.func_495(&(Local_65.f_19), 0, 0);
				Local_65.f_19.f_2 = 0;
			}
			func_58(0f, Local_64.f_8.f_4, &Var6, &Var7, &uVar8, &Var9);
			Var10 = { Vector(Local_64.f_13, Local_64.f_13, Local_64.f_13) * func_86(0f, 0f, 0f, 1f) };
			Var10.f_1 = 0f;
			Var9 = { Var9 + Var10 };
			Var7 = { Var6 + FtoV(SYSTEM::VMAG(Var7 - Var6)) * __LIB_9__.func_240(Var9) };
			Var6.f_2 = (Var6.f_2 - 1f);
			MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(Var6, Var7, Local_64.f_8.f_3, false, Local_64.f_8, PLAYER::PLAYER_PED_ID(), true, true, -1f, Local_64.f_95, false, false, 0, true, 0, Local_64.f_94 != 0, 0);
			if (Local_65.f_40.f_13.f_2 != -1 && AUDIO::HAS_SOUND_FINISHED(Local_65.f_40.f_13.f_2))
			{
				AUDIO::PLAY_SOUND_FROM_COORD(Local_65.f_40.f_13.f_2, Local_65.f_40.f_13.f_1, Var6, Local_65.f_40.f_13, true, 500, false);
			}
		}
	}
	else if (Local_65.f_40.f_13.f_2 != -1 && !AUDIO::HAS_SOUND_FINISHED(Local_65.f_40.f_13.f_2))
	{
		AUDIO::STOP_SOUND(Local_65.f_40.f_13.f_2);
	}
}

Vector3 func_86(struct<3> Param0, float fParam1)//Position - 0x2B16
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	fVar1 = (fParam1 * fParam1);
	iVar2 = 0;
	while (iVar2 < 20)
	{
		Var0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-fParam1, fParam1), MISC::GET_RANDOM_FLOAT_IN_RANGE(-fParam1, fParam1), MISC::GET_RANDOM_FLOAT_IN_RANGE(-fParam1, fParam1) };
		if (SYSTEM::VDIST2(Var0, 0f, 0f, 0f) <= fVar1)
		{
			return Param0 + Var0;
		}
		iVar2++;
	}
	return __LIB_22__.func_673(Param0, fParam1);
}

bool func_89()//Position - 0x2BE7
{
	return (BitTest(Global_2788035, 4) || PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 229 /*INPUT_SCRIPT_RT*/));
}

void func_90()//Position - 0x2C02
{
	__LIB_0__.func_495(&(Local_65.f_19), 0, 0);
	Local_65.f_19.f_2 = 0;
}

void func_96(int* iParam0)//Position - 0x2F35
{
	int* iVar0;
	iVar0 = iParam0;
	func_103(iParam0);
	if (func_102(&iVar0, 2))
	{
		__LIB_0__.func_495(&(Local_65.f_17), 0, 0);
		Local_64.f_8 = { Global_2787947.f_8 };
	}
	if (func_102(&iVar0, 6))
	{
		Local_64.f_19 = Global_2787947.f_19;
	}
	if (func_102(&iVar0, 10))
	{
		Local_64.f_74 = { Global_2787947.f_74 };
	}
	if (func_102(&iVar0, 8))
	{
		Local_64.f_67 = { Global_2787947.f_67 };
	}
	if (func_102(&iVar0, 12))
	{
		Local_64.f_20 = { Global_2787947.f_20 };
	}
	func_97(iParam0);
}

void func_97(int* iParam0)//Position - 0x2FCE
{
	int* iVar0;
	iVar0 = iParam0;
	if (func_102(&iVar0, 0))
	{
	}
	if (func_102(&iVar0, 1))
	{
	}
	if (func_102(&iVar0, 2))
	{
		Local_64.f_8 = { Global_2787947.f_8 };
		switch (Local_64.f_8.f_1)
		{
			case 1:
				GRAPHICS::SET_PARTICLE_FX_BULLET_IMPACT_SCALE(1.5f);
				if (Local_65.f_19.f_2 == 0 && func_101())
				{
					__LIB_21__.func_463(&(Local_65.f_19), Local_64.f_13.f_2, 0, 0);
				}
				else
				{
					func_90();
				}
				break;
			case 2:
				Local_64.f_86 = "helicopterhud";
				Local_64.f_16 = Global_2787947.f_16;
				if (Local_64.f_16 != 0)
				{
					STREAMING::REQUEST_MODEL(Local_64.f_16);
				}
				break;
			default:
				break;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_64.f_86))
		{
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(Local_64.f_86, false);
		}
	}
	if (func_102(&iVar0, 4))
	{
		switch (Local_64.f_17)
		{
			case 4:
				Local_64.f_86.f_1 = "";
				break;
			case 0:
				Local_64.f_86.f_1 = "turret_cam";
				break;
			case 1:
				Local_64.f_86.f_1 = "ARENA_GUN_CAM_APOCALYPSE";
				break;
			case 2:
				Local_64.f_86.f_1 = "ARENA_GUN_CAM_SCIFI";
				break;
			case 3:
				Local_64.f_86.f_1 = "ARENA_GUN_CAM_CONSUMER";
				break;
			default:
				Local_64.f_86.f_1 = "UNDEFINED";
				break;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_64.f_86.f_1))
		{
			Local_65.f_36 = GRAPHICS::REQUEST_SCALEFORM_MOVIE(Local_64.f_86.f_1);
		}
	}
	if (func_102(&iVar0, 6))
	{
		Local_65.f_40.f_13.f_2 = -1;
		switch (Local_64.f_19)
		{
			case 0:
				Local_65.f_40.f_13 = "dlc_aw_Arena_Spectator_Turret_turret_Sounds";
				Local_65.f_40.f_13.f_1 = "Fire_MG_Loop";
				Local_65.f_40.f_13.f_2 = AUDIO::GET_SOUND_ID();
				break;
			case 1:
				Local_65.f_40.f_13 = "dlc_aw_Arena_Gun_Turret_Sounds";
				Local_65.f_40.f_13.f_1 = "Fire_MG_Loop";
				Local_65.f_40.f_13.f_2 = AUDIO::GET_SOUND_ID();
				break;
			case 2:
				Local_65.f_40.f_13 = "dlc_aw_Arena_Gun_Turret_Sounds";
				Local_65.f_40.f_13.f_1 = "Fire_Rockets_Oneshot";
				Local_65.f_40.f_13.f_2 = AUDIO::GET_SOUND_ID();
				break;
			case 3:
				Local_65.f_40.f_13 = "dlc_aw_Arena_Gun_Turret_Sounds";
				Local_65.f_40.f_13.f_1 = "Launch_Piloted_Missile";
				Local_65.f_40.f_13.f_2 = AUDIO::GET_SOUND_ID();
				break;
			default:
				Local_65.f_40.f_13 = 0;
				Local_65.f_40.f_13.f_1 = 0;
				Local_65.f_40.f_13.f_2 = -1;
				break;
			}
	}
	if (func_102(&iVar0, 5))
	{
		Local_65.f_40.f_10 = -1;
		Local_65.f_40.f_8 = -1;
		Local_65.f_40.f_9 = -1;
		Local_65.f_40.f_11 = -1;
		Local_65.f_40.f_12 = -1;
		switch (Local_64.f_18)
		{
			case 0:
				Local_65.f_40 = "SCRIPT\POLICE_CHOPPER_CAM";
				Local_65.f_40.f_1 = "dlc_aw_arena_turret_scene";
				Local_65.f_40.f_2 = "dlc_aw_Arena_Spectator_Turret_turret_Sounds";
				Local_65.f_40.f_5 = "Turret_Camera_Hum_Loop";
				Local_65.f_40.f_10 = AUDIO::GET_SOUND_ID();
				Local_65.f_40.f_3 = "Pan";
				Local_65.f_40.f_8 = AUDIO::GET_SOUND_ID();
				Local_65.f_40.f_4 = "Zoom";
				Local_65.f_40.f_9 = AUDIO::GET_SOUND_ID();
				break;
			case 1:
				Local_65.f_40 = "SCRIPT\POLICE_CHOPPER_CAM";
				Local_65.f_40.f_1 = "dlc_aw_arena_turret_scene";
				Local_65.f_40.f_2 = "dlc_aw_Arena_Gun_Turret_Sounds";
				Local_65.f_40.f_5 = "Turret_Camera_Hum_Loop";
				Local_65.f_40.f_10 = AUDIO::GET_SOUND_ID();
				Local_65.f_40.f_3 = "Pan";
				Local_65.f_40.f_8 = AUDIO::GET_SOUND_ID();
				Local_65.f_40.f_4 = "Zoom";
				Local_65.f_40.f_9 = AUDIO::GET_SOUND_ID();
				Local_65.f_40.f_6 = "Take_Damage";
				Local_65.f_40.f_11 = AUDIO::GET_SOUND_ID();
				Local_65.f_40.f_7 = "Low_Health_Warning";
				Local_65.f_40.f_12 = AUDIO::GET_SOUND_ID();
				break;
			default:
				Local_65.f_40 = 0;
				Local_65.f_40.f_2 = 0;
				Local_65.f_40.f_5 = 0;
				Local_65.f_40.f_10 = -1;
				Local_65.f_40.f_3 = 0;
				Local_65.f_40.f_8 = -1;
				Local_65.f_40.f_4 = 0;
				Local_65.f_40.f_9 = -1;
				break;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_65.f_40))
		{
			AUDIO::HINT_SCRIPT_AUDIO_BANK(Local_65.f_40, 0, -1);
		}
	}
	if (func_102(&iVar0, 3))
	{
	}
	if (func_102(&iVar0, 7))
	{
		if (Local_64.f_24 > 0)
		{
			__LIB_7__.func_161(0, -1, 0);
		}
	}
	if (func_102(&iVar0, 8))
	{
	}
	if (func_102(&iVar0, 9))
	{
	}
	if (func_102(&iVar0, 10))
	{
	}
	if (func_102(&iVar0, 11))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_64.f_80)))
		{
			func_35(&(Local_64.f_80));
		}
	}
	if (func_102(&iVar0, 12))
	{
	}
}

bool func_101()//Position - 0x3462
{
	return (!__LIB_0__.func_649(&(Local_65.f_19)) || __LIB_2__.func_47(&(Local_65.f_19), Local_64.f_13.f_2, 0));
}

int func_102(int* iParam0, bool bParam1)//Position - 0x3488
{
	if (BitTest(*iParam0, bParam1))
	{
		MISC::CLEAR_BIT(iParam0, bParam1);
		return 1;
	}
	return 0;
}

void func_103(int* iParam0)//Position - 0x34A6
{
	if (func_102(&iParam0, 0))
	{
	}
	if (func_102(&iParam0, 1))
	{
	}
	if (func_102(&iParam0, 2))
	{
		Local_65.f_37 = 0;
		switch (Local_64.f_8.f_1)
		{
			case 1:
				GRAPHICS::SET_PARTICLE_FX_BULLET_IMPACT_SCALE(1f);
				break;
			case 3:
				if (Local_65.f_29)
				{
					CAM::DO_SCREEN_FADE_IN(250);
				}
				Local_65.f_29.f_1 = 0;
				Local_65.f_29 = 0;
				if (Local_65.f_29.f_5)
				{
					Local_65.f_29.f_5 = 0;
					__LIB_7__.func_352(1);
				}
				break;
			case 2:
				func_83();
				if (Local_64.f_16 != 0)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_64.f_16);
					Local_64.f_16 = 0;
				}
				break;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_64.f_86))
		{
			GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(Local_64.f_86);
			Local_64.f_86 = "";
		}
	}
	if (func_102(&iParam0, 3))
	{
	}
	if (func_102(&iParam0, 4))
	{
		Local_65.f_37 = 0;
		Local_64.f_86.f_1 = "";
		if (Local_65.f_36 != -1)
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(Local_65.f_36));
			Local_65.f_36 = -1;
		}
	}
	if (func_102(&iParam0, 6))
	{
		__LIB_6__.func_352(&(Local_65.f_40.f_13.f_2));
	}
	if (func_102(&iParam0, 5))
	{
		AUDIO::STOP_AUDIO_SCENES();
		AUDIO::UNHINT_SCRIPT_AUDIO_BANK();
		if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_65.f_40))
		{
			AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK(Local_65.f_40);
		}
		__LIB_6__.func_352(&(Local_65.f_40.f_8));
		__LIB_6__.func_352(&(Local_65.f_40.f_9));
		__LIB_6__.func_352(&(Local_65.f_40.f_10));
		__LIB_6__.func_352(&(Local_65.f_40.f_11));
		__LIB_6__.func_352(&(Local_65.f_40.f_12));
	}
	if (func_102(&iParam0, 7))
	{
		if (Local_64.f_24 > 0)
		{
			__LIB_7__.func_49(1, -1);
		}
	}
	if (func_102(&iParam0, 8))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_64.f_67)) && __LIB_0__.func_1(&(Local_64.f_67)))
		{
			HUD::CLEAR_HELP(true);
		}
	}
	if (func_102(&iParam0, 9))
	{
	}
	if (func_102(&iParam0, 10))
	{
	}
	if (func_102(&iParam0, 11))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_64.f_80)))
		{
			func_36();
			StringCopy(&(Local_64.f_80), "", 16);
		}
	}
	if (func_102(&iParam0, 12))
	{
		Local_65.f_37 = 0;
	}
}

void func_106()//Position - 0x3776
{
	if ((!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT()) && BitTest(Local_64.f_84.f_1, 1))
	{
		CAM::DO_SCREEN_FADE_OUT(Local_64.f_84);
	}
	if (__LIB_2__.func_47(&(Local_65.f_58), Local_64.f_84, 0))
	{
		if (!BitTest(Local_64.f_84.f_1, 0) || func_108(Local_64.f_88, 0))
		{
			if (!CAM::DOES_CAM_EXIST(Local_65.f_0))
			{
				Local_65.f_0 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), true);
				MISC::SET_BIT(&(Local_65.f_60), 2);
				func_41();
				MISC::CLEAR_BIT(&(Local_65.f_60), 2);
				PLAYER::SET_SCRIPT_FIRE_POSITION(Local_65.f_4.f_6);
			}
			else
			{
				if (BitTest(Local_64.f_84.f_1, 0))
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
				}
				CAM::RENDER_SCRIPT_CAMS(true, false, 0, true, true, 0);
				func_3(&(Local_65.f_38), &(Local_65.f_39));
				func_37();
				if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_65.f_40.f_1))
				{
					AUDIO::START_AUDIO_SCENE(Local_65.f_40.f_1);
				}
				__LIB_0__.func_495(&(Local_65.f_17), 0, 0);
				MISC::SET_BIT(&Global_2788035, 3);
				func_107(1);
				if (GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() >= 0)
				{
					Local_65.f_57 = 1;
					GRAPHICS::PUSH_TIMECYCLE_MODIFIER();
				}
				GRAPHICS::SET_TIMECYCLE_MODIFIER("eyeinthesky");
				Local_65.f_56 = GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX();
				if (BitTest(Local_64.f_84.f_1, 2))
				{
					if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(800);
					}
				}
			}
		}
	}
}

void func_107(int iParam0)//Position - 0x38AD
{
	Local_65.f_16 = iParam0;
}

int func_108(struct<3> Param0, int iParam1)//Position - 0x38BB
{
	if (BitTest(Local_65.f_60, 0))
	{
		if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
		{
			return 1;
		}
	}
	else if (STREAMING::NEW_LOAD_SCENE_START_SPHERE(Param0, 100f, iParam1))
	{
		MISC::SET_BIT(&(Local_65.f_60), 0);
	}
	return 0;
}

int func_115()//Position - 0x3AB4
{
	if (Local_64.f_94 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_64.f_95) || ENTITY::IS_ENTITY_DEAD(Local_64.f_95, false))
		{
			return 1;
		}
	}
	if (!__LIB_0__.func_154(PLAYER::PLAYER_ID(), 1, 1))
	{
		return 1;
	}
	if (Global_2787945)
	{
		return 1;
	}
	return 0;
}

void func_125()//Position - 0x3C35
{
	int iVar0;
	int iVar1;
	if (Local_65.f_16 == 0 && BitTest(Local_64.f_84.f_1, 1))
	{
		CAM::DO_SCREEN_FADE_IN(250);
	}
	func_103(-1);
	if (__LIB_9__.func_241())
	{
		__LIB_6__.func_146(0);
	}
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	HUD::UNLOCK_MINIMAP_ANGLE();
	HUD::UNLOCK_MINIMAP_POSITION();
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (__LIB_0__.func_121(iVar0) && PED::IS_PED_IN_ANY_VEHICLE(iVar0, true))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
		{
			AUDIO::SET_VEHICLE_RADIO_ENABLED(iVar1, true);
			__LIB_35__.func_494(1);
		}
	}
	if (BitTest(Local_65.f_60, 4))
	{
		__LIB_0__.func_801();
	}
	PLAYER::REMOVE_SCRIPT_FIRE_POSITION();
	GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	if (Local_65.f_57)
	{
		GRAPHICS::POP_TIMECYCLE_MODIFIER();
	}
	__LIB_30__.func_415(Local_65.f_38);
	__LIB_30__.func_415(Local_65.f_39);
	Global_2787934 = 0;
	Global_2788035 = 0;
	__LIB_0__.func_199();
}

void func_134(var uParam0)//Position - 0x3E61
{
	MISC::SET_BIT(&Global_2788035, 2);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, -1);
		__LIB_1__.func_569(0, -1, 0);
	}
	else
	{
		func_125();
	}
	func_135(uParam0);
}

void func_135(var uParam0)//Position - 0x3E96
{
	int iVar0;
	int iVar1;
	Local_64.f_88 = { *uParam0 };
	Local_64.f_91 = { uParam0->f_3 };
	Local_64.f_94 = uParam0->f_6;
	Local_64.f_95 = uParam0->f_7;
	Local_65.f_22.f_4 = -1;
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (__LIB_0__.func_121(iVar0) && PED::IS_PED_IN_ANY_VEHICLE(iVar0, true))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
		{
			__LIB_1__.func_254(1);
			AUDIO::SET_VEHICLE_RADIO_ENABLED(iVar1, false);
		}
	}
	if (!__LIB_2__.func_245())
	{
		MISC::SET_BIT(&(Local_65.f_60), 4);
		__LIB_0__.func_802();
	}
	func_136();
}

void func_136()//Position - 0x3F1F
{
	if (!BitTest(Global_2788033, 0))
	{
		func_148(-1028390912, 1119092736, -1036779520, 1110704128, 1106247680, 1114636288);
	}
	if (!BitTest(Global_2788033, 1))
	{
		func_147(1058642330, 1101004800);
	}
	if (!BitTest(Global_2788033, 2))
	{
		func_146();
	}
	if (!BitTest(Global_2788033, 3))
	{
		__LIB_22__.func_175(1, 1, 0, 500);
	}
	if (!BitTest(Global_2788033, 4))
	{
		__LIB_15__.func_45(0);
	}
	if (!BitTest(Global_2788033, 5))
	{
		__LIB_15__.func_44(0);
	}
	if (!BitTest(Global_2788033, 6))
	{
		__LIB_15__.func_33(0);
	}
	if (!BitTest(Global_2788033, 7))
	{
		MISC::SET_BIT(&Global_2788033, 7);
		Global_2787947.f_24 = 0;
	}
	if (!BitTest(Global_2788033, 8))
	{
		func_140(0);
	}
	if (!BitTest(Global_2788033, 9))
	{
		__LIB_15__.func_337(0f, 0f, 0f);
	}
	if (!BitTest(Global_2788033, 10))
	{
		MISC::SET_BIT(&Global_2788033, 10);
		Global_2787947.f_74 = 0;
	}
	if (!BitTest(Global_2788033, 11))
	{
		__LIB_15__.func_41(0);
	}
	if (!BitTest(Global_2788033, 12))
	{
		__LIB_15__.func_32(1, 3, 3, 3);
	}
	Local_64 = { Global_2787947 };
	func_97(Global_2788033);
	func_107(0);
}

void func_140(char* sParam0)//Position - 0x40C2
{
	MISC::SET_BIT(&Global_2788033, 8);
	StringCopy(&(Global_2787947.f_67), sParam0, 16);
}

void func_146()//Position - 0x418F
{
	MISC::SET_BIT(&Global_2788033, 2);
	Global_2787947.f_8.f_1 = 0;
}

void func_147(int iParam0, int iParam1)//Position - 0x41A9
{
	MISC::SET_BIT(&Global_2788033, 1);
	Global_2787947.f_6.f_1 = iParam0;
	Global_2787947.f_6 = iParam1;
}

void func_148(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x41CC
{
	MISC::SET_BIT(&Global_2788033, 0);
	Global_2787947 = iParam0;
	Global_2787947.f_1 = iParam1;
	Global_2787947.f_2 = iParam2;
	Global_2787947.f_3 = iParam3;
	Global_2787947.f_4 = iParam4;
	Global_2787947.f_5 = iParam5;
}

