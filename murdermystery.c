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
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	float fLocal_47 = 0f;
	float fLocal_48 = 0f;
	float fLocal_49 = 0f;
	float fLocal_50 = 0f;
	struct<3> Local_51 = { 0, 0, 0 } ;
	struct<3> Local_52 = { 0, 0, 0 } ;
	struct<3> Local_53 = { 0, 0, 0 } ;
	float fLocal_54 = 0f;
	struct<3> Local_55 = { 0, 0, 0 } ;
	float fLocal_56 = 0f;
	struct<3> Local_57 = { 0, 0, 0 } ;
	struct<3> Local_58 = { 0, 0, 0 } ;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	char* sLocal_67 = NULL;
	char* sLocal_68 = NULL;
	int iLocal_69 = 0;
	struct<3> Local_70 = { 0, 0, 0 } ;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	char* sLocal_74 = NULL;
	char* sLocal_75 = NULL;
	char* sLocal_76 = NULL;
	char* sLocal_77 = NULL;
	var uLocal_78 = 0;
	struct<2> Local_79 = { 0, 5 } ;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 5;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
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
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_47 = (175f * 175f);
	fLocal_48 = (5f * 5f);
	fLocal_49 = (5f * 5f);
	fLocal_50 = (2f * 2f);
	Local_51 = { -1011.7365f, -480.254f, 39.0734f };
	Local_52 = { -1003.0779f, -477.962f, 49.1374f };
	Local_53 = { -1018.3756f, -483.9436f, 36.0964f };
	fLocal_54 = 114.7664f;
	Local_55 = { -1005.1911f, -478.2104f, 49.0262f };
	fLocal_56 = 80.6659f;
	Local_57 = { 1f, 1f, 2f };
	Local_58 = { -596.05f, 2088.56f, 130.59f };
	sLocal_67 = "FOUND_CLUE";
	sLocal_68 = "NOIR_FILTER_SOUNDS";
	iLocal_71 = 7;
	sLocal_74 = "missmurder";
	sLocal_75 = "idle";
	sLocal_76 = "MM_LETREAD" /* GXT: Press ~INPUT_SCRIPT_PAD_RIGHT~ to read the letter. */;
	sLocal_77 = "MM_LETCANC" /* GXT: Press ~INPUT_SCRIPT_PAD_RIGHT~ to stop reading. */;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(83))
	{
		func_90();
	}
	func_83(ScriptParam_79.f_1[0 /*3*/]);
	while (true)
	{
		func_82();
		if (func_77())
		{
			func_1();
		}
		else
		{
			func_90();
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x15D
{
	switch (iLocal_71)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			if (!func_76(iLocal_71))
			{
				if (((func_73() && !func_72()) && func_71()) && !__LIB_0__::func_2(0))
				{
					if (iLocal_73 != 0)
					{
						if (GRAPHICS::IS_TRACKED_POINT_VISIBLE(iLocal_73))
						{
							func_68(iLocal_71, 1, 0);
						}
					}
				}
			}
			break;
		case 4:
			if (__LIB_0__::func_121(iLocal_66))
			{
				PED::SET_PED_CAPSULE(iLocal_66, 0.75f);
			}
			if (!func_76(4))
			{
				if ((func_73() && func_71()) && !__LIB_0__::func_2(0))
				{
					func_68(4, 1, 0);
				}
			}
			break;
		case 5:
			if (func_63())
			{
				func_35();
			}
			if (((!func_76(5) && iLocal_61 == 4) && func_71()) && !__LIB_0__::func_2(0))
			{
				func_68(5, 1, 0);
			}
			break;
		case 6:
			if (!__LIB_39__::func_120(3))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -580.89136f, 2033.1201f, 130.51126f, -578.47833f, 2035.0287f, 127.561455f, 0.75f, false, true, 0))
				{
					func_33(3, 1);
				}
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -580.23047f, 2032.0541f, 130.29276f, -577.6669f, 2033.9175f, 127.51573f, 0.75f, false, true, 0))
			{
				if (__LIB_39__::func_120(3))
				{
					__LIB_14__::func_614(-595.17456f, 2085.7678f, 136.88127f, -601.57544f, 2106.1616f, 125.46188f, 20.5f, -602.8466f, 2115.5112f, 126.4209f, 128.0735f, 13.5f, 22.2f, 5.7f, 1, 0, 1, 1, 0);
					func_33(3, 0);
				}
			}
			if (!__LIB_39__::func_120(2))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -580.23047f, 2032.0541f, 130.29276f, -577.6669f, 2033.9175f, 127.51573f, 0.75f, false, true, 0) || CAM::IS_SCREEN_FADED_OUT())
				{
					ENTITY::CREATE_MODEL_HIDE(Local_58, 200f, joaat("prop_mineshaft_door"), false);
					func_33(2, 1);
				}
			}
			if (func_73() && !func_72())
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 54 /*INPUT_WEAPON_SPECIAL_TWO*/, true);
				if (func_22(6))
				{
					if ((!func_76(6) && func_71()) && !__LIB_0__::func_2(0))
					{
						__LIB_0__::func_712(134, 4, 1);
						func_68(6, 1, 0);
						func_33(1, 1);
					}
				}
				if (func_6())
				{
					if (!__LIB_0__::func_77(0))
					{
						if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 51 /*INPUT_CONTEXT*/))
						{
							__LIB_42__::func_482();
						}
						__LIB_0__::func_151("MM_TOGGLE" /* GXT: Press ~INPUT_CONTEXT~ to cycle Vintage filters. */, 10);
					}
				}
			}
			if (__LIB_39__::func_120(1))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -594.9976f, 2089.0046f, 130.34494f, -597.1125f, 2088.3645f, 133.30351f, 1f, false, true, 0))
				{
					__LIB_0__::func_151("MM_HELP" /* GXT: Return to Isaac's corpse or call him on your cellphone to cycle Vintage filters. */, 10000);
					func_33(1, 0);
				}
			}
			break;
	}
}

bool func_6()//Position - 0x54B
{
	return Global_113386.f_10049.f_133 == 127;
}

bool func_22(int iParam0)//Position - 0xA84
{
	int iVar0;
	int iVar1;
	iVar0 = iParam0;
	if (iVar0 == 0)
	{
		return 1;
	}
	iVar1 = MISC::GET_BITS_IN_RANGE(Global_113386.f_10049.f_133, 0, (iVar0 - 1));
	return iVar1 == (func_23(2, iVar0) - 1);
}

int func_23(int iParam0, int iParam1)//Position - 0xABD
{
	if (iParam1 == 0)
	{
		return 1;
	}
	return (iParam0 * func_23(iParam0, (iParam1 - 1)));
}

void func_33(int iParam0, bool bParam1)//Position - 0x14B6
{
	if (bParam1)
	{
		MISC::SET_BIT(&uLocal_78, iParam0);
	}
	else
	{
		MISC::CLEAR_BIT(&uLocal_78, iParam0);
	}
}

void func_35()//Position - 0x14E3
{
	int iVar0;
	switch (iLocal_60)
	{
		case 0:
			if (!MISC::GET_MISSION_FLAG())
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_51, Local_57, true, true, 0))
				{
					if (func_62())
					{
						iLocal_60 = 2;
						func_61(0, 800);
					}
				}
			}
			break;
		case 1:
			__LIB_0__::func_189();
			if (!CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_52, Local_57, true, true, 0))
				{
					__LIB_1__::func_33(0);
					iLocal_60 = 3;
					func_61(0, 800);
				}
				func_49();
				if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
				{
					if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true))
					{
						if (iVar0 != joaat("WEAPON_UNARMED"))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), false);
						}
					}
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 141 /*INPUT_MELEE_ATTACK_HEAVY*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 142 /*INPUT_MELEE_ATTACK_ALTERNATE*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 257 /*INPUT_ATTACK2*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 44 /*INPUT_COVER*/, true);
				}
			}
			break;
		case 2:
			__LIB_0__::func_189();
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				__LIB_15__::func_283(24, 0);
				__LIB_15__::func_889(PLAYER::PLAYER_PED_ID(), Local_55, fLocal_56);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
				func_43(1);
				__LIB_14__::func_614(-1023.43915f, -479.5592f, 35.81806f, -1014.3829f, -495.12393f, 40.107964f, 18.5f, -1024.0964f, -485.1923f, 35.9779f, 209.0203f, __LIB_13__::func_790(), 1, 0, 1, 1, 0);
				STREAMING::NEW_LOAD_SCENE_START_SPHERE(Local_55, 20f, 0);
				__LIB_10__::func_891(24, &iLocal_59);
				INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_59);
				iLocal_72 = (MISC::GET_GAME_TIMER() + 40000);
				while ((!STREAMING::IS_NEW_LOAD_SCENE_LOADED() || !INTERIOR::IS_INTERIOR_READY(iLocal_59)) && iLocal_72 > MISC::GET_GAME_TIMER())
				{
					SYSTEM::WAIT(0);
				}
				STREAMING::NEW_LOAD_SCENE_STOP();
				if (iLocal_72 <= MISC::GET_GAME_TIMER())
				{
					INTERIOR::UNPIN_INTERIOR(iLocal_59);
					__LIB_15__::func_889(PLAYER::PLAYER_PED_ID(), Local_53, fLocal_54);
					func_61(1, 800);
					iLocal_60 = 0;
				}
				else
				{
					func_61(1, 800);
					iLocal_60 = 1;
					func_38();
				}
			}
			break;
		case 3:
			__LIB_0__::func_189();
			__LIB_1__::func_33(0);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				__LIB_15__::func_889(PLAYER::PLAYER_PED_ID(), Local_53, fLocal_54);
				__LIB_15__::func_283(24, 1);
				INTERIOR::UNPIN_INTERIOR(iLocal_59);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				func_43(0);
				func_37();
				__LIB_14__::func_748(Local_53, 30f, 12, 5000, 0, 0);
				func_61(1, 800);
				iLocal_60 = 0;
			}
			break;
	}
}

void func_37()//Position - 0x1802
{
	if (MISC::IS_PC_VERSION())
	{
		if (__LIB_39__::func_120(0))
		{
			PAD::SHUTDOWN_PC_SCRIPTED_CONTROLS();
			func_33(0, 0);
		}
	}
}

void func_38()//Position - 0x1823
{
	if (MISC::IS_PC_VERSION())
	{
		if (!__LIB_39__::func_120(0))
		{
			PAD::INIT_PC_SCRIPTED_CONTROLS("MYSTERY LETTER CAM");
			func_33(0, 1);
		}
	}
}

void func_43(bool bParam0)//Position - 0x4CB8
{
	func_33(5, bParam0);
	CLOCK::PAUSE_CLOCK(bParam0);
}

void func_49()//Position - 0x4E17
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	Var0 = { -1007.013f, -478.36624f, 49.028175f };
	Var1 = { -1007.85004f, -476.95728f, 51.028072f };
	fVar2 = 1.75f;
	switch (iLocal_61)
	{
		case 0:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var0, Var1, fVar2, false, true, 0) && !__LIB_0__::func_77(0))
			{
				__LIB_0__::func_190(sLocal_76);
				iLocal_61++;
			}
			break;
		case 1:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var0, Var1, fVar2, false, true, 0) && !__LIB_0__::func_77(0))
			{
				if (!__LIB_39__::func_70(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LOOK_AT_COORD")))
				{
					TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), -1007.9945f, -476.8016f, 49.9117f, -1, 0, 2);
				}
				if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 51 /*INPUT_CONTEXT*/))
				{
					func_51(0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), -1007.3514f, -477.5197f, 49.0282f, 1f, -1, 0.5f, 0, 30.4025f);
					__LIB_0__::func_190(sLocal_77);
					HUD::DISPLAY_RADAR(false);
					CAM::SET_CAM_ACTIVE(iLocal_62, true);
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
					iLocal_61++;
				}
			}
			else
			{
				HUD::CLEAR_HELP(true);
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				iLocal_61 = (iLocal_61 - 1);
			}
			break;
		case 2:
			__LIB_1__::func_33(0);
			func_51(0);
			HUD::DISPLAY_RADAR(false);
			if (!__LIB_0__::func_1(sLocal_77))
			{
				__LIB_0__::func_190(sLocal_77);
			}
			if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 51 /*INPUT_CONTEXT*/))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
				{
					iLocal_72 = MISC::GET_GAME_TIMER() + 300;
					GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", false);
				}
				else
				{
					iLocal_72 = 0;
				}
				iLocal_61++;
			}
			break;
		case 3:
			__LIB_1__::func_33(0);
			if (iLocal_72 < MISC::GET_GAME_TIMER())
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				HUD::DISPLAY_RADAR(true);
				func_51(1);
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				CAM::SET_CAM_ACTIVE(iLocal_62, false);
				iLocal_61++;
			}
			break;
		case 4:
			iLocal_61 = 0;
			break;
	}
}

void func_51(bool bParam0)//Position - 0x5027
{
	func_33(6, !bParam0);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), bParam0, 0);
}

void func_61(bool bParam0, int iParam1)//Position - 0x51FB
{
	func_33(4, !bParam0);
	if (bParam0)
	{
		CAM::DO_SCREEN_FADE_IN(iParam1);
	}
	else
	{
		CAM::DO_SCREEN_FADE_OUT(iParam1);
	}
}

int func_62()//Position - 0x521F
{
	int iVar0;
	iVar0 = CLOCK::GET_CLOCK_HOURS();
	if (iVar0 >= 21 || iVar0 < 6)
	{
		return 1;
	}
	__LIB_0__::func_151("MM_SOLBUSY" /* GXT: Solomon's office is busy. Come back later. */, 5000);
	return 0;
}

int func_63()//Position - 0x5252
{
	if (iLocal_60 == 1)
	{
		return 1;
	}
	if (!func_71())
	{
		return 0;
	}
	if (!__LIB_0__::func_178(61))
	{
		return 0;
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 && iLocal_60 == 0)
	{
		return 0;
	}
	if (__LIB_0__::func_2(0))
	{
		return 0;
	}
	if (__LIB_3__::func_695())
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
	if (MISC::GET_RANDOM_EVENT_FLAG())
	{
		return 0;
	}
	if (Global_32106)
	{
		return 0;
	}
	return 1;
}

void func_68(int iParam0, bool bParam1, bool bParam2)//Position - 0x53A6
{
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_113386.f_10049.f_133), iParam0);
		if (!bParam2)
		{
			AUDIO::PLAY_SOUND_FRONTEND(iLocal_69, sLocal_67, sLocal_68, false);
		}
		__LIB_0__::func_210();
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_113386.f_10049.f_133), iParam0);
	}
}

bool func_71()//Position - 0x545D
{
	return ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == joaat("Player_Zero");
}

int func_72()//Position - 0x5473
{
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		return PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false);
	}
	return 0;
}

bool func_73()//Position - 0x5493
{
	return SYSTEM::VDIST2(func_75(iLocal_71), Local_70) < func_74(iLocal_71);
}

float func_74(int iParam0)//Position - 0x54B0
{
	switch (iParam0)
	{
		case 0:
			return fLocal_48;
			break;
		case 1:
			return fLocal_48;
			break;
		case 2:
			return fLocal_48;
			break;
		case 3:
			return fLocal_48;
			break;
		case 4:
			return fLocal_49;
			break;
		case 5:
			return fLocal_50;
			break;
		case 6:
			return 4f;
			break;
	}
	return 0f;
}

Vector3 func_75(int iParam0)//Position - 0x5521
{
	switch (iParam0)
	{
		case 0:
			return 1.8941f, 309.6565f, 111.0097f;
			break;
		case 1:
			return 190.1696f, -431.7692f, 42.1372f;
			break;
		case 2:
			return 283.3024f, 212.6587f, 104.5986f;
			break;
		case 3:
			return -425.1273f, 1064.8011f, 323.8097f;
			break;
		case 4:
			return -3160.9604f, 3005.6284f, -39.9701f;
			break;
		case 5:
			return -1008.1416f, -476.2818f, 49.9633f;
			break;
		case 6:
			return -544.11f, 1986.58f, 127.03f;
			break;
	}
	return 0f, 0f, 0f;
}

bool func_76(int iParam0)//Position - 0x55F0
{
	return BitTest(Global_113386.f_10049.f_133, iParam0);
}

int func_77()//Position - 0x5604
{
	switch (iLocal_71)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			return (!func_76(iLocal_71) && func_79());
		case 4:
			return func_79();
		case 5:
			return ((((func_22(iLocal_71) && func_79()) || iLocal_60 == 1) || iLocal_60 == 3) || iLocal_60 == 2);
		case 6:
			return (func_79() || (__LIB_39__::func_120(2) && func_78(Local_58)));
		default:
	}
	return 0;
}

bool func_78(struct<3> Param0)//Position - 0x56A7
{
	var uVar0;
	var uVar1;
	return GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Param0, &uVar0, &uVar1);
}

bool func_79()//Position - 0x56BB
{
	return SYSTEM::VDIST2(func_81(iLocal_71), Local_70) < func_80(iLocal_71);
}

float func_80(int iParam0)//Position - 0x56D8
{
	switch (iParam0)
	{
		case 0:
			return fLocal_47;
			break;
		case 1:
			return fLocal_47;
			break;
		case 2:
			return fLocal_47;
			break;
		case 3:
			return fLocal_47;
			break;
		case 4:
			return fLocal_47;
			break;
		case 5:
			return fLocal_47;
			break;
		case 6:
			return fLocal_47;
			break;
	}
	return 0f;
}

Vector3 func_81(int iParam0)//Position - 0x574A
{
	switch (iParam0)
	{
		case 0:
			return 1.8941f, 309.6565f, 111.0097f;
			break;
		case 1:
			return 190.1696f, -431.7692f, 42.1372f;
			break;
		case 2:
			return 283.3024f, 212.6587f, 104.5986f;
			break;
		case 3:
			return -425.1273f, 1064.8011f, 323.8097f;
			break;
		case 4:
			return -3174.901f, 3034.061f, -35.645f;
			break;
		case 5:
			return -1008.69f, -476.4341f, 49.9544f;
			break;
		case 6:
			return -544.11f, 1986.58f, 127.03f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_82()//Position - 0x5819
{
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		Local_70 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
	}
}

void func_83(struct<3> Param0)//Position - 0x5839
{
	int iVar0;
	int iVar1;
	if (!__LIB_0__::func_116())
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("murdermystery")) > 1)
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	iVar0 = 0;
	while (iVar0 < 7 && iLocal_71 == 7)
	{
		iVar1 = iVar0;
		if (func_88(Param0, func_81(iVar1), 1056964608))
		{
			iLocal_71 = iVar1;
		}
		iVar0++;
	}
	func_84();
}

void func_84()//Position - 0x589C
{
	switch (iLocal_71)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			__LIB_38__::func_577(&iLocal_73, func_75(iLocal_71), 0.2f);
			break;
		case 4:
			func_86(joaat("U_F_M_Drowned_01"));
			func_85(sLocal_74);
			iLocal_66 = PED::CREATE_PED(26, joaat("U_F_M_Drowned_01"), func_75(4), 184.5548f, true, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("U_F_M_Drowned_01"));
			TASK::TASK_PLAY_ANIM(iLocal_66, sLocal_74, sLocal_75, 1000f, -1000f, -1, 9, 0f, false, false, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_66, true);
			PED::SET_PED_KEEP_TASK(iLocal_66, true);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_66, true);
			AUDIO::STOP_PED_SPEAKING(iLocal_66, true);
			AUDIO::DISABLE_PED_PAIN_AUDIO(iLocal_66, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_66, 118, false);
			PED::SET_PED_CONFIG_FLAG(iLocal_66, 208, true);
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_66, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_66, joaat("PLAYER"));
			break;
		case 5:
			iLocal_63 = 731806707;
			OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_63, joaat("v_ilev_sol_off_door01"), -1002.147f, -478.064f, 50.117f, true, true, false);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_63, 1, true, false);
			iLocal_62 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), -1008.056f, -476.7573f, 50.2493f, -89.5003f, 0f, 38.7952f, 50f, false, 2);
			break;
		case 6:
			func_86(joaat("U_M_O_FilmNoir"));
			iLocal_64 = PED::CREATE_PED(26, joaat("U_M_O_FilmNoir"), func_75(6), 22.9631f, true, true);
			PED::SET_PED_PROP_INDEX(iLocal_64, 0, 0, 0, false);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("U_M_O_FilmNoir"));
			AUDIO::STOP_PED_SPEAKING(iLocal_64, true);
			AUDIO::DISABLE_PED_PAIN_AUDIO(iLocal_64, true);
			PED::EXPLODE_PED_HEAD(iLocal_64, joaat("WEAPON_SNIPERRIFLE"));
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_64, joaat("PLAYER"));
			iLocal_65 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_vintage_filmcan"), -543.71f, 1986.2f, 126.05f, true, true, false);
			break;
	}
}

void func_85(char* sParam0)//Position - 0x5A54
{
	STREAMING::REQUEST_ANIM_DICT(sParam0);
	while (!STREAMING::HAS_ANIM_DICT_LOADED(sParam0))
	{
		SYSTEM::WAIT(0);
	}
}

void func_86(int iParam0)//Position - 0x5A74
{
	STREAMING::REQUEST_MODEL(iParam0);
	while (!STREAMING::HAS_MODEL_LOADED(iParam0))
	{
		SYSTEM::WAIT(0);
	}
}

bool func_88(struct<3> Param0, struct<3> Param1, float fParam2)//Position - 0x5ABA
{
	return SYSTEM::VDIST(Param0, Param1) <= fParam2;
}

void func_90()//Position - 0x5B89
{
	func_91();
	func_37();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_91()//Position - 0x5B9D
{
	switch (iLocal_71)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			GRAPHICS::DESTROY_TRACKED_POINT(iLocal_73);
			iLocal_73 = 0;
			break;
		case 4:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_66))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_66);
			}
			STREAMING::REMOVE_ANIM_DICT(sLocal_74);
			break;
		case 5:
			if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_63))
			{
				OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_63, 0);
			}
			if (CAM::DOES_CAM_EXIST(iLocal_62))
			{
				CAM::DESTROY_CAM(iLocal_62, false);
			}
			if (__LIB_39__::func_120(4))
			{
				CAM::DO_SCREEN_FADE_IN(0);
			}
			if (__LIB_39__::func_120(5))
			{
				CLOCK::PAUSE_CLOCK(false);
			}
			if (__LIB_39__::func_120(6))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			}
			if (__LIB_0__::func_1(sLocal_76) || __LIB_0__::func_1(sLocal_77))
			{
				HUD::CLEAR_HELP(true);
			}
			break;
		case 6:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_64))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_64);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_65))
			{
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_65);
			}
			if (__LIB_39__::func_120(2))
			{
				ENTITY::REMOVE_MODEL_HIDE(Local_58, 200f, joaat("prop_mineshaft_door"), false);
			}
			break;
	}
}

